#include "music.h"
#include <iostream>
using namespace std;
Music::Music(int music):m_music(music)
{
    cout<<"Music Constructor called"<<endl;
}
Music::~Music()
{
    cout<<"Music destructor called"<<endl;
}
Music::Music()
{}

void Music::playMusic()
{
    cout<<"music"<<endl;
}

void Music::display()
{
    cout<<"music display"<<endl;
}
