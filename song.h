using namespace std;
class song {
	public:
		//Constructor
		song (string i_title, string i_artist, string i_album, int i_release, int i_plays);

		//Accessors
		string getTitle();
		string getArtist();
		string getAlbum();
		int getRelease();
		int getPlays();

		//Mutators
		void changePlays(string plays_change);

	private:
		string title;
		string artist;
		string album;
		int release;
		int plays;


};
