#include <iostream>

using namespace std;

int main()
{
    int **a;  //ָ��ָ���ָ��
    int n,m;//n�� m��
    int i,j;
    cin>>n>>m; //��������������

    //����ռ�
    a= new int * [n];  //n�� int ָ�� ����
    for(i=0; i<n; i++)  //n����СΪm��һά����
    {
        a[i]=new int[m]; //1����СΪm��һά���飬a[i]��intָ��
    }

    //��������
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            //cin>>a[i][j];//����
            cin>> *(*(a+i)+j);//ͬ��a�൱����ָ��
        }
    }
    int s=0;
    //�������
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            s+=*(*(a+i)+j);
        }
    }
    cout<<s;
    //�ͷ�����Ŀռ䣡����
    for(i=0; i<n; i++) //�ͷ�n����СΪm��һά����
    {
        delete []a[i];
    }
    delete []a;//�ͷ�intָ������
    return 0;
}
