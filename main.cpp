//Andrew Hines & Ethan Marsh
//8-25-2021
//Code used from Dr. Emrich
//Project 1, song list sort


#include <vector>
#include <iostream>
#include <string>
#include "artist.h"

using namespace std;

/*
struct Song{
    string title;
    int time;
    int track;
};

struct Album{
  map <int, Song > songs;
  string name;
  int time;
  int nsongs;
};

struct Artist{
  map <string, Album > albums;
  string name;
  int time;
  int nsongs;
};
*/

int main(int argc, char *argv[]) {

  string title;
  string time;
  string artist;
  string album;
  string genre;
  string track;


  while(cin>>title){
  
  
    cin>>time;
    
    
    
    cin>>artist;
    cin>>album;
    cin>>genre;
    cin>>track;

    cout<<title<<endl;
    cout<<time<<endl;
    cout<<artist<<endl;
    cout<<album<<endl;
    cout<<genre<<endl;
    cout<<track<<endl;
    cout<<endl;
  }


    
  return 0;
}

