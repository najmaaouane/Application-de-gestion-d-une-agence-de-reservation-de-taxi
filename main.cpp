#include <iostream>
#include <string>

using namespace std;

// Classe représentant un client
class Client {
public:
    string nom;
    string adresse;
    string adresseDepart;
    string adresseArrivee;
    string numero;
    string marqueTaxi;
    string date;
    string temps;
};

// Fonction pour saisir les informations du client
void saisirInformations(Client& client) {
    cout << "Entrez votre nom : ";
    getline(cin, client.nom);

    cout << "Entrez votre adresse : ";
    getline(cin, client.adresse);

    cout << "Entrez votre numéro de téléphone : ";
    getline(cin, client.numero);

    cout << "Entrez l'adresse de départ : ";
    getline(cin, client.adresseDepart);

    cout << "Entrez l'adresse d'arrivée : ";
    getline(cin, client.adresseArrivee);

    cout << "Entrez la date de réservation : ";
    getline(cin, client.date);

    cout << "Entrez l'heure de réservation : ";
    getline(cin, client.temps);

    cout << "Choisissez la marque de taxi : ";
    getline(cin, client.marqueTaxi);
}

// Fonction pour afficher les informations du client


void afficherInformations(const Client& client) {
    cout << "Informations du client :\n";
    cout << "Nom : " << client.nom << endl;
    cout << "Adresse : " << client.adresse << endl;
    cout << "Numéro de téléphone : " << client.numero << endl;
    cout << "Adresse de départ : " << client.adresseDepart << endl;
    cout << "Adresse d'arrivée : " << client.adresseArrivee << endl;
    cout << "Date de réservation : " << client.date << endl;
    cout << "Heure de réservation : " << client.temps << endl;
    cout << "Marque de taxi : " << client.marqueTaxi << endl;
}

int main() {
    // Création d'un nouveau client
    Client client;

    // Saisie des informations du client
    saisirInformations(client);

    // Affichage des informations du client
    afficherInformations(client);
    
    cout<<"reservation effectuer"<<endl;
    cout<<"bon voyage :)";

    return 0;
}
