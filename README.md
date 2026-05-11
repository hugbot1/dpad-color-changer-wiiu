# Dpad Color Changer Wii U
A Wii U homebrew app to change the color of the DRC and TV screen to red, green, or blue.
You can use this app for a green screen in video editing software.

## Meant for Aroma ONLY

## Installation
Download the latest release from the [Releases page](https://github.com/hugbot1/dpad-color-changer-wiiu/releases/) by clicking on `DpadColorChanger.wuhb`.<br/>
Place the `DpadColorChanger.wuhb` file to the /wiiu/apps/ folder your SD card.

## Building
For building you need:
- [devkitPro](https://devkitpro.org/wiki/Getting_Started)
- [wut](https://github.com/devkitPro/wut) - Installing devkitPro wiiu-dev should give you this
- [wut-tools](https://github.com/devkitPro/wut-tools/tree/master) - Installing devkitPro wiiu-dev should give you this (if not, install it with the instructions in the link)

Then run:
```bash
make
```

## Converting to WUHB Format (Required)
**wuhbtool** should come in wut-tools. You can use it via the command line to convert the built `.rpx` to WUHB format:

```bash
wuhbtool YOURBULTRPXFILE.rpx DpadColorChanger.wuhb \
  --name="Dpad Color Changer" \
  --short-name="Dpad Color Changer" \
  --icon=images/logo.png \
  --tv-image=images/tv.png \
  --drc-image=images/drc.png
```
