#!/bin/sh

cat /etc/passwd | sed 's/:x.*//' | sed 1p | sed -n 1~2p | rev | sort -r | sed -n -e "$FT_LINE1,$FT_LINE2 p" | sed ':a;N;$!ba;s/\n/, /g' | sed 's/$/./' | tr -d "\n"
