#include <stdio.h>
#include <stdlib.h>
int main(void)

{


	printf("                  輸出整個陣列的值               \n");
	printf("結果：\n");

    int *p51[4];

    int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int i; 

    p51[0]=array[0];

    p51[1]=array[1];

    p51[2]=array[2];

    p51[3]=array[3];



    for (i=0; i<3; i++)

       printf("%d   ", *(p51[0]+i));

       printf("\n");

	   

    for (i=0; i<3; i++)

       printf("%d   ", *(p51[1]+i));

       printf("\n");

       

    for (i=0; i<3; i++)

       printf("%d   ", *(p51[2]+i));

       printf("\n");   

    

	for (i=0; i<3; i++)

       printf("%d   ", *(p51[3]+i));

       printf("\n");

    

    system("pause"); 

    return 0; 

}
