// This file is automatically generated by generator.py

#ifndef ELEMENTCLASSES_H
#define ELEMENTCLASSES_H

#include <vector>

#include "simulation/Element.h"
#include "simulation/elements/Element.h"

#define PT_NONE 0
#define PT_DUST 1
#define PT_WATR 2
#define PT_OIL 3
#define PT_FIRE 4
#define PT_STNE 5
#define PT_LAVA 6
#define PT_GUNP 7
#define PT_NITR 8
#define PT_CLNE 9
#define PT_GAS 10
#define PT_PLEX 11
#define PT_GOO 12
#define PT_ICEI 13
#define PT_METL 14
#define PT_SPRK 15
#define PT_SNOW 16
#define PT_WOOD 17
#define PT_NEUT 18
#define PT_PLUT 19
#define PT_PLNT 20
#define PT_ACID 21
#define PT_VOID 22
#define PT_WTRV 23
#define PT_CNCT 24
#define PT_DSTW 25
#define PT_SALT 26
#define PT_SLTW 27
#define PT_DMND 28
#define PT_BMTL 29
#define PT_BRMT 30
#define PT_PHOT 31
#define PT_URAN 32
#define PT_WAX 33
#define PT_MWAX 34
#define PT_PSCN 35
#define PT_NSCN 36
#define PT_LNTG 37
#define PT_INSL 38
#define PT_BHOL 39
#define PT_WHOL 40
#define PT_RBDM 41
#define PT_LRBD 42
#define PT_NTCT 43
#define PT_SAND 44
#define PT_GLAS 45
#define PT_PTCT 46
#define PT_BGLA 47
#define PT_THDR 48
#define PT_PLSM 49
#define PT_ETRD 50
#define PT_NICE 51
#define PT_NBLE 52
#define PT_BTRY 53
#define PT_LCRY 54
#define PT_STKM 55
#define PT_SWCH 56
#define PT_SMKE 57
#define PT_DESL 58
#define PT_COAL 59
#define PT_LO2 60
#define PT_O2 61
#define PT_INWR 62
#define PT_YEST 63
#define PT_DYST 64
#define PT_THRM 65
#define PT_GLOW 66
#define PT_BRCK 67
#define PT_CFLM 68
#define PT_FIRW 69
#define PT_FUSE 70
#define PT_FSEP 71
#define PT_AMTR 72
#define PT_BCOL 73
#define PT_PCLN 74
#define PT_HSWC 75
#define PT_IRON 76
#define PT_MORT 77
#define PT_LIFE 78
#define PT_DLAY 79
#define PT_CO2 80
#define PT_DRIC 81
#define PT_CBNW 82
#define PT_STOR 83
#define PT_PVOD 84
#define PT_CONV 85
#define PT_CAUS 86
#define PT_LIGH 87
#define PT_TESC 88
#define PT_DEST 89
#define PT_SPNG 90
#define PT_RIME 91
#define PT_FOG 92
#define PT_BCLN 93
#define PT_LOVE 94
#define PT_DEUT 95
#define PT_WARP 96
#define PT_PUMP 97
#define PT_FWRK 98
#define PT_PIPE 99
#define PT_FRZZ 100
#define PT_FRZW 101
#define PT_GRAV 102
#define PT_BIZR 103
#define PT_BIZRG 104
#define PT_BIZRS 105
#define PT_INST 106
#define PT_ISOZ 107
#define PT_ISZS 108
#define PT_PRTI 109
#define PT_PRTO 110
#define PT_PSTE 111
#define PT_PSTS 112
#define PT_ANAR 113
#define PT_VINE 114
#define PT_INVIS 115
#define PT_116 116
#define PT_SPAWN2 117
#define PT_SPAWN 118
#define PT_SHLD1 119
#define PT_SHLD2 120
#define PT_SHLD3 121
#define PT_SHLD4 122
#define PT_LOLZ 123
#define PT_WIFI 124
#define PT_FILT 125
#define PT_ARAY 126
#define PT_BRAY 127
#define PT_STKM2 128
#define PT_BOMB 129
#define PT_C5 130
#define PT_SING 131
#define PT_QRTZ 132
#define PT_PQRT 133
#define PT_EMP 134
#define PT_BREC 135
#define PT_ELEC 136
#define PT_ACEL 137
#define PT_DCEL 138
#define PT_BANG 139
#define PT_IGNT 140
#define PT_BOYL 141
#define PT_GEL 142
#define PT_TRON 143
#define PT_TTAN 144
#define PT_EXOT 145
#define PT_146 146
#define PT_EMBR 147
#define PT_H2 148
#define PT_SOAP 149
#define PT_NBHL 150
#define PT_NWHL 151
#define PT_MERC 152
#define PT_PBCN 153
#define PT_GPMP 154
#define PT_CLST 155
#define PT_WIRE 156
#define PT_GBMB 157
#define PT_FIGH 158
#define PT_FRAY 159
#define PT_RPEL 160
#define PT_PPIP 161
#define PT_DTEC 162
#define PT_DMG 163
#define PT_TSNS 164
#define PT_VIBR 165
#define PT_BVBR 166
#define PT_CRAY 167
#define PT_PSTN 168
#define PT_FRME 169
#define PT_GOLD 170
#define PT_TUNG 171
#define PT_PSNS 172
#define PT_PROT 173
#define PT_VIRS 174
#define PT_VRSS 175
#define PT_VRSG 176
#define PT_GRVT 177
#define PT_DRAY 178
#define PT_CRMC 179
#define PT_MEAT 180
#define PT_BEEF 181
#define PT_GMET 182
#define PT_GBEF 183
#define PT_CUME 184

class Element_NONE: public Element
{
public:
	Element_NONE();
	virtual ~Element_NONE();
	static VideoBuffer * iconGen(int, int, int);
};

class Element_DUST: public Element
{
public:
	Element_DUST();
	virtual ~Element_DUST();
	
};

class Element_WATR: public Element
{
public:
	Element_WATR();
	virtual ~Element_WATR();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_OIL: public Element
{
public:
	Element_OIL();
	virtual ~Element_OIL();
	
};

class Element_FIRE: public Element
{
public:
	Element_FIRE();
	virtual ~Element_FIRE();
	static int update(UPDATE_FUNC_ARGS);
	static int updateLegacy(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_STNE: public Element
{
public:
	Element_STNE();
	virtual ~Element_STNE();
	
};

class Element_LAVA: public Element
{
public:
	Element_LAVA();
	virtual ~Element_LAVA();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_GUNP: public Element
{
public:
	Element_GUNP();
	virtual ~Element_GUNP();
	
};

class Element_NITR: public Element
{
public:
	Element_NITR();
	virtual ~Element_NITR();
	
};

class Element_CLNE: public Element
{
public:
	Element_CLNE();
	virtual ~Element_CLNE();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_GAS: public Element
{
public:
	Element_GAS();
	virtual ~Element_GAS();
	
};

class Element_PLEX: public Element
{
public:
	Element_PLEX();
	virtual ~Element_PLEX();
	
};

class Element_GOO: public Element
{
public:
	Element_GOO();
	virtual ~Element_GOO();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_ICEI: public Element
{
public:
	Element_ICEI();
	virtual ~Element_ICEI();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_METL: public Element
{
public:
	Element_METL();
	virtual ~Element_METL();
	
};

class Element_SPRK: public Element
{
public:
	Element_SPRK();
	virtual ~Element_SPRK();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_SNOW: public Element
{
public:
	Element_SNOW();
	virtual ~Element_SNOW();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_WOOD: public Element
{
public:
	Element_WOOD();
	virtual ~Element_WOOD();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_NEUT: public Element
{
public:
	Element_NEUT();
	virtual ~Element_NEUT();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
	static int DeutExplosion(Simulation * sim, int n, int x, int y, float temp, int t);
};

class Element_PLUT: public Element
{
public:
	Element_PLUT();
	virtual ~Element_PLUT();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PLNT: public Element
{
public:
	Element_PLNT();
	virtual ~Element_PLNT();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_ACID: public Element
{
public:
	Element_ACID();
	virtual ~Element_ACID();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_VOID: public Element
{
public:
	Element_VOID();
	virtual ~Element_VOID();
	
};

class Element_WTRV: public Element
{
public:
	Element_WTRV();
	virtual ~Element_WTRV();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_CNCT: public Element
{
public:
	Element_CNCT();
	virtual ~Element_CNCT();
	
};

class Element_DSTW: public Element
{
public:
	Element_DSTW();
	virtual ~Element_DSTW();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_SALT: public Element
{
public:
	Element_SALT();
	virtual ~Element_SALT();
	
};

class Element_SLTW: public Element
{
public:
	Element_SLTW();
	virtual ~Element_SLTW();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_DMND: public Element
{
public:
	Element_DMND();
	virtual ~Element_DMND();
	
};

class Element_BMTL: public Element
{
public:
	Element_BMTL();
	virtual ~Element_BMTL();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_BRMT: public Element
{
public:
	Element_BRMT();
	virtual ~Element_BRMT();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PHOT: public Element
{
public:
	Element_PHOT();
	virtual ~Element_PHOT();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_URAN: public Element
{
public:
	Element_URAN();
	virtual ~Element_URAN();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_WAX: public Element
{
public:
	Element_WAX();
	virtual ~Element_WAX();
	
};

class Element_MWAX: public Element
{
public:
	Element_MWAX();
	virtual ~Element_MWAX();
	
};

class Element_PSCN: public Element
{
public:
	Element_PSCN();
	virtual ~Element_PSCN();
	
};

class Element_NSCN: public Element
{
public:
	Element_NSCN();
	virtual ~Element_NSCN();
	
};

class Element_LNTG: public Element
{
public:
	Element_LNTG();
	virtual ~Element_LNTG();
	
};

class Element_INSL: public Element
{
public:
	Element_INSL();
	virtual ~Element_INSL();
	
};

class Element_BHOL: public Element
{
public:
	Element_BHOL();
	virtual ~Element_BHOL();
	
};

class Element_WHOL: public Element
{
public:
	Element_WHOL();
	virtual ~Element_WHOL();
	
};

class Element_RBDM: public Element
{
public:
	Element_RBDM();
	virtual ~Element_RBDM();
	
};

class Element_LRBD: public Element
{
public:
	Element_LRBD();
	virtual ~Element_LRBD();
	
};

class Element_NTCT: public Element
{
public:
	Element_NTCT();
	virtual ~Element_NTCT();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_SAND: public Element
{
public:
	Element_SAND();
	virtual ~Element_SAND();
	
};

class Element_GLAS: public Element
{
public:
	Element_GLAS();
	virtual ~Element_GLAS();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PTCT: public Element
{
public:
	Element_PTCT();
	virtual ~Element_PTCT();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_BGLA: public Element
{
public:
	Element_BGLA();
	virtual ~Element_BGLA();
	
};

class Element_THDR: public Element
{
public:
	Element_THDR();
	virtual ~Element_THDR();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_PLSM: public Element
{
public:
	Element_PLSM();
	virtual ~Element_PLSM();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_ETRD: public Element
{
public:
	Element_ETRD();
	virtual ~Element_ETRD();
	static void initDeltaPos();
	static int nearestSparkablePart(Simulation *sim, int targetId);
};

class Element_NICE: public Element
{
public:
	Element_NICE();
	virtual ~Element_NICE();
	
};

class Element_NBLE: public Element
{
public:
	Element_NBLE();
	virtual ~Element_NBLE();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_BTRY: public Element
{
public:
	Element_BTRY();
	virtual ~Element_BTRY();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_LCRY: public Element
{
public:
	Element_LCRY();
	virtual ~Element_LCRY();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_STKM: public Element
{
public:
	Element_STKM();
	virtual ~Element_STKM();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
	static int run_stickman(playerst *playerp, UPDATE_FUNC_ARGS);
	static void STKM_interact(Simulation *sim, playerst *playerp, int i, int x, int y);
	static void STKM_init_legs(Simulation * sim, playerst *playerp, int i);
	static void STKM_set_element(Simulation *sim, playerst *playerp, int element);
};

class Element_SWCH: public Element
{
public:
	Element_SWCH();
	virtual ~Element_SWCH();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_SMKE: public Element
{
public:
	Element_SMKE();
	virtual ~Element_SMKE();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_DESL: public Element
{
public:
	Element_DESL();
	virtual ~Element_DESL();
	
};

class Element_COAL: public Element
{
public:
	Element_COAL();
	virtual ~Element_COAL();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_LO2: public Element
{
public:
	Element_LO2();
	virtual ~Element_LO2();
	
};

class Element_O2: public Element
{
public:
	Element_O2();
	virtual ~Element_O2();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_INWR: public Element
{
public:
	Element_INWR();
	virtual ~Element_INWR();
	
};

class Element_YEST: public Element
{
public:
	Element_YEST();
	virtual ~Element_YEST();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_DYST: public Element
{
public:
	Element_DYST();
	virtual ~Element_DYST();
	
};

class Element_THRM: public Element
{
public:
	Element_THRM();
	virtual ~Element_THRM();
	
};

class Element_GLOW: public Element
{
public:
	Element_GLOW();
	virtual ~Element_GLOW();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_BRCK: public Element
{
public:
	Element_BRCK();
	virtual ~Element_BRCK();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_CFLM: public Element
{
public:
	Element_CFLM();
	virtual ~Element_CFLM();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_FIRW: public Element
{
public:
	Element_FIRW();
	virtual ~Element_FIRW();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_FUSE: public Element
{
public:
	Element_FUSE();
	virtual ~Element_FUSE();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_FSEP: public Element
{
public:
	Element_FSEP();
	virtual ~Element_FSEP();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_AMTR: public Element
{
public:
	Element_AMTR();
	virtual ~Element_AMTR();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_BCOL: public Element
{
public:
	Element_BCOL();
	virtual ~Element_BCOL();
	
};

class Element_PCLN: public Element
{
public:
	Element_PCLN();
	virtual ~Element_PCLN();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_HSWC: public Element
{
public:
	Element_HSWC();
	virtual ~Element_HSWC();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_IRON: public Element
{
public:
	Element_IRON();
	virtual ~Element_IRON();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_MORT: public Element
{
public:
	Element_MORT();
	virtual ~Element_MORT();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_LIFE: public Element
{
public:
	Element_LIFE();
	virtual ~Element_LIFE();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_DLAY: public Element
{
public:
	Element_DLAY();
	virtual ~Element_DLAY();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_CO2: public Element
{
public:
	Element_CO2();
	virtual ~Element_CO2();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_DRIC: public Element
{
public:
	Element_DRIC();
	virtual ~Element_DRIC();
	
};

class Element_CBNW: public Element
{
public:
	Element_CBNW();
	virtual ~Element_CBNW();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_STOR: public Element
{
public:
	Element_STOR();
	virtual ~Element_STOR();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_PVOD: public Element
{
public:
	Element_PVOD();
	virtual ~Element_PVOD();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_CONV: public Element
{
public:
	Element_CONV();
	virtual ~Element_CONV();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_CAUS: public Element
{
public:
	Element_CAUS();
	virtual ~Element_CAUS();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_LIGH: public Element
{
public:
	Element_LIGH();
	virtual ~Element_LIGH();
	static int update(UPDATE_FUNC_ARGS);
	static int LIGH_nearest_part(Simulation * sim, int ci, int max_d);
	static int contact_part(Simulation * sim, int i, int tp);
	static bool create_LIGH(Simulation * sim, int x, int y, int c, int temp, int life, int tmp, int tmp2, bool last);
	static void create_line_par(Simulation * sim, int x1, int y1, int x2, int y2, int c, int temp, int life, int tmp, int tmp2);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_TESC: public Element
{
public:
	Element_TESC();
	virtual ~Element_TESC();
	
};

class Element_DEST: public Element
{
public:
	Element_DEST();
	virtual ~Element_DEST();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_SPNG: public Element
{
public:
	Element_SPNG();
	virtual ~Element_SPNG();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_RIME: public Element
{
public:
	Element_RIME();
	virtual ~Element_RIME();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_FOG: public Element
{
public:
	Element_FOG();
	virtual ~Element_FOG();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_BCLN: public Element
{
public:
	Element_BCLN();
	virtual ~Element_BCLN();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_LOVE: public Element
{
public:
	Element_LOVE();
	virtual ~Element_LOVE();
	static int RuleTable[9][9];
	static int love[XRES/9][YRES/9];;
};

class Element_DEUT: public Element
{
public:
	Element_DEUT();
	virtual ~Element_DEUT();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_WARP: public Element
{
public:
	Element_WARP();
	virtual ~Element_WARP();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_PUMP: public Element
{
public:
	Element_PUMP();
	virtual ~Element_PUMP();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_FWRK: public Element
{
public:
	Element_FWRK();
	virtual ~Element_FWRK();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PIPE: public Element
{
public:
	Element_PIPE();
	virtual ~Element_PIPE();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
	static void transfer_pipe_to_part(Simulation * sim, Particle *pipe, Particle *part);
	static void transfer_part_to_pipe(Particle *part, Particle *pipe);
	static void transfer_pipe_to_pipe(Particle *src, Particle *dest);
	static void pushParticle(Simulation * sim, int i, int count, int original);
};

class Element_FRZZ: public Element
{
public:
	Element_FRZZ();
	virtual ~Element_FRZZ();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_FRZW: public Element
{
public:
	Element_FRZW();
	virtual ~Element_FRZW();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_GRAV: public Element
{
public:
	Element_GRAV();
	virtual ~Element_GRAV();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_BIZR: public Element
{
public:
	Element_BIZR();
	virtual ~Element_BIZR();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_BIZRG: public Element
{
public:
	Element_BIZRG();
	virtual ~Element_BIZRG();
	
};

class Element_BIZRS: public Element
{
public:
	Element_BIZRS();
	virtual ~Element_BIZRS();
	
};

class Element_INST: public Element
{
public:
	Element_INST();
	virtual ~Element_INST();
	
};

class Element_ISOZ: public Element
{
public:
	Element_ISOZ();
	virtual ~Element_ISOZ();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_ISZS: public Element
{
public:
	Element_ISZS();
	virtual ~Element_ISZS();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PRTI: public Element
{
public:
	Element_PRTI();
	virtual ~Element_PRTI();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_PRTO: public Element
{
public:
	Element_PRTO();
	virtual ~Element_PRTO();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_PSTE: public Element
{
public:
	Element_PSTE();
	virtual ~Element_PSTE();
	
};

class Element_PSTS: public Element
{
public:
	Element_PSTS();
	virtual ~Element_PSTS();
	
};

class Element_ANAR: public Element
{
public:
	Element_ANAR();
	virtual ~Element_ANAR();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_VINE: public Element
{
public:
	Element_VINE();
	virtual ~Element_VINE();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_INVIS: public Element
{
public:
	Element_INVIS();
	virtual ~Element_INVIS();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_116: public Element
{
public:
	Element_116();
	virtual ~Element_116();
	
};

class Element_SPAWN2: public Element
{
public:
	Element_SPAWN2();
	virtual ~Element_SPAWN2();
	
};

class Element_SPAWN: public Element
{
public:
	Element_SPAWN();
	virtual ~Element_SPAWN();
	
};

class Element_SHLD1: public Element
{
public:
	Element_SHLD1();
	virtual ~Element_SHLD1();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_SHLD2: public Element
{
public:
	Element_SHLD2();
	virtual ~Element_SHLD2();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_SHLD3: public Element
{
public:
	Element_SHLD3();
	virtual ~Element_SHLD3();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_SHLD4: public Element
{
public:
	Element_SHLD4();
	virtual ~Element_SHLD4();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_LOLZ: public Element
{
public:
	Element_LOLZ();
	virtual ~Element_LOLZ();
	static int RuleTable[9][9];
	static int lolz[XRES/9][YRES/9];;
};

class Element_WIFI: public Element
{
public:
	Element_WIFI();
	virtual ~Element_WIFI();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_FILT: public Element
{
public:
	Element_FILT();
	virtual ~Element_FILT();
	static int graphics(GRAPHICS_FUNC_ARGS);
	static int interactWavelengths(Particle* cpart, int origWl);
	static int getWavelengths(Particle* cpart);
};

class Element_ARAY: public Element
{
public:
	Element_ARAY();
	virtual ~Element_ARAY();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_BRAY: public Element
{
public:
	Element_BRAY();
	virtual ~Element_BRAY();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_STKM2: public Element
{
public:
	Element_STKM2();
	virtual ~Element_STKM2();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_BOMB: public Element
{
public:
	Element_BOMB();
	virtual ~Element_BOMB();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_C5: public Element
{
public:
	Element_C5();
	virtual ~Element_C5();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_SING: public Element
{
public:
	Element_SING();
	virtual ~Element_SING();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_QRTZ: public Element
{
public:
	Element_QRTZ();
	virtual ~Element_QRTZ();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_PQRT: public Element
{
public:
	Element_PQRT();
	virtual ~Element_PQRT();
	
};

class Element_EMP: public Element
{
public:
	Element_EMP();
	virtual ~Element_EMP();
	static int Trigger(Simulation *sim, int triggerCount);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_BREC: public Element
{
public:
	Element_BREC();
	virtual ~Element_BREC();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_ELEC: public Element
{
public:
	Element_ELEC();
	virtual ~Element_ELEC();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_ACEL: public Element
{
public:
	Element_ACEL();
	virtual ~Element_ACEL();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_DCEL: public Element
{
public:
	Element_DCEL();
	virtual ~Element_DCEL();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_BANG: public Element
{
public:
	Element_BANG();
	virtual ~Element_BANG();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_IGNT: public Element
{
public:
	Element_IGNT();
	virtual ~Element_IGNT();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_BOYL: public Element
{
public:
	Element_BOYL();
	virtual ~Element_BOYL();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_GEL: public Element
{
public:
	Element_GEL();
	virtual ~Element_GEL();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_TRON: public Element
{
public:
	Element_TRON();
	virtual ~Element_TRON();
	static void init_graphics();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
	static int new_tronhead(Simulation * sim, int x, int y, int i, int direction);
	static int trymovetron(Simulation * sim, int x, int y, int dir, int i, int len);
	static bool canmovetron(Simulation * sim, int r, int len);
};

class Element_TTAN: public Element
{
public:
	Element_TTAN();
	virtual ~Element_TTAN();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_EXOT: public Element
{
public:
	Element_EXOT();
	virtual ~Element_EXOT();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_146: public Element
{
public:
	Element_146();
	virtual ~Element_146();
	
};

class Element_EMBR: public Element
{
public:
	Element_EMBR();
	virtual ~Element_EMBR();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_H2: public Element
{
public:
	Element_H2();
	virtual ~Element_H2();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_SOAP: public Element
{
public:
	Element_SOAP();
	virtual ~Element_SOAP();
	static void detach(Simulation * sim, int i);
	static void attach(Particle * parts, int i1, int i2);
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_NBHL: public Element
{
public:
	Element_NBHL();
	virtual ~Element_NBHL();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_NWHL: public Element
{
public:
	Element_NWHL();
	virtual ~Element_NWHL();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_MERC: public Element
{
public:
	Element_MERC();
	virtual ~Element_MERC();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PBCN: public Element
{
public:
	Element_PBCN();
	virtual ~Element_PBCN();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_GPMP: public Element
{
public:
	Element_GPMP();
	virtual ~Element_GPMP();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_CLST: public Element
{
public:
	Element_CLST();
	virtual ~Element_CLST();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_WIRE: public Element
{
public:
	Element_WIRE();
	virtual ~Element_WIRE();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_GBMB: public Element
{
public:
	Element_GBMB();
	virtual ~Element_GBMB();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_FIGH: public Element
{
public:
	Element_FIGH();
	virtual ~Element_FIGH();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_FRAY: public Element
{
public:
	Element_FRAY();
	virtual ~Element_FRAY();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_RPEL: public Element
{
public:
	Element_RPEL();
	virtual ~Element_RPEL();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PPIP: public Element
{
public:
	Element_PPIP();
	virtual ~Element_PPIP();
	static int ppip_changed;
	static void flood_trigger(Simulation * sim, int x, int y, int sparkedBy);
};

class Element_DTEC: public Element
{
public:
	Element_DTEC();
	virtual ~Element_DTEC();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_DMG: public Element
{
public:
	Element_DMG();
	virtual ~Element_DMG();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_TSNS: public Element
{
public:
	Element_TSNS();
	virtual ~Element_TSNS();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_VIBR: public Element
{
public:
	Element_VIBR();
	virtual ~Element_VIBR();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_BVBR: public Element
{
public:
	Element_BVBR();
	virtual ~Element_BVBR();
	
};

class Element_CRAY: public Element
{
public:
	Element_CRAY();
	virtual ~Element_CRAY();
	static int update(UPDATE_FUNC_ARGS);
	static unsigned int wavelengthToDecoColour(int wavelength);
};

class Element_PSTN: public Element
{
public:
	Element_PSTN();
	virtual ~Element_PSTN();
	struct StackData;
	static int tempParts[XRES];
	static int update(UPDATE_FUNC_ARGS);
	static StackData CanMoveStack(Simulation * sim, int stackX, int stackY, int directionX, int directionY, int maxSize, int amount, bool retract, int block);
	static int MoveStack(Simulation * sim, int stackX, int stackY, int directionX, int directionY, int maxSize, int amount, bool retract, int block, bool sticky, int callDepth = 0);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_FRME: public Element
{
public:
	Element_FRME();
	virtual ~Element_FRME();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_GOLD: public Element
{
public:
	Element_GOLD();
	virtual ~Element_GOLD();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_TUNG: public Element
{
public:
	Element_TUNG();
	virtual ~Element_TUNG();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_PSNS: public Element
{
public:
	Element_PSNS();
	virtual ~Element_PSNS();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_PROT: public Element
{
public:
	Element_PROT();
	virtual ~Element_PROT();
	static int update(UPDATE_FUNC_ARGS);
	static int DeutImplosion(Simulation * sim, int n, int x, int y, float temp, int t);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_VIRS: public Element
{
public:
	Element_VIRS();
	virtual ~Element_VIRS();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_VRSS: public Element
{
public:
	Element_VRSS();
	virtual ~Element_VRSS();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_VRSG: public Element
{
public:
	Element_VRSG();
	virtual ~Element_VRSG();
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_GRVT: public Element
{
public:
	Element_GRVT();
	virtual ~Element_GRVT();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_DRAY: public Element
{
public:
	Element_DRAY();
	virtual ~Element_DRAY();
	static int update(UPDATE_FUNC_ARGS);
};

class Element_CRMC: public Element
{
public:
	Element_CRMC();
	virtual ~Element_CRMC();
	static int update(UPDATE_FUNC_ARGS);
	static int graphics(GRAPHICS_FUNC_ARGS);
};

class Element_MEAT : public Element
{
public:
	Element_MEAT();
	virtual ~Element_MEAT();
};

class Element_BEEF : public Element
{
public:
	Element_BEEF();
	virtual ~Element_BEEF();
};

class Element_GMET : public Element
{
public:
	Element_GMET();
	virtual ~Element_GMET();
};

class Element_GBEF : public Element
{
public:
	Element_GBEF();
	virtual ~Element_GBEF();
};

class Element_CUME : public Element
{
public:
	Element_CUME();
	virtual ~Element_CUME();
	static int update(UPDATE_FUNC_ARGS);
};

std::vector<Element> GetElements();

#endif
