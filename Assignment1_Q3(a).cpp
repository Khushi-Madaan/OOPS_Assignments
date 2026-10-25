/* WAP to demonstrate for, while, do-while (with all possible variations), like for loop
can be demonstrated without giving initialization in for construct or without giving
increment in for construct.
Sample:
for (int i=0; i<10; i++)
i=0
for (; i<10; i++)
i=0
for (; i<10;)
i++ 
For Loop:*/
#include <iostream>
using namespace std;
int main()
{
cout<<"Standard for Loop\n";
for(int i=0;i<5;i++)
{
cout<<i<<endl;
}
cout<<"for Loop with outside initialization\n";
int i=0;
for(;i<5;i++)
{
cout<<i<<endl;
}
cout<<"for Loop with outside incr/decr\n";
for(int j=0;j<5;)
{
cout<<j<<endl;
j++;
}
cout<<"for Loop with outside init. and incr/decr\n";
int j=0;
for(;j<5;)
{
cout<<j<<endl;
j++;
}
return 0;
}

