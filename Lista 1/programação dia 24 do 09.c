#include <stdio.h>
int main()
{
    int i, j, matriz[3][3];
    for(i = 0;i< 3; j++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento a %d%d: ", i+1,j+1)
            scanf("%d", &matriz[i][j])
        }
    }
    printf("Matriz digitada foi: \n")
    for(i = 0;i< 3; j++)
    {
        for (j = 0; j < 3; j++)
        {        
printf("O elemento a%d%d da matriz e: %d\n",i+1,j+1,matriz[i][j]);
  }
}
return 0;
}