#ifndef __TERRANX_ENUMS_H__
#define __TERRANX_ENUMS_H__

enum facility_id
{
    FAC_HEADQUARTERS = 1,
    FAC_CHILDREN_CRECHE = 2,
    FAC_RECYCLING_TANKS = 3,
    FAC_PERIMETER_DEFENSE = 4,
    FAC_TACHYON_FIELD = 5,
    FAC_RECREATION_COMMONS = 6,
    FAC_ENERGY_BANK = 7,
    FAC_NETWORK_NODE = 8,
    FAC_BIOLOGY_LAB = 9,
    FAC_SKUNKWORKS = 10,
    FAC_HOLOGRAM_THEATRE = 11,
    FAC_PARADISE_GARDEN = 12,
    FAC_TREE_FARM = 13,
    FAC_HYBRID_FOREST = 14,
    FAC_FUSION_LAB = 15,
    FAC_QUANTUM_LAB = 16,
    FAC_RESEARCH_HOSPITAL = 17,
    FAC_NANOHOSPITAL = 18,
    FAC_ROBOTIC_ASSEMBLY_PLANT = 19,
    FAC_NANOREPLICATOR = 20,
    FAC_QUANTUM_CONVERTER = 21,
    FAC_GENEJACK_FACTORY = 22,
    FAC_PUNISHMENT_SPHERE = 23,
    FAC_HAB_COMPLEX = 24,
    FAC_HABITATION_DOME = 25,
    FAC_PRESSURE_DOME = 26,
    FAC_COMMAND_CENTER = 27,
    FAC_NAVAL_YARD = 28,
    FAC_AEROSPACE_COMPLEX = 29,
    FAC_BIOENHANCEMENT_CENTER = 30,
    FAC_CENTAURI_PRESERVE = 31,
    FAC_TEMPLE_OF_PLANET = 32,
    FAC_PSI_GATE = 33,
    FAC_COVERT_OPS_CENTER = 34,
    FAC_BROOD_PIT = 35,
    FAC_AQUAFARM = 36,
    FAC_SUBSEA_TRUNKLINE = 37,
    FAC_THERMOCLINE_TRANSDUCER = 38,
    FAC_FLECHETTE_DEFENSE_SYS = 39,
    FAC_SUBSPACE_GENERATOR = 40,
    FAC_GEOSYNC_SURVEY_POD = 41,
    FAC_EMPTY_FACILITY_42 = 42,
    FAC_EMPTY_FACILITY_43 = 43,
    FAC_EMPTY_FACILITY_44 = 44,
    FAC_EMPTY_FACILITY_45 = 45,
    FAC_EMPTY_FACILITY_46 = 46,
    FAC_EMPTY_FACILITY_47 = 47,
    FAC_EMPTY_FACILITY_48 = 48,
    FAC_EMPTY_FACILITY_49 = 49,
    FAC_EMPTY_FACILITY_50 = 50,
    FAC_EMPTY_FACILITY_51 = 51,
    FAC_EMPTY_FACILITY_52 = 52,
    FAC_EMPTY_FACILITY_53 = 53,
    FAC_EMPTY_FACILITY_54 = 54,
    FAC_EMPTY_FACILITY_55 = 55,
    FAC_EMPTY_FACILITY_56 = 56,
    FAC_EMPTY_FACILITY_57 = 57,
    FAC_EMPTY_FACILITY_58 = 58,
    FAC_EMPTY_FACILITY_59 = 59,
    FAC_EMPTY_FACILITY_60 = 60,
    FAC_EMPTY_FACILITY_61 = 61,
    FAC_EMPTY_FACILITY_62 = 62,
    FAC_EMPTY_FACILITY_63 = 63,
    FAC_EMPTY_FACILITY_64 = 64,
    FAC_SKY_HYDRO_LAB = 65,
    FAC_NESSUS_MINING_STATION = 66,
    FAC_ORBITAL_POWER_TRANS = 67,
    FAC_ORBITAL_DEFENSE_POD = 68,
    FAC_STOCKPILE_ENERGY = 69,
    FAC_HUMAN_GENOME_PROJ = 70,
    FAC_COMMAND_NEXUS = 71,
    FAC_WEATHER_PARADIGM = 72,
    FAC_MERCHANT_EXCHANGE = 73,
    FAC_EMPATH_GUILD = 74,
    FAC_CITIZENS_DEFENSE_FORCE = 75,
    FAC_VIRTUAL_WORLD = 76,
    FAC_PLANETARY_TRANS_SYS = 77,
    FAC_XENOEMPATYH_DOME = 78,
    FAC_NEURAL_AMPLIFIER = 79,
    FAC_MARITIME_CONTROL_CENTER = 80,
    FAC_PLANETARY_DATALINKS = 81,
    FAC_SUPERCOLLIDER = 82,
    FAC_ASCETIC_VIRTUES = 83,
    FAC_LONGEVITY_VACCINE = 84,
    FAC_HUNTER_SEEKER_ALGO = 85,
    FAC_PHOLUS_MUTAGEN = 86,
    FAC_CYBORG_FACTORY = 87,
    FAC_THEORY_OF_EVERYTHING = 88,
    FAC_DREAM_TWISTER = 89,
    FAC_UNIVERSAL_TRANSLATOR = 90,
    FAC_NETWORK_BACKBONE = 91,
    FAC_NANO_FACTORY = 92,
    FAC_LIVING_REFINERY = 93,
    FAC_CLONING_VATS = 94,
    FAC_SELF_AWARE_COLONY = 95,
    FAC_CLINICAL_IMMORTALITY = 96,
    FAC_SPACE_ELEVATOR = 97,
    FAC_SINGULARITY_INDUCTOR = 98,
    FAC_BULK_MATTER_TRANSMITTER = 99,
    FAC_TELEPATHIC_MATRIX = 100,
    FAC_VOICE_OF_PLANET = 101,
    FAC_ASCENT_TO_TRANSCENDENCE = 102,
    FAC_MANIFOLD_HARMONICS = 103,
    FAC_NETHACK_TERMINUS = 104,
    FAC_CLOUDBASE_ACADEMY = 105,
    FAC_PLANETARY_ENERGY_GRID = 106,
    FAC_EMPTY_SP_38 = 107,
    FAC_EMPTY_SP_39 = 108,
    FAC_EMPTY_SP_40 = 109,
    FAC_EMPTY_SP_41 = 110,
    FAC_EMPTY_SP_42 = 111,
    FAC_EMPTY_SP_43 = 112,
    FAC_EMPTY_SP_44 = 113,
    FAC_EMPTY_SP_45 = 114,
    FAC_EMPTY_SP_46 = 115,
    FAC_EMPTY_SP_47 = 116,
    FAC_EMPTY_SP_48 = 117,
    FAC_EMPTY_SP_49 = 118,
    FAC_EMPTY_SP_50 = 119,
    FAC_EMPTY_SP_51 = 120,
    FAC_EMPTY_SP_52 = 121,
    FAC_EMPTY_SP_53 = 122,
    FAC_EMPTY_SP_54 = 123,
    FAC_EMPTY_SP_55 = 124,
    FAC_EMPTY_SP_56 = 125,
    FAC_EMPTY_SP_57 = 126,
    FAC_EMPTY_SP_58 = 127,
    FAC_EMPTY_SP_59 = 128,
    FAC_EMPTY_SP_60 = 129,
    FAC_EMPTY_SP_61 = 130,
    FAC_EMPTY_SP_62 = 131,
    FAC_EMPTY_SP_63 = 132,
    FAC_EMPTY_SP_64 = 133,
};

enum techology_id
{
    TECH_Biogen = 0,
    TECH_Indust = 1,
    TECH_InfNet = 2,
    TECH_Physic = 3,
    TECH_Psych = 4,
    TECH_Mobile = 5,
    TECH_Ecology = 6,
    TECH_Super = 7,
    TECH_Chaos = 8,
    TECH_E_Mc2 = 9,
    TECH_Fusion = 10,
    TECH_Alloys = 11,
    TECH_Subat = 12,
    TECH_Chemist = 13,
    TECH_Surface = 14,
    TECH_Metal = 15,
    TECH_String = 16,
    TECH_MilAlg = 17,
    TECH_Magnets = 18,
    TECH_MatComp = 19,
    TECH_Unified = 20,
    TECH_Gravity = 21,
    TECH_Poly = 22,
    TECH_AGrav = 23,
    TECH_deleted_1 = 24,
    TECH_Quantum = 25,
    TECH_SingMec = 26,
    TECH_ConSing = 27,
    TECH_TempMec = 28,
    TECH_ProbMec = 29,
    TECH_Algor = 30,
    TECH_Solids = 31,
    TECH_PlaNets = 32,
    TECH_DigSent = 33,
    TECH_HAL9000 = 34,
    TECH_DocInit = 35,
    TECH_DocFlex = 36,
    TECH_Integ = 37,
    TECH_Fossil = 38,
    TECH_DocAir = 39,
    TECH_DocSec = 40,
    TECH_MindMac = 41,
    TECH_NanoMin = 42,
    TECH_DocLoy = 43,
    TECH_EthCalc = 44,
    TECH_IndEcon = 45,
    TECH_IndAuto = 46,
    TECH_CentMed = 47,
    TECH_Brain = 48,
    TECH_Gene = 49,
    TECH_BioEng = 50,
    TECH_BioMac = 51,
    TECH_Neural = 52,
    TECH_Cyber = 53,
    TECH_Eudaim = 54,
    TECH_WillPow = 55,
    TECH_Thresh = 56,
    TECH_Matter = 57,
    TECH_CentEmp = 58,
    TECH_EnvEcon = 59,
    TECH_EcoEng = 60,
    TECH_PlaEcon = 61,
    TECH_EcoEng2 = 62,
    TECH_CentPsi = 63,
    TECH_AlphCen = 64,
    TECH_Create = 65,
    TECH_Space = 66,
    TECH_HomoSup = 67,
    TECH_SupLube = 68,
    TECH_QuanMac = 69,
    TECH_deleted_2 = 70,
    TECH_NanEdit = 71,
    TECH_OptComp = 72,
    TECH_IndRob = 73,
    TECH_CentGen = 74,
    TECH_SentEco = 75,
    TECH_Viral = 76,
    TECH_Orbital = 77,
    TECH_PrPsych = 78,
    TECH_FldMod = 79,
    TECH_AdapDoc = 80,
    TECH_AdapEco = 81,
    TECH_Bioadap = 82,
    TECH_SentRes = 83,
    TECH_SecMani = 84,
    TECH_NewMiss = 85,
    TECH_BFG9000 = 86,
    TECH_User = 87,
    TECH_TranT = 88,
    TECH_disabled = 0xFFFFFFFF,
};

enum tech_flags
{
    TECH_FLAGS_SECRETS = 0x1,
    TECH_FLAGS_IMPROVE_PROBE = 0x2,
    TECH_FLAGS_INC_COMMERCE = 0x4,
    TECH_FLAGS_REVEALS_MAP = 0x8,
    TECH_FLAGS_ALLOW_GENE_WARFARE = 0x10,
    TECH_FLAGS_INC_DEFENSE_GENE_WARFARE = 0x20,
    TECH_FLAGS_INC_ENERGY_FUNGUS = 0x40,
    TECH_FLAGS_INC_MINERALS_FUNGUS = 0x80,
    TECH_FLAGS_INC_NUTRIENT_FUNGUS = 0x100,
};

enum probe_action_id
{
    PRB_INFILTRATE_DATALINKS = 0x0,
    PRB_PROCURE_RESEARCH_DATA = 0x1,
    PRB_ACTIVATE_SABOTAGE_VIRUS = 0x2,
    PRB_DRAIN_ENERGY_RESERVES = 0x3,
    PRB_INCITE_DRONE_RIOTS = 0x4,
    PRB_ASSASSINATE_PROMINENT_RESEARCHERS = 0x5,
    PRB_MIND_CONTROL_CITY = 0x6,
    PRB_INTRODUCE_GENETIC_PLAGUE = 0x7,
    PRB_FREE_CAPTURED_FACTION_LEADER = 0x8,
    PRB_MIND_CONTROL_UNIT = 0xFFFFFFFF,
};

enum unit_basic_id
{
    BSC_COLONY_POD = 0x0,
    BSC_FORMERS = 0x1,
    BSC_SCOUT_PATROL = 0x2,
    BSC_TRANSPORT_FOIL = 0x3,
    BSC_SEA_FORMERS = 0x4,
    BSC_SUPPLY_CRAWLER = 0x5,
    BSC_PROBE_TEAM = 0x6,
    BSC_ALIEN_ARTIFACT = 0x7,
    BSC_MIND_WORMS = 0x8,
    BSC_ISLE_OF_THE_DEEP = 0x9,
    BSC_LOCUSTS_OF_CHIRON = 0xA,
    BSC_UNITY_ROVER = 0xB,
    BSC_UNITY_SCOUT_CHOPPEr = 0xC,
    BSC_UNITY_FOIL = 0xD,
    BSC_SEALURK = 0xE,
    BSC_SPORE_LAUNCHER = 0xF,
    BSC_BATTLE_OGRE_MK1 = 0x10,
    BSC_BATTLE_OGRE_MK2 = 0x11,
    BSC_BATTLE_OGRE_MK3 = 0x12,
    BSC_FUNGAL_TOWER = 0x13,
    BSC_UNITY_MINING_LASER = 0x14,
    BSC_SEA_ESCAPE_POD = 0x15,
    BSC_UNITY_GUNSHIP = 0x16,
};

enum unit_chassis_type
{
    CHSI_INFANTRY = 0x0,
    CHSI_SPEEDER = 0x1,
    CHSI_HOVERTANK = 0x2,
    CHSI_FOIL = 0x3,
    CHSI_CRUISER = 0x4,
    CHSI_NEEDLEJET = 0x5,
    CHSI_COPTER = 0x6,
    CHSI_GRAVSHIP = 0x7,
    CHSI_MISSILE = 0x8,
};

enum unit_reactor
{
    RECT_FISSION = 0x1,
    RECT_FUSION = 0x2,
    RECT_QUANTUM = 0x3,
    RECT_SINGULARITY = 0x4,
};

enum unit_triad
{
    TRIAD_LAND = 0x0,
    TRIAD_SEA = 0x1,
    TRIAD_AIR = 0x2,
};

enum unit_armor_id
{
    ARM_No_Armor = 0x0,
    ARM_Synthmetal_Armor = 0x1,
    ARM_Plasma_Steel_Armor = 0x2,
    ARM_Silksteel_Armor = 0x3,
    ARM_Photon_Wall = 0x4,
    ARM_Probability_Sheath = 0x5,
    ARM_Neutronium_Armor = 0x6,
    ARM_Antimatter_Plate = 0x7,
    ARM_Stasis_Generator = 0x8,
    ARM_Psi_Defense = 0x9,
    ARM_Pulse_3_Armor = 0xA,
    ARM_Resonance_3_Armor = 0xB,
    ARM_Pulse_8_Armor = 0xC,
    ARM_Resonance_8_Armor = 0xD,
};

enum unit_weapon_id
{
    WPN_Hand_Weapons = 0x0,
    WPN_Laser = 0x1,
    WPN_Particle_Impactor = 0x2,
    WPN_Gatling_Laser = 0x3,
    WPN_Missile_Launcher = 0x4,
    WPN_Chaos_Gun = 0x5,
    WPN_Fusion_Laser = 0x6,
    WPN_Tachyon_Bolt = 0x7,
    WPN_Plasma_Shard = 0x8,
    WPN_Quantum_Laser = 0x9,
    WPN_Graviton_Gun = 0xA,
    WPN_Singularity_Laser = 0xB,
    WPN_Resonance_Laser = 0xC,
    WPN_Resonance_Bolt = 0xD,
    WPN_String_Disruptor = 0xE,
    WPN_Psi_Attack = 0xF,
    WPN_Planet_Buster = 0x10,
    WPN_Colony_Module = 0x11,
    WPN_Terraforming_Unit = 0x12,
    WPN_Troop_Transport = 0x13,
    WPN_Supply_Transport = 0x14,
    WPN_Probe_Team = 0x15,
    WPN_Alien_Artifact = 0x16,
    WPN_Conventional_Payload = 0x17,
    WPN_Tectonic_Payload = 0x18,
    WPN_Fungal_Payload = 0x19,
};

enum unit_weapon_mode
{
    WMODE_PROJECTILE = 0x0,
    WMODE_ENERGY = 0x1,
    WMODE_MISSILE = 0x2,
    WMODE_TRANSPORT = 0x7,
    WMODE_COLONIST = 0x8,
    WMODE_TERRAFORMER = 0x9,
    WMODE_CONVOY = 0xA,
    WMODE_INFOWAR = 0xB,
    WMODE_ARTIFACT = 0xC,
};

enum unit_plan
{
    PLAN_OFFENSIVE = 0x0,
    PLAN_COMBAT = 0x1,
    PLAN_DEFENSIVE = 0x2,
    PLAN_RECONNAISANCE = 0x3,
    PLAN_AIR_SUPERIORITY = 0x4,
    PLAN_PLANET_BUSTER = 0x5,
    PLAN_NAVAL_SUPERIORITY = 0x6,
    PLAN_NAVAL_TRANSPORT = 0x7,
    PLAN_COLONIZATION = 0x8,
    PLAN_TERRAFORMING = 0x9,
    PLAN_SUPPLY_CONVOY = 0xA,
    PLAN_INFO_WARFARE = 0xB,
    PLAN_ALIEN_ARTIFACT = 0xC,
    PLAN_TECTONIC_MISSILE = 0xD,
    PLAN_FUNGAL_MISSILE = 0xE,
    PLAN_AUTO_CALCULATE = 0xFFFFFFFF,
};

enum unit_abilities
{
    ABL_SUPER_TERRAFORMER = 0x1,
    ABL_DEEP_RADAR = 0x2,
    ABL_CLOAKED = 0x4,
    ABL_AMPHIBIOUS = 0x8,
    ABL_DROP_POD = 0x10,
    ABL_AIR_SUPERIORITY = 0x20,
    ABL_DEEP_PRESSURE_HULL = 0x40,
    ABL_CARRIER = 0x80,
    ABL_AAA = 0x100,
    ABL_COMM_JAMMER = 0x200,
    ABL_ANTIGRAV_STRUTS = 0x400,
    ABL_EMPATHIC = 0x800,
    ABL_POLY_ENCRYPTION = 0x1000,
    ABL_FUNGICIDAL = 0x2000,
    ABL_TRAINED = 0x4000,
    ABL_ARTILLERY = 0x8000,
    ABL_CLEAN_REACTOR = 0x10000,
    ABL_BLINK_DISPLACER = 0x20000,
    ABL_TRANCE = 0x40000,
    ABL_HEAVY_TRANSPORT = 0x80000,
    ABL_NERVE_GAS = 0x100000,
    ABL_REPAIR = 0x200000,
    ABL_POLICE_2X = 0x400000,
    ABL_SLOW = 0x800000,
    ABL_SOPORIFIC_GAS = 0x1000000,
    ABL_DISSOCIATIVE_WAVE = 0x2000000,
    ABL_MARINE_DETACHMENT = 0x4000000,
    ABL_FUEL_NANOCELLS = 0x8000000,
    ABL_ALGO_ENHANCEMENT = 0x10000000,
};

enum unit_state
{
    UNIT_STATE_RECEIVES_SUPPORT = 0x10,
    UNIT_STATE_MADE_AIRDROP = 0x20,
    UNIT_STATE_HAS_MONOLITH_UPGRADE = 0x100,
    UNIT_STATE_USES_FREE_NON_PACIFISM_SLOT = 0x200000,
    UNIT_STATE_CAUSES_PACIFISM = 0x400000,
    UNIT_STATE_IS_CRAWLING = 0x4000000,
};

enum unit_status
{
    UNIT_STATUS_OBJECTIVE = 0x20,
    UNIT_STATUS_LURKER = 0x40,
    UNIT_STATUS_RANDOM_START = 0x80,
    UNIT_STATUS_MONOLITH_START = 0x100,
    UNIT_STATUS_FUNGUS_START = 0x200,
    UNIT_STATUS_INVISIBLE = 0x400,
};

enum unit_morale
{
    MORALE_VERY_GREEN = 0x0,
    MORALE_GREEN = 0x1,
    MORALE_DISCIPLINED = 0x2,
    MORALE_HARDENED = 0x3,
    MORALE_VETERAN = 0x4,
    MORALE_COMMANDO = 0x5,
    MORALE_ELITE = 0x6,
};

enum faction_special_rules
{
    FACT_TECHSTEAL = 0x10,
    FACT_TECHSHARE = 0x20,
    FACT_WORMPOLICE = 0x40,
    FACT_ALIEN = 0x80,
    FACT_AQUATIC = 0x100,
    FACT_FREEPROTO = 0x200,
    FACT_FANATIC = 0x400,
    FACT_MINDCONTROL = 0x800,
    FACT_COMMFREQ = 0x1000,
    FACT_TERRAFORM = 0x2000,
    FACT_INTEREST = 0x4000,
    FACT_MORALE = 0x8000,
};

enum game_rules_1
{
    RULES_SCENARIO_CHEATED_FLAG = 0x20,
    RULES_SCENARIO_EDITOR = 0x40,
    RULES_OMNISCIENT_VIEW = 0x80,
    RULES_DEBUG_MODE = 0x1000,
    RULES_PERIHELION_ACTIVE = 0x100000,
    RULES_RAND_LEADER_PERSONALITIES = 0x800000,
    RULES_RAND_LEADER_SOCIAL_AGENDA = 0x1000000,
};

enum game_rules_2
{
    RULES_DO_OR_DIE = 0x1,
    RULES_VICTORY_TOTAL_WAR = 0x2,
    RULES_VICTORY_MINE_ALL_MINE = 0x4,
    RULES_VICTORY_PEACE_IN_OUR_TIME = 0x8,
    RULES_LOOK_FIRST = 0x10,
    RULES_TECH_STAGNATION = 0x20,
    RULES_INTENSE_RIVALRY = 0x40,
    RULES_TIME_WARP = 0x80,
    RULES_NO_UNITY_SURVEY = 0x100,
    RULES_BLIND_RESEARCH = 0x200,
    RULES_IRONMAN = 0x400,
    RULES_VICTORY_HIGHER_GOAL = 0x800,
    RULES_VICTORY_ONE_FOR_ALL = 0x1000,
    RULES_NO_UNITY_SCATTERING = 0x2000,
    RULES_SPOILS_OF_WAR = 0x4000,
    RULES_BELL_CURVE = 0x8000,
};

enum game_diff_level
{
    DIFF_CITIZEN = 0x0,
    DIFF_SPECIALIST = 0x1,
    DIFF_TALENT = 0x2,
    DIFF_LIBRARIAN = 0x3,
    DIFF_THINKER = 0x4,
    DIFF_TRANSCEND = 0x5,
};

enum diplo_status
{
    DIPLO_PACT = 0x1,
    DIPLO_TREATY = 0x2,
    DIPLO_TRUCE = 0x4,
    DIPLO_COMMLINK = 0x8,
    DIPLO_VENDETTA = 0x10,
    DIPLO_WANT_REVENGE = 0x20,
    DIPLO_SHALL_BETRAY = 0x400,
    DIPLO_HAVE_INFILTRATOR = 0x1000,
    DIPLO_WANT_TO_TALK = 0x2000,
    DIPLO_ATROCITY_VICTIM = 0x40000,
    DIPLO_HAVE_SURRENDERED = 0x2000000,
};

enum base_status
{
    BASE_DRONE_RIOTS_ACTIVE = 0x2,
    BASE_GOLDEN_AGE_ACTIVE = 0x4,
    BASE_RESEARCH_DATA_STOLEN = 0x40,
    BASE_GENETIC_PLAGUE_INTRO = 0x20000,
    BASE_ENERGY_RESERVES_DRAINED = 0x400000,
    BASE_HURRY_PRODUCTION = 0x40000000,
};

enum terrain_flags
{
    TERRA_BASE_IN_TILE = 0x1,
    TERRA_UNIT_IN_TILE = 0x2,
    TERRA_ROAD = 0x4,
    TERRA_MAGTUBE = 0x8,
    TERRA_MINE = 0x10,
    TERRA_FUNGUS = 0x20,
    TERRA_SOLAR_TIDAL = 0x40,
    TERRA_RIVER = 0x80,
    TERRA_RIVER_SRC = 0x100,
    TERRA_BUNKER = 0x800,
    TERRA_MONOLITH = 0x2000,
    TERRA_FARM = 0x8000,
    TERRA_AIRBASE = 0x40000,
    TERRA_SOIL_ENR = 0x80000,
    TERRA_FOREST = 0x200000,
    TERRA_CONDENSER = 0x400000,
    TERRA_ECH_MIRROR = 0x800000,
    TERRA_THERMAL_BORE = 0x1000000,
    TERRA_SENSOR = 0x80000000,
};

enum former_action
{
    FORMER_FARM = 0,
    FORMER_SOIL_ENRICHER = 1,
    FORMER_MINE = 2,
    FORMER_SOLAR_COLLECTOR = 3,
    FORMER_FOREST = 4,
    FORMER_ROAD = 5,
    FORMER_MAG_TUBE = 6,
    FORMER_BUNKER = 7,
    FORMER_AIRBASE = 8,
    FORMER_SENSOR_ARRAY = 9,
    FORMER_REMOVE_FUNGUS = 10,
    FORMER_PLANT_FUNGUS = 11,
    FORMER_CONDENSER = 12,
    FORMER_ECHELON_MIRROR = 13,
    FORMER_THERMAL_BOREHOLE = 14,
    FORMER_AQUIFER = 15,
    FORMER_RAISE_LAND = 16,
    FORMER_LOWER_LAND = 17,
    FORMER_LEVEL_TERRAIN = 18,
    FORMER_MONOLITH = 19,
};

#endif // __TERRANX_ENUMS_H__
