/** Copyright (C) 2008-2013 Josh Ventura, Robert B. Colton
*** Copyright (C) 2018 Robert B. Colton
***
*** This file is a part of the ENIGMA Development Environment.
***
*** ENIGMA is free software: you can redistribute it and/or modify it under the
*** terms of the GNU General Public License as published by the Free Software
*** Foundation, version 3 of the license or any later version.
***
*** This application and its source code is distributed AS-IS, WITHOUT ANY
*** WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
*** FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
*** details.
***
*** You should have received a copy of the GNU General Public License along
*** with this code. If not, see <http://www.gnu.org/licenses/>
**/

#ifndef ENIGMA_AS_UTIL_H
#define ENIGMA_AS_UTIL_H

#include "Widget_Systems/widgets_mandatory.h"
#include "strings_util.h"

#include <cstdio>
#include <string>

using std::string;

namespace enigma {

inline char* read_all_bytes(std::string fname, size_t &flen) {
  #if defined(_WIN32)
  std::wstring wfname = strings_util::widen(fname);
  FILE *afile = _wfopen(wfname.c_str(), L"rb");
  #else
  FILE *afile = fopen(fname.c_str(), "rb");
  #endif
  if (!afile)
    return NULL;

  // Buffer sound
  fseek(afile,0,SEEK_END);
  flen = ftell(afile);
  char *fdata = new char[flen];
  fseek(afile,0,SEEK_SET);
  if (fread(fdata,1,flen,afile) != flen)
    DEBUG_MESSAGE("WARNING: Resource stream cut short while loading sound data", MESSAGE_TYPE::M_ERROR);
  fclose(afile);

  return fdata;
}

} // namespace enigma

#endif // ENIGMA_AS_UTIL_H
