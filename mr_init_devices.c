#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    // framebuffer device
    "/sys/class/graphics/fb0",

    // thermal device
    "/sys/devices/virtual/thermal*",

    // charger devices
    "/sys/devices/qpnp-regulator-f8561800/regulator*",
    "/sys/devices/qpnp-charger-f8560800/regulator*",

    // storage devices
    "/sys/dev/block*",
    "/sys/block/mmcblk0",
    "/sys/devices/msm_sdcc.1*",
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/devices/gpio_keys.83/input/input4",
    "/sys/devices/gpio_keys.83/input/input4/event4",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/virtual/input/input0",
    "/sys/devices/virtual/input/input0/event0",
    "/sys/devices/virtual/input/input1",
    "/sys/devices/virtual/input/input1/event1",
    "/sys/devices/virtual/input/input2",
    "/sys/devices/virtual/input/input2/event2",
    "/sys/devices/virtual/input/input3",
    "/sys/devices/virtual/input/input3/event3",
    "/sys/devices/virtual/input/input6",
    "/sys/devices/virtual/input/input6/event6",

    // for adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/usb",

    // USB drive is in here
    "/sys/devices/platform/xhci-hcd*",

    // exfat requires fuse device
    "/sys/devices/virtual/misc/fuse",

    NULL
};
