#ifndef IN_GAME_MPLAYER_H
#define IN_GAME_MPLAYER_H
#include <ultra64.h>
#include "types.h"

f32 func0f187770(u8 value);
u32 func0f187838(void);
u32 func0f187864(void);
u32 func0f187944(void);
void func0f187e70(void);
void func0f187fbc(s32 playernum);
void func0f187fec(void);
u32 func0f18800c(void);
void func0f1881d4(s32 index);
u32 func0f188210(void);
void func0f18836c(void);
u32 func0f18844c(void);
void func0f188530(void);
s32 func0f1885e4(struct mpteaminfo *info);
u32 func0f188930(void);
s32 func0f188a84(struct mpteaminfo *info);
u32 func0f188bcc(void);
u32 mpGetNumWeaponOptions(void);
char *mpGetWeaponLabel(s32 weapon_id);
void mpSetWeaponSlot(s32 slot, s32 weapon_id);
s32 mpGetWeaponSlot(s32 slot);
u32 func0f188e24(void);
s32 mpCountWeaponSetThing(s32 weaponsetindex);
s32 func0f188f9c(s32 arg0);
s32 func0f189058(s32 arg0);
u32 func0f189088(void);
char *mpGetWeaponSetName(s32 arg0);
u32 func0f18913c(void);
u32 func0f1892dc(void);
void func0f1895bc(s32 arg0);
u32 func0f1895e8(void);
s32 func0f18961c(void);
u32 mpIsPaused(void);
void mpSetPaused(u8 pause);
u32 func0f18973c(void);
u32 func0f189cc0(void);
u32 func0f189dc8(void);
u32 func0f189ed0(void);
u32 func0f18a030(void);
void mpCalculatePlayerTitle(struct mpplayer *mpplayer);
u32 func0f18a56c(void);
u32 func0f18b9e4(void);
u32 func0f18bb1c(void);
s32 mpGetNumHeads(void);
s32 mpGetHeadId(u8 headnum);
s32 mpGetHeadUnlockValue(u8 headnum);
s32 mpGetBeauHeadId(u8 headnum);
u32 mpGetNumBodies(void);
s32 mpGetBodyId(u8 bodynum);
s32 mpGetBodyIndexByBodyId(u16 bodyid);
char *mpGetBodyName(u8 bodynum);
u8 mpGetBodyUnk06(u8 bodynum);
s32 mpBodyGetMpHeadIndex(s32 bodynum);
u32 mpChooseRandomLockPlayer(void);
bool mpSetLock(s32 locktype, s32 playernum);
u32 mpGetLockType(void);
u32 mpGetLockPlayerNum(void);
bool mpIsPlayerLockedOut(u32 playernum);
u32 func0f18c014(void);
bool mpIsTrackUnlocked(s32 tracknum);
s32 mpGetTrackSlotIndex(s32 tracknum);
s32 mpGetTrackNumAtSlotIndex(s32 slotindex);
s32 func0f18c200(void);
s32 mpGetTrackAudioId(s32 slotindex);
char *mpGetTrackName(s32 slotindex);
void mpSetUsingMultipleTunes(bool enable);
bool mpGetUsingMultipleTunes(void);
u32 func0f18c2b0(s32 slot);
void mpSetMultiTrackSlotEnabled(s32 slot, bool enable);
void mpSetTrackSlotEnabled(s32 slot);
void mpEnableAllMultiTracks(void);
void mpDisableAllMultiTracks(void);
void mpRandomiseMultiTracks(void);
void mpSetTrackToRandom(void);
s32 mpGetCurrentTrackSlotNum(void);
u32 func0f18c4c0(void);
struct mpchr *func0f18c794(s32 index);
u32 func0f18c828(void);
s32 mpGetNumChrs(void);
u32 func0f18c8b8(void);
u32 func0f18c984(void);
u32 func0f18cb60(void);
s32 mpGetNumSimulants(void);
void mpRemoveSimulant(s32 index);
bool mpHasSimulants(void);
u32 func0f18cc8c(void);
bool mpIsSimSlotEnabled(s32 slotindex);
s32 func0f18cd68(s32 arg0, s32 arg1);
u32 func0f18cddc(void);
s32 mpPlayerGetIndex(struct chrdata *chr);
struct chrdata *mpGetChrFromPlayerIndex(s32 index);
s32 func0f18d074(s32 index);
s32 func0f18d0e8(s32 arg0);
u32 func0f18d1b8(void);
u32 func0f18d238(void);
u32 func0f18d2b8(void);
u32 func0f18d5c4(void);
u32 func0f18d9a4(void);
u32 func0f18d9fc(void);
u32 func0f18dac0(void);
u32 mpGetNumPresets(void);
bool mpIsPresetUnlocked(s32 presetnum);
s32 mpGetNumUnlockedPresets(void);
u32 mpGetPresetNameBySlot(void);
u32 func0f18dcec(void);
u32 func0f18dec4(void);
u32 func0f18df5c(void);
u32 func0f18e16c(void);
u32 func0f18e39c(void);
u32 func0f18e420(void);
u32 func0f18e4c8(void);
void func0f18e558(void);
u32 func0f18e57c(void);

#endif
