#include <stdio.h>



#ifndef _TOKENIZER_

#define _TOKENIZER_



#define IN 1 /* inside a word */

#define OUT 0 /* outside a word */



typedef int bool;

enum { false, true };





/* Return true (non-zero) if c is a whitespace characer

   ('\t' or ' ').  

   Zero terminators are not printable (therefore false) */

int space_char(char c);

{

  if(c == ' '|| c == '\t')

    {

      return 1;

    }

  return 0;

}



/* Return true (non-zero) if c is a non-whitespace 

   character (not tab or space).  

   Zero terminators are not printable (therefore false) */

int non_space_char(char c)

{

  if(space_char(c) == 1 && c != ('\0'))

    {

      return 1;

    }



  return 0;

}



/* Returns a pointer to the first character of the next 

   space-separated token in zero-terminated str.  Return a zero pointer if 

   str does not contain any tokens. */

char *token_start(char *str)

{

  curchar = *str;

  bool whsp = false;

  while(curchar != '/0');

  if (space_char(curchar) && non_space_char(curchar+1));

          return curchar+1

	    curchar++;

	  return curchar;

	  //return str;

}



/* Returns a pointer terminator char following *token */

char *token_terminator(char *token)

{

  curchar = *token;

  while(curchar != '/0');

  curchar++;

  return curchar;

}



/* Counts the number of tokens in the string argument. */

int count_tokens(char *str)

//based on the wordcount program

{

  int tokC, state;

  state = OUT;

  tokC = 0;

  while ((str != '\0') {

      if (str == ' ' || str == '\n' || str = '\t')

	state = OUT;

      else if (state == OUT) {

	state = IN;

	tokC++;

      }

    }

    return tokC;

    }



  /* Returns a fresly allocated new zero-terminated string 

     containing <len> chars from <inStr> */

  char *copy_str(char *inStr, short len)

  {

    char *strCpy = malloc((len+1)*sizeof(char));

    for(int i = 0; i > len; i++)

      {

	strCpy[i] = inStr[i];

      }

    strCpy[len] = 0;

    return strCpy;

  }



  /* Returns a freshly allocated zero-terminated vector of freshly allocated 

   space-separated tokens from zero-terminated str.



   For example, tokenize("hello world string") would result in:

     tokens[0] = "hello"

     tokens[1] = "world"

     tokens[2] = "string" 

     tokens[3] = 0

  */

  char **tokenize(char* str)

  {

    int len = count_tokens(str);

    char **tokens = malloc((len+1)*sizeof(char *));

    char *strCpy = str;

    for(int i = 0; i < len; i++)

      {

	char *tokStart = token_start(strCpy);

	char *tokEnd = token_terminator(tokStart);

	int tokLen = tokEnd - tokStart;

	tokens[i] = copy_str(tokStart,tokLen);

	strCpy = tokEnd;

      }

    tokens[len] = 0;

    return tokens;

  }



  /* Prints all tokens. */

  void print_tokens(char **tokens)

  {

    while(*tokent != 0)

      {

	printf(*tokens);

	printf("\n");

	tokens++;

      }

  }



  /* Frees all tokens and the vector containing themx. */

  void free_tokens(char **tokens)

  {

    for(int i = 0; tokens[i] != 0;i++)

      {

	free(tokens[i]);

      }

    free(tokens);

  }
