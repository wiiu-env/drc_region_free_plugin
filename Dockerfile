FROM ghcr.io/wiiu-env/devkitppc:20240423

COPY --from=ghcr.io/wiiu-env/wiiupluginsystem:20240425 /artifacts $DEVKITPRO

WORKDIR project
