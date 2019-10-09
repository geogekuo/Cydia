function(DumpVariables)
  set(options MARK HCF)
  set(oneValueArgs)
  set(multiValueArgs VARS)
  cmake_parse_arguments(DumpVariables
                        "${options}"
                        "${oneValueArgs}"
                        "${multiValueArgs}"
                        ${ARGN})

  get_cmake_property(_CMAKE_VARIABLES VARIABLES)
  set(MARK ${DumpVariables_MARK})
  set(HCF ${DumpVariables_HCF})
  if(DumpVariables_VARS)
    set(VARS "${DumpVariables_VARS}")
  else()
    set(VARS ${_CMAKE_VARIABLES})
  endif()

  if(MARK)
    message("")
    message("#####################")
    message("DumpVariables - BEGIN")
  endif()

  foreach(_CMAKE_VARIABLE ${_CMAKE_VARIABLES})
    if(_CMAKE_VARIABLE IN_LIST VARS)
      message(STATUS "${_CMAKE_VARIABLE}=${${_CMAKE_VARIABLE}}")
    endif()
  endforeach(_CMAKE_VARIABLE)

  if(MARK)
    message("DumpVariables - END")
    message("#####################")
    message("")
  endif()

  if(HCF)
    message(FATAL_ERROR "HCF - DumpVariables")
  endif()
endfunction(DumpVariables)
