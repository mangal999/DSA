#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  
    unordered_map<int,string> s;

    s.insert({1,"ram"});
    s.insert({2,"Karan"});
    s.insert({4,"Arjun"});
    s.insert({3,"Maharana"});
    s[4] = "Jaya";

    // auto x = s.find(3) != s.end();
   for(auto i:s)cout<<i.first<<" ";


//    if(s.find(3) != s.end()){

//        cout<<"hey found you";

//    }
    
    return 0;
}
