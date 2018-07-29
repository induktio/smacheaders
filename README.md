# Header files for Alpha Centauri: Alien Crossfire

These headers describe some of the most common structures and enum types for Alpha Centauri: Alien Crossfire.

The files have been tested to work with the GOG version of terranx.exe (3084288 bytes). Compatibility with other versions of the game is uncertain - particularly the function pointers are not expected to work with any other version of the binary. The structures still contain a considerable number of unknown variables - these have been prefixed with `unk_` or similar.

To use the headers, simply include them with:

```
#include "terranx.h"
```

For more information about the internal game structures, refer to reversing work performed by the [alphacentauri2.info forums.](http://alphacentauri2.info/index.php?board=23.0)


