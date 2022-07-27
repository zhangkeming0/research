from sys import argv
from os.path import exists

script, from_file, to_file = argv

print("copy file from %s to %s" % (from_file, to_file))

# input = open(from_file)
# in_data = input.read()
in_data = open(from_file).read()
print("the input file is %d bytes long" % len(in_data))
print("Does the output file exist?%r" % exists(to_file))

open(to_file, 'w').write(in_data)

# output = open(to_file, 'w')
# output.write(in_data)
# output.close()
# input.close()

print("任务完成！")
