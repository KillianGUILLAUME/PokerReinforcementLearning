#pragma once
#include <vector>
#include <random>
#include <algorithm>

class Deck {
public:
    Deck();                     // constructeur : crée un paquet 0–51
    void shuffle();              // mélange le paquet
    int draw();                  // tire une carte du dessus
    bool empty() const;          // vérifie si le deck est vide
    void reset();                // recrée un paquet complet (remet 0–51)

private:
    std::vector<int> cards;      // représente les cartes 0–51
    std::mt19937 rng;            // générateur aléatoire de haute qualité
};
