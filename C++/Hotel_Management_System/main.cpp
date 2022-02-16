#include <bits/stdc++.h>
using namespace std;

int main() {
    //Quantity
    int iRoom, iPasta, iBurger, iPizza, iSanduies, iChicken, iTea, iCoffee;
    int sRoom=0, sPasta=0, sBurger=0, sPizza=0, sSanduies=0, sChicken=0, sTea=0, sCoffee=0;
    int tpRoom=0, tpPasta=0, tpBurger=0, tpPizza=0, tpSanduies=0, tpChicken=0, tpTea=0, tpCoffee=0;
    int n, countity;

cout << "\n-----------Welcome to Hotel Management System Application-------------";

cout << "\n\n\n\tQuantity of items we have: ";

cout << "\n\n Rooms available: ";
cin >> iRoom;

cout << "\n Quantity of pasta(s): ";
cin >> iPasta;

cout << "\n Quantity of burger(s): ";
cin >> iBurger;

cout << "\n Quantity of pizza(s): ";
cin >> iPizza;

cout << "\n Quantity of sanduies(s): ";
cin >> iSanduies;

cout << "\n Quantity of chicken(s): ";
cin >> iChicken;

cout << "\n Quantity of tea(s) cup: ";
cin >> iTea;

cout << "\n Quantity of coffee(s) cup: ";
cin >> iCoffee;

m:
cout << "\n\n\n------------------------------------------------------------------------";

cout << "\n\t\tPlease select from the menu options";

cout << "\n\n 1) Room";
cout << "\n 2) Pasta";
cout << "\n 3) Burger";
cout << "\n 4) Pizza";
cout << "\n 5) Sanduies";
cout << "\n 6) Chicken";
cout << "\n 7) Tea";
cout << "\n 8) Coffee";
cout << "\n 9) Information regarding sales and collection";
cout << "\n 0) Exit";

cout << "\n\nPlease enter your choice: ";
cin >> n;


switch (n)
{
case 1:
    cout << "\nHow many room you want to order: ";
    cin >> countity;

    if(iRoom-sRoom>=countity){
        sRoom = sRoom + countity;
        tpRoom = tpRoom + (4600 * countity);
        cout << "\n\t\t" << countity << " room(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iRoom-sRoom << " room(s) are available.";
    }
    break;
case 2:
    cout << "\nHow many pasta you want to order: ";
    cin >> countity;

    if(iPasta-sPasta>=countity){
        sPasta = sPasta + countity;
        tpPasta = tpPasta + (200 * countity);
        cout << "\n\n\t" << countity << " pasta(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iPasta-sPasta << " Pasta(s) are available.";
    }
    break;
case 3:
    cout << "\nHow many burger you want to order: ";
    cin >> countity;

    if(iBurger-sBurger>=countity){
        sBurger = sBurger + countity;
        tpBurger = tpBurger + (120 * countity);
        cout << "\n\n\t" << countity << " burger(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iBurger-sBurger << " burger(s) are available.";
    }
    break;
case 4:
    cout << "\nHow many pizza you want to order: ";
    cin >> countity;

    if(iPizza-sPizza>=countity){
        sPizza = sPizza + countity;
        tpPizza = tpPizza + (600 * countity);
        cout << "\n\n\t" << countity << " pizza(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iPizza-sPizza << " pizza(s) are available.";
    }
    break;
case 5:
    cout << "\nHow many sanduies you want to order: ";
    cin >> countity;

    if(iSanduies-sSanduies>=countity){
        sSanduies = sSanduies + countity;
        tpSanduies = tpSanduies + (50 * countity);
        cout << "\n\n\t" << countity << " sanduies(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iSanduies-sSanduies << " sanduies(s) are available.";
    }
    break;
case 6:
    cout << "\nHow many chicken you want to order: ";
    cin >> countity;

    if(iChicken-sChicken>=countity){
        sChicken = sChicken + countity;
        tpChicken = tpChicken + (250 * countity);
        cout << "\n\n\t" << countity << " chicken(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iChicken-sChicken << " chicken(s) are available.";
    }
    break;
case 7:
    cout << "\nHow many tea you want to order: ";
    cin >> countity;

    if(iTea-sTea>=countity){
        sTea = sTea + countity;
        tpTea = tpTea + (15 * countity);
        cout << "\n\n\t" << countity << " tea(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iTea-sTea << " tea(s) are available.";
    }
    break;
case 8:
    cout << "\nHow many coffee you want to order: ";
    cin >> countity;

    if(iCoffee-sCoffee>=countity){
        sCoffee = sCoffee + countity;
        tpCoffee = tpCoffee + (25 * countity);
        cout << "\n\n\t" << countity << " coffee(s) are ordered successfully.";
    }
    else{
        cout << "\n\t\tSorry! only "<< iCoffee-sCoffee << " coffee(s) are available.";
    }
    break;
case 9:
        cout <<"\n\n\t\t------Details of Sales and Collection------";

        cout << "\n\nNumber of room(s) we had : " << iRoom;
        cout << "\nNumber of room(s) we gave for rent: " << sRoom;
        cout << "\nAvailable room(s): " << iRoom - sRoom;
        cout << "\nTotal room(s) collection for the day: " << tpRoom;

        cout << "\n\nNumber of pasta(s) we had : " << iPasta;
        cout << "\nNumber of pasta(s) we sold: " << sPasta;
        cout << "\nAvailable pasta(s): " << iPasta - sPasta;
        cout << "\nTotal pasta(s) collection for the day: " << tpPasta;

        cout << "\n\nNumber of burger(s) we had : " << iBurger;
        cout << "\nNumber of burger(s) we sold: " << sBurger;
        cout << "\nAvailable burger(s): " << iBurger - sBurger;
        cout << "\nTotal burger(s) collection for the day: " << tpBurger;

        cout << "\n\nNumber of pizza(s) we had : " << iPizza;
        cout << "\nNumber of pizza(s) we sold: " << sPizza;
        cout << "\nAvailable pizza(s): " << iPizza - sPizza;
        cout << "\nTotal pizza(s) collection for the day: " << tpPizza;

        cout << "\n\nNumber of sanduies(s) we had : " << iSanduies;
        cout << "\nNumber of sanduies(s) we sold: " << sSanduies;
        cout << "\nAvailable sanduies(s): " << iSanduies - sSanduies;
        cout << "\nTotal sanduies(s) collection for the day: " << tpSanduies;

        cout << "\n\nNumber of chicken(s) we had : " << iChicken;
        cout << "\nNumber of chicken(s) we sold: " << sChicken;
        cout << "\nAvailable chicken(s): " << iChicken - sChicken;
        cout << "\nTotal chicken(s) collection for the day: " << tpChicken;

        cout << "\n\nNumber of tea cup(s) we had : " << iTea;
        cout << "\nNumber of tea cup(s) we sold: " << sTea;
        cout << "\nAvailable tea cup(s): " << iTea - sTea;
        cout << "\nTotal tea cup(s) collection for the day: " << tpTea;

        cout << "\n\nNumber of coffee cup(s) we had : " << iCoffee;
        cout << "\nNumber of coffee cup(s) we sold: " << sCoffee;
        cout << "\nAvailable coffee cup(s): " << iCoffee - sCoffee;
        cout << "\nTotal tea coffee(s) collection for the day: " << tpCoffee;

        cout << "\n---------------------------------------------------------------------------";
        cout << "\nTotat collection for the day: " << tpRoom + tpPasta + tpBurger + tpPizza + tpSanduies + tpChicken + tpTea + tpCoffee;

        cout << endl << endl << endl << endl << endl;

    break;
case 0:
    exit(0);
default:
    cout << "\nInvalid Number! Please select the numbers mentoined above.";
    break;
}

goto m;


    return 0;
}
