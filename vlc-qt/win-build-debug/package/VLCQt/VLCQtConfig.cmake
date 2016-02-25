IF(CMAKE_VERSION VERSION_LESS 2.8.9)
    MESSAGE(FATAL_ERROR "VLC-Qt requires at least CMake version 2.8.9")
ENDIF()

IF(NOT VLCQt_FIND_COMPONENTS)
    SET(VLCQt_NOT_FOUND_MESSAGE "The VLC-Qt package requires at least one component")
    SET(VLCQt_FOUND False)
    RETURN()
ENDIF()

SET(_VLCQt_FIND_PARTS_REQUIRED)
IF(VLCQt_FIND_REQUIRED)
    SET(_VLCQt_FIND_PARTS_REQUIRED REQUIRED)
ENDIF()
SET(_VLCQt_FIND_PARTS_QUIET)
IF (VLCQt_FIND_QUIETLY)
    SET(_VLCQt_FIND_PARTS_QUIET QUIET)
ENDIF()

GET_FILENAME_COMPONENT(_VLCQt_install_prefix "C:/Users/gas/Documents/QtCameraControl/vlc-qt/config/.." ABSOLUTE)

SET(_VLCQt_NOTFOUND_MESSAGE)

FOREACH(module )
    FIND_PACKAGE(VLCQt
        
        
        PATHS "" NO_DEFAULT_PATH
    )
    IF (NOT VLCQt_FOUND)
        IF (VLCQt_FIND_REQUIRED_)
            SET(_VLCQt_NOTFOUND_MESSAGE "Failed to find VLC-Qt component \"\" config file at \"/VLCQt/VLCQtConfig.cmake\"\n")
        ELSEIF(NOT VLCQt_FIND_QUIETLY)
            message(WARNING "Failed to find VLC-Qt component \"\" config file at \"/VLCQt/VLCQtConfig.cmake\"")
        ENDIF()
    ENDIF()
ENDFOREACH()

IF (_VLCQt_NOTFOUND_MESSAGE)
    SET(VLCQt_NOT_FOUND_MESSAGE "")
    SET(VLCQt_FOUND False)
ENDIF()
