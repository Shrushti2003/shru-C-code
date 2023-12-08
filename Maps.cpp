#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m.insert({1,3});  //key->1 and value->2
    m[3] = 5;         //key->3 and value->5
    m[4] = 8;
    m[2] = 20;

    /* for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    } */

    //find
/* 
   auto val = m.find(4);
    cout<<val->first<<" "<<val->second;  
             
             OR 

    if(m.find(5) != m.end()){
        cout<<"Present";
    }
    else {
        cout<<"Absent";
    }  
 */
if(m[4]){
    cout<<"Present";
}
else{
    cout<<"Absent";
}
}