#include <iostream>
#include<list>
using namespace std;

class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
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

class CookingYouTubeChannel:public YouTubeChannel {
public:
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with whey protein powder..."<<endl;
    }

};

int main()
{
    CookingYouTubeChannel cookingYtChannel("Harit's Kitchen", "Harit");
    CookingYouTubeChannel cookingYtChannel2("Amy's Kitchen", "Amy");
    /*cookingYtChannel.PublishVideo("Apple protein pie");
    cookingYtChannel.PublishVideo("Chocolate whey cake");
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.GetInfo();*/
    cookingYtChannel.Practice();
    cookingYtChannel2.Practice();
    

    system("pause>0");
}
