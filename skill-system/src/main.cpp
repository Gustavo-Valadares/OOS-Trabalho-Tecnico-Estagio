#include <iostream>
#include "../include/Player.hpp"
#include "../include/Ability.hpp"
#include "../View/view.hpp"

using namespace std;

int main(){
    Player p1;
    View v;
        
    v.view(p1, p1.getAbilities());
}