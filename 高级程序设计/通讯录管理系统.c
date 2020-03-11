#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//================================================================================
//Author:chenbin    Student ID:1932331109
struct person
{
        char name[8];
        char phone[11];
	char email[30];
	char qq[10];
};
int count=1;
struct person pe[100];



void menu_main()  //主菜单
{
        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
	printf("#                                                                   #\n");
	printf("#           1-------------------Input--------------------           #\n");
	printf("#                                                                   #\n");
	printf("#           2-------------------Search-------------------           #\n");
	printf("#                                                                   #\n");
	printf("#           3-------------------Allshow------------------           #\n");
	printf("#                                                                   #\n");
	printf("#           4-------------------Modify-------------------           #\n");
	printf("#                                                                   #\n");
	printf("#           5-------------------Exit---------------------           #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#####################################################################\n");
	printf("#####################################################################\n");
}

void menu_inquire()  //信息查询菜单
{
int Check_key;
	printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      1------Search by name                        #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      2------Search by phone                       #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      3------Search by Email                       #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      4------Search by QQ                          #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      5------Exit inquire                          #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#####################################################################\n");
	printf("#####################################################################\n");

	printf("Please enter the operation number :");
	scanf("%d",&Check_key);
	if (Check_key==1)
    {
        system("cls");
        Inquire_name();
    }
    else if(Check_key==2)
    {
        system("cls");
        Inquire_phone();
    }
	else if (Check_key==3)
    {
        system("cls");
        Inquire_Email();
    }
        else if (Check_key==4)
    {
        system("cls");
        Inquire_QQ();
    }

        else if (Check_key==5)
    {
        system("cls");
        main();
    }
}

void menu_Modify()  //信息删改菜单
{
        int Check_key;
	printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      1------Information modificatio               #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      2------Information deletion                  #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                      3------Exit modify                           #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#####################################################################\n");
	printf("#####################################################################\n");

	printf("Please enter the operation number :");
	scanf("%d",&Check_key);
	if (Check_key==1)
    {
        system ("cls");
        modify();
    }
    else if (Check_key==2)
    {
        system ("cls");
        delete();
    }
    else if (Check_key==3)
    {
        system ("cls");
        main();
    }
}

void lastpage()  //尾页
{
	printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                          Thanks for using!                        #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#                                                                   #\n");
	printf("#####################################################################\n");
	printf("#####################################################################\n");

}





void input()  //信息输入
{
    int r;
    while (1)  //循环输入
    {
        printf("Please enter your name :");scanf("%s",pe[count].name);
        printf("Phone：");scanf("%s",pe[count].phone);
        printf("Email：");scanf("%s",pe[count].email);
        printf("QQ: ");scanf("%s",pe[count].qq);
        printf("Entered successfully !\n");
        count++;
        printf("Enter 1 to continue input, enter 0 to end \n");
        scanf("%d",&r);
       if(r==1){system("cls");continue;}  //当条件满足时清空屏幕并继续循环
       else if (r==0)break;
       else printf("Input error ！\n");system("pause");break;//错误提示
    }
    system("cls");  //清屏
    main();  //返回主程序
}




void Inquire_name()  //姓名查询
{
    int name0[8];
    int i;
    printf("Please enter the name you want to inquire :");
    scanf("%s",name0);
    for (i=0;i<count;i++)

    {
            if (strcmp(name0,pe[i].name)==0)
    {
        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
        printf("%s       %s            %s           %s      \n","Name","Phone","Email","QQ");
	printf("-----------------------------------------------------------------------------\n");
	printf("%-10.8s %6.6s %16.6s%16.6s\n",pe[i].name,pe[i].phone,pe[i].email,pe[i].qq);
    break;
    }
    else if (i==count-1)printf ("No one found !\n");
    }            //查询失败时退出
    system("pause");  //失败信息提示暂留
    system("cls");
    menu_inquire();//回到总查询页面
}






void Inquire_phone()  //电话查询
{
    int phone0[11];
    int i;
    printf("Please enter the phone you want to inquire :");
    scanf("%s",phone0);
    for (i=0;i<count;i++)
    {
    if (strcmp(phone0,pe[i].phone)==0)
    {

        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
        printf("%s       %s            %s           %s      \n","Name","Phone","Email","QQ");
	printf("-----------------------------------------------------------------------------\n");
	printf("%-10.8s %6.6s %16.6s%16.6s\n",pe[i].name,pe[i].phone,pe[i].email,pe[i].qq);
	break;
    }
    else if (i==count-1)printf ("No one found !\n");}  //查询失败时退出
    system("pause");  //失败信息提示暂留
    system("cls");
    menu_inquire();//回到总查询页面
}



void Inquire_QQ()  //QQ查询
{
    int QQ0[10];
    int i;
    printf("Please enter the phone you want to inquire :");
    scanf("%s",QQ0);
    for (i=0;i<count;i++)
    {
    if (strcmp(QQ0,pe[i].qq)==0)
    {

        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
        printf("%s       %s            %s           %s      \n","Name","Phone","Email","QQ");
	printf("-----------------------------------------------------------------------------\n");
	printf("%-10.8s %6.6s %16.6s%16.6s\n",pe[i].name,pe[i].phone,pe[i].email,pe[i].qq);
	break;
    }
    else if (i==count-1)printf ("No one found !\n");}  //查询失败时退出
    system("pause");  //失败信息提示暂留
    system("cls");
    menu_inquire();//回到总查询页面
}



void Inquire_Email()  //Email查询
{
    int Email0[10];
    int i;
    printf("Please enter the Email you want to inquire :");
    scanf("%s",Email0);
    for (i=0;i<count;i++)
    {
    if (strcmp(Email0,pe[i].email)==0)
    {

        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
        printf("%s       %s            %s           %s      \n","Name","Phone","Email","QQ");
	printf("-----------------------------------------------------------------------------\n");
	printf("%-10.8s %6.6s %16.6s%16.6s\n",pe[i].name,pe[i].phone,pe[i].email,pe[i].qq);
	break;
    }
    else if (i==count-1)printf ("No one found !\n");}  //查询失败时退出
    system("pause");  //失败信息提示暂留
    system("cls");
    menu_inquire();//回到总查询页面
}



void Allshow()  //全部信息查询
{
        int r,i;
        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
        printf("%s       %s            %s           %s      \n","name","phone","Email","QQ");
	printf("-----------------------------------------------------------------------------\n");
	for (i=0;i<count;i++)  //for循环查找所有信息
	{
	        printf("%-10.8s %6.6s %16.6s%16.6s\n",pe[i].name,pe[i].phone,pe[i].email,pe[i].qq);
	}
	printf("Enter 0 to exit ");
        scanf("%d",&r);
        if (r==0)
        {
                system("cls");
                main();
        }
        else printf("Input error ！");
}


void modify()  //信息修改
{
    int r,i,j;
    char name9[8];
        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
        printf("%s       %s            %s           %s      \n","name","phone","Email","QQ");
	for (i=0;i<count;i++)  //for循环查找所有信息
	{
	        printf("%-10.8s %6.6s %16.6s%16.6s\n",pe[i].name,pe[i].phone,pe[i].email,pe[i].qq);
	}
    printf("-----------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Please enter the name of the person you want to modify : ");
    scanf("%s",name9);
    for (j=0;j<count;j++)
    {
        if (strcmp(name9,pe[j].name)==0)
        {
        printf("Please enter your name :");scanf("%s",pe[j].name);
        printf("Phone：");scanf("%s",pe[j].phone);
        printf("Email：");scanf("%s",pe[j].email);
        printf("QQ：");scanf("%s",pe[j].qq);
        }
        printf("Successfully deleted !\n");
    }
    if (j==count)printf("No one found !");
        printf("enter 0 to end\n");
        scanf("%d",&r);
        if (r==0)
            {
                system("cls");
                menu_Modify();
            }
else printf("Input error ！\n");
}


void delete()
{
    int r,j,n,i;
    char name9[8];
        printf("#################    Contacts Management System   ###################\n");
	printf("#####################################################################\n");
        printf("%s       %s            %s           %s      \n","name","phone","Email","QQ");
	for (i=0;i<count;i++)  //for循环查找所有信息
	{
	        printf("%-10.8s %6.6s %16.6s%16.6s\n",pe[i].name,pe[i].phone,pe[i].email,pe[i].qq);
	}
    printf("-----------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Please enter the name of the person you want to delete :");
    scanf("%s",name9);
    for (j=0;j<count;j++)
    {
        if (strcmp(name9,pe[j].name)==0)
        {
            n=j;
        }
    }

    for (n;n<count;n++)
    {
        pe[n]=pe[n+1];//用后一个联系人的数组覆盖前一个人
    }count--;
        printf("Successfully deleted !\n");
	printf("enter 0 to end\n");
    scanf("%d",&r);
    if (r==0)
    {system("cls");
    main();}
    else printf("Input error ！");
}



void main()
{
	int key;
	menu_main();
	printf("Please enter the required action:");
	scanf("%d",&key);
	if(key==1)
    {
        system("cls");
        input();
    }else if(key==2)
	{
		system("cls");
		menu_inquire();
	}
	else if(key==3)
    {
        system("cls");
        Allshow();
    }
    else if(key==4)
    {
        system("cls");
        menu_Modify();
    }
	else if(key==5)
	{
		system("cls");
		lastpage();
	}

}



