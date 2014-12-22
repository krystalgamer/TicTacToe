#include <stdio.h>
#include <stdlib.h>
#define x 'X'
#define o 'O'
void Linha()
{
	int i = 0;
	while(i++<8)
		printf("_");
	
	printf("\n");
}
void Coluna(char a[][3],int n)
{
	int i;
	
	for(i=0; i<=2; i++)
	{
		if(i!=2)
		printf("%c |", a[n][i]);
		else
		printf("%c", a[n][i]);
	
		
	}
	printf("\n");
	
}
void Most(char a[][3])
{
	int i = 0;
	Coluna(a,i++);
	Linha();
	Coluna(a,i++);
	Linha();
	Coluna(a,i);
}
int Cheio(char a[][3])
{
	int i = 0;
	int j = 0;
	int n = 0;
	for(i=0; i<3; i++)
	{
		for(j= 0; j<3; j++)
		{
			if(a[i][j] != ' ')
			{
				n++;
			}
		}
	}
	
	return n;
	
}
int LinhasV(char a[][3],char c)
{
	int i = 0;
	int j = 0;
	int h = 0;
	for(i=0; i<3; i++)
	{
		if(h==3)
			return h;
		h = 0;
		for(j= 0; j<3; j++)
		{
			if(a[i][j] == c)
			{
				h++;
			}
		}
	}
	
	return h;
	
}

int ColunasV(char a[][3],char c)
{
	int i = 0;
	int j = 0;
	int n = 0;
	for(j=0; j<3; j++)
	{
		if(n==3)
			return n;
		n = 0;
		for(i= 0; i<3; i++)
		{
			if(a[i][j] == c)
			{
				n++;
			}
		}
	}
	
	return n;
}


int DiagonalV(char a[][3], char c)
{
	
	int n = 0;
	
	if(a[0][0] == c && a[1][1] == c && a[2][2] == c)
	{
		
		n=1;
		return n;}
	if(a[2][0] == c && a[1][1] == c && a[0][2] == c){
		
		n=1;
		return n;}
	
	return n;
}

int Owin(char a[][3])
{
	int n = 0;
	if(DiagonalV(a, o)|| ColunasV(a, o)== 3 || LinhasV(a, o)== 3)
	{
	
		n=1;
		return n;
	}
		
	return n;
}
int Xwin(char a[][3])
{
	int n = 0;
	if(DiagonalV(a, x) || ColunasV(a, x)== 3 || LinhasV(a, x)== 3)
	{
	
		n=1;
		return n;
	}
		
	return n;
}
int livre(char a[][3],int x1, int x2)
{
	if(a[x1][x2] != ' ')
		return 0;
	return 1;
}
void Jogar(char a[][3],int x1, int x2)
{
	if(x1>=0 && x1<3 && x2>=0 && x2<3 && livre(a,x1,x2))
	{
		a[x1][x2] = x;
		return;
	
	}
	scanf("%d %d", &x1, &x2);
	Jogar(a, x1, x2);
	
	
}

void FirstFreeSpot(char a[][3],char cpu)
{
	int i = 0;
	int j = 0;
	int played = 0;
	for(i=0; i<3; i++)
	{
		
		
		for(j= 0; j<3; j++)
		{
			if(a[i][j] == ' ')
			{
				a[i][j] = cpu;
				played = 1;
				break;
			}
		}
		if(played)
			break;
		
	}
	
	
}
int JogarCPU(char a[][3], int x1, int x2,int num)
{
	

	
	if(x1>=0 && x1<3 && x2>=0 && x2<3 && livre(a,x1,x2))
	{
		a[x1][x2] = o;
		return;
	
	}
	if(num==30)
	{
		
		FirstFreeSpot(a, o);
	
		
		return 0;
	}
	
	
	srand(time(NULL));
	int rand_num = rand() % 3;
	int rand_num1 = rand() % 3;
	
	num++;
	
	
	return JogarCPU(a, rand_num, rand_num1,num);
	
}

int main()
{
	int x1,y1;
	char tab[3][3] = {{' ',' ',' '},{' ', ' ',' '},{' ', ' ',' '}};
	
	
	
	
	int b;
	
	
	//printf("%d\n", Xwin(tab));
	
	
	
	do{
	JogarCPU(tab, 99,99,0);
	if(Cheio(tab) == 9)
	{
		break;
	}
	Most(tab);
	Jogar(tab, 99, 99);
	Most(tab);
	
	
	}while(Xwin(tab) != 1 && Cheio(tab) != 9 && Owin(tab) != 1);
	
	if(Cheio(tab) == 9)
		printf("EMPATE\n");
	if(Owin(tab))
		printf("Derrota\n");
	if(Xwin(tab))
		printf("Vitoria\n");
	
	
	Most(tab);
	
	return 0;
	
	
}
