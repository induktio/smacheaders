
#ifndef __TERRANX_H__
#define __TERRANX_H__

#include "terranx_enums.h"
#include "terranx_types.h"

typedef unsigned char byte;

const int tbl_weapon_value[] = {1, 2, 4, 5, 6, 8, 10, 12, 13, 16, 20, 24, 6,
                                12, 30, -1, 99, 0, 0, 0, 0, 0, 0, 12, 0, 0};
const int tbl_armor_value[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, -1, 3, 3, 8, 8};
const int tbl_chassis_triad[] = {0, 0, 0, 1, 1, 2, 2, 2, 2};

char* tx_version = (char*)0x691B40;
char* tx_date = (char*)0x691B4C;

int*  tx_current_base_id = (int*)0x689370;
BASE* tx_current_base_ptr = (BASE*)0x90EA30;

int* tx_human_players = (int*)0x9A64E8;
int* tx_current_turn = (int*)0x9A64D4;
int* tx_active_faction = (int*)0x9A6820;
int* tx_total_num_bases = (int*)0x9A64CC;
int* tx_total_num_vehicles = (int*)0x9A64C8;
int* tx_random_seed = (int*)0x949878;
int* tx_map_toggle_flat = (int*)0x94988C;
int* tx_map_area_sq_root = (int*)0x949888;
int* tx_map_axis_x = (int*)0x949870;
int* tx_map_axis_y = (int*)0x949874;
int* tx_map_half_x = (int*)0x68FAF0;
int* tx_climate_future_change = (int*)0x9A67D8;


byte* tx_tech_discovered = (byte*)0x9A6670;
int* tx_secret_projects = (int*)0x9A6514;
FACILITY* tx_facilities = (FACILITY *)0x9A4B68;
FACTMETA* tx_factions_meta = (FACTMETA *)0x946FEC;
FACTION* tx_factions = (FACTION *)0x96C9E0;
TECH* tx_rules_tech = (TECH *)0x94F358;
UNIT* tx_units = (UNIT *)0x9AB868;
VEH* tx_vehicles = (VEH *)0x952828;
BASE* tx_bases = (BASE *)0x97D040;
MAP** tx_map_ptr = (MAP**)0x94A30C;


typedef int __cdecl fp_1int(int);
typedef int __cdecl fp_2int(int, int);
typedef int __cdecl fp_3int(int, int, int);
typedef int __cdecl fp_4int(int, int, int, int);
typedef int __cdecl fp_7intstr(int, int, int, int, int, int, int, const char*);

// params: faction, chassis, module, armor, specials, reactor, unit_plan, name
fp_7intstr* tx_propose_proto = (fp_7intstr*)0x580860;

// params: prototype_id, faction, x, y
fp_4int* tx_veh_init = (fp_4int*)0x5C03D0;

fp_1int* tx_enemy_move = (fp_1int*)0x56B5B0;
fp_2int* tx_action_build = (fp_2int*)0x4C96E0;
fp_3int* tx_action_terraform = (fp_3int*)0x4C9B00;
fp_2int* tx_bonus_at = (fp_2int*)0x592030;
fp_2int* tx_can_convoy = (fp_2int*)0x564D90;
fp_4int* tx_contiguous = (fp_4int*)0x53A780;
fp_4int* tx_base_prod_choices = (fp_4int*)0x4F81A0;
fp_3int* tx_cost_factor = (fp_3int*)0x4E4430;



#endif // __TERRANX_H__

