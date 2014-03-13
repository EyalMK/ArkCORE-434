/*
 * Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2011-2014 ArkCORE <http://www.arkania.net/> 
 * Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_ARCATRAZ_H
#define DEF_ARCATRAZ_H

#define TYPE_ZEREKETH           1
#define TYPE_DALLIAH            2
#define TYPE_SOCCOTHRATES       3
#define TYPE_HARBINGERSKYRISS   4
#define TYPE_WARDEN_1           5
#define TYPE_WARDEN_2           6
#define TYPE_WARDEN_3           7
#define TYPE_WARDEN_4           8
#define TYPE_WARDEN_5           9
#define TYPE_SHIELD_OPEN        11
#define DATA_SPHERE_SHIELD      12

#define ArcatrazScriptName "instance_arcatraz"

uint32 const EncounterCount = 4;

enum DataTypes
{
    // Encounter States/Boss GUIDs
    DATA_ZEREKETH                               = 0,
    DATA_DALLIAH                                = 1,
    DATA_SOCCOTHRATES                           = 2,
    DATA_HARBINGER_SKYRISS                      = 3,

    // Additional Data
    DATA_CONVERSATION                           = 4,
    DATA_WARDEN_1                               = 5, // used by SmartAI
    DATA_WARDEN_2                               = 6, // used by SmartAI
    DATA_WARDEN_3                               = 7, // used by SmartAI
    DATA_WARDEN_4                               = 8, // used by SmartAI
    DATA_WARDEN_5                               = 9, // used by SmartAI
    DATA_MELLICHAR                              = 10,
    DATA_WARDENS_SHIELD                         = 11,
};

enum CreatureIds
{
    NPC_DALLIAH                                 = 20885,
    NPC_SOCCOTHRATES                            = 20886,
    NPC_MELLICHAR                               = 20904, // skyriss will kill this unit
    NPC_ALPHA_POD_TARGET                        = 21436
};

enum GameObjectIds
{
    GO_CONTAINMENT_CORE_SECURITY_FIELD_ALPHA    = 184318, // door opened when Wrath-Scryer Soccothrates dies
    GO_CONTAINMENT_CORE_SECURITY_FIELD_BETA     = 184319, // door opened when Dalliah the Doomsayer dies
    GO_STASIS_POD_ALPHA                         = 183961, // pod first boss wave
    GO_STASIS_POD_BETA                          = 183963, // pod second boss wave
    GO_STASIS_POD_DELTA                         = 183964, // pod third boss wave
    GO_STASIS_POD_GAMMA                         = 183962, // pod fourth boss wave
    GO_STASIS_POD_OMEGA                         = 183965, // pod fifth boss wave
    GO_WARDENS_SHIELD                           = 184802  // shield 'protecting' mellichar
};

#endif
