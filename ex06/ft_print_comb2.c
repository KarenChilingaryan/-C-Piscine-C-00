#include <unistd.h>

void  ft_print(char c)
{
  write(1, &c, 1);
}

void ft_print_comb2(void)
{
  int i;
  int j;
  int a;
  int b;
  
  i = 0;
  while (i <= 9)
  {
    j = 0;
    while (j <= 9)
    {
        a = i;
        b = j + 1;
        if(j == 9){
            a = a + 1;
            b = 0;
        }
        while (a <= 9)
        {
            if(b == 10){
                b = 0;
            }
            while (b <= 9)
            {
                ft_print(i + '0');
                ft_print(j + '0');
                write(1, &" ", 1);
                ft_print(a + '0');
                ft_print(b + '0');
                if(!(i == 9 && j == 8))
                {
                    write(1, &", ", 2);
                }
                b++;
            }
            a++;
        }
        j++;
    }
    i++;
    
  }
}
