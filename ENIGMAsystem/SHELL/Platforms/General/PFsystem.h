/** Copyright (C) 2014 Robert B. Colton
*** Copyright (C) 2013 forthevin
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

#ifndef ENIGMA_PLATFORM_SYSTEM_H
#define ENIGMA_PLATFORM_SYSTEM_H

#include <string>
using std::string;

namespace enigma_user {

string os_get_config();
int os_get_info();
string os_get_language();
string os_get_region();
bool os_is_network_connected();
bool os_is_paused();
void os_lock_orientation(bool enable);
void os_powersave_enable(bool enable);

}

#endif //ENIGMA_PLATFORM_SYSTEM_H
