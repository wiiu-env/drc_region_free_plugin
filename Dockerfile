FROM ghcr.io/wiiu-env/devkitppc:20220806

COPY --from=ghcr.io/wiiu-env/wiiupluginsystem:20220904 /artifacts $DEVKITPRO

WORKDIR project