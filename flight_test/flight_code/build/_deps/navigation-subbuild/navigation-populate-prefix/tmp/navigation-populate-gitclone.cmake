
if(NOT "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-subbuild/navigation-populate-prefix/src/navigation-populate-stamp/navigation-populate-gitinfo.txt" IS_NEWER_THAN "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-subbuild/navigation-populate-prefix/src/navigation-populate-stamp/navigation-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-subbuild/navigation-populate-prefix/src/navigation-populate-stamp/navigation-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/TL-4319/navigation.git" "navigation-src"
    WORKING_DIRECTORY "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/TL-4319/navigation.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout f870deb4303e73fa4c32b54126e7402174ea668d --
  WORKING_DIRECTORY "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'f870deb4303e73fa4c32b54126e7402174ea668d'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-src"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-subbuild/navigation-populate-prefix/src/navigation-populate-stamp/navigation-populate-gitinfo.txt"
    "/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-subbuild/navigation-populate-prefix/src/navigation-populate-stamp/navigation-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/mnt/c/users/zchen/Projects/DroneSTI/Mini/flight_code/build/_deps/navigation-subbuild/navigation-populate-prefix/src/navigation-populate-stamp/navigation-populate-gitclone-lastrun.txt'")
endif()

