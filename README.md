C_Lib_MyUtils
=============

Libraries of basic utils for C!

## Compilation
Just run `make`, that will create "libmyutils.a" !

## Usage
Put "libmyutils.a" in your library folder.

> mkdir lib<br>
mv path/to/libmyutils.a lib/


Indicate to "gcc" to compile the with library.

> gcc main.c -Llib/ -lmyutils
