#!/bin/bash

#Author: Ivan Tu

rm *.o
rm *.out

echo "Compile the cpp file - main_arithsum.cpp"
g++ -c -m64 -Wall -std=c++14 -o main_arithsum.o -fno-pie -no-pie main_arithsum.cpp

echo "Assemble the asm file - arith.asm"
nasm -f elf64 -l disc.lis -o arithsum.o arith.asm

echo "Link all object files"
g++ -M -o myprog.out arithsum.o main_arithsum.o

echo "New program will run"
./myprog.out
