# MCU name
MCU = STM32F072

CONSOLE_ENABLE = yes	# Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
CUSTOM_MATRIX = no # Custom matrix file
ENCODER_ENABLE = yes
RGBLIGHT_ENABLE = yes
WS2812_DRIVER = spi

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
