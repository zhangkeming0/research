the_count = [1, 2, 3, 4, 5]
fruits = ['apples', 'oranges', 'pears', 'apricots']
change = [1, 'pennies', 2, 'dimes', 3, 'quarters']

for number in the_count:
    print("This is count %d" % number)

for fruit in fruits:
    print("A fruit of type:%s" % fruit)

for i in change:
    print("I got %r" % i)

elements = []
for i in range(0, 6):  # range函数,默认从0开始,可设置步进为第三参数,截止位不包含
    print("Adding %d to the list." % i)
    elements.append(i)  # 尾部添加一个元素

for i in elements:
    print("Element was :%d" % i)
