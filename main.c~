#include <stdio.h>
#include <stdlib.h>
#define x 'X'
#define o 'O'
void Linha()/* Print the lines*/
{
	int i = 0;
	while(i++<8)
		printf("_");
	
	printf("\n");
}
void Coluna(char a[][3],int n)/* Print the Columns*/
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
void Most(char a[][3])/* Show the table*/
{
	int i = 0;
	Coluna(a,i++);
	Linha();
	Coluna(a,i++);
	Linha();
	Coluna(a,i);
}
int Cheio(char a[][3])/* Check if table is full*/
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
int ImpedirLinhas(char a[][3])/* AI- Doesn't let the player complete lines*/
{
	int i = 0;
	int j = 0;
	int vazios = 0;
	int xs = 0;
	int cake = 0;
	int coord = 0;
	for(i=0; i<3; i++)
	{	vazios = 0;
	cake =0;
		xs = 0;
		coord = 0;
		for(j= 0; j<3; j++)
		{
			if(a[i][j] == ' ')
			{
			vazios++;
			coord = j;
			}
			if(a[i][j] == x)
				xs++;
		}
		if(vazios==1 && xs == 2)
		{
			a[i][coord]=o;
			cake = 1;
			return cake;
			}
	}
	return cake;
	
}
int JogarLinhas(char a[][3])/* AI- Play in a line if there's only 1 left*/
{
	int i = 0;
	int j = 0;
	int vazios = 0;
	int os = 0;
	int cake = 0;
	int coord = 0;
	for(i=0; i<3; i++)
	{	vazios = 0;
	cake =0;
		os = 0;
		coord = 0;
		for(j= 0; j<3; j++)
		{
			if(a[i][j] == ' ')
			{
			vazios++;
			coord = j;
			}
			if(a[i][j] == o)
				os++;
		}
		if(vazios==1 && os == 2)
		{
			a[i][coord]=o;
			cake = 1;
			return cake;
			}
	}
	return cake;
	
}
int JogarColunas(char a[][3])/* AI- Play in a column if there's only 1 left*/
{
	int i = 0;
	int j = 0;
	int vazios = 0;
	int os = 0;
	int cake = 0;
	int coord = 0;
	for(j=0; j<3; j++)
	{	vazios = 0;
		cake =0;
		os = 0;
		coord = 0;
		for(i= 0; i<3; i++)
		{
			if(a[i][j] == ' ')
			{
			vazios++;
			coord = i;
			}
			if(a[i][j] == o)
				os++;
		}
		if(vazios==1 && os == 2)
		{
			a[coord][j]=o;
			cake = 1;
			return cake;
			}
	}
	return cake;
	
}
int ImpedirColunas(char a[][3])/* AI- Doesn't let the player complete columns*/
{
	int i = 0;
	int j = 0;
	int vazios = 0;
	int xs = 0;
	int cake = 0;
	int coord = 0;
	for(j=0; j<3; j++)
	{	vazios = 0;
		cake =0;
		xs = 0;
		coord = 0;
		for(i= 0; i<3; i++)
		{
			if(a[i][j] == ' ')
			{
			vazios++;
			coord = i;
			}
			if(a[i][j] == x)
				xs++;
		}
		if(vazios==1 && xs == 2)
		{
			a[coord][j]=o;
			cake = 1;
			return cake;
			}
	}
	return cake;
	
}
int JogarDiagonal(char a[][3])/* AI- Complete the diagonals if there's only 1 left*/
{
	
	int n = 0;
	int os = 0;
	int vazios = 0;
	int coord = 0;
	switch(a[0][0])
	{
		case o:
			os++;
			break;
		case ' ':
			vazios++;
			coord = 1;
			break;
		default:
			break;
	}
	switch(a[1][1])
	{
		case o:
			os++;
			break;
		case ' ':
			vazios++;
			coord = 2;
			break;
		default:
			break;
	}
	switch(a[2][2])
	{
		case o:
			os++;
			break;
		case ' ':
			vazios++;
			coord = 3;
			break;
		default:
			break;
	}
	if(vazios == 1 && os == 2)
	{	
		switch(coord)
		{
			case 1:
				a[0][0] = o;
				break;
			case 2:
				a[1][1] = o;
				break;
			case 3:
				
				a[2][2] = o;
				break;
			default:
				break;
		}
		n= 1;
		return n;
	}
	n = 0;
	os = 0;
	vazios = 0;
	coord = 0;
	switch(a[2][0])
	{
		case o:
			os++;
			break;
		case ' ':
			vazios++;
			coord = 4;
			break;
		default:
			break;
	}
	switch(a[1][1])
	{
		case o:
			os++;
			break;
		case ' ':
			vazios++;
			coord = 2;
			break;
		default:
			break;
	}
	switch(a[0][2])
	{
		case o:
			os++;
			break;
		case ' ':
			vazios++;
			coord = 5;
			break;
		default:
			break;
	}
	if(vazios == 1 && os == 2)
	{	
		switch(coord)
		{
			case 4:
				a[2][0] = o;
				break;
			case 2:
				a[1][1] = o;
				break;
			case 5:
				case 1:
				a[0][2] = o;
				break;
			default:
				break;
		}
		n= 1;
		return n;
	}
	
	
		
	
	
	return n;
}

int ImperdirDiagonal(char a[][3])/* AI- Doesn't let the player complete diagonals*/
{
	
	int n = 0;
	int xs = 0;
	int vazios = 0;
	int coord = 0;
	switch(a[0][0])
	{
		case x:
			xs++;
			break;
		case ' ':
			vazios++;
			coord = 1;
			break;
		default:
			break;
	}
	switch(a[1][1])
	{
		case x:
			xs++;
			break;
		case ' ':
			vazios++;
			coord = 2;
			break;
		default:
			break;
	}
	switch(a[2][2])
	{
		case x:
			xs++;
			break;
		case ' ':
			vazios++;
			coord = 3;
			break;
		default:
			break;
	}
	if(vazios == 1 && xs == 2)
	{	
		switch(coord)
		{
			case 1:
				a[0][0] = o;
				break;
			case 2:
				a[1][1] = o;
				break;
			case 3:
				
				a[2][2] = o;
				break;
			default:
				break;
		}
		n= 1;
		return n;
	}
	n = 0;
	xs = 0;
	vazios = 0;
	coord = 0;
	switch(a[2][0])
	{
		case x:
			xs++;
			break;
		case ' ':
			vazios++;
			coord = 4;
			break;
		default:
			break;
	}
	switch(a[1][1])
	{
		case x:
			xs++;
			break;
		case ' ':
			vazios++;
			coord = 2;
			break;
		default:
			break;
	}
	switch(a[0][2])
	{
		case x:
			xs++;
			break;
		case ' ':
			vazios++;
			coord = 5;
			break;
		default:
			break;
	}
	if(vazios == 1 && xs == 2)
	{	
		switch(coord)
		{
			case 4:
				a[2][0] = o;
				break;
			case 2:
				a[1][1] = o;
				break;
			case 5:
				case 1:
				a[0][2] = o;
				break;
			default:
				break;
		}
		n= 1;
		return n;
	}
	
	
		
	
	
	return n;
}
int LinhasV(char a[][3],char c)/* Verifies the lines*/
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

int ColunasV(char a[][3],char c)/* Verifies the columns*/
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


int DiagonalV(char a[][3], char c)/* Check if there's a complete diagonal*/
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

int Owin(char a[][3])/*Check if O wins*/
{
	int n = 0;
	if(DiagonalV(a, o)|| ColunasV(a, o)== 3 || LinhasV(a, o)== 3)
	{
	
		n=1;
		return n;
	}
		
	return n;
}
int Xwin(char a[][3])/*Check if X wins*/
{
	int n = 0;
	if(DiagonalV(a, x) || ColunasV(a, x)== 3 || LinhasV(a, x)== 3)
	{
	
		n=1;
		return n;
	}
		
	return n;
}
int livre(char a[][3],int x1, int x2)/*Check if the space is clear*/
{
	if(a[x1][x2] != ' ')
		return 0;
	return 1;
}
void Jogar(char a[][3],int x1, int x2)/*User's move*/
{
	if(x1>=0 && x1<3 && x2>=0 && x2<3 && livre(a,x1,x2))
	{
		a[x1][x2] = x;
		return;
	
	}
	scanf("%d %d", &x1, &x2);
	Jogar(a, x1, x2);
	
	
}

void FirstFreeSpot(char a[][3],char cpu)/*Plays on the first free spot called in an emergency*/
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
int JogarCPU(char a[][3], int x1, int x2,int num,int b)/*CPU Plays*/
{
	

	
	if(x1>=0 && x1<3 && x2>=0 && x2<3 && livre(a,x1,x2))
	{
		a[x1][x2] = o;
		return;
	
	}
	if(num== 0)
	{
		if(b<=2 && b<5)
		{
		switch(b)
		{
		case 2:
			if(JogarLinhas(a))
				return 0;
			if(JogarColunas(a))
				return 0;
			if(ImpedirLinhas(a))
				return 0;

			if(ImpedirColunas(a))
				return 0;
			break;
		case 3:
			if(JogarDiagonal(a))
				return 0;

			if(JogarLinhas(a))
				return 0;
			if(ImperdirDiagonal(a))
				return 0;

			if(ImpedirLinhas(a))
				return 0;
			break;
		case 4:
			if(JogarDiagonal(a))
				return 0;

			if(JogarColunas(a))
				return 0;
			if(ImperdirDiagonal(a))
				return 0;

			if(ImpedirColunas(a))
				return 0;
			break;
		}
		
		}
		if(num == 0 && b==5)
	{
		if(JogarLinhas(a))
				return 0;

		if(JogarColunas(a))
				return 0;
		if(JogarDiagonal(a))
				return 0;
		if(ImpedirLinhas(a))
				return 0;

		if(ImpedirColunas(a))
				return 0;
		if(ImperdirDiagonal(a))
				return 0;
	
	}
		
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
	
	
	return JogarCPU(a, rand_num, rand_num1,num, b);/*Recursive :O*/
	
}


int main()
{
	printf("\033[2J");/*Clear console*/
	int x1,y1;
	int b= 99,c = 99;
	char tab[3][3] = {{' ',' ',' '},{' ', ' ',' '},{' ', ' ',' '}};
	
	
	
	
	do
	{
		printf("1. Begginer Mode\n");
			printf("\t 1.CPU Start\n");
			printf("\t 2.You Start\n");
		printf("2. Advanced Mode 1\n");
				printf("\t 1.CPU Start\n");
				printf("\t 2.You Start\n");
		printf("3. Advanced Mode 2\n");
				printf("\t 1.CPU Start\n");
				printf("\t 2.You Start\n");
		printf("4. Advanced Mode 3\n");
				printf("\t 1.CPU Start\n");
				printf("\t 2.You Start\n");
		printf("5. Expert Mode\n");
			printf("\t 1.CPU Start (Impossible  to win :P)\n");
			printf("\t 2.You Start\n");
		scanf("%d %d", &b, &c);
	}while(b > 5 && b<0 && c>2 && c<1 );
	
	
	
	
	
	
	
	
	
	do{
	if(c == 1)
	{
	printf("\033[2J");
	 JogarCPU(tab, 99,99,0, b);
	if(Cheio(tab) == 9 || Owin(tab))
	{
		break;
	}
	Most(tab);
	Jogar(tab, 99, 99);
	Most(tab);
	
	}
	else
	{
	printf("\033[2J");
	Most(tab);
	Jogar(tab, 99, 99);
	if(Cheio(tab) == 9 || Xwin(tab))
	{
		break;
	}
	printf("\033[2J");
	Most(tab);
	JogarCPU(tab, 99,99,0, b);
	if(Cheio(tab) == 9 || Owin(tab))
	{
		break;
	}
	
	
		
	}
	
	
	
	}while(Xwin(tab) != 1 && Cheio(tab) != 9 && Owin(tab) != 1);
	
	if(Owin(tab)){
		printf("Derrota\n");
		return 0;}
	if(Xwin(tab)){
		printf("Vitoria\n");
		return 0;}
	if(Cheio(tab) == 9)
		printf("Empate\n");
	
	
	
	
	
	return 0;
	
	
}
