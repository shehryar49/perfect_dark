#ifndef _IN_GAME_BONDGUN_H
#define _IN_GAME_BONDGUN_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void bgun0f097ba0(s32 handnum, s32 weaponnum);
s32 bgunGetUnequippedReloadIndex(s32 weaponnum);
void bgunTickUnequippedReload(void);
bool bgun0f097df0(struct inventory_typef *arg0, struct hand *hand);
void bgunSetPartVisible(s16 partnum, bool visible, struct hand *hand, struct modelfiledata *filedata);
void bgun0f097f28(struct hand *hand, struct modelfiledata *arg1, struct inventory_typef *arg2);
void bgun0f098030(struct hand *hand, struct modelfiledata *arg1);
f32 bgun0f09815c(struct hand *hand);
u32 bgun0f0981e8(void);
bool bgun0f098884(struct guncmd *cmd, struct gset *gset);
void bgun0f0988e0(struct guncmd *cmd, s32 handnum, struct hand *hand);
bool bgun0f098a44(struct hand *hand, s32 time);
bool bgunIsAnimBusy(struct hand *hand);
void bgunResetAnim(struct hand *hand);
void bgunGetWeaponInfo(struct handweaponinfo *info, s32 handnum);
s32 bgun0f098ca0(s32 arg0, struct handweaponinfo *info, struct hand *hand);
void bgun0f098df8(s32 weaponfunc, struct handweaponinfo *info, struct hand *hand, u8 onebullet, u8 checkunequipped);
void bgun0f098f8c(struct handweaponinfo *info, struct hand *hand);
bool bgun0f099008(s32 handnum);
bool bgun0f0990b0(struct weaponfunc *basefunc, struct weapon *weapon);
bool bgun0f099188(struct hand *hand, s32 gunfunc);
s32 bgunTickIncIdle(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
void bgun0f099780(struct hand *hand, f32 angle);
s32 bgunTickIncAutoSwitch(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
bool bgunIsReloading(struct hand *hand);
s32 bgunTickIncReload(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
s32 bgunTickIncChangeFunc(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
s32 bgun0f09a3f8(struct hand *hand, struct weaponfunc *func);
void bgun0f09a6f8(struct handweaponinfo *info, s32 handnum, struct hand *hand, struct weaponfunc *func);
bool bgun0f09aba4(struct hand *hand, struct handweaponinfo *info, s32 handnum, struct weaponfunc_shoot *func);
bool bgunTickIncAttackingShoot(struct handweaponinfo *info, s32 handnum, struct hand *hand);
bool bgunTickIncAttackingThrow(s32 handnum, struct hand *hand);
s32 bgunGetMinClipQty(s32 weaponnum, s32 funcnum);
bool bgunTickIncAttackingClose(s32 handnum, struct hand *hand);
bool bgunTickIncAttackingSpecial(struct hand *hand);
s32 bgunTickIncAttackEmpty(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
s32 bgunTickIncAttack(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
bool bgunIsReadyToSwitch(s32 handnum);
bool bgun0f09bec8(s32 handnum);
bool bgun0f09bf44(s32 handnum);
s32 bgunTickIncChangeGun(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
s32 bgunTickIncState2(struct handweaponinfo *info, s32 handnum, struct hand *hand, s32 lvupdate);
s32 bgunTickInc(struct handweaponinfo *info, s32 handnum, s32 lvupdate);
bool bgunSetState(s32 handnum, s32 state);
void bgunTick(s32 handnum);
void bgun0f09ce8c(void);
void bgun0f09ceac(void);
f32 bgunGetNoiseRadius(s32 handnum);
void bgunDecreaseNoiseRadius(void);
void bgunCalculateBlend(s32 hand);
u32 bgun0f09d550(void);
void bgun0f09d8dc(f32 breathing, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
bool bgun0f09dd7c(void);
u32 bgun0f09ddcc(void);
u8 *bgun0f09ddec(void);
u32 bgun0f09ddfc(void);
void bgun0f09df50(void);
void bgun0f09df64(s32 weaponnum);
void bgun0f09df9c(void);
bool bgun0f09e004(s32 newowner);
u32 bgun0f09e144(void);
void bgun0f09e4e0(void);
void bgun0f09ea90(void);
bool bgun0f09eae4(void);
s32 bgun0f09ebbc(void);
void bgun0f09ebcc(struct defaultobj *obj, struct coord *coord, s16 *rooms, Mtxf *matrix1, f32 *arg4, Mtxf *matrix2, struct prop *prop, struct coord *pos);
void bgun0f09ed2c(struct defaultobj *obj, struct coord *coord, Mtxf *arg2, f32 *arg3, Mtxf *arg4);
struct defaultobj *bgun0f09ee18(struct chrdata *chr, struct gset *gset, struct coord *pos, s16 *rooms, Mtxf *arg4, struct coord *arg5);
void bgunCreateThrownProjectile(s32 handnum, struct gset *gset);
void bgun0f09f848(s32 handnum);
void bgun0f09f974(s32 handnum, struct weaponfunc_shootprojectile *func);
void bgun0f09fa20(s32 handnum);
void bgunCreateFiredProjectile(s32 handnum);
void bgun0f0a0394(f32 autoaimx, f32 autoaimy, f32 damp, f32 arg3);
void bgunSwivelTowards(f32 screenx, f32 screeny, f32 damp);
void bgun0f0a0b98(f32 arg0, f32 arg1);
void bgunGetCrossPos(f32 *x, f32 *y);
void bgun0f0a0c08(struct coord *arg0, struct coord *arg1);
void bgun0f0a0c44(s32 handnum, struct coord *arg1, struct coord *arg2);
void bgunCalculateShotSpread(struct coord *arg0, struct coord *arg1, s32 handnum, bool dorandom);
u32 bgun0f0a0fac(void);
void bgunSetLastShootInfo(struct coord *pos, struct coord *dir, s32 handnum);
u32 bgunGetUnk0c30(s32 handnum);
void bgun0f0a134c(s32 handnum);
void bgun0f0a1528(void);
void bgunEquipWeapon(s32 weaponnum);
s32 bgunGetWeaponNum(s32 handnum);
bool bgun0f0a1a10(s32 weaponnum);
s32 bgun0f0a1a68(s32 arg0);
void bgun0f0a1ab0(void);
void bgunCycleForward(void);
void bgunCycleBack(void);
bool bgunHasAmmoForWeapon(s32 weaponnum);
void bgunAutoSwitchWeapon(void);
void bgunEquipWeapon2(bool arg0, s32 weaponnum);
s32 bgunIsFiring(s32 handnum);
s32 bgunGetAttackType(s32 handnum);
char *bgunGetName(s32 weaponnum);
u16 bgunGetNameId(s32 weaponnum);
char *bgunGetShortName(s32 arg0);
void bgunReloadIfPossible(s32 handnum);
void bgunSetAdjustPos(f32 angle);
void bgunResetSlideInc(s32 handnum);
u32 bgun0f0a233c(void);
f32 bgun0f0a2498(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
void bgun0f0a24f0(struct coord *arg0, s32 handnum);
bool bgun0f0a27c8(void);
void bgun0f0a29c8(void);
bool bgunIsMissionCritical(s32 weaponnum);
void bgunLoseGun(struct prop *attacker);
u32 bgun0f0a2da8(void);
u32 bgun0f0a2e94(void);
void bgunDetonateRemoteMines(s32 playernum);
u32 bgun0f0a3160(void);
u32 bgun0f0a3490(void);
u32 bgun0f0a37b4(void);
u32 bgun0f0a3aa4(void);
u32 bgun0f0a3eac(void);
u32 bgun0f0a4094(void);
u32 bgun0f0a419c(void);
void bgun0f0a4334(struct hand *hand);
u32 bgun0f0a4438(void);
void bgun0f0a4570(struct hand *hand, s32 handnum, struct weaponfunc_shootprojectile *func);
void bgun0f0a45d0(struct hand *hand, struct modelfiledata *filedata, bool arg2);
u32 bgun0f0a46a4(void);
u32 bgun0f0a4e44(void);
u32 bgun0f0a5300(void);
void bgun0f0a5550(s32 handnum);
void bgunTickMaulerCharge(void);
void bgun0f0a6c30(void);
s32 bgunAllocateFireslot(void);
void bgun0f0a7138(Gfx **gdl);
struct audiohandle **bgunAllocateAudioHandle(void);
void bgunPlayPropHitSound(struct gset *gset, struct prop *prop, s32 texturenum);
void bgun0f0a8404(struct coord *pos, s16 *rooms, s32 arg2);
void bgunPlayBgHitSound(struct gset *gset, struct coord *arg1, s32 texturenum, s16 *arg3);
void bgunSetTriggerOn(s32 handnum, bool on);
s32 bgunConsiderToggleGunFunction(s32 usedowntime, bool firing, s32 arg2);
void bgun0f0a8c50(void);
bool bgunIsUsingSecondaryFunction(void);
void bgunsTick(bool triggeron);
void bgunSetPassiveMode(bool enable);
void bgunSetAimType(u32 aimtype);
void bgunSetAimPos(struct coord *coord);
void bgunSetHitPos(struct coord *coord);
void bgun0f0a9494(u32 operation);
void bgun0f0a94d0(u32 operation, struct coord *pos, struct coord *rot);
void bgunSetGunAmmoVisible(u32 reason, bool enable);
void bgunSetAmmoQuantity(s32 ammotype, s32 quantity);
s32 bgunGetReservedAmmoCount(s32 type);
s32 bgunGetAmmoCount(s32 ammotype);
s32 bgunGetCapacityByAmmotype(u32 ammotype);
bool bgunAmmotypeAllowsUnlimitedAmmo(u32 ammotype);
void bgunGiveMaxAmmo(bool force);
u32 bgunGetAmmoTypeForWeapon(u32 weaponnum, u32 func);
s32 bgunGetAmmoQtyForWeapon(u32 weaponnum, u32 func);
void bgunSetAmmoQtyForWeapon(u32 weaponnum, u32 func, u32 quantity);
s32 bgunGetAmmoCapacityForWeapon(s32 weaponnum, s32 func);
Gfx *bgunRenderHudString(Gfx *gdl, char *text, s32 x, bool halign, s32 y, s32 valign, u32 colour);
Gfx *bgunRenderHudInteger(Gfx *gdl, s32 value, s32 x, bool halign, s32 y, s32 valign, u32 colour);
void bgunResetAbmag(struct abmag *abmag);
void bgun0f0a9da8(struct abmag *abmag, s32 remaining, s32 capacity, s32 height);
Gfx *bgunRenderHudGauge(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2, struct abmag *abmag, s32 remaining, s32 capacity, u32 vacantcolour, u32 occupiedcolour, bool flip);
Gfx *bgunRenderHud(Gfx *gdl);
void bgunAddBoostc(s32 arg0);
void bgunSubtractBoost(s32 arg0);
void bgunApplyBoost(void);
void bgunRevertBoost(void);
void bgunTickBoost(void);
void bgunSetSightVisible(u32 bits, bool visible);
Gfx *bgun0f0abcb0(Gfx *gdl);
void bgun0f0abd30(s32 handnum);
s32 bgunGetWeaponNum2(s32 handnum);
s8 bgunFreeFireslotWrapper(s32 fireslot);
s8 bgunFreeFireslot(s32 fireslot);

#endif
