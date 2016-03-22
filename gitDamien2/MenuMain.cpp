
#include "ofMain.h"
#include "stdlib.h"
#include "stdio.h"
#include "MenuMain.h"
int tailleEcranX;
int tailleEcranY;
bool menu = true;
bool option = true;

MenuMain::MenuMain()
{
		tailleEcranX = ofGetScreenWidth();
		tailleEcranY = ofGetScreenHeight();
		death.loadImage("fondEcran.png");
		font.loadFont("CandyShop.ttf", 10, true);
		button.loadImage("boutton.png");
		buttonSur.loadImage("bouttonSur.png");
		
		
	//--------------------------------------------------------------
		ofSetBackgroundColor(0,0,0);
		death.draw(0,0);
		if (menu && option) {
			int xbutton = 100;
			do {//création graphique des boutons
				button.draw(tailleEcranX / 2 - 100, xbutton);
				xbutton += 100;
			} while (xbutton <= 400);



			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 100 && ofGetMouseY() <= 150) {
					buttonSur.draw(tailleEcranX / 2 - 105, 95);
				}
			}
			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 200 && ofGetMouseY() <= 250) {
					buttonSur.draw(tailleEcranX / 2 - 105, 195);
				}
			}
			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 300 && ofGetMouseY() <= 350) {
					buttonSur.draw(tailleEcranX / 2 - 105, 295);
				}
			}
			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 400 && ofGetMouseY() <= 450) {
					buttonSur.draw(tailleEcranX / 2 - 105, 395);
				}
			}


			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 100 && ofGetMouseY() <= 150) {
					if (ofGetMousePressed()) {
						menu = false;
					}
				}
			}
			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 200 && ofGetMouseY() <= 250) {
					if (ofGetMousePressed()) {
						option = false;
						//MenuOption();
					}
				}
			}
			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 300 && ofGetMouseY() <= 350) {
					if (ofGetMousePressed()) {

					}
				}
			}

			if (ofGetMouseX() >= tailleEcranX / 2 - 100 && ofGetMouseX() <= tailleEcranX / 2 + 100) {
				if (ofGetMouseY() >= 400 && ofGetMouseY() <= 450) {
					if (ofGetMousePressed()) {
						OF_EXIT_APP(0);
					}
				}
			}

			font.drawString("Jouer", tailleEcranX / 2 - 30, 130);
			font.drawString("Options", tailleEcranX / 2 - 35, 230);
			font.drawString("Credits", tailleEcranX / 2 - 38, 330);
			font.drawString("Quitter", tailleEcranX / 2 - 38, 430);

		}
		if (menu == false)
		{
			mouvement();
		}
		if (option == false)
		{
			MenuOption();
		}
	

	//--------------------------------------------------------------
	

	//--------------------------------------------------------------



}


MenuMain::~MenuMain()
{
}
