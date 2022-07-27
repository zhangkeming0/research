from sys import argv

<<<<<<< HEAD
script, filename = argv

txt = open(filename, 'w')  # w为特别制定写操作 r为只读（默认）

print("Here's your file %r:" % filename)
# print(txt.read())

txt.truncate
print("文件内容已清空")

line1 = input("1输入内容为：")
line2 = input("2输入内容为：")
line3 = input("3输入内容为：")

# txt.write(line1)
# txt.write("\n")
# txt.write(line2)
# txt.write("\n")
# txt.write(line3)
txt.write("%s\n%s\n%s" % (line1, line2, line3))
print("文件读写已完成")
txt.close()
=======
script,filename = argv

txt = open(filename)

print("Here's your file %r:" % filename)
print(txt.read())
>>>>>>> 858553d6748005e1bafaf5542ee38f879c83b103
print("Type the filename again:")

file_again = input(">")

txt_again = open(file_again)

print(txt_again.read())
<<<<<<< HEAD
txt_again.close()
=======
>>>>>>> 858553d6748005e1bafaf5542ee38f879c83b103
