# MCU name
MCU = atmega32u4

#
# LUFA specific
#
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8
BOOTLOADER = caterina

# Build Options
#   comment out to disable the options.
#
SPLIT_KEYBOARD   = yes
SERIAL_DRIVER = bitbang

MOUSEKEY_ENABLE  = no # Mouse keys(+4700)
EXTRAKEY_ENABLE  = yes # Audio control and System control(+450)
CONSOLE_ENABLE   = no  # Console for debug(+400)
COMMAND_ENABLE   = no # Commands for debug and configuration
NKRO_ENABLE      = no # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
UNICODE_ENABLE   = no # Unicode

DEBOUNCE_TYPE    = asym_eager_defer_pk
