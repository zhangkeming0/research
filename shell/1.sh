#!/usr/bin/bash
echo "hello World!"
name="zkm"
echo ${name}
baidu_URL="www.baidu.com"
readonly baidu_URL
echo ${baidu_URL}
# unset name
echo "$name"
str="Hello \"${name}\"!"
echo "$str"
