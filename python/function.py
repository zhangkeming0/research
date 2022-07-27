def print_two(*args):
    arg1, arg2 = args
    print("arg1:%s,arg2:%s" % (arg1, arg2))


def print_none():
    print("什么也没有")


def add(a, b):
    print("和为：%d+%d" % (a, b))
    return a+b


while True:
    for i in ["/", "-", "|", "\\", "|"]:
        # print("%s\r" % i)
        print_two("time", "money")
        print_none()
