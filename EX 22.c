#include

int main()

{

    int rows;

    int i,j;

    scanf("%d",&rows);

    for(i=1;i<=rows;i++)

    {

        for(j=1;j<=i;j++)

        {

            if(i==1 || i==rows || j==i || j==1)

          {  printf("1 ");   }

    else

    {    printf("0 ");}}

    printf("\n");}

return 0;

}

