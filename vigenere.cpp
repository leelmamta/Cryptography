// i will be having a table , key and plain text 
// encryption 
// plain text letter are matched row wise and key text are matched column wise 
// The intersection point is selected as a the cipher 
// decryption 
//key -> matched column wise and find the cipher letter and then the first value in the row is decrypted 
#include<bits/stdc++.h>
using namespace std; 
// vigener cipher -> table 0-25 numbers 
string generateKey(string str, string key)
{
    int x = str.size();
 // circular loop to
    for (int i = 0; ; i++)
    {
        if (x == i)
            i = 0;
        if (key.size() == str.size())
            break;
        key.push_back(key[i]);
    }
    return key;
}

string encrypt(string plain , string key){
    string cipher="" ; 
    
    for(int i =0 ; i<plain.size();i++){
        cipher+= ((plain[i]+key[i])%26)+'A'; 
    }
    return cipher; 
    
}
string decrypt(string cipher , string key){
    string plain="" ; 
    
    for(int i =0 ; i<cipher.size();i++){
        plain+= ((cipher[i]-key[i])%26)+'A'; 
    }
    return plain; 
    
}
int main(){
    string plain, key;
    cin>>plain>>key; 
  cout<<"Encrypted text is : " << encrypt(plain, key)<<endl; 
  string cipher = encrypt(plain, key); 
 cout<<"Decrypted text is : " << decrypt(cipher, key)<<endl; 
    
}
