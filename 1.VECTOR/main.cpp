#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    //add data into vector.
    v1={1,2,3,4,5};
    v2={11,12,13,15,14,18};
    v1.pop_back();
    v1.push_back(6);
    cout<<v1.at(3)<<" AT"<<endl;//tells what is at that given index
    cout<<v1.back()<<" BACK()"<<endl;//returns what is at the end of the vector
    cout<<v1.front()<<" Front()"<<endl;//returns what is at the front of the vector
    // cout<<"BEfore swap v1"<<endl;
    // for(int i=0;i<v1.size();i++)
    // {
    //     cout<<v1[i]<<endl;
    // }
    // cout<<"Before swap v2"<<endl;
    // for(int i=0;i<v2.size();i++)
    // {
    //     cout<<v2[i]<<endl;
    // }
    // v1.swap(v2);
    // cout<<"After swap v1"<<endl;
    // for(int i=0;i<v1.size();i++)
    // {
    //     cout<<v1[i]<<endl;
    // }
    // cout<<"After swap v2"<<endl;
    // for(int i=0;i<v2.size();i++)
    // {
    //     cout<<v2[i]<<endl;
    // }
    if(v1.empty())
        cout<<"V1 is empty";
    else
        cout<<"V! has data"<<endl;
    v1.insert(v1.begin(),2,7);
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;
    v1.erase(v1.begin()+1,v1.begin()+4);//
    cout<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;
}