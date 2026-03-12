#include <iostream>
#include <cstdio>

using namespace std;

// 1. 全局变量：将 int 改为 long long 以处理巨大的时间戳
int i = 0;
int maxvl = 0;
long long ms[100005]; // 【核心修复点】int 改为 long long
char a, b;
int lian = 0;

int main()
{
    // 如果你在 Mac 上运行还是 0，请务必确认 input.txt 在这个代码的同级目录下
    // 也可以试试右键 input.txt 复制绝对路径贴在这里
    freopen("input.txt", "r", stdin);

    // 2. 循环读取：现在 cin 可以顺利读取 13 位的时间戳了
    while(cin >> a >> b >> ms[i])
    {
        if(a == b) 
        {
            if(lian == 0) lian = 1;
            else
            {
                // 计算差值，long long 减法也是安全的
                if(ms[i] - ms[i-1] <= 1000)
                {
                    lian++;
                }
                else 
                {
                    lian = 1;
                }
            }
            if(lian > maxvl) maxvl = lian;
        }
        
        if(a != b) 
        {
            lian = 0;
        }
        
        i++; 
    }

    // 3. 输出结果
    cout << "最终结果：" << maxvl << endl;

    return 0;
}