# 1.[done] 
echo "PermitRootLogin yes" /etc/ssh/sshd_config
systemctl sshd restart
ssh-copy-id -p 2222 root@localhost
ln -s /vagrant/work/l-conf/etc/pacman.d/mirrorlist /etc/pacman.d/mirrorlist
pacman -Syu vim git zsh
ln -s /vagrant/work/l-conf/vim/vimrc /root/.vimrc
ln -s /vagrant/work/l-conf/zshrc /root/.zshrc
yaourt -S vim-youcompleteme-git
# 2.[todo]
vi switch auto write
use github manage multipi projects
quick tdd
# 3.[requirements]
LED Driver
控制16个有两个状态的LED
可以在不影响其他LED的情况下打开或者关闭任意一个LED
通过单一的接口调用来打开所有的LED
LED驱动程序的用户可以查询任何LED的状态
当加电时，硬件的默认状态是所有的LED都锁定在打开状态，需要由软件来把它们关闭。
LED会在内存中映射到一个16位的字上（在一个尚未确定的地址上）
在某一位上置1会点亮对应的LED；置0则会将之关闭
最小一位对应LED1；最大一位对应LED16
[test list]
在驱动程序安装后关闭所有LED
可以打开单一的LED
可以关闭单一的LED
可以打开/关闭多个LED
打开所有LED
关闭所有LED
查询LED状态
检查边界值
检查界外值
