#include <iostream>
#include "song.h"
using namespace std;

//Method Definitions
song::song(string i_title, string i_artist, string i_album, int i_release, int i_plays) {
	//private = copied
	title = i_title;
	artist = i_artist;
	album = i_album;
	release = i_release;
	plays = i_plays;
}

//Accessor definitions
string song::getTitle() {
	return title;
}

string song::getArtist() {
	return artist;
}

string song::getAlbum() {
	return album;
}

int song::getRelease() {
	return release;
}

int song::getPlays() {
	return plays;
}

//MAIN
int main(){
	song Perfect("Perfect", "Ed Sheeran", "Divide", 2017, 5);
	cout << Perfect.getPlays() << "\n";
	return 0;
}
