## Build Instructions

### Build Requirements 
#### Darwin 
For Build the project you must have [Darwin](https://github.com/OUIsolutions/Darwin) installed on version 0.20 or later
if you are on linux you can install darwin with:

```bash
curl -L https://github.com/OUIsolutions/Darwin/releases/download/0.20/darwin.c -o darwin.c &&
gcc darwin.c -o darwin.out &&
sudo mv darwin.out /usr/bin/darwin
```

After installing Darwin, run the following command to install project dependencies:
```bash
darwin install
```

## Obsolete
```text
### Local Build 
make a local build to test with the following command it will create the **CWebStudioFirmware** file, you can set the compiler here [build/config.lua](/build/config.lua) 
```bash
darwin run_blueprint build/ --mode folder local_build 
\```
```

### Building the Project

To build all targets, use the following command:
```bash
darwin run_blueprint --target all
```

Alternatively, you can build specific targets by providing their names (following the recipes in the darwinconf.lua file):
```bash
darwin run_blueprint --target amalgamation
darwin run_blueprint --target zip
```

Available targets:
- **amalgamation**: Creates a single amalgamated C file at `release/CWebStudioFirmware.c`
- **zip**: Creates a zip archive at `release/CWebStudioFirmware.zip` containing dependencies, docs, build, and src folders

You can also build multiple specific targets at once:
```bash
darwin run_blueprint --target amalgamation zip
```

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
```text
### Making your own build
you can make your own build by using the following commands:
```bash
darwin run_blueprint build/ --mode folder  
\```
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
