#include <iostream>
using namespace std;
//Class goes here
class students {
	char name[];
	int grade;
	int game_playing = 0;
	int study = 0;

	//method to check if student is  playing games
	private void playing {
		if (game_playing == 1) {
			cout << "Playing games\n";
		} else {
			cout << "Not playing\n";
			}
	}
	private void change_play {
		if (game_playing == 1){
			game_playing = 0;
		} else {
			game_playing = 1;
	}

	//method to study

}

int main() {
	//students go here

	return 0;
}
