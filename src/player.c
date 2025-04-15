// player.c stub
static char current_player = 'W';

char player_get_current() {
    return current_player;
}

void player_switch() {
    if(player_get_current() == "W"){
        current_player = "B";
    } else if (player_get_current() == "B"){
        current_player = "W";
    }
}
