#ifndef struct_H
#define struct_H
#include "../lib/struct_H.h"
#include "../lib/handler.h"
#endif

// Prolog Phase der Kommunikation
// Zuweisung eines freien Spielers durch Gameserver
// @param int socketfd: FIle-Deskriptor des Sockets
// @param gameId: Id des Reversi Spiels, welches erstellt wurde
// @param playerNr: preferierte Spielnummer, wenn nicht frei, dann zuweisung von Server
bool performConnection(int socketfd, char *gameId, int playerNr);
