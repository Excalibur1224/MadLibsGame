//Authors: 
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int dayOfAugust;
   string townName;
   string attendees;
   string performer;
   string verbHome;
   string sulker;
   string shadowDescription;

    cout<< "Hi, welcome to mad libs"<<endl;
    cout<< "Give a whole number"<<endl;
    cin>> dayOfAugust;
    cout<< "Give a first name"<<endl;
    cin>> townName;
    cout<< "Give a plural noun"<<endl;
    cin>> attendees;
    cout<< "Give a noun"<<endl;
    cin>> performer;
    cout<< "Give a verb"<<endl;
    cin>> verbHome;
    cout<< "Give a noun"<<endl;
    cin>> sulker;
    cout<< "Give an adjective"<<endl;
    cin>> shadowDescription;

    cout<< "On the "<< dayOfAugust << " night of August, the town of "<< townName << " was having a party with all of the "<< attendees << " in attendence. Once the "<< performer <<
    " had sung their last song, the people decided to "<< verbHome << ", little did they know that the "<< sulker << " was waiting for them in the "<< shadowDescription << " shadows."<< endl;

  return 0;
}
