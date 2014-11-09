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
      //Convert each key to its ASCII value
      //Use the Cesar code to convert it to the correct int in the alphabet
      //Stick it in the array recursively
      //Store the array
    }
    printf("\n");
  for (int i = 0, h = strlen(p); i < h; i++)
    {
      //Increment the array if the charecter is A-z
      //If not, print the charecter
      //Use cesar to correctly insert the new ciphered charecters
      //Print the new message
      if (isalpha(k[i]))
        {


        }

    }
  }
