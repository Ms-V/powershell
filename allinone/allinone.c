#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>
	
 
int main();//���������� 
int main_p();//������ӡ������ 
int ac_m();//��������� 
int fix_m();//�����޸����� 
int read_in();//�������ڴ˳�����
int chose_w();//����ѡ�������

char chioce_m;//ѡ��ȫ�ֱ���
int chose_w_type; 

int main(void)
{
	system("color 0A");//����ɫ 
	while(chioce_m!='q')//��ѭ�����ð�q�˳� 
	{
		main_p();
		chioce_m=getch();//ץȡѡ�� 
		if(islower(chioce_m) || isdigit(chioce_m)) //�ж����룬ֻ�������ֻ���Сд��ĸ 
		{
			switch(chioce_m)
			{
				case '1'://����ѡ�� 
					printf("Enter Activation\nNow loading!\n");
					Sleep(2000);
					system("cls"); 
					ac_m();//����� 
					continue;
				case '2':
					printf("Enter Fix mode\nNow loading!\n");
					Sleep(2000);
					system("cls");
					fix_m();//�޸����� 
					continue;
				case '3':
					printf("Instructions loading!\n");
					Sleep(2000);
					read_in();
					continue;
				case 'q':
					printf("Exit!Thank for used this!\n");
					Sleep(2000);
					continue;
				default:
					chose_w_type=2;//����ѡ���������Ϊ2 
					chose_w();
					continue;
			}
		} 
		else
		{ 
			chose_w_type=1;//����ѡ���������Ϊ1 
			chose_w();
		}
	}
}

int main_p()//���˵���ӡ 
{
	printf("========================\n");
	printf("=     Mead By Wei      =\n");
	printf("========================\n");
	printf("\n");
	printf("========================\n");
	printf("=      Choice  mode    =\n");
	printf("=  1.Activation mode   =\n");
	printf("=      2.fix mode      =\n");
	printf("= 3.About This program =\n");
	printf("========================\n");
	printf("\n");
	printf("Please enter num 1,2,3 or q exit:\n");	
}

int ac_m()//����� 
{	
	char win7_key[30]= "Win7key";//���ּ����� 
	char win10_ent[30]= "Win10entkey";
	char win10_pro[30]= "Win10prokey";
	char office_10[30]= "office10key";
	char office_13[30]= "office13key";
	char office_16[30]= "office16key";
	char all_key[300];//��ʽ�������ַ��� 
	while(chioce_m!='q')
	{
		printf("===========================\n");
		printf("=which language you os is?=\n");
		printf("=        1.Japanese       =\n");
		printf("=        2.Chinese        =\n");
		printf("===========================\n");
		printf("\n");
		printf("Please enter num 1,2 or r return to main menu q to exit:\n");
		chioce_m=getch();
		if(islower(chioce_m) || isdigit(chioce_m)) //�ж����룬ֻ�������ֻ���Сд��ĸ 
		{
			switch(chioce_m) 
			{
				case '1':
					printf("Now Activation! Please wait.\n");
					sprintf(all_key,"powershell -ExecutionPolicy bypass  -File %%cd%%\\auto-activation-jp.ps1 -win7 %s -win10ent %s -win10pro %s -office10 %s -office13 %s -office16 %s",win7_key,win10_ent,win10_pro,office_10,office_13,office_16);//������powershell���룬�ַ���ʽ��һ��װ��һ�� 
					system(all_key);//����cmd��ʼ���� 
					Sleep(2000);
					system("cls"); 
					continue;
				case '2':
					printf("Now Activation! Please wait.\n");
					sprintf(all_key,"powershell -ExecutionPolicy bypass  -File %%cd%%\\auto-activation-cn.ps1 -win7 %s -win10ent %s -win10pro %s -office10 %s -office13 %s -office16 %s",win7_key,win10_ent,win10_pro,office_10,office_13,office_16);//������powershell���룬�ַ���ʽ��һ��װ��һ��
					system(all_key);//����cmd��ʼ���� 
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
					printf("Exit!Thank for used this!\n");
					Sleep(2000);
					exit(0);
				default:
					chose_w_type=2;
					chose_w();
					continue;
			}
		}
		else
		{
			chose_w_type=1;
			chose_w();
		} 
	}
}

int fix_m()
{
	while(chioce_m!='q')
	{
		char proxy_new[50]="script proxy";
		char proxy_old[30]="proxy";
		char set_proxy[200];
		printf("=====================================\n");
		printf("=       What you want to fix?       =\n");
		printf("=  1.Set IE Proxy and Enable(New)   =\n");//�ű����� 
		printf("=  2.Set IE Proxy and Enable(Old)   =\n");
		printf("= 3.Remove ALL IE Proxy and disble  =\n");
		printf("= 4.Set standard Local Adminisrator =\n");
		printf("=====================================\n");
		printf("\n");
		printf("Please enter num 1,2 or r return to main menu q to exit:\n");
		chioce_m=getch();
		if(islower(chioce_m) || isdigit(chioce_m)) //�ж����룬ֻ�������ֻ���Сд��ĸ 
		{
			switch(chioce_m) 
			{
				case '1':
					printf("Set IE New Proxy and Enable start now.\n");
					sprintf(set_proxy,"Powershell -ExecutionPolicy bypass Set-ItemProperty -path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings' -Name 'AutoConfigURL' -value  '%s'",proxy_new);//���Ͻű����� 
					system(set_proxy);//ִ�����ýű�proxy
					Sleep(2000);
					system("cls"); 
					continue;
				case '2':
					printf("Set IE Old Proxy and Enable start now.\n");
					sprintf(set_proxy,"Powershell -ExecutionPolicy bypass Set-ItemProperty -path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings' -Name 'ProxyServer' -value  '%s'",proxy_old);
					system(set_proxy);//ִ������proxy
					system("Powershell -ExecutionPolicy bypass Set-ItemProperty -path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings' -Name 'ProxyEnable' -value '1'");//������ͨ����˿� 
					Sleep(2000);
					system("cls"); 
					continue;
				case '3':
					printf("Set IE Old Proxy and Enable start now.\n");
					system("Powershell -ExecutionPolicy bypass Remove-ItemProperty -path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings' -Name 'AutoConfigURL'");//ɾ���ű����� 
					system("Powershell -ExecutionPolicy bypass Set-ItemProperty -path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings' -Name 'ProxyServer' -value  ''");//������ͨ����Ϊ�� 
					system("Powershell -ExecutionPolicy bypass Set-ItemProperty -path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings' -Name 'ProxyEnable' -value '0'");//�ر���ͨ����˿�
					Sleep(2000);
					system("cls"); 
					continue;
				case '4':
					printf("Set administrator Not finish.");
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
					exit(0);
				default:
					chose_w_type=2;
					chose_w();
					continue;
			}
		}
		else
		{
			chose_w_type=1;
			chose_w();
		} 
	} 
}

int read_in()//˵������ 
{
	system("cls");
	printf("This source code i had already put in me github.\n");
	printf("If find bug and have any problems or advise Please Contact me.\n");
	printf("Email: mail\n");
	printf("Phone: phone");
	printf("Github: github");
	printf("Source code: github \n");
	printf("\n");
	printf("Enter any return main menu.\n");
	getch();
	printf("loading main menu.");
	Sleep(2000);
	system("cls");
}

int chose_w()//ѡ�������
{
	if(chose_w_type==1)
	{
		printf("Just lower word or number.\n");
		Sleep(2000);
		system("cls");
	}
	else if(chose_w_type==2)
	{
		printf("Selected item not existence.\n");
		Sleep(2000);
		system("cls");	
	}
	else
	{
		printf("Not konw what happen Please enter again.\n");
		Sleep(2000);
		system("cls");	
	}
}

