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
    cout<<"\t�������"<<n<<"��ѧ����Ϣ:\t"<<endl;    	
	cout<<"\tѧ��ѧ�ţ�";
	cin>>St[n].num;
	cout<<"\tѧ��������";
	cin>>St[n].name;
	cout<<"\t���ĳɼ���";
	cin>>St[n].chinese;
	cout<<"\t��ѧ�ɼ���";
	cin>>St[n].math;
	cout<<"\tӢ��ɼ���";
	cin>>St[n].english;
	St[n].totlai=St[n].chinese+St[n].math+St[n].english;
    cout<<"�Ƿ�Ҫ����¼��ѧ����Ϣ(Y/N):";  
    cin>>sel;  
  }while(sel=='Y' || sel=='y' );   
}  
void Student::show()  
{  	
    for(int i=1;i<=n;i++)  
    {  
    	if(St[i].num!=0)
        {
        	cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english
            	<<"   �ܷ�:   "<<St[i].totlai<<endl;
			}	
    }  
    cout<<endl;  
  
}  
void Student::change()
{
	char sel;
	int d,b,c,a=0;
	do{
		cout<<"��������Ҫ�޸ĵ�ѧ����ѧ�ţ�";
		cin>>d;
		for(int i=1;i<=n;i++)
		{
			if(St[i].num==d)
			{
				cout<<"��Ҫ�޸ĵ�ѧ����ϢΪ " ;
				cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english
				<<"   �ܷ�:   "<<St[i].totlai<<endl; 
				b=1;
				a=i;
			}
		}
			if(a==0)
			{
				cout<<"û�и�ѧ����\n"; 
				b=0;
			}
			while(b==1)
			{
				cout<<"��ѡ����Ҫ�޸ĵ���Ϣ��\n";
				cout<<"* * * * * * * * * * * * *\n" 
				    <<"*     1 - ѧ��ѧ��      *\n"
				    <<"*     2 - ѧ������      *\n"
				    <<"*     3 - ���ĳɼ�      *\n"
				    <<"*     4 - ��ѧ�ɼ�      *\n"
				    <<"*     5 - Ӣ��ɼ�      *\n"
				    <<"* * * * * * * * * * * * *"<<endl;
				cin>>c;
				switch(c)
				{
					case 1:
					{	
						cout<<"������ѧ�ţ�";
						cin>>St[a].num;
					}
					break;
					case 2:
					{
						cout<<"������������";
						cin>>St[a].name;
					}
					break;
					case 3:
					{
						cout<<"���������ĳɼ���";
						cin>>St[a].chinese;
					}
					break;
					case 4:
					{
						cout<<"��������ѧ�ɼ���";
						cin>>St[a].math;
					}
					break;
					case 5:
					{
						cout<<"������Ӣ��ɼ���";
						cin>>St[a].english;
					}
					break;
			default:
			cout<<"�������";
			cin>>b; 
				}
				b=0;
			}
		
		cout<<"�Ƿ�����޸�ѧ����Ϣ��(Y/N) :";
		cin>>sel;
		a=0; 
	}while(sel=='Y'||sel=='y');
}
void Student::del()
{
	int b,c,a=1;
	char sel1,sel2;
	do{
		cout<<"��Ҫ������Ҫɾ����ѧ����ѧ�ţ�";
		cin>>b;
		for(int i=1;i<=n;i++)
		{
			if(St[i].num==b)
			{
				cout<<"��Ҫɾ����ѧ����ϢΪ " ;
				cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english<<endl;  
				cout<<"�Ƿ�Ҫɾ����(Y/N):";
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
				cout<<"û�и�ѧ������Ϣ�����������롣\n";
				c=0;
				a=0;	
			}
			while(c==1)
			{
				if(sel1=='Y'||sel1=='y')
				{
					cout<<"ɾ���ɹ���";
					n--;
					c=0;
				}
			}
		
		a=1;
		cout<<"�Ƿ����ɾ��ѧ����Ϣ��(Y/N):";
		cin>>sel2;
		
	}while(sel2=='Y'||sel2=='y');
}
void Student::add()
{
	char sel;
	do{  
    	n++;  
    	cout<<"�������"<<n<<"��ѧ����Ϣ:\t"<<endl;  
    	cout<<"ѧ��ѧ�ţ�";
		cin>>St[n].num;
		cout<<"ѧ��������";
		cin>>St[n].name;
		cout<<"���ĳɼ���";
		cin>>St[n].chinese;
		cout<<"��ѧ�ɼ���";
		cin>>St[n].math;
		cout<<"Ӣ��ɼ���";
		cin>>St[n].english;
		St[n].totlai=St[n].chinese+St[n].math+St[n].english;
    	cout<<"�Ƿ�Ҫ�������ѧ����Ϣ(Y/N):";  
    	cin>>sel;  
  	}while(sel=='Y' || sel=='y' );   
  
}
void Student::permutation()
{
	int b;
	cout<<"��ѡ������ķ�ʽ.\n";
	cout<<"1   ��  ѧ��  ����\n"
		<<"2   ��  �ܷ�  ����\n" 
		<<"3   �����ĳɼ�����\n"
		<<"4   ����ѧ�ɼ�����\n"
		<<"5   ��Ӣ��ɼ�����\n"; 
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
			cout<<"������\n";
			for(  int i=1;i<=n;i++)
			{
				cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english
            	<<"   �ܷ�:   "<<St[i].totlai<<endl;
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
			cout<<"������\n";
			for( int i=1;i<=n;i++)
			{
				cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english
            	<<"   �ܷ�:   "<<St[i].totlai<<endl;
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
			cout<<"������\n";
			for(  int i=1;i<=n;i++)
			{
				cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english
            	<<"   �ܷ�:   "<<St[i].totlai<<endl;
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
			cout<<"������\n";
			for( int i=1;i<=n;i++)
			{
				cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english
            	<<"   �ܷ�:   "<<St[i].totlai<<endl;
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
			cout<<"������\n";
			for( int i=1;i<=n;i++)
			{
				cout<<"ѧ�ţ�"<<St[i].num  
            	<<" ������"<<St[i].name  
            	<<" ���ĳɼ���"<<St[i].chinese  
            	<<" ��ѧ�ɼ���"<<St[i].math  
            	<<" Ӣ��ɼ���"<<St[i].english
            	<<"   �ܷ�:   "<<St[i].totlai<<endl;
			}
		}
		break;
	}
}
void Student::search()
{
	int b;
	cout<<"��������Ҫ���ҵķ�ʽ��\n";
	cout<<"1 ��ѧ��ѧ�Ų��ҡ�\n"
		<<"2 ��ѧ���������ҡ�\n";
	cin>>b;
	switch(b)
	{
		case 1:
			{
				char sel;
				int d,f=0;
				do{
					cout<<"��������Ҫ���ҵ�ѧ��ѧ�ţ�\n";
					cin>>d;
					for(int i=1;i<=n;i++)
					{
						if(St[i].num==d)
						{
							cout<<"��Ҫ���ҵ�ѧ����ϢΪ��\n";
							cout<<"ѧ�ţ�"<<St[i].num  
            					<<" ������"<<St[i].name  
            					<<" ���ĳɼ���"<<St[i].chinese  
            					<<" ��ѧ�ɼ���"<<St[i].math  
            					<<" Ӣ��ɼ���"<<St[i].english
            					<<"   �ܷ�:   "<<St[i].totlai<<endl;
            					f=1; 
						}
					} 
					if(f==0)
					{
						cout<<"û�и�ѧ�������������룡"<<endl;
					}
				f=0;
				cout<<"�Ƿ��������ѧ����Ϣ��(Y/N): ";
				cin>>sel; 
				}while(sel=='Y'||sel=='y');
			}break;
		case 2:
			{
				char sel;
				char c[20];
				int f=0;
				do{
					cout<<"��������Ҫ���ҵ�ѧ������: \n";
					cin>>c;
					for(int i=1;i<=n;i++)
					{
						if(strcmp (St[i].name,c)==0)
						{
							cout<<"��Ҫ���ҵ�ѧ����ϢΪ��\n";
							cout<<"ѧ�ţ�"<<St[i].num  
            					<<" ������"<<St[i].name  
            					<<" ���ĳɼ���"<<St[i].chinese  
            					<<" ��ѧ�ɼ���"<<St[i].math  
            					<<" Ӣ��ɼ���"<<St[i].english
            					<<"   �ܷ�:   "<<St[i].totlai<<endl;
            					f=1;
						}
					}
						if(f==0)
						{
							cout<<"û�и�ѧ�������������룡"<<endl;
						}
					f=0;
					cout<<"�Ƿ��������ѧ����Ϣ��(Y/N):";
					cin>>sel;
				}while(sel=='Y'||sel=='y');
			}break;
		default:
			cout<<"����������������롣";break;
	}
}
void Student::writefile()
{
	char b[20];
	cout<<"��������Ҫ������ı������磨Student.txt):";
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
		cout<<"����Ҫ�����ѧ����Ϣ:\t"<<endl;  
    	cout<<"ѧ��ѧ�ţ�";
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
				cout<<"ѧ��������";
				cin>>St[b].name;
				cout<<"���ĳɼ���";
				cin>>St[b].chinese;
				cout<<"��ѧ�ɼ���";
				cin>>St[b].math;
				cout<<"Ӣ��ɼ���";
				cin>>St[b].english;
				St[b].totlai=St[b].chinese+St[b].math+St[b].english;
				break;
			}
			else if(b>n)
			{
				n++;
				St[n].num=b;
				cout<<"ѧ��������";
				cin>>St[n].name;
				cout<<"���ĳɼ���";
				cin>>St[n].chinese;
				cout<<"��ѧ�ɼ���";
				cin>>St[n].math;
				cout<<"Ӣ��ɼ���";
				cin>>St[n].english;
				St[n].totlai=St[n].chinese+St[n].math+St[n].english;
				break;
			}
			else if(b==St[i].num)
			{
				cout<<"�Ѵ��ڸ�ͬѧ����Ϣ\n";
				break;
			}
		}
		cout<<"�Ƿ�Ҫ��������ѧ����Ϣ(Y/N):";
		cin>>sel;
	}while(sel=='Y'||sel=='y');
}
void Student::readfile()
{
	char filename[60];
	fstream f;
	cout<<"��������Ҫ��ȡ���ĵ�����(Student.txt)��";
	cin>>filename;
	f.open(filename);
	n=CountLines(filename);
	if(n==0)
	{
		cout<<"���ĵ�û�����ݡ�" ;
	}
	else
	{	
		for(int i=1;i<=n;i++)
		{
			f>>St[i].num>>St[i].name>>St[i].chinese>>St[i].math>>St[i].english>>St[i].totlai;
		}
	}	
	cout<<"��ȡ��ϣ�" ; 
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
		cout<<"\t*   1 - ¼��ѧ����Ϣ    *\n";
		cout<<"\t*   2 - ��ʾѧ����Ϣ    *\n";
		cout<<"\t*   3 - �޸�ѧ����Ϣ    *\n";
		cout<<"\t*   4 - ɾ��ѧ����Ϣ    *\n";
		cout<<"\t*   5 - ���ѧ����Ϣ    *\n";
		cout<<"\t*   6 - ����ѧ����Ϣ    *\n";
		cout<<"\t*   7 - ��ѯѧ����Ϣ    *\n";
		cout<<"\t*   8 - ����ѧ����Ϣ    *\n";
		cout<<"\t*   9 - ��ȡѧ����Ϣ    *\n";
		cout<<"\t*  10 - ����ѧ����Ϣ    *\n";
		cout<<"\t*   0 - �˳�            *\n";
		cout<<"\t* * * * * * * * * * * * *\n";
		cout<<"��������: ";
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
            cout<<"û�д�ѡ��,������ѡ��"<<endl;  
		} 
	}
	return 0;
}
