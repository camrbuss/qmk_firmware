Keyboard still in development. Check back later for details

GH Username: camrbuss

### Building Firmware:

``` s
cd $QMK_HOME
make kobuss/camro:default
```

### Entering DFU Mode:

1. Plug in device
2. Press and hold `RESET`
3. Press and let go of `BOOT`
4. Let go of `RESET`

### Flashing Firmware:

``` s
cd $QMK_HOME
dfu-util -a 0 -s 0x08000000:leave -D kobuss_camro_default.bin
```