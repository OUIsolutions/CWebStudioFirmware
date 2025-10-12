## Build Instructions

### Build Requirements 
#### Darwin 
For Build the project you must have [Darwin](https://github.com/OUIsolutions/Darwin) installed on version 0.2.1
if you are on linux you can install darwin with:

```bash
curl -L https://github.com/OUIsolutions/Darwin/releases/download/0.2.1/darwin.c -o darwin.c &&
gcc darwin.c -o darwin.out &&
sudo mv darwin.out /usr/bin/darwin
darwin install
```

## Obsolete
### Local Build 
make a local build to test with the following command it will create the **CWebStudioFirmware** file, you can set the compiler here [build/config.lua](/build/config.lua) 
```bash
darwin run_blueprint build/ --mode folder local_build 
```

### Full Build from Docker or Podman
You must have podman or docker installed on your machine to build in these way, you can set what you want to use on the [build/config.lua](/build/config.lua) file.

if you want to make a full build to all platforms you can use the following command, it will create the following files:
```bash
darwin run_blueprint --target amalgamation zip
```

Output files:
- release/CWebStudioFirmware.c
- release/CWebStudioFirmware.zip

### Build Configurations
All build configurations are in the **build/config.lua** file.
the default its: 
```lua
PROJECT_NAME = "CWebStudioFirmware"
CONTANIZER   = "podman"
VERSION      = "0.2.2"
LICENSE      = "MIT"
URL          = "https://github.com/OUIsolutions/CWebStudioFirmware"
DESCRIPITION = "."
FULLNAME     = "OUIsolutions"
EMAIL        = "mateusmoutinho01@gmail.com"
SUMARY       = "A firmware model for cwebstudio"
YOUR_CHANGES = "--"
COMPILER     = "gcc"
```

## Obsolete
### Making your own build
you can make your own build by using the following commands:
```bash
darwin run_blueprint build/ --mode folder  
```

than you can compile with gcc in the way you want:
- **Linux** 
```bash
 gcc main.c -o CWebStudioFirmware
```
- **mingw** 
```bash
i686-w64-mingw32-gcc main.c -o CWebStudioFirmware.exe
```
