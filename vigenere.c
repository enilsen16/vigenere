#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
  if (argv[1] == NULL)
    {
      printf("Please provide a word for the key\n");
      return 1;
    }
  string k = argv[1];
  string p;
  if (argc == 2)
    {
      for ( int x = 0; x < strlen(k); x++ )
        {
          if (!isalpha(argv[1][x]))
          {
            printf("Please enter only charecters\n");
            return 1;
          }
        }
      printf("What message would you like to encrypt?\n");
      p = GetString();
    }
  else
    {
      printf("Please only enter one word as the key\n");
      return 1;
    }

  int key[strlen(k)-1];
  for (int j = 0, l = strlen(k); j < l; j++)
    {
      if (isupper(k[j]))
        {
          int L = k[j];
          key[j] = L - 65;
        }
      else if (islower(k[j]))
        {
          int l = k[j];
          key[j] = l - 97;
        }
      }
  int j = 0;
  for (int i = 0, h = strlen(p); i < h; i++)
    {
      //Increment the array if the charecter is A-z
      //If not, print the charecter
      //Use cesar to correctly insert the new ciphered charecters
      //Print the new message
      if (isalpha(p[i]))
        {
          if (isupper(p[i]))
          {
             int m = j % (strlen(k));
             int L = p[i];
             int v = L + key[m];
             if (v > 90)
            {
              int num = v - 65;
              int new_num = num % 26;
              v = new_num + 65;
            }
            char c = v;
            printf("%c", c);
            j++;
          }
          else if (islower(p[i]))
            {
              int m = j % (strlen(k));
              int l = p[i];
              int v = l + key[m];
              if (v > 122)
                {
                  int num = v - 97;
                  int new_num = num % 26;
                  v = new_num + 97;
                }
             char c = v;
             printf("%c", c);
            j++;
            }
        }
      else
        {
          printf("%c",p[i]);
        }

    }
    printf("\n");
  }
