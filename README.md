CADRE DE REALISATION

Ce projet a été développé lors de ma deuxième année de spécialité NSI (Terminale, 2ᵉ semestre en 2025). 
Il utilise la plateforme Arduino, programmée en C++.
Arduino est la marque d'une plateforme de prototypage open-source qui permet aux utilisateurs de créer des objets électroniques interactifs à partir de cartes électroniques sur lesquelles se trouve un microcontrôleur.

FONCTIONNEMENT

1. Mesure du taux de CO2
Le capteur de gaz placé à l’intérieur du tube mesure en continu le taux de gaz. Ces informations sont transmises à la carte Arduino Uno, qui traite les données grâce au code programmé en C++ sur l’IDE Arduino.

2. Analyse et seuil
L’Arduino compare le taux de CO2 mesuré avec un seuil prédéfini. Si le taux reste en dessous du seuil, la LED verte reste allumé, le système reste inactif et le ventilateur est éteint.

3. Activation du système
Lorsque le capteur détecte que le CO2 dépasse le seuil :
La LED rouge s'allume et la verte s'éteint.
L’Arduino envoie un signal au servomoteur qui ouvre les portes du tube pour permettre la circulation de l’air.
Le mini ventilateur s'active pour souffler de l’air et diminuer le taux de CO2.

4. Retour à la normale
Une fois que le taux de CO2 redescend sous le seuil :
Le ventilateur s’arrête.
Le servomoteur referme les portes du tube.
La LED rouge s'éteint et la LED verte s'allume pour signaler que le tube est à nouveau stable.
