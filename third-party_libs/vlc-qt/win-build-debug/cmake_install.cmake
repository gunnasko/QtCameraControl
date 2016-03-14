# Install script for directory: C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/libvlc.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/libvlccore.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//libvlc.dll"
    "C:/Program Files/VideoLAN/VLC//libvlccore.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/libgcc_s_seh-1.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin" TYPE FILE FILES "C:/Program Files/VideoLAN/VLC//libgcc_s_seh-1.dll")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libaccess_bd_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libaccess_mms_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libaccess_realrtsp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libattachment_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libcdda_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libdshow_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libdtv_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libdvdnav_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libdvdread_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libfilesystem_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libftp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libhttp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libidummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libimem_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/liblibbluray_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/liblive555_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/librar_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/librtp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libscreen_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libsdp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libsftp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libshm_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libsmb_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libtcp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libtimecode_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libudp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libvcd_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libvdr_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access/libzip_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/access/libaccess_bd_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libaccess_mms_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libaccess_realrtsp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libattachment_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libcdda_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libdshow_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libdtv_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libdvdnav_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libdvdread_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libfilesystem_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libftp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libhttp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libidummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libimem_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/liblibbluray_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/liblive555_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/librar_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/librtp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libscreen_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libsdp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libsftp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libshm_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libsmb_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libtcp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libtimecode_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libudp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libvcd_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libvdr_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access/libzip_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access_output/libaccess_output_dummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access_output/libaccess_output_file_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access_output/libaccess_output_http_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access_output/libaccess_output_livehttp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access_output/libaccess_output_shout_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access_output/libaccess_output_udp_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/access_output" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/access_output/libaccess_output_dummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access_output/libaccess_output_file_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access_output/libaccess_output_http_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access_output/libaccess_output_livehttp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access_output/libaccess_output_shout_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/access_output/libaccess_output_udp_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/liba52tofloat32_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/liba52tospdif_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libaudiobargraph_a_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libaudio_format_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libchorus_flanger_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libcompressor_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libdolby_surround_decoder_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libdtstofloat32_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libdtstospdif_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libequalizer_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libgain_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libheadphone_channel_mixer_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libkaraoke_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libmono_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libmpgatofixed32_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libnormvol_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libparam_eq_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libremap_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libsamplerate_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libscaletempo_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libsimple_channel_mixer_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libspatializer_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libspeex_resampler_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libstereo_widen_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libtrivial_channel_mixer_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter/libugly_resampler_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_filter" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/liba52tofloat32_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/liba52tospdif_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libaudiobargraph_a_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libaudio_format_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libchorus_flanger_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libcompressor_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libdolby_surround_decoder_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libdtstofloat32_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libdtstospdif_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libequalizer_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libgain_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libheadphone_channel_mixer_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libkaraoke_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libmono_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libmpgatofixed32_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libnormvol_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libparam_eq_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libremap_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libsamplerate_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libscaletempo_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libsimple_channel_mixer_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libspatializer_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libspeex_resampler_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libstereo_widen_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libtrivial_channel_mixer_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_filter/libugly_resampler_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_mixer/libfloat_mixer_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_mixer/libinteger_mixer_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_mixer" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/audio_mixer/libfloat_mixer_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_mixer/libinteger_mixer_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output/libadummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output/libafile_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output/libamem_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output/libdirectsound_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output/libmmdevice_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output/libwasapi_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output/libwaveout_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/audio_output" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/audio_output/libadummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_output/libafile_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_output/libamem_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_output/libdirectsound_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_output/libmmdevice_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_output/libwasapi_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/audio_output/libwaveout_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/liba52_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libadpcm_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libaes3_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libaraw_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libavcodec_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libcc_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libcdg_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libcrystalhd_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libcvdsub_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libddummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libdmo_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libdts_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libdvbsub_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libdxva2_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libedummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libfaad_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libflac_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libg711_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libjpeg_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libkate_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/liblibass_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/liblibmpeg2_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/liblpcm_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libmft_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libmpeg_audio_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libopus_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libpng_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libquicktime_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/librawvideo_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libschroedinger_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libscte27_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libspeex_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libspudec_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libstl_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libsubsdec_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libsubstx3g_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libsubsusf_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libsvcdsub_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libt140_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libtheora_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libtwolame_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libuleaddvaudio_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libvorbis_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libvpx_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libx264_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libx265_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec/libzvbi_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/codec" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/codec/liba52_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libadpcm_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libaes3_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libaraw_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libavcodec_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libcc_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libcdg_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libcrystalhd_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libcvdsub_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libddummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libdmo_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libdts_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libdvbsub_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libdxva2_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libedummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libfaad_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libflac_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libg711_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libjpeg_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libkate_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/liblibass_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/liblibmpeg2_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/liblpcm_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libmft_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libmpeg_audio_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libopus_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libpng_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libquicktime_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/librawvideo_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libschroedinger_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libscte27_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libspeex_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libspudec_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libstl_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libsubsdec_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libsubstx3g_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libsubsusf_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libsvcdsub_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libt140_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libtheora_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libtwolame_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libuleaddvaudio_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libvorbis_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libvpx_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libx264_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libx265_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/codec/libzvbi_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libaiff_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libasf_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libau_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libavi_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libcaf_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libdemuxdump_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libdemux_cdg_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libdemux_stl_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libdiracsys_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libes_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libflacsys_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libgme_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libh264_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libhevc_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libimage_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libmjpeg_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libmkv_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libmod_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libmp4_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libmpc_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libmpgv_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libnsc_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libnsv_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libnuv_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libogg_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libplaylist_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libps_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libpva_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/librawaud_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/librawdv_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/librawvid_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libreal_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libsid_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libsmf_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libsubtitle_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libts_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libtta_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libty_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libvc1_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libvobsub_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libvoc_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libwav_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux/libxa_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/demux" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libaiff_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libasf_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libau_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libavi_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libcaf_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libdemuxdump_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libdemux_cdg_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libdemux_stl_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libdiracsys_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libes_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libflacsys_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libgme_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libh264_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libhevc_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libimage_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libmjpeg_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libmkv_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libmod_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libmp4_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libmpc_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libmpgv_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libnsc_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libnsv_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libnuv_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libogg_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libplaylist_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libps_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libpva_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/librawaud_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/librawdv_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/librawvid_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libreal_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libsid_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libsmf_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libsubtitle_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libts_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libtta_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libty_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libvc1_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libvobsub_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libvoc_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libwav_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/demux/libxa_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/meta_engine/libfolder_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/meta_engine/libtaglib_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/meta_engine" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/meta_engine/libfolder_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/meta_engine/libtaglib_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libaddonsfsstorage_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libaddonsvorepository_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libaudioscrobbler_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libexport_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libfingerprinter_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libgnutls_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/liblogger_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libstats_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libvod_rtsp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc/libxml_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/misc" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libaddonsfsstorage_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libaddonsvorepository_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libaudioscrobbler_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libexport_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libfingerprinter_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libgnutls_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/liblogger_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libstats_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libvod_rtsp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/misc/libxml_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_asf_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_avi_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_dummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_mp4_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_mpjpeg_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_ogg_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_ps_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_ts_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux/libmux_wav_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/mux" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_asf_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_avi_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_dummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_mp4_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_mpjpeg_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_ogg_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_ps_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_ts_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/mux/libmux_wav_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_copy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_dirac_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_flac_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_h264_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_hevc_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_mlp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_mpeg4audio_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_mpeg4video_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_mpegvideo_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer/libpacketizer_vc1_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/packetizer" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_copy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_dirac_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_flac_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_h264_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_hevc_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_mlp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_mpeg4audio_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_mpeg4video_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_mpegvideo_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/packetizer/libpacketizer_vc1_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/services_discovery/libmediadirs_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/services_discovery/libpodcast_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/services_discovery/libsap_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/services_discovery/libupnp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/services_discovery/libwindrive_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/services_discovery" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/services_discovery/libmediadirs_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/services_discovery/libpodcast_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/services_discovery/libsap_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/services_discovery/libupnp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/services_discovery/libwindrive_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_filter/libdash_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_filter/libhttplive_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_filter/librecord_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_filter/libsmooth_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_filter" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/stream_filter/libdash_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_filter/libhttplive_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_filter/librecord_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_filter/libsmooth_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_autodel_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_bridge_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_chromaprint_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_delay_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_description_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_display_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_dummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_duplicate_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_es_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_gather_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_langfromtelx_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_mosaic_bridge_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_raop_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_record_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_rtp_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_setid_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_smem_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_standard_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_stats_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out/libstream_out_transcode_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/stream_out" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_autodel_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_bridge_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_chromaprint_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_delay_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_description_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_display_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_dummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_duplicate_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_es_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_gather_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_langfromtelx_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_mosaic_bridge_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_raop_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_record_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_rtp_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_setid_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_smem_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_standard_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_stats_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/stream_out/libstream_out_transcode_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/text_renderer/libfreetype_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/text_renderer/libtdummy_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/text_renderer" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/text_renderer/libfreetype_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/text_renderer/libtdummy_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libchain_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libgrey_yuv_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi420_rgb_mmx_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi420_rgb_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi420_rgb_sse2_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi420_yuy2_mmx_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi420_yuy2_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi420_yuy2_sse2_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi422_i420_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi422_yuy2_mmx_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi422_yuy2_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libi422_yuy2_sse2_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/librv32_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libswscale_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libyuy2_i420_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma/libyuy2_i422_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_chroma" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libchain_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libgrey_yuv_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi420_rgb_mmx_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi420_rgb_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi420_rgb_sse2_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi420_yuy2_mmx_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi420_yuy2_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi420_yuy2_sse2_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi422_i420_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi422_yuy2_mmx_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi422_yuy2_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libi422_yuy2_sse2_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/librv32_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libswscale_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libyuy2_i420_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_chroma/libyuy2_i422_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libadjust_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libalphamask_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libanaglyph_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libantiflicker_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libatmo_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libaudiobargraph_v_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libball_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libblendbench_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libblend_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libbluescreen_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libcanvas_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libcolorthres_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libcroppadd_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libdeinterlace_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/liberase_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libextract_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libfreeze_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libgaussianblur_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libgradfun_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libgradient_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libgrain_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libhqdn3d_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libinvert_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/liblogo_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libmagnify_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libmarq_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libmirror_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libmosaic_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libmotionblur_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libmotiondetect_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/liboldmovie_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libposterize_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libpostproc_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libpsychedelic_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libpuzzle_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libremoteosd_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libripple_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/librotate_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/librss_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libscale_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libscene_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libsepia_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libsharpen_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libsubsdelay_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libtransform_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libvhs_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libwave_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter/libyuvp_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_filter" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libadjust_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libalphamask_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libanaglyph_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libantiflicker_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libatmo_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libaudiobargraph_v_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libball_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libblendbench_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libblend_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libbluescreen_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libcanvas_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libcolorthres_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libcroppadd_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libdeinterlace_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/liberase_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libextract_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libfreeze_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libgaussianblur_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libgradfun_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libgradient_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libgrain_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libhqdn3d_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libinvert_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/liblogo_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libmagnify_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libmarq_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libmirror_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libmosaic_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libmotionblur_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libmotiondetect_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/liboldmovie_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libposterize_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libpostproc_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libpsychedelic_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libpuzzle_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libremoteosd_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libripple_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/librotate_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/librss_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libscale_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libscene_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libsepia_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libsharpen_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libsubsdelay_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libtransform_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libvhs_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libwave_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_filter/libyuvp_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libcaca_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libdirect2d_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libdirect3d_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libdirectdraw_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libdrawable_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libglwin32_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libgl_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libvdummy_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libvmem_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libwingdi_plugin.dll;C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output/libyuv_plugin.dll")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install/bin/plugins/video_output" TYPE FILE FILES
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libcaca_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libdirect2d_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libdirect3d_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libdirectdraw_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libdrawable_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libglwin32_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libgl_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libvdummy_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libvmem_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libwingdi_plugin.dll"
    "C:/Program Files/VideoLAN/VLC//plugins/video_output/libyuv_plugin.dll"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQt" TYPE FILE FILES
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/package/VLCQtConfig.cmake"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/package/VLCQt/VLCQtConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore/VLCQtCoreTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore/VLCQtCoreTargets.cmake"
         "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtCore/VLCQtCoreTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore/VLCQtCoreTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore/VLCQtCoreTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtCore/VLCQtCoreTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtCore/VLCQtCoreTargets-debug.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtCore/VLCQtCoreTargets-minsizerel.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtCore/VLCQtCoreTargets-relwithdebinfo.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtCore/VLCQtCoreTargets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtCore" TYPE FILE FILES
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/package/VLCQtCoreConfig.cmake"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/package/VLCQtCore/VLCQtCoreConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets.cmake"
         "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets-debug.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets-minsizerel.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets-relwithdebinfo.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtWidgets/VLCQtWidgetsTargets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtWidgets" TYPE FILE FILES
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/package/VLCQtWidgetsConfig.cmake"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/package/VLCQtWidgets/VLCQtWidgetsConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml/VLCQtQmlTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml/VLCQtQmlTargets.cmake"
         "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtQml/VLCQtQmlTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml/VLCQtQmlTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml/VLCQtQmlTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtQml/VLCQtQmlTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtQml/VLCQtQmlTargets-debug.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtQml/VLCQtQmlTargets-minsizerel.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtQml/VLCQtQmlTargets-relwithdebinfo.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml" TYPE FILE FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/CMakeFiles/Export/lib/cmake/VLCQtQml/VLCQtQmlTargets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/VLCQtQml" TYPE FILE FILES
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/package/VLCQtQmlConfig.cmake"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/package/VLCQtQml/VLCQtQmlConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/cmake_install.cmake")
  include("C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/docs/cmake_install.cmake")
  include("C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/tests/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
