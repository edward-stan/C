#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int n=3;

class stduent{
	public:
		//构造方法：方法名同类名 无返回return void;作用：在实例化该类对象时给该类对象指定初始数据 
		student(){
			
		}
		student(string name,string id){
			this->name=name;
			this->id=id;
		}
		//这两个构造方法形成方法重载：两个或两个以上方法名相同，方法的 
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
