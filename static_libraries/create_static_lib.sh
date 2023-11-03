#!/bin/bash
gcc *.c -c
ar -rc *.o
ranlib liball.a
