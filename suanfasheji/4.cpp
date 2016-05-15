/*************************************************mZ
	> Mail:yanglongfei@xiyoulinux.org 
	> Created Time: 2016年03月21日 星期一 07时26分20秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<map>
#define N 1000
using namespace std;
int main(int argc,char *argv[])
{
    int num;
    ifstream in("input.txt");
    ofstream out("output.txt");
    map<int,int> num_count;
    while(in >>num){
        num_count[num]++;
    }
    int temp=-1;
    int key=65535;
    for(auto m:num_count){
        if(temp <m.second){
            temp=m.second;
            key=m.first;
        }
    }
    out << key<<endl;
    out <<temp<<endl;
   return 0;
}
