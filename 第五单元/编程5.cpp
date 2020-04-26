#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[500];
    cin.getline(str1, 500);
    int length = strlen(str1);
    int num_word = 1;
    for (int i = 0; i < length-1; i++)
    {
        //两个条件：1.空格 2.空格后为字母
        int flag1 = (str1[i] == 32);
        int flag2 = ((str1[i + 1] <= 90) && (str1[i + 1] >= 65)) || ((str1[i + 1] <= 122) && (str1[i + 1] >= 97));
        if ((flag1 == 1) && (flag2 == 1))
        {
            num_word++;
        }
    }
    cout << num_word;
    return 0;
}
