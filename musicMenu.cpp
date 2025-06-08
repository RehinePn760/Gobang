#include"musicMenu.h"
//文件名 musicMenu.cpp
//负责：WYJ
//功能：音乐界面
void musicMenu()
{   
    IMAGE img;
    loadimage(&img, "assets/image/musicMenu.png", 900, 500);
    putimage(0, 0, &img);

}