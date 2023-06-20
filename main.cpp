//
//  main.cpp
//  week1-DSA-CipherSchools
//
//  Created by tenzin choten on 20/06/23.
//

#include <iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}


int main() {
    
    int a,b;
    cout<<"enter 2 number\n";
    cin>>a>>b;
    
    int c = sum(a,b);
    cout<<c<<endl;
    
    return 0;
}
