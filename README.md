# Dpad Color Changer Wii U
A Wii U hombrew app to change the color of the DRC and TV to red, green, and blue.

You can use this app for a green screen in editing software

## Building
For building you need:
- [devkitPro](https://devkitpro.org/wiki/Getting_Started)
- [wut](https://github.com/devkitPro/wut) - Installing devkitPro wiiu-dev should give you this
- [wut-tools](https://github.com/devkitPro/wut-tools/tree/master) - Installing devkitPro wiiu-dev should give you this (i think? if not just install it with the instructions in the link)

## OPTIONAL (For coverting to WUHB format, If your on linux doing this ignore and use command line with wuhbtool which comes with wut-tools)
- [WUHB-Packager](https://github.com/Nightkingale/WUHB-Packager) - You can use the command line instead (you dont need this if so) - this app needs wuhbtool which comes with wut-tools (so as the command line) - OPTIONAL

then run `make`

## Coverting to WUHB format - OPTIONAL

You can now use the WUHB-Packager (or the command line with wuhbtool) to convert the rpx to a wuhb file using the images provided in the "images" folder

Data: (you can put this into WUHB-Packager or via command line with wuhbtool)
.wuhb name: DpadColorChanger
long name: Dpad Color Changer
short name: Dpad Color Changer
rpx file: the one you built via the make command
tv image: /images/tv.png
logo: /images/logo.png
drc image: /images/drc.png
