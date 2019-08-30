#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    char map1[x2+1][y2+1];

    for(int i=0;i<=x2;i++)
    {
        for(int j=0;j<=y2;j++)
        {
            map1[i][j]='-';
        }
    }

    int c1 = 2*(y2-y1);
    int c2 = 2*((y2-y1)-(x2-x1));

    int p = 2*(y2-y1)-(x2-x1);

    int x=x1,y=y1;
    cout<<p<<" "<<x<<" "<<y<<endl;
    map1[x][y]='+';

    while(x<x2)
    {
        x++;
        if(p<0)
        {
            p+=c1;
        }
        else
        {
            y++;
            p+=c2;
        }
        cout<<p<<" "<<x<<" "<<y<<endl;
        map1[x][y]='+';
    }

    for(int i=x2;i>=0;i--)
    {
        for(int j=0;j<=y2;j++)
        {
            cout<<map1[i][j]<<" ";
        }
        cout<<endl;
    }
}
