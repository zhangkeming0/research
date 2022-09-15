import pandas as pd
import os
import requests
path = os.getcwd()+'\\abc\\'  # 设置图片文件路径，前提是必须要有abc这个文件夹
df = pd.read_excel('url1.xlsx')

urls = df['url']
for i in range(len(urls)):
    print(i)
   # url = 'https://public.vzkoo.com/report-image/2022/0715/073098fac402b695f354ea692b255bad/28.jpg'
    r = requests.request('get', urls[i])  # 获取网页
    print(r.status_code)

    with open(path+str('femalasadzzl')+str(i)+'.jpg', 'wb') as f:  # 打开写入到path路径里-二进制文件，返回的句柄名为f
        f.write(r.content)  # 往f里写入r对象的二进制文件
    f.close()
