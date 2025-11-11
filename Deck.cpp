#include "Deck.h"
#include <chrono>

Deck::Deck() {
    // seed avec un temps haute résolution
    rng.seed(std::chrono::steady_clock::now().time_since_epoch().count());
    reset();
}

void Deck::reset() {
    cards.clear();
    cards.reserve(52);
    for (int i = 0; i < 52; ++i)
        cards.push_back(i);
}

void Deck::shuffle() {
    std::shuffle(cards.begin(), cards.end(), rng);
}

int Deck::draw() {
    if (cards.empty()) return -1;  // ou lever une exception
    int card = cards.back();
    cards.pop_back();
    return card;
}

bool Deck::empty() const {
    return cards.empty();
}
