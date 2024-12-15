#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
   string b ;
   getline(cin,b);
   for(int i = 0 ; i < b.size() ; i++ )
   {
       if(b[i]=='\\')
       {
           break;
       }
       cout << b[i] ;
   }


    return 0;
}
