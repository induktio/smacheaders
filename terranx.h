
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
UNIT* tx_units = (UNIT *)0x9AB868;
VEH* tx_vehicles = (VEH *)0x952828;
BASE* tx_bases = (BASE *)0x97D040;
MAP** tx_map_ptr = (MAP**)0x94A30C;


typedef int __cdecl FP2INT(int, int);
typedef int __cdecl FP3INT(int, int, int);
typedef int __cdecl FP4INT(int, int, int, int);

int __cdecl (*tx_base_coast)(int) = (int (*)(int))0x50DF30;

// Spawn a new vehicle
// params: prototype_id, faction, x, y
FP4INT* tx_veh_init = (FP4INT *)0x5C03D0;

FP4INT* tx_contiguous = (FP4INT *)0x53A780;

FP3INT* tx_action_terraform = (FP3INT *)0x4C9B00;

FP2INT* tx_bonus_at = (FP2INT *)0x592030;

FP4INT* tx_base_prod_choices = (FP4INT *)0x4F81A0;

FP3INT* tx_cost_factor = (FP3INT *)0x4E4430;



#endif

