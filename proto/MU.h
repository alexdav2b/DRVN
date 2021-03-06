/*
** Declaration of MU's structure
*/
struct MU
{
    int pressure;
    int skin;
    int heat;
};

void initiatePool(struct MU *str, int number);
void addMU(struct MU *geneticPool, struct MU * newMU);
void breed(struct MU *dad, struct MU *mom);