#include "Mlecz.h"
#include "Swiat.h"

Mlecz::Mlecz(Swiat& sw) : Roslina(0, 0, '*', 14, 0, "MLECZ", sw) {
	if (swiat.world[pos.y][pos.x] == NULL)
		swiat.world[pos.y][pos.x] = this;
	else {
		reallocate();
	}
};

Mlecz::Mlecz(Swiat& sw, int x, int y) : Roslina(0, 0, '*', 14, 0, "MLECZ", sw) {
	this->pos.x = x;
	this->pos.y = y;

	if (swiat.world[pos.y][pos.x] == NULL)
		swiat.world[pos.y][pos.x] = this;
	else {
		reallocate();
	}
}

void Mlecz::akcja() {
	grow();
	if (this->wiek == 150) {
		this->color = 6;
	}

	for (int i = 0; i < 3; i++) {
		if (swiat.losuj(1, 250) == 1) {
			if (rozsiewanie()) {
				rozmnazanie();
			}
		}
	}


}

void Mlecz::rozmnazanie() {
	Organizm *child;
	child = new Mlecz(swiat, pos.x, pos.y);
	swiat.lista.push_back(child);
	swiat.sortujInicjatywa();
}

void Mlecz::kolizja(Organizm& other) {

}

