
#include <bits/stdc++.h>

using namespace std;
// This code is working fine but i want to implement ceaser cipher for all the ascii characters 

string encryption(string s , int key)
{
    string result = "" ;
    for(int i = 0;i<s.size();i++)
    {
        /****** For alphabates and space only ****/
        // if(isupper(s[i]))
        // result+=char(int(s[i]+key-65)%26+65); 
        // else if(islower(s[i]))
        // result+=char(int(s[i]+key-97)%26+97); 
        // else
        // result+=" "; 
        /***** For all ascii characters ***/
        int shift = ((s[i]-'0')+key)%256; 
        result+=shift+'0'; 
    }
    return result; 
    
}
string decrypt(string s , int key){
    string result = "";
    // cipher = de-cipher(26-n)
    for(int i = 0;i<s.size();i++)
    {
          /****** For alphabates and space only ****/
        // if(isupper(s[i]))
        // result+=char(int(s[i]-key-65)%26+65); 
        // else if(islower(s[i]))
        // result+=char(int(s[i]-key-97)%26+97); 
        // else
        // result+=" "; 
        
                /***** For all ascii characters ***/
        int shift =   ((s[i]-'0')-key)%256;   
        result+=shift+'0'; 
    }
    return result; 
}
int main()
{
    // i am assuming string is in upper case latters 
    
   string str ; 
   cout<<"Enter the string : "; 
   getline(cin, str);
   cout<<"Enter the Key : "; 
   int key ; 
   cin>>key; 
   cout<<"Encrypted string : "; 
   string s=encryption(str, key); 
   cout<<encryption(str, key)<<endl; 
   cout<<"decrypted String : "; 
   cout<<decrypt(s, key); 
 
    return 0;
}
