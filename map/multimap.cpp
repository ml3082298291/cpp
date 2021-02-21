#include<iostream>
#include<map>
#include <string>
using namespace std;
class Persion

{
public:
    string name;
    int age;
    double saly;
private:
    /* data */
public:
    Persion
    (/* args */);
    ~Persion
    ();
};

Persion
::Persion
(/* args */)
{
}

Persion
::~Persion
()
{
}

void main1201()
{
    
    Persion p1, p2, p3, p4, p5;
    p1.name = "王1";
    p1.age = 31;
    p1.saly = 50;

    p2.name = "王2";
    p2.age = 32;
    p2.saly = 51;

    p3.name = "张三";
    p3.age = 33;
    p3.saly = 50;

    p4.name = "张4";
    p4.age = 34;
    p4.saly = 54;

    p5.name = "赵5";
    p5.age = 35;
    p5.saly = 55;
    
    multimap<string, Persion> map2;
    //sale 部门
    map2.insert(make_pair("sale",p1));
    map2.insert(make_pair("sale",p1));

    //develop
    map2.insert(make_pair("development",p3));
    map2.insert(make_pair("development",p4));

    //final
    map2.insert(make_pair("final",p5));

    for (multimap<string, Persion>::iterator it = map2.begin();
                                                        it != map2.end(); it++)
    {
        cout<<"部门："<<it->first<<"\t"<<
        "姓名： "<<it->second.name<<"  年龄："<<it->second.age<<endl;
    }
    cout<<"编列结束"<<endl;
    cout<<"development部门的数目：==》"<<map2.count("development")<<endl;
    //打印研发部人员
    multimap<string, Persion>::iterator it2 = map2.find("development");
    while(it2 != map2.end())
    {
        cout<<"姓名： "<<it2->second.name<<"年龄："
        <<it2->second.age<<"工资"<<it2->second.saly<<endl;
        
    }
}

int main()
{
    main1201();
    return 0;
}