#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
//��ϵ�˽ṹ��
struct person
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addr;
};

struct addressbooks
{
	struct person personarray[MAX];
	int m_size;
};
//1.�����ϵ��
void addperson(addressbooks *abs)
{
	if (abs->m_size == MAX)
	{
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
	    return;
	}
	else
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personarray[abs->m_size].m_name = name;
		cout << "�������Ա�" << endl;
		cout << "1  --  ��" << endl;
		cout << "2  --  Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
        if (sex == 1 || sex == 2)
		{
			abs->personarray[abs->m_size].m_sex = sex;
			break;
		}
		else
		{
			cout << "�����������������룡" << endl;

		}
		}
		
		
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personarray[abs->m_size].m_age = age;
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personarray[abs->m_size].m_phone = phone;
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personarray[abs->m_size].m_addr  = address;
		//����ͨѶ¼����
		abs->m_size++;
		cout << "��ӳɹ���" << endl;

	}
		
}
void showperson(addressbooks *abs)
{
	if (abs->m_size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������ " << abs->personarray[i].m_name << "\t";
			cout << "�Ա� " << (abs->personarray[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺 " << abs->personarray[i].m_age << "\t";
			cout << "�绰�� " << abs->personarray[i].m_phone << "\t";
			cout << "��ַ�� " << abs->personarray[i].m_addr  << endl;
		}
	}
	system("pause");//�����������
	system("cls");//����
}
int isexist(addressbooks *abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personarray[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}
void deleteperson(addressbooks *abs)
{
	cout << "������Ҫɾ������ϵ��" << endl;
	 
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personarray[i] = abs->personarray[i+1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}
void findperson(addressbooks *abs)
{
	cout << "������������ҵ���ϵ�ˣ�" << endl;
	string name;
    cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		cout << "������ " << abs->personarray[ret].m_name << "\t";
		cout << "�Ա� " << (abs->personarray[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺 " << abs->personarray[ret].m_age << "\t";
		cout << "�绰�� " << abs->personarray[ret].m_phone << "\t";
		cout << "��ַ�� " << abs->personarray[ret].m_addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	}
	
	
void modifyperson(addressbooks *abs)
{
	cout << "�����������޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personarray[ret].m_name = name;
		cout << "�������Ա�" << endl;
		cout << "1  --  ��" << endl;
		cout << "2  --  Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[ret].m_sex = sex;
				break;
			}
			else
			{
				cout << "�����������������룡" << endl;

			}
		}
			cout << "���������䣺" << endl;
			int age = 0;
			cin >> age;
			abs->personarray[ret].m_age = age;
			cout << "��������ϵ�绰��" << endl;
			string phone;
			cin >> phone;
			abs->personarray[ret].m_phone = phone;
			cout << "�������ͥסַ��" << endl;
			string address;
			cin >> address;
			abs->personarray[ret].m_addr = address;
	
			cout << "�޸ĳɹ���" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}
}
void cleanperson(addressbooks *abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "*****  0.���ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}
int main()
{   //����ͨѶ¼�ṹ�����
	addressbooks abs;
	//��ʼ��ͨѶ¼����Ա
	abs.m_size = 0;

	int select = 0;//�û�ѡ�����
	
	while (true)
	{ 
		showMenu();//�˵�����
	    cin >> select;
		switch (select)
		{
		case 1:
			addperson(&abs);//���õ�ַ����
			break;
		case 2:
			showperson(&abs);
			break;
		case 3:
		//{
            //cout << "������ɾ����ϵ�˵�������" << endl;
			//string name;
			//cin >> name;
			//if (isexist(&abs, name) == -1)
			//{
			//	cout << "���޴���" << endl;
			//}
			//else
			//{
			//	cout << "�ҵ�����" << endl;
			//}
		//}
			deleteperson(&abs);
			break;
		case 4:
			findperson(&abs);
			break;
		case 5:
			modifyperson(&abs);
			break;
		case 6:
			cleanperson(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	
	system("pause");
	return 0;
}