#include <iostream>
using namespace std;

class CDocument
{
private:
    /* data */
public:
     CDocument(/* args */)
     {

     }
    ~CDocument(){

    }
public:
    void OnFileOpen()
    {
        //这是个算法，每个cout输出表示一个实际动作
        cout<<"dialog..."<<endl;
        cout<<"open file..."<<endl;
        Serialize();
        cout<<"close file ..."<<endl;
        cout<<"updata all views..."<<endl;
    }

    virtual void Serialize(){

    }

};

class CMyDoc : public CDocument
{
public:
    virtual void Serialize()
    {
        //只有应用程序本身才知道如何读取自己的文件格式
        cout<<"CMyDoc::Serialize()"<<endl;
    }
};

 int main01(){
     CMyDoc myDoc;
     myDoc.OnFileOpen();
     return 0;
}

//
class base
{
public:
    base()
    {
        cout<<"base gouzao"<<endl;
    }
    ~base()
    {
        cout<<"base xigou"<<endl;
    }
};

class compent
{
    public:
    compent()
    {
        cout<<"compent gouzao"<<endl;
    }

    ~compent()
    {
        cout<<"compentxigou"<<endl;
    }
};

class device : public base
{
public:
    device()
    {
        cout<<"zileigouzao"<<endl;

    }
    ~device()
    {
        cout<<"zileixigou"<<endl;
    }
    compent c1;
};

int main002()
{
    device c;
    return 0;
}

