#include "Student.h"
#include<iostream>
#include<string>
#include<fstream>
#include<string.h>
using namespace std; 
int CountLines(char *filename);
Student St[1000];
int Student::n = 0;
void Student::input()
{  
  char sel;
  do  
  {	
	n++;
    cout<<"\t请输入第"<<n<<"个学生信息:\t"<<endl;    	
	cout<<"\t学生学号：";
	cin>>St[n].num;
	cout<<"\t学生姓名：";
	cin>>St[n].name;
	cout<<"\t语文成绩：";
	cin>>St[n].chinese;
	cout<<"\t数学成绩：";
	cin>>St[n].math;
	cout<<"\t英语成绩：";
	cin>>St[n].english;
	St[n].totlai=St[n].chinese+St[n].math+St[n].english;
    cout<<"是否要继续录入学生信息(Y/N):";  
    cin>>sel;  
  }while(sel=='Y' || sel=='y' );   
}  
void Student::show()  
{  	
    for(int i=1;i<=n;i++)  
    {  
    	if(St[i].num!=0)
        {
        	cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english
            	<<"   总分:   "<<St[i].totlai<<endl;
			}	
    }  
    cout<<endl;  
  
}  
void Student::change()
{
	char sel;
	int d,b,c,a=0;
	do{
		cout<<"请输入你要修改的学生的学号：";
		cin>>d;
		for(int i=1;i<=n;i++)
		{
			if(St[i].num==d)
			{
				cout<<"你要修改的学生信息为 " ;
				cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english
				<<"   总分:   "<<St[i].totlai<<endl; 
				b=1;
				a=i;
			}
		}
			if(a==0)
			{
				cout<<"没有该学生！\n"; 
				b=0;
			}
			while(b==1)
			{
				cout<<"请选择你要修改的信息：\n";
				cout<<"* * * * * * * * * * * * *\n" 
				    <<"*     1 - 学生学号      *\n"
				    <<"*     2 - 学生姓名      *\n"
				    <<"*     3 - 语文成绩      *\n"
				    <<"*     4 - 数学成绩      *\n"
				    <<"*     5 - 英语成绩      *\n"
				    <<"* * * * * * * * * * * * *"<<endl;
				cin>>c;
				switch(c)
				{
					case 1:
					{	
						cout<<"请输入学号：";
						cin>>St[a].num;
					}
					break;
					case 2:
					{
						cout<<"请输入姓名：";
						cin>>St[a].name;
					}
					break;
					case 3:
					{
						cout<<"请输入语文成绩：";
						cin>>St[a].chinese;
					}
					break;
					case 4:
					{
						cout<<"请输入数学成绩：";
						cin>>St[a].math;
					}
					break;
					case 5:
					{
						cout<<"请输入英语成绩：";
						cin>>St[a].english;
					}
					break;
			default:
			cout<<"输入错误！";
			cin>>b; 
				}
				b=0;
			}
		
		cout<<"是否继续修改学生信息？(Y/N) :";
		cin>>sel;
		a=0; 
	}while(sel=='Y'||sel=='y');
}
void Student::del()
{
	int b,c,a=1;
	char sel1,sel2;
	do{
		cout<<"请要输入你要删除的学生的学号：";
		cin>>b;
		for(int i=1;i<=n;i++)
		{
			if(St[i].num==b)
			{
				cout<<"你要删除的学生信息为 " ;
				cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english<<endl;  
				cout<<"是否要删除？(Y/N):";
				cin>>sel1;
				if(sel1=='Y'||sel1=='y')
				{
					for(int j=i;j<=n;j++)
					{
						St[j]=St[j+1];
						c=1;
					}
					a=0;
				}
			}
		}
			if(a==1)
			{
				cout<<"没有该学生的信息！请重新输入。\n";
				c=0;
				a=0;	
			}
			while(c==1)
			{
				if(sel1=='Y'||sel1=='y')
				{
					cout<<"删除成功！";
					n--;
					c=0;
				}
			}
		
		a=1;
		cout<<"是否继续删除学生信息？(Y/N):";
		cin>>sel2;
		
	}while(sel2=='Y'||sel2=='y');
}
void Student::add()
{
	char sel;
	do{  
    	n++;  
    	cout<<"请输入第"<<n<<"个学生信息:\t"<<endl;  
    	cout<<"学生学号：";
		cin>>St[n].num;
		cout<<"学生姓名：";
		cin>>St[n].name;
		cout<<"语文成绩：";
		cin>>St[n].chinese;
		cout<<"数学成绩：";
		cin>>St[n].math;
		cout<<"英语成绩：";
		cin>>St[n].english;
		St[n].totlai=St[n].chinese+St[n].math+St[n].english;
    	cout<<"是否要继续添加学生信息(Y/N):";  
    	cin>>sel;  
  	}while(sel=='Y' || sel=='y' );   
  
}
void Student::permutation()
{
	int b;
	cout<<"请选择排序的方式.\n";
	cout<<"1   按  学号  排序。\n"
		<<"2   按  总分  排序。\n" 
		<<"3   按语文成绩排序。\n"
		<<"4   按数学成绩排序。\n"
		<<"5   按英语成绩排序。\n"; 
	cin>>b;
	switch(b)
	{
		case 1:{
			Student t;
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
				{
					if(St[j].num>St[j+1].num)
					{
						t=St[j];
						St[j]=St[j+1];
						St[j+1]=t;
					 } 
				}
			cout<<"排序结果\n";
			for(  int i=1;i<=n;i++)
			{
				cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english
            	<<"   总分:   "<<St[i].totlai<<endl;
			}
			
		}
		break;
		case 2:
		{
			Student t;
			for( int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
				{
					if(St[j].totlai<St[j+1].totlai)
					{
						t=St[j];
						St[j]=St[j+1];
						St[j+1]=t;
					 } 
				}
			cout<<"排序结果\n";
			for( int i=1;i<=n;i++)
			{
				cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english
            	<<"   总分:   "<<St[i].totlai<<endl;
			}
		}
		break;
		case 3:
		{
			Student t;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
				{
					if(St[j].chinese<St[j+1].chinese)
					{
						t=St[j];
						St[j]=St[j+1];
						St[j+1]=t;
					 } 
				}
			cout<<"排序结果\n";
			for(  int i=1;i<=n;i++)
			{
				cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english
            	<<"   总分:   "<<St[i].totlai<<endl;
			}
		}
		break;
		case 4:
			{
				Student t;
				for(int i=1;i<=n;i++)
					for(int j=1;j<=n;j++)
					{
						if(St[j].math<St[j+1].math)
						{
							t=St[j];
							St[j]=St[j+1];
							St[j+1]=t;
					 	} 
					}
			cout<<"排序结果\n";
			for( int i=1;i<=n;i++)
			{
				cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english
            	<<"   总分:   "<<St[i].totlai<<endl;
			}
		}
		break;
		case 5:
		{
				Student t;
				for(int i=1;i<=n;i++)
					for(int j=1;j<=n;j++)
					{
						if(St[j].english<St[j+1].english)
						{
							t=St[j];
							St[j]=St[j+1];
							St[j+1]=t;
					 	} 
					}
			cout<<"排序结果\n";
			for( int i=1;i<=n;i++)
			{
				cout<<"学号："<<St[i].num  
            	<<" 姓名："<<St[i].name  
            	<<" 语文成绩："<<St[i].chinese  
            	<<" 数学成绩："<<St[i].math  
            	<<" 英语成绩："<<St[i].english
            	<<"   总分:   "<<St[i].totlai<<endl;
			}
		}
		break;
	}
}
void Student::search()
{
	int b;
	cout<<"请输入你要查找的方式：\n";
	cout<<"1 按学生学号查找。\n"
		<<"2 按学生姓名查找。\n";
	cin>>b;
	switch(b)
	{
		case 1:
			{
				char sel;
				int d,f=0;
				do{
					cout<<"请输入你要查找的学生学号：\n";
					cin>>d;
					for(int i=1;i<=n;i++)
					{
						if(St[i].num==d)
						{
							cout<<"你要查找的学生信息为：\n";
							cout<<"学号："<<St[i].num  
            					<<" 姓名："<<St[i].name  
            					<<" 语文成绩："<<St[i].chinese  
            					<<" 数学成绩："<<St[i].math  
            					<<" 英语成绩："<<St[i].english
            					<<"   总分:   "<<St[i].totlai<<endl;
            					f=1; 
						}
					} 
					if(f==0)
					{
						cout<<"没有该学生，请重新输入！"<<endl;
					}
				f=0;
				cout<<"是否继续查找学生信息？(Y/N): ";
				cin>>sel; 
				}while(sel=='Y'||sel=='y');
			}break;
		case 2:
			{
				char sel;
				char c[20];
				int f=0;
				do{
					cout<<"请输入你要查找的学生姓名: \n";
					cin>>c;
					for(int i=1;i<=n;i++)
					{
						if(strcmp (St[i].name,c)==0)
						{
							cout<<"你要查找的学生信息为：\n";
							cout<<"学号："<<St[i].num  
            					<<" 姓名："<<St[i].name  
            					<<" 语文成绩："<<St[i].chinese  
            					<<" 数学成绩："<<St[i].math  
            					<<" 英语成绩："<<St[i].english
            					<<"   总分:   "<<St[i].totlai<<endl;
            					f=1;
						}
					}
						if(f==0)
						{
							cout<<"没有该学生，请重新输入！"<<endl;
						}
					f=0;
					cout<<"是否继续查找学生信息？(Y/N):";
					cin>>sel;
				}while(sel=='Y'||sel=='y');
			}break;
		default:
			cout<<"输入错误！请重新输入。";break;
	}
}
void Student::writefile()
{
	char b[20];
	cout<<"请输入你要保存的文本名字如（Student.txt):";
	cin>>b;
	ofstream outfile;
	outfile.open(b);
	for(int i=1;i<=n;i++)
	{
		outfile<<St[i].num  
               <<" "<<St[i].name  
               <<" "<<St[i].chinese  
               <<" "<<St[i].math  
               <<" "<<St[i].english
               <<" "<<St[i].totlai<<endl;
	}
	outfile.flush();
	outfile.close();
}
void Student::insertion()
{
	int b;
	char sel;
	do
	{	
		cout<<"请你要插入的学生信息:\t"<<endl;  
    	cout<<"学生学号：";
		cin>>b;
		for(int i=1;i<=n;i++)	
		{	
			if((b>St[i].num&&b!=St[i].num)&&b<St[i+1].num)
			{	n++;
				for(int j=n;j>b;j--)
				{
				St[j]=St[j-1];
				}
				St[b].num=b;
				cout<<"学生姓名：";
				cin>>St[b].name;
				cout<<"语文成绩：";
				cin>>St[b].chinese;
				cout<<"数学成绩：";
				cin>>St[b].math;
				cout<<"英语成绩：";
				cin>>St[b].english;
				St[b].totlai=St[b].chinese+St[b].math+St[b].english;
				break;
			}
			else if(b>n)
			{
				n++;
				St[n].num=b;
				cout<<"学生姓名：";
				cin>>St[n].name;
				cout<<"语文成绩：";
				cin>>St[n].chinese;
				cout<<"数学成绩：";
				cin>>St[n].math;
				cout<<"英语成绩：";
				cin>>St[n].english;
				St[n].totlai=St[n].chinese+St[n].math+St[n].english;
				break;
			}
			else if(b==St[i].num)
			{
				cout<<"已存在该同学的信息\n";
				break;
			}
		}
		cout<<"是否要继续插入学生信息(Y/N):";
		cin>>sel;
	}while(sel=='Y'||sel=='y');
}
void Student::readfile()
{
	char filename[60];
	fstream f;
	cout<<"请输入你要读取的文档名如(Student.txt)：";
	cin>>filename;
	f.open(filename);
	n=CountLines(filename);
	if(n==0)
	{
		cout<<"此文档没有数据。" ;
	}
	else
	{	
		for(int i=1;i<=n;i++)
		{
			f>>St[i].num>>St[i].name>>St[i].chinese>>St[i].math>>St[i].english>>St[i].totlai;
		}
	}	
	cout<<"读取完毕！" ; 
}
int CountLines(char *filename)
{
	ifstream ReadFile;
	int b=0;
	string temp;
	ReadFile.open(filename,ios::in);
	if(ReadFile.fail())
	{
   	return 0;
	}
	else
	{
		while(getline(ReadFile,temp))
		{
    		b++;
		}
	return b;
	}
	ReadFile.close();
}
int main()
{
	Student st;
	int select;
	while(1){
		system("cls");
		cout<<"\t* * * * * * * * * * * * *\n";
		cout<<"\t*   1 - 录入学生信息    *\n";
		cout<<"\t*   2 - 显示学生信息    *\n";
		cout<<"\t*   3 - 修改学生信息    *\n";
		cout<<"\t*   4 - 删除学生信息    *\n";
		cout<<"\t*   5 - 添加学生信息    *\n";
		cout<<"\t*   6 - 排序学生信息    *\n";
		cout<<"\t*   7 - 查询学生信息    *\n";
		cout<<"\t*   8 - 保存学生信息    *\n";
		cout<<"\t*   9 - 读取学生信息    *\n";
		cout<<"\t*  10 - 插入学生信息    *\n";
		cout<<"\t*   0 - 退出            *\n";
		cout<<"\t* * * * * * * * * * * * *\n";
		cout<<"请输入编号: ";
		cin>>select;
		if(select==0) break;
		switch(select){
			case 1: 
				st.input();
				system("pause");
				break;
			case 2:
				st.show();
				system("pause");
				break;
			case 3:
				st.change();
				system("pause");
				break;
			case 4:
				st.del();
				system("pause");
				break;
			case 5:
				st.add();
				system("pause");
				break;
			case 6:
				st.permutation();
				system("pause");
				break;
			case 7:
				st.search();
				system("pause");
				break;
			case 8:
				st.writefile();
				system("pause");
				break;
			case 9:
				st.readfile();
				system("pause");
				break;
			case 10:
				st.insertion();
				system("pause");
				break;
			default:  
            cout<<"没有此选项,请重新选择！"<<endl;  
		} 
	}
	return 0;
}
