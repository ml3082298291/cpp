#include <iostream>
#include <map>
#include <string>
using namespace std;

// map 的增删改查
void main101()
{
    map<int, string> map1;
    //插入元素方法1
    map1.insert(pair<int, string>(1,"teacher01"));
    map1.insert(pair<int, string>(2,"teacher02"));

    //插入元素方法2
    map1.insert(make_pair(3,"teacher03"));
    map1.insert(make_pair(4,"teacher04"));
    //方法3
    map1.insert(map<int,string>::value_type(5,"teacher05"));
    map1.insert(map<int,string>::value_type(6,"teacher06"));

    //方法4
    map1[7] = "teacher07";
    map1[8] = "teacher08";

    //容器的遍历
    for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++)
    {
        cout<<it->first<<"\t"<<(*it).second<<endl;
    }
    
    //容器元素的删除

    while(!map1.empty())
    {
        map<int,string>::iterator it1 = map1.begin();
        cout<<it1->first<<"\t"<<it1->second<<endl;
        map1.erase(map1.begin());
    }
}
void main102()
{
    map<int, string> map1;
    //插入元素方法1
    map1.insert(pair<int, string>(1,"teacher01"));
    map1.insert(pair<int, string>(2,"teacher02"));

    //插入元素方法2
    map1.insert(make_pair(3,"teacher03"));
    map1.insert(make_pair(4,"teacher04"));
    //方法3
    map1.insert(map<int,string>::value_type(5,"teacher05"));
    map1.insert(map<int,string>::value_type(6,"teacher06"));

    //方法4
    map1[7] = "teacher07";
    map1[8] = "teacher08";

    //容器的遍历
    for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++)
    {
        cout<<it->first<<"\t"<<(*it).second<<endl;
    }
    
    //容器元素的删除

    while(!map1.empty())
    {
        map<int,string>::iterator it1 = map1.begin();
        cout<<it1->first<<"\t"<<it1->second<<endl;
        map1.erase(map1.begin());
    }
}

void main1103()
{
        map<int, string> map1;
    //插入元素方法1
    map1.insert(pair<int, string>(1,"teacher01"));
    map1.insert(pair<int, string>(2,"teacher02"));

    //插入元素方法2
    map1.insert(make_pair(3,"teacher03"));
    map1.insert(make_pair(4,"teacher04"));
    //方法3
    map1.insert(map<int,string>::value_type(5,"teacher05"));
    map1.insert(map<int,string>::value_type(6,"teacher06"));

    //方法4
    map1[7] = "teacher07";
    map1[8] = "teacher08";

    //容器的遍历
    for (map<int, string>::iterator it = map1.begin(); it != map1.end(); it++)
    {
        cout<<it->first<<"\t"<<(*it).second<<endl;
    }
    cout<<"遍历结束"<<endl;

    //map的查找
    map<int, string>::iterator it2 = map1.find(100);
    if(it2 == map1.end())
    {
        cout<<"key = 100 的值不存在"<<endl;
    }
    else
    {
        cout<<it2->first<<it2->second<<endl;
    }

    //equal_range
    pair<map<int, string>::iterator,map<int, string>::iterator> 
                mypair = map1.equal_range(8);
    if(mypair.first == map1.end())
    {
        cout<<"第一个> = 5的位置不存在"<<endl;
    }
    else
    {
        cout<<mypair.first->first<<"\t"<<mypair.first->second<<endl;
    }

    if(mypair.second == map1.end())
    {
        cout<<"第2个> 5的位置不存在"<<endl;
    }
    else
    {
        cout<<mypair.second->first<<"\t"<<mypair.second->second<<endl;
    }
}
int main()
{
    //main102();
    main1103();
    cout<<"hello"<<endl;
    cout<<"hello"<<endl;
    cout<<"hello"<<endl;
    return 0;
}