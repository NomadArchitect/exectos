# XT Boot Loader
PROJECT(XTLDR)

# Build XTLDR modules
add_subdirectory(modules)

# Specify include directories
include_directories(
    ${EXECTOS_SOURCE_DIR}/sdk/xtdk
    ${XTLDR_SOURCE_DIR}/includes)

# Specify list of library source code files
list(APPEND LIBXTLDR_SOURCE
    ${XTLDR_SOURCE_DIR}/library/modproto.c)

# Specify list of source code files
list(APPEND XTLDR_SOURCE
    ${XTLDR_SOURCE_DIR}/arch/${ARCH}/memory.c
    ${XTLDR_SOURCE_DIR}/config.c
    ${XTLDR_SOURCE_DIR}/console.c
    ${XTLDR_SOURCE_DIR}/debug.c
    ${XTLDR_SOURCE_DIR}/efiutils.c
    ${XTLDR_SOURCE_DIR}/globals.c
    ${XTLDR_SOURCE_DIR}/hardware.c
    ${XTLDR_SOURCE_DIR}/memory.c
    ${XTLDR_SOURCE_DIR}/protocol.c
    ${XTLDR_SOURCE_DIR}/shell.c
    ${XTLDR_SOURCE_DIR}/textui.c
    ${XTLDR_SOURCE_DIR}/volume.c
    ${XTLDR_SOURCE_DIR}/xtldr.c)

# Link static XTLDR library
add_library(libxtldr ${LIBXTLDR_SOURCE})

# Link bootloader executable
add_executable(xtldr ${XTLDR_SOURCE})

# Add linker libraries
target_link_libraries(xtldr libxtos)

# Set proper binary name and install target
if(ARCH STREQUAL "i686")
	set(BINARY_NAME "bootia32")
elseif(ARCH STREQUAL "amd64")
	set(BINARY_NAME "bootx64")
endif()
set_target_properties(xtldr PROPERTIES OUTPUT_NAME ${BINARY_NAME} SUFFIX .efi)
set_install_target(xtldr efi/boot)

# Set loader entrypoint and subsystem
set_entrypoint(xtldr "BlStartXtLoader")
set_linker_map(xtldr TRUE)
set_subsystem(xtldr efi_application)
