#!/bin/sh

cat /etc/passwd | sed -e '/#/d' | sed -n 'n;p' | sed 's/*.*//g' | rev | cut -c2- | sed -n -e "${FT_LINE1},${FT_LINE2}p" | tr '\n' ' ' | sed 's/ /, /g' | rev | cut -c3- | rev | sed 's/$/./'
