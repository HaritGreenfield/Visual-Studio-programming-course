#include <iostream>
#include<list>
using namespace std;


class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

};


int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "grassfedgainz";
    ytChannel.OwnerName = "Harit";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = {"Training vlogs", "Beyond 5/3/1", "Deload week"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos:" << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles) {
    
        cout << videoTitle << endl;
    }
   

    system("pause>0");
}
