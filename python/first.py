# -*- coding:utf-8 -*-
# print (this will not run)

print("hello world!")                      # this is comment
print("this is the first day to learn python")
print("hello", 'zkm', 'seq=')
str = '我是张珂铭'
a = 99
b = 1.7333
c = 'time is'
d = 'limited'
# print(str)
print("数学计算")
print('a', '25+30', 25+30/6, 100 - 25 * 3 % 4, 3 + 2 < 5 - 7)
print('hey %s there' % str)
print('考试得分 = %d' % a)
print("%r" % str)  # 调试用,还原设置环境以及引号，%s是字符串输出
sum = round(b)  # 四舍五入函数
print(b, sum)
print(c+d)  # 没有空格了？
print('.' * 10)

formatter = "%r %r %r %r"
print(formatter % ('south', 'china', 'normal', 'university'))

print(
    """
    There is something going here.
    With the three double-quotes.
    We'll be able to type as much as we like.
    Even 4 lines if we want,or 5,or 6.
"""
)

tabby_cat = "\tI'm tabbed in."
persian_cat = "I'm split \non a line."
backslash_cat = "I'm \\ a \\ cat."

fat_cat = """
I'll do a list:
\t* Cat food
\t* Finises
\t* Catnip\n\t* Grass
"""

print(tabby_cat)
print(persian_cat)
print(backslash_cat)
print(fat_cat)

print("整数{:d}".format(123))
