#include <iostream>
#include <algorithm>
using namespace std;
char property_name[3];
int attribute_value[3],map_val[3];

char f(int val){
    for(int a=0;a<3;a++){
      if(attribute_value[a]==val)return property_name[a];}}
int main() {
    char a,b;
    int a1,b1;
	for(int i=0;i<3;i++){
	    cin>>property_name[i]>>attribute_value[i];
	    map_val[i]=attribute_value[i];}
	cin>>a>>a1>>b>>b1;
	sort(map_val,map_val+3);
	cout<<"The optimal path is"<<endl<<endl;
	cout<<a<<b<<property_name[0]<<property_name[1]<<property_name[2]<<"=>"<<a<<b<<f(map_val[0])<<f(map_val[1])<<"=>"
	<<a<<b<<f(map_val[0])<<"=>"<<a<<b;
	return 0;
}
/*
t 20
P 40
s 10
p 25
m 35
*/
