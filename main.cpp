#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int n=3;

class stduent{
	public:
		//���췽����������ͬ���� �޷���return void;���ã���ʵ�����������ʱ���������ָ����ʼ���� 
		student(){
			
		}
		student(string name,string id){
			this->name=name;
			this->id=id;
		}
		//���������췽���γɷ������أ��������������Ϸ�������ͬ�������� 
		void setName(string name){
			this->name=name;
		}
		string getName(){
			return name;
		}
		void setid(string id)
	{
		this->id=id;
	}
		string getid(string id){
			return id;
		}
	private:
		string name;
		string id;
		char sex;
};
int main() {
	return 0;
}
