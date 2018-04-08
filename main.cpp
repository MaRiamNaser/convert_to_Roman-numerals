#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
using namespace std;



int change(char &ch)
{
    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    if (ch == 'M')
        return 1000;


}

int main()

{int sum=0;

string arr="";
cout<<"enter the roman number in capital leeters dont forget ya donkey :";
cin>>arr;
for(int i=0;i<arr.length();i++){
 int z=change(arr[i]);

cout<<z<<" ";



}

for(int i=0;i<arr.length();){

 int z=change(arr[i]);
 int y=change(arr[i+1]);

if(y>z){sum=sum+(y-z);i+=2;}
else{
    sum+=change(arr[i]);
    i++;
    }
cout<<endl<<sum;


}
}













