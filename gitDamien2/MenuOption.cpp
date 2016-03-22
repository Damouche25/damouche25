#include "MenuOption.h"
#include "ofMain.h"
#include "MenuMain.h"


MenuOption::MenuOption()
{
	bool menuOption = true;
	int tailleEcranX;
	int tailleEcranY;
	tailleEcranX = ofGetScreenWidth();
	tailleEcranY = ofGetScreenHeight();
	font.loadFont("CandyShop.ttf", 10, true);
	button.loadImage("boutton.png");
	buttonSur.loadImage("bouttonSur.png");


	if (menuOption) {
		int xbutton = 100;
		do {//création graphique des boutons
			button.draw(tailleEcranX / 4 - 100, xbutton);
			xbutton += 100;
		} while (xbutton <= 500);



		//colonne de gauche

		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 100 && ofGetMouseY() <= 150) {
				buttonSur.draw(tailleEcranX / 4 - 105, 95);
			}
		}
		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 200 && ofGetMouseY() <= 250) {
				buttonSur.draw(tailleEcranX / 4 - 105, 195);
			}
		}
		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 300 && ofGetMouseY() <= 350) {
				buttonSur.draw(tailleEcranX / 4 - 105, 295);
			}
		}
		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 400 && ofGetMouseY() <= 450) {
				buttonSur.draw(tailleEcranX / 4 - 105, 395);
			}
		}

		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 500 && ofGetMouseY() <= 550) {
				buttonSur.draw(tailleEcranX / 4 - 105, 495);
			}
		}

		//**********************************************
		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 100 && ofGetMouseY() <= 150) {
				if (ofGetMousePressed()) {
				}
			}
		}
		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 200 && ofGetMouseY() <= 250) {
				if (ofGetMousePressed()) {

				}
			}
		}
		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 300 && ofGetMouseY() <= 350) {
				if (ofGetMousePressed()) {

				}
			}
		}

		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 400 && ofGetMouseY() <= 450) {
				if (ofGetMousePressed()) {
				}
			}
		}

		if (ofGetMouseX() >= tailleEcranX / 4 - 100 && ofGetMouseX() <= tailleEcranX / 4 + 100) {
			if (ofGetMouseY() >= 500 && ofGetMouseY() <= 550) {
				if (ofGetMousePressed()) {
					menuOption = false;
				}
			}
		}

		//colonne de gauche
		font.drawString("Haut", tailleEcranX / 4 - 30, 130);
		font.drawString("Bas", tailleEcranX / 4 - 35, 230);
		font.drawString("Gauche", tailleEcranX / 4 - 38, 330);
		font.drawString("Droite", tailleEcranX / 4 - 38, 430);
		font.drawString("Retour", tailleEcranX / 4 - 38, 530);
		//Colonne de droite

		xbutton = 100;
		do {//création graphique des boutons
			button.draw(tailleEcranX / 4 * 3 - 100, xbutton);
			xbutton += 100;
		} while (xbutton <= 400);


		if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 100 && ofGetMouseY() <= 150) {
				buttonSur.draw(tailleEcranX / 4 * 3 - 105, 95);
			}
		}

		if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 200 && ofGetMouseY() <= 250) {
				buttonSur.draw(tailleEcranX / 4 * 3 - 105, 195);
			}
		}
		if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 300 && ofGetMouseY() <= 350) {
				buttonSur.draw(tailleEcranX / 4 * 3 - 105, 295);
			}
		}
		if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 400 && ofGetMouseY() <= 450) {
				buttonSur.draw(tailleEcranX / 4 * 3 - 105, 395);
			}
		}



		//********************************
		if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 100 && ofGetMouseY() <= 150) {
				if (ofGetMousePressed()) {

				}
			}
		}if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 200 && ofGetMouseY() <= 250) {
				if (ofGetMousePressed()) {

				}
			}
		}if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 300 && ofGetMouseY() <= 350) {
				if (ofGetMousePressed()) {

				}
			}
		}if (ofGetMouseX() >= tailleEcranX / 4 * 3 - 100 && ofGetMouseX() <= tailleEcranX / 4 * 3 + 100) {
			if (ofGetMouseY() >= 400 && ofGetMouseY() <= 450) {
				if (ofGetMousePressed()) {

				}
			}
		}


		//colonne de droite
		font.drawString("tirer", tailleEcranX / 4 * 3 - 38, 130);
		font.drawString("saut", tailleEcranX / 4 * 3 - 38, 230);
		font.drawString("inventaire", tailleEcranX / 4 * 3 - 50, 330);
		font.drawString("deposer", tailleEcranX / 4 * 3 - 35, 430);
	}
	if (menuOption == false)
	{
		MenuMain();
	}
}


MenuOption::~MenuOption()
{
}
