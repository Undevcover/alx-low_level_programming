#!/usr/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o
