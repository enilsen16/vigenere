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
      printf("What message would you like to encrypt?\n");
      p = GetString();
    }
  else
    {
      printf("Please only enter one word as the key\n");
      return 1;
    }
  // for (int j = 0, l = strlen(k); j < l; j++)
  //   {
  //
  //   }
  // for (int i = 0, h = strlen(p); i < h; i++)
  //   {
  //
  //   }
  }
