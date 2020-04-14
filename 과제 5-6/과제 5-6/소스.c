#include<stdio.h>
#pragma warning (disable:4996)
#define COUNT 3
//selection solt

int swap(int a, int b)
{
	int temp;

	temp = b;
	b = a;
	a = temp;
 
}

int main()
{
	int i,j, score[3],indexMin;

	printf("> Enter score of three judges\n> ");
    scanf("%d %d %d", &score[0], &score[1], &score[2]);

    for (int i = 0; i < COUNT - 1; i++)
    {
    
        indexMin = i;
        for (int j = i + 1; j < COUNT; j++)
        {
            if (score[j] < score[indexMin])
            {   
                indexMin = j;
            }
        }

        swap(score[indexMin], score[i]);
       
    }

    printf("%d", score[1]);

}