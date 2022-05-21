#include <iostream>
#include<list>
using namespace std;


class YouTubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
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
    void Subscribe() {
        SubscribersCount++;
    }
    void Unsubscribe() {
        if(SubscribersCount>0)
        SubscribersCount--;
    }
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }
};


int main()
{
    YouTubeChannel ytChannel("grassfedgainz", "Harit");
    ytChannel.PublishVideo("OHP");
    ytChannel.PublishVideo("Deadlift");
    ytChannel.PublishVideo("Bench Press");
    ytChannel.PublishVideo("Squat");
 
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
   




    system("pause>0");
}
