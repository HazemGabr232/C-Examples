#include <stdio.h>
#define MAXLINE 1000 // max input line length
#define N 8

// detab: replaces tabs with spaces, assuming a tab every N columns

int getline(char line[], int maxline);
void detab(char detabbed[], char tabbed[], int ntab);


// reverse input one line at time
int main()
{
  int len;
  char line[MAXLINE];
  char dtline[MAXLINE];

  while ((len = mygetline(line, MAXLINE)) > 0) {
    mydetab(dtline, line, N);
    printf("%s", dtline);
  }
}

void detab(char t[], char s[], int ntab)
{
  int i = 0;
  int j = 0;

  while (s[i] != '\0') {
    if (s[i] != '\t')
      t[j++] = s[i++];
    else {
    ++i;
    t[j++] = ' ';
   while ((j % ntab) != 0)
     t[j++] = ' ';
    }
  }
  t[j] = '\0';
}


int getline(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c =='\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}
