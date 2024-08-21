#include <iostream>
using namespace std;
int main(){
    
    // simple  calculator with c++ by aninda sadhukhan
    
    cout<<"1. addition"<<endl;
    cout<<"2. substraction"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4. division"<<endl;
    
    int c;
    cout<<"enter choice (1/2/3/4) : ";
    cin>>c;
    
    float a,b;
    
    cout<<"enter the first number : ";
    cin>>a;
    
    cout<<"enter another number : ";
    cin>>b;
    
    if (c==1){
        cout<<a+b<<endl;
    }
    if (c==2){
        cout<<a-b<<endl;
    }
    if (c==3){
        cout<<a*b<<endl;
    }
    if (c==4){
        cout<<a/b<<endl;
    }
    cout<<"this is programmed by : Aninda Sadhukhan";
    return 0;
}
