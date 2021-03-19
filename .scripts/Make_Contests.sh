#!/bin/sh

if [ $# = 1 ]; then
	Contest_Name=$1
	Problem_Number=a
else
	Contest_Name=$1
	Problem_Number=$2
fi

Directory_Path="$HOME/AtCoder/${Contest_Name}"
AtCoder_base="https://atcoder.jp/contests/"
AtCoder_url="${AtCoder_base}${Contest_Name}/tasks/${Contest_Name}_"

if [ ! -e ${Directory_Path} ]; then
	for var in a b c d e f
	do
		mkdir ${Directory_Path}/${var}
		mkdir ${Directory_Path}/${var}/test
		AtCoder_URL="${AtCoder_url}${var}"
		oj d -d ${Directory_Path}/${var}/test ${AtCoder_URL} > /dev/null
		touch ${Directory_Path}/${var}/main.cpp
		touch ${Directory_Path}/${var}/Makefile
		echo "include $HOME/AtCoder/.scripts/Makefile" >> ${Directory_Path}/${var}/Makefile
	done
fi
cd ${Directory_Path}/${Problem_Number}
