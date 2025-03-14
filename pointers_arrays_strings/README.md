C - Pointers, arrays and strings

C - Even more pointers, arrays and strings
#0. memset

##Project Overview

This project implements a custom version of the memset function,
which fills a specified memory area with a constant byte value. It helps understand low-level memory manipulation in C.

##The _memset function takes three parameters:

s: Pointer to the memory area.
b: The byte value to fill.
n: Number of bytes to fill.

#1. memcpy

##Project Overview

This project involves implementing a custom version of the memcpy function, 
which copies a specified number of bytes from one memory area to another. It helps understand how memory copying works in C

##Description:

The function copies n bytes from the memory area pointed to by src to the memory area pointed to by dest.

##Parameters:

dest: The destination memory area where the bytes will be copied to.
src: The source memory area from where the bytes will be copied.
n: The number of bytes to copy.
Return: It returns a pointer to the destination memory area dest.

# 2. strchr

## Overview

This project focuses on implementing low-level functions in C. It demonstrates basic concepts such as memory manipulation, string manipulation, and function pointers.

## Functions Implemented

- `_strchr`: Locates a character in a string.
- `_memset`: Fills memory with a constant byte.
- `_memcpy`: Copies memory area.
- `_strspn`: Finds the length of a prefix substring.

# 3. strspn

## Project Overview:

This project implements the `_strspn` function, which calculates the length of the initial substring of a given string (`s`) that consists only of characters from another string (`accept`).

## Functionality:

- The function takes two strings:
  - `s`: The string to search.
  - `accept`: The string containing the acceptable characters.
- It returns the number of bytes in the initial segment of `s` that are composed solely of characters from `accept`.

# 4. strpbrk

## Project Overview:

This project implements the `_strpbrk` function, which searches a string for the first occurrence of any byte from a set of accepted bytes.

## Functionality:

- The function takes two strings:
  - `s`: The string to search through.
  - `accept`: The set of accepted bytes to search for.
- It returns a pointer to the first byte in `s` that matches any byte in `accept`. If no match is found, it returns `NULL`.

