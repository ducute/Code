#include<iostream>
using namespace std;
int main()
{
		string first_name="???";
		cout<<"请输入您的姓名"<<endl;
		cin>>first_name;
		cout<<"enter the name of the person you want to ";
		string receive_name="???";
		cin>>receive_name;
		cout<<"Dear "<<receive_name<<":"<<'\n';
		cout<<"\thow are you?"<<"i am fine"<<"i miss you"<<'\n';
		cout<<"希望你能喜欢上我 这是愚蠢的哦";
		cout<<"我相信我能可以让你喜欢上我的"<<'\n';
		cout<<"哦豁\r就这样了哦"<<endl;
		cout<<"have you seen "<<receive_name<<"lately"<<endl;
		char friend_sex = '0';
		cout<<"if your firend is man input m  if not input f";
		cin>>friend_sex;
		if(friend_sex == 'm')
				cout<<"IF you see"<<first_name<<"please ask him to call me"<<endl;
		if(friend_sex == 'f')
				cout<<"IF you see "<<first_name<<"person ask her to call me"<<endl;


}
