#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
	
int read_in();//����������,������ɶ�� 
int main_p();
int ac_m();
int main();
char chioce_m;

int main(void)
{
	while(chioce_m!='q')//��ѭ�����ð�q�˳� 
	{
		main_p();
		chioce_m=getch();//ץȡѡ�� 
		if(islower(chioce_m) || isdigit(chioce_m)) 
		{
			switch(chioce_m)
			{
				case '1'://����ѡ�� 
					printf("Enter Activation\nnow loading!\n");
					//system("notepad %cd%\\test.txt");//�����Ƿ�ΪСд�����֣�ֻ����Сд�����֣���\\ת��һ��\Ҫ��cmd����ʶ·��
					Sleep(2000);
					system("cls"); 
					ac_m();
					continue;
				case '2':
					printf("the 2\nnow loading!\n");
					Sleep(2000);
					system("cls");
					continue;
				case '3':
					printf("Instructions loading!\n");
					Sleep(2000);
					read_in();
					continue;
				case 'q':
					printf("exit!Thank for used this!\n");
					Sleep(2000);
					continue;
				default:
					printf("error\nnow return main menu\n");
					Sleep(2000);
					system("cls");
					continue;
			}
		} 
		else
		{ 
			printf("Just lower word\n");
			Sleep(2000);
			system("cls");	
		}
	}
}

int main_p()//���˵���ӡ 
{
	printf("=======================\n");
	printf("=    Mead By Wei      =\n");
	printf("=======================\n");
	printf("\n");
	printf("=======================\n");
	printf("=      Choice mode    =\n");
	printf("=  1.Activation mode  =\n");
	printf("=      2.fix mode     =\n");
	printf("= 3.Read Instructions =\n");
	printf("=======================\n");
	printf("\n");
	printf("Please enter num 1,2,3 or q exit:\n");	
}
int ac_m()//����� 
{	
	char win7_key="win7_key";
	char win10_ent="win10_ent";
	char win10_pro="win10_pro";
	while(chioce_m!='q')
	{
		printf("===========================\n");
		printf("=which language you os is?=\n");
		printf("=        1.Japanese       =\n");
		printf("=        2.Chinese        =\n");
		printf("===========================\n");
		printf("\n");
		printf("Please enter num 1,2 or r to main menu q to exit:\n");
		chioce_m=getch();
		if(islower(chioce_m) || isdigit(chioce_m)) 
		{
			switch(chioce_m)
			{
				case '1':
					printf("Now Activation! Please wait.\n");
					system("powershell -ExecutionPolicy bypass  -File %cd%\\auto-activation-jp.ps1 -win7 %c -win10ent %c -win10_pro%c",win7_key,win10_ent,win10_pro);//��\\ת��һ��\����jp������� 
					Sleep(2000);
					system("cls"); 
					continue;
				case '2':
					printf("Now Activation! Please wait.\n");
					system("powershell -ExecutionPolicy bypass  -File %cd%\\auto-activation-cn.ps1 -win7 %c -win10ent %c -win10_pro%c",win7_key,win10_ent,win10_pro);//��\\ת��һ��\����jp�������  
					Sleep(2000);
					system("cls"); 
					continue;
				case 'r':
					printf("Return main menu!\n");
					Sleep(2000);
					system("cls");
					main();
					continue;
				case 'q':
					printf("exit!Thank for used this!\n");
					Sleep(2000);
					exit(0);
				default:
					printf("Enter error\n");
					Sleep(2000);
					system("cls");
					continue;
			}
		} 
	}
}
int read_in()
{
	system("cls");
	printf("This source code i had already put in me github.\n");
	printf("If have bug and any Usage problems any advise Please Contact me.\n");
	printf("Email: mail\n");
	printf("Phone: p");
	printf("Github: https://github.com/Ms-V\n");
	printf("Source code: https://github.com/Ms-V/powershell/tree/master/allinone");
	printf("\n");
	printf("Enter any return main menu\n");
	getch();
	printf("loading main menu");
	Sleep(2000);
	system("cls");
}


