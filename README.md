# This repository contains some simple C programs I've made

## wc.c
This program counts the number of lines, words, and characters from stdin, much like the `wc` program included in many Unicies. 
| **Feature**        |  **wc.c** | **BSD wc** |
|--------------------|:---------:|:----------:|
| counts words       | [x]       | [x]        |
| counts chars       | [x]       | [x]        |
| counts lines       | [x]       | [x]        |
| accepts stdin      | [x]       | [x]        |
| speed              | 25.4MiB/s | 364MiB/s   |
| ends with EOF      | [x]       | [x]        |
| supports options   | [ ]       | [x]        |
| can read from file | [ ]       | [x]        |

## oneblank.c
This will take stdin text and remove duplicate spaces, merging them all into a single space and printing to stdout. It does not support file input. It does not support file output. It does not have any options. To finish writing, send a ^D. I got around 13.0MiB/s testing it.