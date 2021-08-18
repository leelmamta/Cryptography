#include <iostream>
#include<algorithm>
using namespace std;

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
string encrypt(string p , int a, int b){
    string res = ""; 
    for(int i =0;i<p.size();i++){
           if (isupper(p[i]))
       res+=char((( p[i]-'A')*a+b)%26+65); 
       else
       res+=char((( p[i]-'a')*a+b)%26+97); 
    //   char(int(text[i]+key-65)%26 +65)
    }
    return res; 
}
string decrypt(string c, int a, int b){
    string res = ""; 
    a = modInverse(a, 26); 
    for(int i =0;i<c.size();i++){
           if (isupper(c[i]))
       res+=char(a*(( c[i]-'A')-b)%26+65); 
       else
       res+=char(a*(( c[i]-'a')-b)%26+97); 
    //   char(int(text[i]+key-65)%26 +65)
    }
    return res; 
    
}

int main()
{
    // c = (ap+b)%26; 
    // p = a inverse(c-b)%m; 
    
    string p ; 
    cin>>p ; 
    int a, b ;
    cin>>a>>b; 
    // keys are selective in multiplicative cipher 
 while(1){
     if(__gcd(a,26)==1)
     break;
     cout<<"You have not chosen a correct key. Please enter a one to one key "; 
     cin>>a; 
   
 }
 // Now multiplicative cipher code begin 
cout<< encrypt(p ,a,b)<<endl; 
string c = encrypt(p,a,b); 
cout<<decrypt(c, a,b); 
  
    

    return 0;
}
