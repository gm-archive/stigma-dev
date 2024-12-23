/*

 MIT License
 
 Copyright © 2022 Samuel Venable
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 
*/

#include <string>

#include "Platforms/General/PFmain.h"
#include "apifilesystem/ghc/filesystem.hpp"

namespace enigma_user {

std::string get_working_directory() {
  return ngs::fs::directory_get_current_working();
}

std::string get_program_filename() { 
  return ngs::fs::executable_get_filename(); 
}

std::string get_program_directory() { 
  return ngs::fs::executable_get_directory(); 
}

std::string get_program_pathname() { 
  return ngs::fs::executable_get_pathname(); 
}

bool set_working_directory(std::string dname) {
  return ngs::fs::directory_set_current_working(dname);
}

} // namespace enigma_user
