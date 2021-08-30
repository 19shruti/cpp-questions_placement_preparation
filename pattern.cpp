#include <iostream>
using namespace std;
int main()
{
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
}  
cout<<"-----------------------------------"<<"\n";

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(i==0 || i==4 ||j==0||j==4)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }

    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=0;i<6;i++)
{
    for(int j=0;j<=i;j++)
    {
cout<<"*";
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=6;i>=0;i--)
{
    for(int j=1;j<=i;j++)
    {
cout<<"*";
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
    if(j<=4-i){
          cout<<" "; 
    }else{
        cout<<"*";
    }      
    }
    
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=0;i<5;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<j+1<<" ";
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=5;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
cout<<j<<" ";
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=0;i<5;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<i+1<<" ";
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5-i+1;j++)
    {
cout<<i<<" ";
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
int num=1;
for(int i=0;i<5;i++)
{
    for(int j=0;j<=i;j++)
    {
cout<<num<<" ";
num++;
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=i;j++)
    {
        if((i+j)%2==0)
        {
            cout<<"1"<<" ";
        }
        else{
            cout<<"0"<<" ";
        }
    }
    cout<<"\n";
}
cout<<"-----------------------------------"<<"\n";

for(int i=1;i<=5;i++)
{
     int j,k=i;
    for( j=1;j<=(5-i);j++)
    {
     cout<<"  ";  
    }

  for(;j<=5;j++)
  {
      cout<<k<<" ";
      k--;
  }

  k=1;
  for(;j<(5+i);j++)
  {
k++;
cout<<k<<" ";
  }
  for(;j<=(2*5-1);j++)
  {
      cout<<" ";
  }
 cout<<endl;
} 
}
