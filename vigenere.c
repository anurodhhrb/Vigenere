#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])
{

    if (argc!=2)
    {
        printf("Usage: ./vigenere k \n");
        return 1;
    }

    else
    {
        string g = argv[1];
        for (int x = 0 , n = strlen (g); x < n ; x++)
        {
           if (isalpha (g[x]) == 0 )
           {
               printf("Usage: ./vigenere k \n");
               return 1;

           }

         }
             printf("plaintext:");
             string s = get_string ();
             int t;
             int counter = 0;
             printf("ciphertext: ");
             for (int j = 0 ,n = strlen (s); j < n ; j++ )
             {
                int q = strlen (g);
                if (isalpha (s[j]))
                {
                    t= counter % q ;
                    counter ++;

                if (isupper (s[j]))
                {

                    s[j]= s[j]-65;
                        if (isupper (g[t]))
                        {
                    s[j] = (s[j]+g[t]-65) % 26;

                        }
                    if  (islower (g[t]))
                    {
                        s[j] = (s[j]+g[t]-97) % 26;
                     }
                    s[j] = s[j]+ 65;
                    printf("%c",s[j]);
                }
               if (islower (s[j])) {

                    s[j]= s[j]-97;
                        if (isupper (g[t]))
                        {
                    s[j] = (s[j]+g[t]-65) % 26;

                        }
                    if  (islower (g[t]))
                    {
                        s[j] = (s[j]+g[t]-97) % 26;
                    }
                    s[j] = s[j]+97;
                    printf("%c",s[j]);
               }
            }
            else
       {
           printf("%c", s[j]);
       }

        }
         printf("\n");
    }

}
