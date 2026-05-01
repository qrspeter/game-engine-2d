class Menu
{
    public:
        Menu() = default;

        void showMenu()
        {
            cout << CLEAR;
            cout << MAGENTA << "Welcome to " << CYAN << "LionFeeding" << RESET << endl;
            cout << "Select a menu item using a number and press enter" << endl;
            cout << "1. " << CYAN << "Start Game vs PC" << RESET << endl;
            cout << "2. " << CYAN << "Start Game 1 vs 1" << RESET << endl;
            cout << "3. " << GREEN << "Exit" << RESET << endl;
        }

        void showDifficulty()
        {
            cout << CLEAR;
            cout << "Please select difficulty level" << endl;
            cout << "1. " << GREEN << "Low" << RESET << endl;
            cout << "2. " << BLUE << "Medium" << RESET << endl;
            cout << "3. " << RED << "Hard" << RESET << endl;
            cout << "4. Back to Menu" << endl;
        }

        void showRules()
        {
            cout << CLEAR;
            cout << "You can move using the keys w,a,d,s and for 2nd player using the keys i,j,k,l." << endl;
            cout << "You target is to collect as much food as possible before time runs out." << endl;
            cout << "If you understand the rules, press enter and the game will begin." << endl;
        }
};
