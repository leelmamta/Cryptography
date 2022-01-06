# Cryptography - secret writing 🖥️

## **What is cryptography ?**
It is a technique for sending secure messaging.
  'or' 
process of converting ordinary plain text into cypher text and vice-versa.

![Cryptography_components](https://user-images.githubusercontent.com/69026100/127864966-64d1f0ab-64bf-4626-8ef0-89348c31d991.png)

#### The sender uses an encryption algorithm , and the receiver uses a decryption algorithm 
### What is Key ??
A 	**key** is a number (value) that the cipher , as an algorithm , operates on. 
```
In cryptography ,the encryption /decryption algorithms are public; the keys are secret. 
```
## TYPES OF cryptography? 
- Symmetric-key Cryptography 
- Asymmetric Cryptography
## Symmetric-key Cryptography 
In Symmetric-key cryptography , the same key is used by the sender (for encryption) and the receiver (for decryption) . The key is shared. 

![Symmetric_key_cryptography](https://user-images.githubusercontent.com/69026100/127867820-73cc5c9b-bffd-4aea-bafe-dd1519953793.png)

In symmetric-key cryptography , the algorithm used for decryption is the inverse of algorithm used for encryption. This means that  if the encryption algorithm uses a combination of addition and multiplication , the decryption algorithm uses a combination of division and subtraction. 
`
Symmetric-key cryptography are efficient : it takes less time to encrypt a message using symmetric key algorithm than it takes to encrypt using the public-key algorithm 
`


## Substitution Cipher -> Monoalphabatic cipher 
Placing letter with another letter based on some key 
Cipher text  = (P+key)%26 -> P = character by character adding of the key into the plain text will give us cipher text 
## Vigener Polyalphabatic Cipher 
In this we use alphabates table matrix Where intital row, column start with A and next B , C and so on. Here We use Key -> Word , if length of the key word is small then key itself is repeated. 
Encryption -> (P[i]+k[i])%26 . 
Decryption -> (p[i]-k[i]+26)%26

In this cipher there is some degree rotation of the Cipher 


## One Time Pad -> 
In this we use a random key. AND rest is similar to the Substitution Cipher, i.e., C[i] = (P[i]+k[i])%26
If used properly, this is the strongest possible encryption scheme. 
Since the content of the One-Time Pad is completely random, it becomes mathematically impossible to perform any sort of cryptanalysis on it.This method has been used in history by the military, but it isn't practical because of the difficulty of distributing the one-time pads.




  


