
#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
 using namespace std;
 int main()
 {
   string  s,b,c,d;
   int n=0,x=0;
   cin>>s;
   for(size_t i =0;i<s.length();i++)
    {
        if(isupper (s[i]))
        {
            n+=1;
        }
       else
       {
           x+=1;
       }


      }

     if(n>x)
     {  for(size_t i =0;i<s.length();i++)

        {
            s[i] = toupper(s[i]);
        }
     }
    else
    {
       for(size_t i =0;i<s.length();i++)

   {
    s[i] =tolower(s[i]);
    }}


   cout << s;

 }
