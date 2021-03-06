#include <stdlib.h>
#include "./random_names.h"

// Thanks Arda for this idea in 2020 lmao
std::string get_random_name()
{
    static const char * const magic[] = {
        "Magic",
        "Illusion",
        "Wizardry",
        "Alchemy",
        "Bewitchment",
        "Conjuring",
        "Devilry",
        "Divination",
        "Enchantment",
        "Exorcism",
        "Horoscopy",
        "Incantation",
        "Legerdemain",
        "Magnetism",
        "Necromancy",
        "Occultism",
        "Predicition",
        "Presage",
        "Prestidigitation",
        "Prophecy",
        "Soothsaying",
        "Sorcery",
        "Instant",
        "Superstition",
        "Thaumaturgy",
        "Voodoo",
        "Witchcraft"
    };

    static const char * const gathering[] = {
        "Gathering",
        "Association",
        "Caucus",
        "Collection",
        "Conclave",
        "Conference",
        "Congregation",
        "Convention",
        "Crowd",
        "Function",
        "Group",
        "Mass",
        "Meeting",
        "Party",
        "Throng",
        "Acquisition",
        "Affair",
        "Aggregate",
        "Aggregation",
        "Band",
        "Body",
        "Bunch",
        "Clambake",
        "Company",
        "Concentration",
        "Concourse",
        "Congress",
        "Convocation",
        "Crush",
        "Drove",
        "Flock",
        "Gain",
        "Heap",
        "Herd",
        "Horde",
        "Huddle",
        "Junction",
        "Knot",
        "Levy",
        "Meet",
        "Muster",
        "Parley",
        "Pile",
        "Rally",
        "Roundup",
        "Society",
        "Stock",
        "Stockpile",
        "Swarm",
        "Turnout",
        "Union",
        "Get-together",
        "Social function"
    };

    return std::string(magic[rand() % (sizeof(magic) / sizeof(*magic))]) +
           ": the " +
           std::string(gathering[rand() % (sizeof(gathering) / sizeof(*gathering))]);
}
