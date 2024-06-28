#include<iostream>
using namespace std;
class YTchannel
{
protected: 
    string channel_name;
    int channel_rating;
public:
    YTchannel(string s,int r)
    {
        channel_name=s;
        channel_rating=r;
    }
    void display()
    {
        cout<<"channel Name: "<<channel_name;
        cout<<"channel Ratings(out of 10): "<<channel_rating;
    }
};
class video:public YTchannel
{
protected: 
    string video_title;
    int video_rating;
public:
    video(string s,int r):YTchannel(s,r)
    {
        video_title=s;
        video_rating=r;
    }
    void display()
    {
        cout<<"Video Title: "<<video_title;
        cout<<"Video Ratings(out of 10): "<<video_rating;
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
        cout<<"Shorts Title: "<<shorts_title;
        cout<<"Views: "<<views;
    }
};
int main()
{
    //code for video
    video("First video",8);
return 0;
}