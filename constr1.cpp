#include <list>
#include <iostream>

using namespace std;

class Channel{
public:
    string name;
    string ownerName;
    int SubscribersCount;
    list<string> PublishedVideosTitles;
    list<string> subscribers;
    bool verified;

    Channel(string Name, string OwnerName, bool Verified){ //parameterizad constructor for class Channel
        name = Name;
        ownerName = OwnerName;
        verified = 1;
        SubscribersCount = 0;
        PublishedVideosTitles = list<string>();

    }
    
     ~Channel(){

     }
    void getInfo(){
        cout << "\nName: " << name << "  "<< "\U0001F468\u200D\U0001F3A4"<<endl; //Unicode for "man-singer" emoji
        cout << "OwnerName: " << ownerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        
        for (string VideoTitle: PublishedVideosTitles){
            cout << VideoTitle << endl;
        }
        for (string subscriber: subscribers){
            cout << subscriber << endl;
        }
        
        //cout << "PublishedVideosTitles: " << PublishedVideosTitles << endl;
        //cout << "subscribers: " << subscribers << endl;
        if (verified == true)
            cout<< "\nVerified \u2705 \n\n"<< endl; //unicode for "green-tick" emoji.
        cout<<"\n"<< endl;
        if (name == "null" || SubscribersCount == 0){ //if condition is met, channel is considered not verified or pending completion
            cout << "Channel pending approval" << endl;
        }


    }
    




};

int main(){
    Channel channel1("Jamie_Miller", "Jamie Miller", true);
    Channel channel2("Sunny_haven", "Samuan Aigno", true);
    channel1.PublishedVideosTitles.push_back("Lost Myself In Loving You");
    channel1.PublishedVideosTitles.push_back("Here's Your Perfect");
    channel1.PublishedVideosTitles.push_back("Last Christmas");
    channel1.PublishedVideosTitles.push_back("Streetlights");


    channel1.getInfo();
    channel2.getInfo();


    
    return 0;
}
