#include <bits/stdc++.h>
using namespace std;

struct account
{
    int accno;
    string name;
    float balance;
    account*next;

    account(int a,string n,float b)
    {
        accno = a;
        name = n;
        balance = b;
        next = NULL;
    }
};

account *head = NULL;

void createacc()
{
    int no;
    string name;
    float bal;

    cout<<"Enter acc num: \n";
    cin >> no;
    
}


int main()
{

    return 0;
}