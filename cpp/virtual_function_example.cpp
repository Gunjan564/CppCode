#include<iostream>
using namespace std;
class YTchannel
{
protected: 
    string channel_name;
    int channel_rating;
public:
    YTchannel(string sb,int rb)
    {
        channel_name=sb;
        channel_rating=rb;
    }
    YTchannel()
    {
        
    }
    virtual void display()
    {
        cout<<"channel Name: "<<channel_name<<endl;
        cout<<"channel Ratings(out of 10): "<<channel_rating<<endl;
    }
};
class video:public YTchannel
{
protected: 
    string video_title;
    int video_rating;
public:

    video(string s,int r, string sb, int rb):YTchannel(sb, rb)
    {
        video_title=s;
        video_rating=r;
    }
    void virtual display()
    {
        cout<<"Video Title: "<<video_title<<endl;
        cout<<"Video Ratings(out of 10): "<<video_rating<<endl;
    }
};
class shorts:public YTchannel
{
protected: 
    string shorts_title;
    int views;
public:
    shorts(string s,int r):YTchannel(s,r)
    {
        shorts_title=s;
        views=r;
    }
    void display()
    {
        cout<<"Shorts Title: "<<shorts_title<<endl;
        cout<<"Views: "<<views<<endl;
    }
};
int main()
{
    //code for video 
    video info("First video",8,"Random Channel ",9);
    video *ptr;
    ptr = &info;
    ptr->display();
    ptr->display();
    info.display();
    YTchannel *pointer;
    YTchannel object("Random Channel ",9);
    pointer =&info;
    pointer->display ();
    //-----This won't work-----//
    /*
    YTchannel obj;
    video *point;
    point =&obj;
    */
return 0;
}