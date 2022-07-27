def while_times(times, add):
    i = 0
    number = []
    while i < times:
        print("at the top i is %d" % i)
        number.append(i)
        i = i+add
        print("numbers now:", number)
        print("at the bottom i is %d" % i)

    print("the numbers:")
    for num in number:
        print(num, sep='.', end='\t')


while_times(12, 2)
