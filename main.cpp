#include <iostream>
using namespace std;
int main()
{
    int n;
    char answer = ' ';

    cout <<" would you like to covert numbers ?(Y/N): ";
    cin >> answer;
    answer = toupper(answer);
    if(answer == 'Y')
    {
            again:
            cout<<endl;
            cout << "Enter the number: ";

        while(cin>>n)
        {
            int i,j,k,l;
            l=(n/1000)*1000;
            if(l==1000)
                cout<<"M";
            if(l==2000)
                cout<<"MM";
            if(l==3000)
                cout<<"MMM";
            if(l==4000)
                cout<<"-IV";
            if(l==5000)
                cout<<"-V";
            if(l==6000)
                cout<<"-VI";
            if(l==7000)
                cout<<"-VII";
            if(l==8000)
                cout<<"-VIII";
            if(l==9000)
                cout<<"-IX";
            if(l==10000)
                cout<<"-X";
            k=(n%1000);
            k=(k/100)*100;
            if (k == 100)
                cout<<"C";
            else if (k == 200)
                cout<<"CC";
            else if (k == 300)
                cout<<"CCC";
            else if (k == 400)
                cout<<"CD";
            else if (k ==500)
                cout<<"D";
            else if (k == 600)
                cout<<"DC";
            else if (k == 700)
                cout<<"DCC";
            else if (k ==800)
                cout<<"DCCC";
            else if (k == 900)
                cout<<"CM";
            k=n%1000;
            l=k%100;
            j=(l/10)*10;
            if (j == 10)
                cout<<"X";
            else if (j == 20)
                cout<<"XX";
            else if (j == 30)
                cout<<"XXX";
            else if (j == 40)
                cout<<"XL";
            else if (j ==50)
                cout<<"L";
            else if (j == 60)
                cout<<"LX";
            else if (j == 70)
                cout<<"LXX";
            else if (j ==80)
                cout<<"LXXX";
            else if (j == 90)
                cout<<"XC";
            i=l%10;
            if (i == 1)
                cout<<"I";
            else if (i == 2)
                cout<<"II";
            else if (i == 3)
                cout<<"III";
            else if (i == 4)
                cout<<"IV";
            else if (i ==5)
                cout<<"V";
            else if (i == 6)
                cout<<"VI";
            else if (i == 7)
                cout<<"VII";
            else if (i ==8)
                cout<<"VIII";
            else if (i == 9)
                cout<<"IX";
            cout<<endl;

            cout <<"Would you like to try again?(Y/N): ";
            cin >> answer;
            answer = toupper(answer);

            if(answer == 'Y' )
            {
                goto again;
            }
            else if(answer == 'N')
            {
                return 0;
            }
        }

    }
    return 0;
}
