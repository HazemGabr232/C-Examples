
	
#include<stdio.h>
#include<string.h>
 
int main(){
    char msg[] = "hello, world! ";
    char key[] = "robot";
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
 
    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];
 
    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
    //encryption
    for(i = 0; i < msgLen; ++i){
	if ((msg[i] >= 'a') &&(msg[i]<= 'z'))
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'a';
     
        else if ((msg[i] >= 'A') &&(msg[i]<= 'Z'))
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
     
	else 
	encryptedMsg[i] = msg[i] ;
     }
    encryptedMsg[i] = '\0';
 
    //decryption
    for(i = 0; i < msgLen; ++i)
	if ((encryptedMsg[i] >= 'A') &&(encryptedMsg[i]<= 'Z'))
           decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';
 	else if ((encryptedMsg[i] >= 'a') &&(encryptedMsg[i]<= 'z'))
           decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) +14) % 26) + 'a';
	else
	   decryptedMsg[i] = encryptedMsg[i] ;
 
    decryptedMsg[i] = '\0';
 
    printf("Original Message: %s", msg);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", encryptedMsg);
    printf("\nDecrypted Message: %s", decryptedMsg);
 
    return 0;
}
