#!/bin/bash

gcc -E quiz.c > quiz.l
gcc -Wall -pedantic -O3 -ansi -std=c89 quiz.c -o quiz.out && ./quiz.out
