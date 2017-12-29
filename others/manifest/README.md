# 1. 介绍

多项目管理，参考FlymeOS/manifest。


[![License](https://img.shields.io/badge/License-Apache%20V2.0-blue.svg)](LICENSE)


# 2. 目录命名


目录结构如下所示: 

    franklinted
     +-- manifest           项目清单
     +-- docs               文档
     +-- conf               linux配置
     +-- code               代码


# 3. 代码下载

通过repo init命令的-b参数, 选择需要下载的分支。
通过repo sync命令同步远程代码: 

    $ repo init -u https://github.com/franklinted/manifest.git
    $ repo sync -c -j2

# 4. 其他
由于repo不完全支持python3，暂停

