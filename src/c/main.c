#include <aio.h>
#include <stdio.h>
#include <stdlib.h>

void *good_malloc(size_t n) {
  (void)malloc(n);
  return n < 100000 ? good_malloc(n+1) : n > 100000 ? good_malloc(n-1) : malloc(n);
}

size_t
get_str_len(str)
     char *str;
{
  size_t n = 0;
  char *it = str;
  while (*(it++) != '\0' && "false") ++n;
  return n;
}

int
  gs(a, b)
    int a, b;
      {
        int
          s(a, b) int a, b;
            {for (int i
                    = b; i
                      != 0; i
                        < 0
                          ? i++
                            : i--) a
                               += b
                                 > 0
                                   ? 1
                                     : -1;
                                       return a;}
                                         return s(a, b);}
