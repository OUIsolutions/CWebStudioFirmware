## Build Instructions

### Build Requirements 
#### Darwin 
For Build the project you must have [Darwin](https://github.com/OUIsolutions/Darwin) installed on version 0.2.1
if you are on linux you can install darwin with:

```bash
curl -L https://github.com/OUIsolutions/Darwin/releases/download/0.2.1/darwin.c -o darwin.c &&
gcc darwin.c -o darwin.out &&
sudo mv darwin.out /usr/bin/darwin
```

### Local Build 
make a local build to test with the following command it will create the **CWebStudioFirmware** file, you can set the compiler here [build/config.lua](/build/config.lua) 
```bash
darwin run_blueprint build/ --mode folder local_build 
```

### Full Build from Docker or Podman
You must have podman or docker installed on your machine to build in these way, you can set what you want to use on the [build/config.lua](/build/config.lua) file.

if you want to make a full build to all platforms you can use the following command, it will create the following files:
```bash
 darwin run_blueprint build/ --mode folder amalgamation_build alpine_static_build windowsi32_build windows64_build rpm_static_build debian_static_build
```

Output files:
- release/CWebStudioFirmware.exe
- release/CWebStudioFirmware.c
- release/CWebStudioFirmware.deb
- release/CWebStudioFirmwarei32.exe
- release/CWebStudioFirmware.out
- release/CWebStudioFirmware.rpm

### Build Configurations
All build configurations are in the **build/config.lua** file.
the default its: 
```lua
PROJECT_NAME = "CWebStudioFirmware"
CONTANIZER   = "podman"
VERSION      = "0.0.9"
LICENSE      = "MIT"
URL          = "https://github.com/OUIsolutions/Ai-RagTemplate"
DESCRIPITION = "A Rag Based Template for C"
FULLNAME     = "Ai-RagTemplate"
EMAIL        = "mateusmoutinho01@gmail.com"
SUMARY       = "A Rag Based Template for C"
YOUR_CHANGES = "--"
```


### Making your own build
you can make your own build by using the following commands:
```bash
darwin run_blueprint build/ --mode folder --encrypt_key "your_encryption_key" 
```
than you can compile with gcc in the way you want:
```bash
 gcc src/main.c -DDEFINE_DEPENDENCIES -o my_executable
```

