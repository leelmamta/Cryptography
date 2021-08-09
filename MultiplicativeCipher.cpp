/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>

using namespace std;
// here is we need to check if a and m are coprime or not 

int modInverse(int a, int m)
{
	int m0 = m;
	int y = 0, x = 1;

	if (m == 1)
		return 0;

	while (a > 1) {
     	int q = a / m;
		int t = m;
		m = a % m, a = t;
		t = y;

		y = x - q * y;
		x = t;
	}
	if (x < 0)
		x += m0;

	return x;
}
string encrypt(string p , int key){
    string res = ""; 
    for(int i =0;i<p.size();i++){
           if (isupper(p[i]))
       res+=char((( p[i]-'A')*key)%26+65); 
       else
       res+=char((( p[i]-'a')*key)%26+97); 
    //   char(int(text[i]+key-65)%26 +65)
    }
    return res; 
}
string decrypt(string c, int key){
    string res = ""; 
    key = modInverse(key, 26); 
    for(int i =0;i<c.size();i++){
           if (isupper(c[i]))
       res+=char((( c[i]-'A')*key)%26+65); 
       else
       res+=char((( c[i]-'a')*key)%26+97); 
    //   char(int(text[i]+key-65)%26 +65)
    }
    return res; 
    
}

int main()
{
//  cout<<  modInverse(5,26); to find multiplicative modulo inverse 
// The actual implementation goes on how we take input 
 string p ; 
 cin>>p; 
 int key ; 
 cin>>key; 
 // keys are selective in multiplicative cipher 
 // key and 26 should be coprime 
 while(1){
     if(__gcd(key,26)==1)
     break;
    
     cout<<"You have not chosen a correct key. Please enter a one to one key "; 
     cin>>key; 
   
 }
 // Now multiplicative cipher code begin 
cout<< encrypt(p ,key)<<endl; 
string c = encrypt(p,key); 
cout<<decrypt(c, key); 
  
    return 0;
}
