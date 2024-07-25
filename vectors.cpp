#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v ;
    // v.push_back(1);
    // v.emplace_back(2);
    // v.push_back(3);
    // cout<<v[0];
    // cout<<v[1];
    // cout<<v[2];
    // vector<pair<int, int>> p;
    // p.push_back({1,3});
    // p.emplace_back(2,5);
    // cout<<p[0].first;
    // cout<<p[0].second;
    // cout<<p[1].first;
    // cout<<p[1].second<<endl;
    // vector<int> x(5,100);
    // vector<int> x2(5);
    // vector<int> x3(x);
    // cout<<x[0]<<" "<<x[1]<<endl;
    // cout<<x2[0]<<" "<<x2[1]<<endl;
    // cout<<x3[0]<<" "<<x3[1]<<endl;



    vector<int> y = {10,20,30,40,50};

    vector<int>::iterator i = y.begin();
    cout<<*i<<"\t";
    i++;
    cout<<*i<<"\t";
    i = y.end();//points to the memory next to the last element
    cout<<*i<<"\t";
    i--;
    cout<<*i<<"\t";
    vector<int>::reverse_iterator j = y.rbegin();
    cout<<*j<<"\t";
    j++;
    cout<<*j<<"\t";
    j=y.rend();
    cout<<*j<<"\t";
    j--;
    cout<<*j<<"\t";

    for (vector<int>::iterator i =y.begin(); i != y.end(); i++)
    {
        cout<<*i<<",";
    }
    cout<<endl;
    for (auto i =y.begin(); i != y.end(); i++)
    {
        cout<<*i<<"-";
    }

    cout<<endl;
    for(auto it : y)
        cout<<it<<" ";
    
    y.erase(y.begin()+2);
    y.insert(y.begin(),100);
    y.insert(y.begin()+2,2,10);
    vector<int> y2(2,50);
    y.insert(y.begin(),y2.begin(),y2.end());
    cout<<endl;
    for(auto it : y)
        cout<<it<<"/";
    cout<<endl;
    vector<int> y3(2,60);
    y2.swap(y3);
    for (auto j : y3)
        cout<<j<<"_";
    cout<<endl;
    y3.swap(y);
    for (auto j : y3)
        cout<<j<<"_";
    y.clear();
    cout<<endl<<y.empty();
    return 0;
}