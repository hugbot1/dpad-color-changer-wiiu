# Dpad Color Changer Wii U
A Wii U homebrew app to change the color of the DRC and TV screen to red, green, or blue.
You can use this app for a green screen in video editing software.

## Building
For building you need:
- [devkitPro](https://devkitpro.org/wiki/Getting_Started)
- [wut](https://github.com/devkitPro/wut) - Installing devkitPro wiiu-dev should give you this
- [wut-tools](https://github.com/devkitPro/wut-tools/tree/master) - Installing devkitPro wiiu-dev should give you this (if not, install it with the instructions in the link)

Then run:
```bash
make
```

## Converting to WUHB Format (Optional)
**wuhbtool** should come in wut-tools. You can use it via the command line to convert the built `.rpx` to WUHB format:

```bash
wuhbtool YOURBUILTRPX.rpx DpadColorChanger.wuhb \
  --name "DpadColorChanger" \
  --long-name "Dpad Color Changer" \
  --short-name "Dpad Color Changer" \
  --tv-image /images/tv.png \
  --logo /images/logo.png \
  --drc-image /images/drc.png
```

## Both RPX and WUHB files are ment for Aroma ONLY
