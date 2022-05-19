#include <iostream>
#include<list>
using namespace std;


class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount=0;
    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos:" << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }

    }
};


int main()
{
    YouTubeChannel ytChannel("grassfedgainz", "Harit");
    ytChannel.PublishedVideoTitles.push_back("OHP");
    ytChannel.PublishedVideoTitles.push_back("Deadlift");
    ytChannel.PublishedVideoTitles.push_back("Bench Press");
    ytChannel.PublishedVideoTitles.push_back("Squat");
    YouTubeChannel ytChannel2("AmySings", "Amy");


    ytChannel.GetInfo();
    ytChannel2.GetInfo();




    system("pause>0");
}
