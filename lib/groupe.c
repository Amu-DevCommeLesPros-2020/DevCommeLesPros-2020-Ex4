#include "groupe.h"

#include "liste.h"

#include <stdbool.h>
#include <stdio.h>

groupe* g_open(FILE *db)
{
    return NULL;
}

int g_size(groupe* g)
{
    return 0;
}

personne* g_index(groupe* g, int const index)
{
    return NULL;
}

bool g_friends(groupe* g, int const index_a, int const index_b)
{
    return false;
}

int g_bestie(groupe* g, int const index)
{
    return -1;
}

bool g_oneway(groupe* g, int const index_a, int const index_b)
{
    return false;
}

bool g_linked(groupe* g, int const index_a, int const index_b)
{
    return false;
}

int g_distance(groupe* g, int const index_a, int const index_b)
{
    return -1;
}

void g_remove(groupe* g, int const index)
{
    return;
}
