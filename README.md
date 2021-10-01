# DRC Region Free Plugin

This plugin allows you to use a gamepad from any region.

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
