# dcat - cross platform cat
a cat program util written in c that compiles with gcc, mingw and clang


## Compile in linux
```bash
gcc -o dcat dcat.c
```

## Compile in windows
```bash
cl dcat.c
```

## Compile in linux for windows (NixOS)
for this use the provided shell.nix file to compile with minGW
**if you have a NixOS install you will need to make sure you have Multiplatform support in your `configuration.nx` file.**

```
  # Multi-platform Support
  boot.binfmt.emulatedSystems = [
    "x86_64-windows"
  ];
```

**then you can got in to a nix shell, and build the `dcat.exe`**
```bash
nix-shell
x86_64-w64-mingw32-gcc -o dcat.exe dcat.c
./dcat.exe
```
