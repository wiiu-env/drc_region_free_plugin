[![CI-Release](https://github.com/wiiu-env/drc_region_free_plugin/actions/workflows/ci.yml/badge.svg)](https://github.com/wiiu-env/drc_region_free_plugin/actions/workflows/ci.yml)

# DRC Region Free Plugin

This plugin allows you to use a gamepad from any region.

## Usage
(`[ENVIRONMENT]` is a placeholder for the actual environment name.)

1. Copy the file `drc_region_free.wps` into `sd:/wiiu/environments/[ENVIRONMENT]/plugins`.  
2. Requires the [WiiUPluginLoaderBackend](https://github.com/wiiu-env/WiiUPluginLoaderBackend) in `sd:/wiiu/environments/[ENVIRONMENT]/modules`.

## Building using the Dockerfile

It's possible to use a docker image for building. This way you don't need anything installed on your host system.

```
# Build docker image (only needed once)
docker build . -t drc_region_free-builder

# make 
docker run -it --rm -v ${PWD}:/project drc_region_free-builder make

# make clean
docker run -it --rm -v ${PWD}:/project drc_region_free-builder make clean
```

## Format the code via docker

`docker run --rm -v ${PWD}:/src ghcr.io/wiiu-env/clang-format:13.0.0-2 -r ./src -i`