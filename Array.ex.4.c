#include <stdio.h>
int main()
{
  int u[3][3],v[3][3],w[3][3],r,c;

  for (r=0;r<3;r++)
  {
      for(c=0;c<3;c++)
      {
          printf("Enter value to the num [%d][%d]:",r,c);
          scanf("%d",&u[r][c]);
      }
      printf("\n");
  }

 printf("U Metrix \n");
  for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)
        {
            printf("%d  ",u[r][c]);
        }
         printf("\n");
    }
  printf("\n");

  for (r=0;r<3;r++)
  {
      for(c=0;c<3;c++)
      {
          printf("Enter value to the num [%d][%d]:",r,c);
          scanf("%d",&v[r][c]);
      }
      printf("\n");
  }

 printf("V Metrix \n");
  for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)
        {
            printf("%d  ",v[r][c]);
        }
         printf("\n");
    }
    printf("\n");

    for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)
        {
            w[r][c]=u[r][c]+v[r][c];

        }

    }

     printf("W Metrix \n");
  for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)
        {
            printf("%d   ",w[r][c]);
        }
         printf("\n");
    }


}
