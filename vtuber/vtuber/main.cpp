#include <iostream>
#include <cstdlib>
#include <string>
#include <thread>
#include <chrono>
#include <string>
#include <cctype>
#include "main.h"
using namespace std;

int main() {
	string word;
	bool tetoHotOrNot = false ;
	string gardeTetoOrMiku;
	while (word != "y") {
		system("cls");
		cout << "Welcome, Do you like vocaloids and utauloids ? (y/n): ";
		getline(cin, word);
	}

	if (word == "y") {
		string mikuOrTeto;
		system("cls");
		cout << "Do you wanna see miku or teto ?: ";
		getline(cin, mikuOrTeto);
		gardeTetoOrMiku = mikuOrTeto;
		game_enter(mikuOrTeto, tetoHotOrNot);
	}

	system("cls");
if (gardeTetoOrMiku == "teto") {
	if (tetoHotOrNot) {
		cout << "You thought";
		video_open();
		return -1;
	}

	else if (!tetoHotOrNot) {
		cout << "teto is cool";
	}
}
	system("pause");
}

void game_enter(string theChosenOne, bool& TetoSmeggsyOrNot) {
	string sexyOrNot;
	if (theChosenOne == "miku")
	{
		cout << "bye";
		return;

	}

	else if (theChosenOne == "teto") {
		
		cout << "Smeggsy Teto or cool Teto ? (s/c)";
		getline(cin, sexyOrNot);

		if (sexyOrNot == "s") {
			TetoSmeggsyOrNot = true;

		}

		else if (sexyOrNot == "c") {
			return;
		}
	}
}




void video_open() {
	std::string url = "https://video-cdn3.gelbooru.com/images/47/5a/475a18b21664919c53b64c76a1bf88f2.mp4";

	
		// Open Chrome in app mode (popup style), autoplay allowed
		std::string cmd =
			R"(start chrome --app=)" + url +
			R"( --window-size=640,360 --autoplay-policy=no-user-gesture-required)";

		system(cmd.c_str());



}