#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
private:
	char name[20];
	int id,age;
	float a,b,c,d;
	char ch;
public:
	void input()
	{
		cin.get(name, 21, ',');  //������ 
		cin>>ch>>age>>ch>>id>>ch>>a>>ch>>b>>ch>>c>>ch>>d;
	};
	float calculate()
	{
		float sum=a+b+c+d;
		return sum/4;
	};
	bool t()
	{
		float sum=(a+b+c+d)/4;
		int a=sum;
		if (a==sum)
			return true;
		else 
			return false;
	}
	void output()
	{
		float mid=calculate();
		cout<<name<<","<<age<<","<<id<<",";
		if (t()==false)
		{
			printf("%.1f",mid);//û�и�iomanipͷ�ļ���ֻ��ѡ��C������� 
		}
		else
			printf("%.0f",mid);
	}
};

int main() {
	Student student;        // ������Ķ���
	student.input();        // ��������
	student.calculate();    // ����ƽ���ɼ�
	student.output();       // �������
}
