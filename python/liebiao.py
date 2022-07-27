ten_things = "Apple Oranges Crows Telephone Light Sugar"
stuff = ten_things.split(' ')
more_stuff = ["Day", "Night", "Song",
              "Fribee", "Corn", "Banana", "Girl", "Boy"]

while len(stuff) != 10:
    next_one = more_stuff.pop()
    print("Adding:", next_one)
    stuff.append(next_one)
    print("There's %d items now." % len(stuff))
print("There we go:", stuff)
print("Let's do some things with stuff.")

print(stuff[1])
print(stuff[-1])
print(stuff.pop())
print(' '.join(stuff))  # 使用空格联合stuff列表中元素
print('#'.join(stuff[3:5]))  # 使用#号联合3、4号元素，暨第4、5个
