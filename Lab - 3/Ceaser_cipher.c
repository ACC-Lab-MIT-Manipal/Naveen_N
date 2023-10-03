#include<stdio.h>
#include<string.h>

int main()
{
    char *message1, *message2, ch;
    int i, key, choice;


        printf("Enter a message to encrypt: ");
        gets(message1);
        printf("\n Enter the key: ");
        scanf("%d", &key);
        for(i = 0; message1[i] != '\0'; ++i)
        {
            ch = message1[i];
            if(ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;
                if(ch > 'z')
                    {
                        ch = ch - 'z' + 'a' - 1;
                    }
                message1[i] = ch;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;
                if(ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }
                message1[i] = ch;
            }
       }
       printf("Encrypted message: %s", message1);

        printf("Enter a message to decrpyt: ");
        gets(message2);
        printf("Enter the key: ");
        scanf("%d", &key);
       for(i = 0; message2[i] != '\0'; ++i)
       {
           ch = message2[i];
           if(ch >= 'a' && ch <= 'z')
           {
               ch = ch - key;
               if(ch < 'a')
               {
                   ch = ch + 'z' - 'a' + 1;
               }
               message2[i] = ch;
           }
           else if(ch >= 'A' && ch <= 'Z')
           {
               ch = ch - key;
               if(ch < 'A')
               {
                   ch = ch + 'Z' - 'A' + 1;
               }
               message2[i] = ch;
           }
       }

       printf("Decrypted message: %s", message2);


return 0;
}
