#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  string s=get_string("enter your string:");
  int chars=0,words=0,sent=0;
  int n=strlen(s);
  for(int i=0;i<n;i+=1)
  {
    if(isalpha(s[i]))
        chars+=1;
    else if(isspace(s[i]))
        words+=1;
    else if(s[i]=='!'||s[i]=='?'||s[i]=='.')
    {
         sent+=1;
    }
  }
  words++;
  float grade = 0.0588*100 * ((float)chars/(float)words) - 0.296*100 *( (float)sent/(float)words )- 15.8;
   if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

}
