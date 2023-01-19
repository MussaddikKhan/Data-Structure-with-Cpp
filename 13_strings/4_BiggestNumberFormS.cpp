/// From the biggest number form the numric String
 
 #include<bits/stdc++.h> 
 using namespace std;
 
 int32_t main(){ 
 
    string s = "4789424";

    sort(s.begin(),s.end(),greater<int>());

    cout<<s<<endl;
 
 return 0;
 }