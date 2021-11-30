#include<stdio.h>
#include"my_mat.h"

int main()
{


    char chosen_program='A';
    int mat[10][10]={{0}};


    while(chosen_program!='D')
    {
        scanf("%c",&chosen_program);

        if (chosen_program == 'A'){
            make_mat(mat);
        }

        if (chosen_program == 'B'){
            int x,y;
            scanf("%d",&x);
            scanf("%d",&y);
        
            Route(x, y,mat);
        }

        if (chosen_program == 'C'){
            int x,y;
            scanf("%d",&x);
            scanf("%d",&y);
            printf("%d\n", short_Route(x, y, mat));
        }
    }

    return 0;
}


