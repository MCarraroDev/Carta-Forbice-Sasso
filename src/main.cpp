#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Definizione dell'enum per le mosse
enum Move { SASSO = 1, CARTA, FORBICI };

// Converte una mossa nel corrispondente nome in stringa
string moveToString(Move m) {
    switch (m) {
        case SASSO:   return "Sasso";
        case CARTA:   return "Carta";
        case FORBICI: return "Forbici";
        default:      return "";
    }
}

// Richiede e restituisce la mossa dell'utente
Move getUserMove() {
    int choice;
    cout << "Scegli una mossa:\n"
         << "1 - Sasso\n"
         << "2 - Carta\n"
         << "3 - Forbici\n"
         << "Inserisci il numero corrispondente: ";
    cin >> choice;
    
    // Gestione dell'input non valido
    while (choice < 1 || choice > 3) {
        cout << "Scelta non valida. Riprova: ";
        cin >> choice;
    }
    
    return static_cast<Move>(choice);
}

// Genera casualmente la mossa del computer
Move getComputerMove() {
    return static_cast<Move>(rand() % 3 + 1);
}

// Determina il risultato della partita
string determineWinner(Move user, Move comp) {
    if (user == comp)
        return "Pareggio!";
    if ((user == SASSO && comp == FORBICI) ||
        (user == CARTA && comp == SASSO) ||
        (user == FORBICI && comp == CARTA))
        return "Hai vinto!";
    else
        return "Hai perso!";
}

int main() {
    // Inizializza il generatore di numeri casuali
    srand(time(0));

    char playAgain;
    do {
        Move userMove = getUserMove();
        Move compMove = getComputerMove();
        
        cout << "\nHai scelto: " << moveToString(userMove) << endl;
        cout << "Il computer ha scelto: " << moveToString(compMove) << endl;
        cout << "Risultato: " << determineWinner(userMove, compMove) << "\n\n";
        
        cout << "Vuoi giocare di nuovo? (s/n): ";
        cin >> playAgain;
        cout << endl;
        
    } while (playAgain != 'n' && playAgain != 'N');
    
    cout << "Grazie per aver giocato!" << endl;
    return 0;
}
