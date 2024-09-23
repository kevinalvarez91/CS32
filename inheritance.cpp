#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;

    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    YouTubeChannel(){
        Name = " ";
        OwnerName = " ";
        SubscribersCount = 0;
    }
    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (auto it = PublishedVideoTitles.begin(); it != PublishedVideoTitles.end(); it++)
        {
            cout << *it << endl;
        }
    }
    void Subscribe()
    {
        SubscribersCount++;
    }
    void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

class CookingYoutubeChannel : public YouTubeChannel
{
public:

    CookingYoutubeChannel(string name, string ownername) : YouTubeChannel(name, ownername){}
    //defualt constructor
    CookingYoutubeChannel() : YouTubeChannel(){}

    void Practice(){
        cout << OwnerName << " practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }
};

int main()
{
    CookingYoutubeChannel cookingytChannel("Amy's Kitchen", "Amy");
    CookingYoutubeChannel cookingytChannel2;
    cookingytChannel.PublishVideo("Apple Pie");
    cookingytChannel.PublishVideo("Chocolate Cake");
    cookingytChannel.Subscribe();
    cookingytChannel.Subscribe();  

    cookingytChannel2.GetInfo();
    cookingytChannel.GetInfo();
    cookingytChannel.Practice();






    return 0;
}