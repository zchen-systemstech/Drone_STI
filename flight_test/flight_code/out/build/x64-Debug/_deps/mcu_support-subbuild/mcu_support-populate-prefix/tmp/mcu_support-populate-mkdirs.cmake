# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-src")
  file(MAKE_DIRECTORY "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-src")
endif()
file(MAKE_DIRECTORY
  "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-build"
  "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-subbuild/mcu_support-populate-prefix"
  "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-subbuild/mcu_support-populate-prefix/tmp"
  "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-subbuild/mcu_support-populate-prefix/src/mcu_support-populate-stamp"
  "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-subbuild/mcu_support-populate-prefix/src"
  "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-subbuild/mcu_support-populate-prefix/src/mcu_support-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-subbuild/mcu_support-populate-prefix/src/mcu_support-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "H:/Documents2/Projects/lager_spaaro-main/flight_code/out/build/x64-Debug/_deps/mcu_support-subbuild/mcu_support-populate-prefix/src/mcu_support-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
