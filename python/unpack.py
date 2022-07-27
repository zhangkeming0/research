from sys import argv

script, username = argv

prompt = '>'

print("你好 %s,我是 %s," % (username, script))

print("the script is called:", script)
print("do you like me %s?" % username)
likes = input(prompt)
print("where do you live %s?" % username)
lives = input(prompt)
print("what kind of computer do you have %s?")
computer = input(prompt)

print(
    """
    好的，所以你说%r关于喜欢我
    你住在%r.不知道那是哪里
    以及你有一台%r的电脑,真好！
    """
    % (likes, lives, computer))
