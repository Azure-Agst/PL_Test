# Plutonium Test

Nintendo Switch Homebrew to test the Plutonium library.

## Compile

Make sure you have a LibNX environment installed. If not, set it up by following the instructions [on Switchbrew](https://switchbrew.org/wiki/Setting_up_Development_Environment).

Install Plutonium's required libraried by running this command:
```
dkp-pacman -S switch-sdl2 switch-sdl2_ttf switch-sdl2_image switch-sdl2_gfx switch-sdl2_mixer switch-mesa switch-glad switch-glm switch-libdrm_nouveau switch-libwebp switch-libpng switch-freetype switch-bzip2 switch-libjpeg-turbo switch-opusfile switch-libopus
```

Then, clone recursively and make:
```
git clone --recurse-submodules https://github.com/Azure-Agst/PL_Test
make
```