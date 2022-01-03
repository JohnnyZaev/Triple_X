#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
	//*** Introduction and Easter egg ***
	//std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠛⢹⡿⠟⠛⠛⠉⢉⡽⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠉⠁⠁\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠐⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢉⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⢿⡿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣯⣻⢿⣻⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣶⣫⣿⣿⣿⣿⣿⣻⣾⢼⣿⢿⣿⢷⡇⠀⠀⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⢉⣿⢽⡯⣿⣿⣿⣿⣿⣿⡿⠋⠀⢸⡅⠀⠀⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⠀⢠⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⣠⣿⣿⣿⣯⣻⣽⡯⣟⡿⣿⡆⠀⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠙⠢⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⢿⣿⣿⣿⣿⡿⠿⣾⣿⣯⣗⡯⣿⣦⣶⣶⣾⣹⡀⠀⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠈⠓⢦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠢⡀⠀⠀⠀⠀⠀⠀⠘⣹⣿⣿⣿⣿⣿⠏⠀⠀⠈⢻⢿⣷⣿⣿⣿⣻⣿⣿⣿⣿⣄⠀⠀⠀⠀⠀\n⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠈⠛⠿⣷⣦⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⡀⠀⠰⡄⠀⠀⡴⣟⣿⠾⢿⣿⠿⠇⠀⠀⣠⠿⢿⠾⠛⠛⢿⡾⣿⣻⣿⡿⣿⣦⡀⠀⠀⠀\n⣿⣿⣿⣿⡿⠋⠉⢻⡄⠀⠀⠀⢀⣀⡀⠀⠀⠠⢄⣉⠛⠻⢿⣶⣦⣄⡀⠀⠀⠀⢀⡔⠂⠔⠀⠀⠀⢤⡀⠈⠳⣼⣏⣀⣀⣀⣋⣁⣀⣀⣀⣈⣁⣀⣀⣀⣀⡤⠾⠛⢛⣿⣿⠯⠿⢿⣿⣦⠀⠀\n⣿⣿⣿⣿⠁⣀⠀⠈⣇⠀⠐⠉⠁⣀⣀⣀⣀⣀⣀⣀⣀⠀⠀⠈⠙⣻⣿⣷⣶⣶⠋⠀⠀⠀⠀⠀⠀⠀⠈⠑⠀⠈⠻⠿⠿⠿⠿⠿⠿⠿⠿⠟⠛⠛⠉⠉⠀⠀⠀⠀⠘⣁⣠⣤⣶⣾⣭⣄⡀⠀\n⣿⣿⣿⡷⠊⡹⠳⡀⣿⠀⠀⣨⣿⣿⠿⠿⢟⣿⣿⣿⣿⣿⣿⣶⣦⣌⡑⠪⡉⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠤⠤⠀⠀⠤⠤⠤⠤⠤⠤⢄⡀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧⡀\n⣿⣿⣿⡇⢀⣇⠀⢹⣿⡇⠀⠊⠁⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠔⠔⢋⣀⣤⣴⣶⣶⣶⣶⣶⣦⣤⣄⣈⠉⠑⠀⠀⠀⠀⠀⠀⣾⣿⣿⣟\n⣿⣿⣿⡇⣎⠈⠦⣿⣿⣿⠀⠀⠀⠀⠀⠀⢷⢈⣿⣿⡏⠀⠙⣿⣿⣿⣿⠛⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⠿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⡿⠿⣦⡀⠀⠀⠀⠀⢠⣿⣿⣿⡏\n⣿⣿⣿⢿⠘⣖⢲⣿⣿⣿⡇⠀⠀⠀⠀⠀⠈⢯⡹⢿⣿⣶⡿⠟⠉⢹⡏⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠞⠉⠀⠐⣿⠻⣿⣿⡀⠀⣉⣿⡿⠿⡿⠀⠈⠁⠀⠀⠀⠀⣼⣿⣿⣿⡇\n⣿⣿⣿⣟⡆⠈⢺⣿⣿⣿⣿⡄⠀⠈⠳⢤⣀⠀⠙⠦⢤⣁⣀⡤⠔⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣾⠟⠻⣿⡿⡿⠉⢁⡴⠃⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⡇\n⣿⣿⣿⣿⣿⣄⣼⣿⣿⡿⠁⢳⠀⠀⠀⠀⠈⠙⠲⠶⠤⠤⠤⠤⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⢦⣥⠥⠤⠒⠈⠀⢀⣠⠖⠀⠀⠀⢠⣿⠏⢿⣿⣿⣇\n⣿⣿⣿⣿⣿⣿⣿⡿⠋⠳⣄⡘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠲⠦⣤⣤⣤⣤⣤⠄⠚⠉⠁⠀⠀⠀⢀⣾⣿⠞⢧⢻⣿⣿\n⣿⣿⣿⣯⣿⣿⣽⣧⡀⠀⠀⠉⢹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣯⠧⠤⠚⠉⠙⠻\n⣯⣭⣿⣿⣿⣿⣿⣗⣿⣦⡰⣿⠂⢷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠏⣀⠀⠀⠀⠀⣠⣾\n⣻⢝⡻⡻⢻⣟⢟⣿⣿⣿⢟⣿⠦⠬⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠏⠘⡟⢀⣠⣶⣿⣿⣿\n⠁⠀⠀⣤⡤⠶⠿⠛⠋⠁⠀⣿⢀⣤⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢌⢣⠀⠀⠐⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⢛⡛⢒⡟⠋⠹⣿⣿⣿⣿\n⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣾⣿⢻⠀⢘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡇⢸⢿⣿⣇⠀⠀⠙⣿⣿⣿\n⠀⠀⠀⠀⠀⠀⠀⠀⠈⡿⣽⣿⣿⢾⠀⣾⣿⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣤⣤⣤⣄⣀⣀⠀⡀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⡇⣾⣾⣿⣿⡗⠀⠀⠈⠻⣿\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⡷⢺⣿⣟⢻⢸⣿⣿⡀⢷⣄⠀⠀⠀⠀⠀⠀⠀⠸⣯⢿⣦⣤⣀⣀⠀⠀⠈⠉⠉⠉⠙⣻⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⠃⢻⣇⣿⣾⣿⣏⡇⠀⠀⠀⠀⠈\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⢻⢻⡏⢿⣿⣿⣿⡇⠘⣿⣷⣄⠀⠀⠀⠀⠀⠀⠈⠛⠺⠭⣙⣛⠛⠛⠛⠛⠛⠛⢛⣋⣼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⣻⡏⢧⠀⢹⡷⣿⣿⢹⠃⠀⠀⠀⠀⠀\n⠆⠀⠀⣀⣠⠤⠖⠒⠒⡇⡎⢸⠸⢸⣿⣿⣿⣿⣄⠘⡽⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠠⠬⠅⠈⡉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠞⠁⢠⣿⠁⢸⡀⢸⣱⣻⢻⣿⡀⠀⠀⠀⠀⠀\n⣶⠖⠋⠁⠀⠀⠀⠀⠀⣷⠁⢸⠀⢿⣿⣿⣿⣿⣿⣆⠘⢞⠻⡿⠳⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠶⠋⠀⠀⢀⡾⢋⠄⣾⡇⢸⠃⡇⢸⣿⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠴⠛⠛⢻⣿⣿⣿⣿⣿⣿⣷⡄⢐⠮⡲⣼⣟⠲⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠞⠋⠀⠀⠀⢀⡴⢟⡵⠁⣴⣿⣇⡟⠶⣇⠸⡇⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⢀⡏⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣦⡑⢬⡛⢿⣷⡀⠉⠓⠦⣄⣀⠀⠀⠀⠀⠀⣀⣠⠴⠞⠋⠀⠀⠀⠀⠀⠀⠔⢋⡠⠍⣠⣾⣿⣿⠀⡇⠀⠈⢷⣇⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⢀⣴⣿⡇⠀⠀⢀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣍⠲⠭⡛⠶⢤⣄⣀⡉⠙⠛⠛⠛⠉⠁⠀⠀⢀⣀⣠⠤⠖⢚⣉⠤⠂⣉⣤⣾⣿⣿⣿⣿⣄⠃⠀⠀⢸⠉⠙⠒⠶⠤⣤⣀\n⠀⠀⠀⠀⣀⣴⣿⣿⣿⣷⣶⣾⡟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣈⡑⠓⠠⡉⢹⡖⠒⢛⣙⣋⣉⣉⡩⠅⠀⠀⣉⣡⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⢸⠀⠀⠀⠀⠀⠀⠈\n⠀⠀⣠⣶⣿⣿⣿⣿⣿⣽⣷⣿⣿⡼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡆⢹⢸⡇⠀⣤⣤⣤⣤⣤⣴⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⠻⣦⡾⠀⠀⠀⠀⠀⠀⠀";
	std::cout << std::endl;
	std::cout << "You are a secret agent breaking into a level " << Difficulty <<  " secure server room..." << std::endl;
	std::cout << "You need to enter the correct codes to continue..." << std::endl;
	std::cout << std::endl;
}

bool PlayGame(int Difficulty)
{
	// *** Game function ***
	int CodeA = rand() % Difficulty + Difficulty;
	int CodeB = rand() % Difficulty + Difficulty;
	int CodeC = rand() % Difficulty + Difficulty;
	int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;

	PrintIntroduction(Difficulty);
	std::cout << "+ There are 3 numbers in the code" << std::endl;
	std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
	std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;
	GuessSum = GuessA + GuessB + GuessC;
	GuessProduct = GuessA * GuessB * GuessC;
	std::cout << "Your sum = " << GuessSum << std::endl;
	std::cout << "Your product = " << GuessProduct << std::endl;
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "*** Well done agent! You have extracted a file! Keep going! ***" << std::endl;
		return (true);
	}
	else
	{
		std::cout << "*** You entering the wrong code! Careful agent! Try again! ***" << std::endl;
		return (false);
	}
	std::cout << std::endl;
}

int	main(void)
{
	bool		LevelComplete;
	int			LevelDifficulty = 1;
	const int	MaxLevel = 6;

	srand(time(NULL));
	while (LevelDifficulty < MaxLevel)
	{
		LevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();
		
		if (LevelComplete)
			LevelDifficulty++;
	}
	std::cout << "*** Great work agent! You got all the files! Now get out of there! ***" << std::endl;
	return (0);
}