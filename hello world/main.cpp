//
//  main.cpp
//  hello world
//
//  Created by s20181105879 on 2019/8/27.
//  Copyright © 2019 s20181105879. All rights reserved.
//

#include <iostream>
using namespace std;
#define n 10
int main(int argc, const char * argv[]) {
    // insert code here...
    int s[10]={1,2,3,4,6,7,9,8,0,5};
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j<n-1;j++)
        {
            if(s[j+1]<s[j])
            {
                int t=s[j+1];
                s[j+1]=s[j];
                s[j]=t;
            }
            else
            {
                
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;
}
