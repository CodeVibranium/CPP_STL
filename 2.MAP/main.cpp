#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> account;
    account[1]="Shahed";
    account[2]="Rizwan";
    account[3]="Bill Gates";
    account[4]="Steve Jobs";
    cout<<"Account holder : "<<account[3]<<endl;
    map<int,string>::iterator ii;
    // cout<<"Account No "<<" "<<"Account Owner"<<endl; 
    for(ii=account.begin();ii!=account.end();ii++)
    {
        cout<<(*ii).first<<" "<<(*ii).second<<endl;
    }
    int accountNo=5;
    string AccountHolderName;
    cout<<"Enter your Name : ";
    cin>>AccountHolderName;
    account.insert(pair<int,string>(accountNo,AccountHolderName));
    cout<<"All accounts"<<endl;
    map<int,string>::iterator it;
    for( it=account.begin();it!=account.end();it++)
        cout<<(*it).first<<"  "<<(*it).second<<endl;

}