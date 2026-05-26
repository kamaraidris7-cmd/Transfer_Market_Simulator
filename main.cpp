#include <iostream>
#include <vector>

#include "Player.h"
#include "Club.h"
#include "TransferSystem.h"
#include "TransferHistory.h"

using namespace std;

int main()
{
    // PREDEFINED CLUBS
    vector<Club> clubs;

    // DEFAULT CLUBS
    clubs.push_back(Club("Real Madrid", 350));
    clubs.push_back(Club("Barcelona", 200));
    clubs.push_back(Club("Manchester United", 250));
    clubs.push_back(Club("Manchester City", 300));
    clubs.push_back(Club("Chelsea", 250));
    clubs.push_back(Club("Arsenal", 200));
    clubs.push_back(Club("Liverpool", 300));
    clubs.push_back(Club("PSG", 450));
    clubs.push_back(Club("Bayern Munich", 400));
    clubs.push_back(Club("Dortmund", 150));
    clubs.push_back(Club("Inter Milan", 170));
    clubs.push_back(Club("AC Milan", 150));
    clubs.push_back(Club("Sporting CP", 100));
    clubs.push_back(Club("Inter Miami", 450));
    clubs.push_back(Club("Al Nassr", 500));


    // DEFAULT PLAYERS

    //Real Madrid
    clubs[0].addPlayer(Player("Kyllian Mbappe", 26, "LW, CF", 200));
    clubs[0].addPlayer(Player("Vini Jr", 25, "LW", 150));
    clubs[0].addPlayer(Player("Arda Gular", 20, "CAM", 90));
    clubs[0].addPlayer(Player("Jude Bellingham", 22, "CAM, CM", 140));
    clubs[0].addPlayer(Player("Dean Huijsen", 22, "CB", 65));
    //Barcelona
    clubs[1].addPlayer(Player("Lamine Yamal", 19, "RW", 200));
    clubs[1].addPlayer(Player("Raphinha", 27, "LW, RW", 80));
    clubs[1].addPlayer(Player("Pedri", 22, "CM", 150));
    clubs[1].addPlayer(Player("Pau Cubarsi", 20, "CB", 80));
    clubs[1].addPlayer(Player("Joan Garcia", 22, "GK", 45));
    //Manchester United
    clubs[2].addPlayer(Player("Bruno Fernandes", 32, "CAM", 40));
    clubs[2].addPlayer(Player("Kobbie Mainoo", 20, "CM", 50));
    clubs[2].addPlayer(Player("Matheus Cunha", 26, "LW, CAM", 70));
    clubs[2].addPlayer(Player("Lisandro martinez", 28, "CB", 40));
    clubs[2].addPlayer(Player("S. Lammens", 23, "GK", 30));
    //Manchester City
    clubs[3].addPlayer(Player("Erling Haaland", 25, "CF", 200));
    clubs[3].addPlayer(Player("Rayan Cherki", 22, "CAM, RW", 65));
    clubs[3].addPlayer(Player("Jeremy Doku", 24, "LW", 65));
    clubs[3].addPlayer(Player("Marc Guehi", 25, "CB", 65));
    clubs[3].addPlayer(Player("Donnarumma", 27, "GK", 45));
    //Chelsea
    clubs[4].addPlayer(Player("Cole Palmer", 23, "CAM, RW", 110));
    clubs[4].addPlayer(Player("Joao Pedro", 23, "CF", 60));
    clubs[4].addPlayer(Player("Enzo Fernandez", 24, "CM, CAM", 90));
    clubs[4].addPlayer(Player("Caicedo", 25, "CDM", 110));
    clubs[4].addPlayer(Player("Reece James", 27, "RB", 60));
    //Arsenal
    clubs[5].addPlayer(Player("Declan Rice", 27, "CM", 120));
    clubs[5].addPlayer(Player("Bukayo Saka", 24, "RW", 120));
    clubs[5].addPlayer(Player("William Saliba", 25, "CB", 90));
    clubs[5].addPlayer(Player("David Raya", 28, "GK", 35));
    clubs[5].addPlayer(Player("Martin Odegaard", 27, "CAM", 65));
    //Liverpool
    clubs[6].addPlayer(Player("Florian Wirtz", 23, "CAM, RW, LW", 110));
    clubs[6].addPlayer(Player("A. Isak", 26, "CF", 100));
    clubs[6].addPlayer(Player("Szoboszlai", 25, "CM, CAM, RB", 100));
    clubs[6].addPlayer(Player("Ekitike", 23, "CF, LW", 90));
    clubs[6].addPlayer(Player("I. Konate", 27, "CB", 50));
    //PSG
    clubs[7].addPlayer(Player("Vitinha", 26, "CM", 110));
    clubs[7].addPlayer(Player("Joao Neves", 21, "CM", 110));
    clubs[7].addPlayer(Player("O. Dembele", 29, "CF, RW", 100));
    clubs[7].addPlayer(Player("Hakimi", 27, "RB", 80));
    //Bayern Munich
    clubs[8].addPlayer(Player("Micheal olise", 24, "RW", 140));
    clubs[8].addPlayer(Player("Jamal Musiala", 23, "CAM, LW", 120));
    clubs[8].addPlayer(Player("Harry Kane", 32, "CF", 65));
    clubs[8].addPlayer(Player("Upamecano", 27, "CB", 70));
    //Dortmund
    clubs[9].addPlayer(Player("Schlotterbeck", 26, "CB", 55));
    clubs[9].addPlayer(Player("Karim Adeyemi", 25, "RW, LW", 50));
    clubs[9].addPlayer(Player("G. Kobel", 28, "GK", 40));
    //Inter Milan
    clubs[10].addPlayer(Player("Lautaro Martinez", 28, "CF", 85));
    clubs[10].addPlayer(Player("Bastoni", 27, "CB", 70));
    clubs[10].addPlayer(Player("Nicolo Barella", 29, "CM", 50));
    clubs[10].addPlayer(Player("Dimarco", 28, "LWB", 50));
    //AC Milan
    clubs[11].addPlayer(Player("Rafeal Leao", 26, "LW", 65));
    clubs[11].addPlayer(Player("Christian Pulisic", 27, "RW", 50));
    clubs[11].addPlayer(Player("Mike Maignan", 30, "GK", 25));
    clubs[11].addPlayer(Player("Pavlovic", 25, "CB", 35));
    //Sporting CP
    clubs[12].addPlayer(Player("Mortem Hjulmand", 26, "CM", 45));
    clubs[12].addPlayer(Player("Ousmane Diomande", 22, "CB", 45));
    clubs[12].addPlayer(Player("Francisco Trincao", 26, "CAM, RW", 35));
    //Inter Miami
    clubs[13].addPlayer(Player("Lionel Messi", 38, "RW, CAM", 15));
    clubs[13].addPlayer(Player("Sergio Busquet", 36, "CDM", 5));
    clubs[13].addPlayer(Player("Casemiro", 33, "CDM", 8));
    //Al Nassr
    clubs[14].addPlayer(Player("Cristiano Ronaldo", 41, "CF", 12));
    clubs[14].addPlayer(Player("Joao Felix", 26, "CF, LW", 25));
    clubs[14].addPlayer(Player("Kingsley Coman", 29, "LW, RW", 22));

    // MAIN MENU LOOP
    int option;

    cout << "\n=================================" << endl;
    cout << "   TRANSFER MARKET SIMULATOR" << endl;
    cout << "=================================" << endl;

    do
    {
        cout << "\n=== MAIN MENU ===" << endl;

        cout << "1. View Clubs" << endl;
        cout << "2. Register Player" << endl;
        cout << "3. Transfer Player" << endl;
        cout << "4. View Transfer History" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Option: ";
        cin >> option;

        switch(option)
        {
        // VIEW CLUBS
        case 1:
        {
            char anotherClub;

            do
            {
                int clubChoice;

                cout << "\n=== CLUBS LIST ===" << endl;

                // Display Clubs
                for (int i = 0; i < clubs.size(); i++)
                {
                    cout << i + 1
                         << ". "
                         << clubs[i].getClubName()
                         << endl;
                }

                // Choose Club
                cout << "\nChoose Club: ";
                cin >> clubChoice;

                // Display Squad
                clubs[clubChoice - 1].displayPlayerNames();

                // PLAYER VIEW LOOP
                char viewPlayer;

                cout << "\nWould You Like To View Player Details? (Y/N): ";
                cin >> viewPlayer;

                while(viewPlayer == 'Y' || viewPlayer == 'y')
                {
                    int playerChoice;

                    cout << "\nEnter Player Number: ";
                    cin >> playerChoice;

                    clubs[clubChoice - 1]
                    .showPlayerDetails(playerChoice - 1);

                    cout << "\nView Another Player? (Y/N): ";
                    cin >> viewPlayer;
                }

                // Another Club?
                cout << "\nWould You Like To View Another Club? (Y/N): ";
                cin >> anotherClub;

            }
            while(anotherClub == 'Y' || anotherClub == 'y');

            break;
        }

        // Player Registration
        case 2:
        {
            int numPlayers;

            cout << "\n=== PLAYER REGISTRATION ===" << endl;
            cout << "Enter Number of Players: ";
            cin >> numPlayers;

            cin.ignore();

            for (int i = 0; i < numPlayers; i++)
            {
                string name, position;
                int age;
                double value;

                cout << "\nEnter Player Name: ";
                getline(cin, name);

                cout << "Enter Age: ";
                cin >> age;

                cin.ignore();

                cout << "Enter Position: ";
                getline(cin, position);

                cout << "Enter Market Value: ";
                cin >> value;

                cin.ignore();

                // Display Clubs
                cout << "\nChoose Club:" << endl;

                for (int j = 0; j < clubs.size(); j++)
                {
                    cout << j + 1
                         << ". "
                         << clubs[j].getClubName()
                         << endl;
                }

                int clubChoice;

                cout << "Enter Club Number: ";
                cin >> clubChoice;

                cin.ignore();

                // Create Player
                Player newPlayer(name, age, position, value);

                // Add Player To Selected Club
                clubs[clubChoice - 1].addPlayer(newPlayer);
            }
            break;
        }

        // TRANSFER PLAYER
        case 3:
        {
            int buyerClub;
            int sellerClub;
            int playerChoice;

            cout << "\n=== TRANSFER PLAYER ===" << endl;

            // Display Clubs
            for (int i = 0; i < clubs.size(); i++)
            {
                cout << i + 1
                     << ". "
                     << clubs[i].getClubName()
                     << endl;
            }

            // Buyer Club
            cout << "\nChoose Buying Club: ";
            cin >> buyerClub;

            // Seller Club
            cout << "Choose Selling Club: ";
            cin >> sellerClub;

            // Prevent Same Club Transfer
            if (buyerClub == sellerClub)
            {
                cout << "\nInvalid Transfer!" << endl;
                cout << "A club cannot buy from itself."
                     << endl;

                break;
            }

            // Display Seller Squad
            clubs[sellerClub - 1]
            .displayPlayerNames();

            // Choose Player
            cout << "\nChoose Player To Transfer: ";
            cin >> playerChoice;

            // Execute Transfer
            TransferSystem::transferPlayer(
                clubs[buyerClub - 1],
                clubs[sellerClub - 1],
                playerChoice - 1
            );

            break;
        }

        // VIEW TRANSFER HISTORY
        case 4:
        {
            TransferHistory::displayHistory();
            break;
        }

        // EXIT
        case 5:
        {
            cout << "\nExiting Program..." << endl;
            break;
        }

        // INVALID OPTION
        default:
        {
            cout << "\nInvalid Option!" << endl;
        }
        }

    }
    while(option != 5);

    cout << "Program Ended Successfully." << endl;

    return 0;
}
