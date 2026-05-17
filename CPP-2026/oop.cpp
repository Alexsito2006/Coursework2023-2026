#include <iostream>
#include <string>

using namespace std;

class smashRoster {
    private:
        string charName;
    public:
        string weightClass;
        int weight;
        char tier;

    smashRoster(string tcharName) { //Allowes to set the name in (" ") after creating the instance in main.
        charName = tcharName;
    }

    smashRoster(string tcharName, int tweight) {
        charName = tcharName;
        weight = tweight;
    }
    
    void setCharName(string tcharName) {
        charName = tcharName;
    }

    string getCharName() {
        return charName;
    }

    void printStats() {
        cout << charName << " Weight Class: " << weightClass << " Weight: " << weight << " Tier: " << tier << endl;
    }
};

int main() {
    smashRoster s1("Mario", 100); // Creates an instance of my class
    s1.weightClass = "Middle";
    s1.tier = 'C';
    smashRoster s2("Luigi", 97);
    s2.weightClass = "Middle";
    s2.tier = 'C';
    smashRoster s3("Peach", 90);
    s3.weightClass = "Middle";
    s3.tier = 'B';
    smashRoster s4("Bowser", 120);
    s4.weightClass = "HeavyWeight";
    s4.tier = 'F';
    smashRoster s5("Donkey Kong", 114);
    s5.weightClass = "HeavyWeight";
    s5.tier = 'D';

    cout << "------------------------------------------------------------------" << endl;
    s1.printStats(); //Prints the stats by using the void function in the class
    s2.printStats();
    s3.printStats();
    s4.printStats();
    s5.printStats();
    cout << "------------------------------------------------------------------" << endl;
}
