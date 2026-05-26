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
    clubs.push_back(Club("Inter Milan", 180));
    clubs.push_back(Club("AC Milan", 200));
    clubs.push_back(Club("Benfica", 140));
    clubs.push_back(Club("Ajax", 120));
    clubs.push_back(Club("FC Porto", 100));
    clubs.push_back(Club("Dortmund", 150));


    // DEFAULT PLAYERS

    //Real Madrid
    clubs[0].addPlayer(Player("Kyllian Mbappe", 26, "LW, CF", 180));
    clubs[0].addPlayer(Player("Vini Jr", 25, "LW", 150));
    clubs[0].addPlayer(Player("Arda Gular", 20, "CAM", 100));
    clubs[0].addPlayer(Player("Jude Bellingham", 22, "CAM, CM", 120));
    clubs[0].addPlayer(Player("Dean Huijsen", 22, "CB", 75));
    //Barcelona
    clubs[1].addPlayer(Player("Lamine Yamal", 19, "RW", 200));
    clubs[1].addPlayer(Player("Raphinha", 27, "LW, RW", 80));
    clubs[1].addPlayer(Player("Pedri", 22, "CM", 140));
    clubs[1].addPlayer(Player("Pau Cubarsi", 20, "CB", 85));
    clubs[1].addPlayer(Player("Joan Garcia", 22, "GK", 45));
    //Manchester United
    clubs[2].addPlayer(Player("Bruno Fernandes", 32, "CAM", 80));
    clubs[2].addPlayer(Player("Kobbie Mainoo", 20, "CM", 55));
    clubs[2].addPlayer(Player("Matheus Cunha", 26, "LW, CAM", 65));
    clubs[2].addPlayer(Player("Lisandro martinez", 28, "CB", 40));
    clubs[2].addPlayer(Player("S. Lammens", 23, "GK", 35));


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
