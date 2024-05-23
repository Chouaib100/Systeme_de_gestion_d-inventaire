void effacer_ecran() {
#ifdef _WIN32 
    system("cls");
#else 
    system("clear");
#endif
}