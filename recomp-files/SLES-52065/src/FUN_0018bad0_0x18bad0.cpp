#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018bad0
// Address: 0x18bad0 - 0x18be60
void FUN_0018bad0_0x18bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018bad0_0x18bad0");
#endif

    switch (ctx->pc) {
        case 0x18bb10u: goto label_18bb10;
        case 0x18bb20u: goto label_18bb20;
        case 0x18bb30u: goto label_18bb30;
        case 0x18bb40u: goto label_18bb40;
        case 0x18bb50u: goto label_18bb50;
        case 0x18bb60u: goto label_18bb60;
        case 0x18bb74u: goto label_18bb74;
        case 0x18bb88u: goto label_18bb88;
        case 0x18bb98u: goto label_18bb98;
        case 0x18bba8u: goto label_18bba8;
        case 0x18bbf0u: goto label_18bbf0;
        case 0x18bbfcu: goto label_18bbfc;
        case 0x18bc08u: goto label_18bc08;
        case 0x18bc10u: goto label_18bc10;
        case 0x18bc24u: goto label_18bc24;
        case 0x18bc34u: goto label_18bc34;
        case 0x18bc44u: goto label_18bc44;
        case 0x18bc4cu: goto label_18bc4c;
        case 0x18bc54u: goto label_18bc54;
        case 0x18bc64u: goto label_18bc64;
        case 0x18bc6cu: goto label_18bc6c;
        case 0x18bc78u: goto label_18bc78;
        case 0x18bc8cu: goto label_18bc8c;
        case 0x18bcacu: goto label_18bcac;
        case 0x18bcb8u: goto label_18bcb8;
        case 0x18bce4u: goto label_18bce4;
        case 0x18bcf0u: goto label_18bcf0;
        case 0x18bcf8u: goto label_18bcf8;
        case 0x18bd18u: goto label_18bd18;
        case 0x18bd24u: goto label_18bd24;
        case 0x18bd2cu: goto label_18bd2c;
        case 0x18bd4cu: goto label_18bd4c;
        case 0x18bd70u: goto label_18bd70;
        case 0x18bd84u: goto label_18bd84;
        case 0x18be38u: goto label_18be38;
        case 0x18be48u: goto label_18be48;
        default: break;
    }

    ctx->pc = 0x18bad0u;

    // 0x18bad0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x18bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x18bad4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18bad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18badc: 0x24a52880  addiu       $a1, $a1, 0x2880
    ctx->pc = 0x18badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    // 0x18bae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18baec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18baecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18baf0: 0xac800450  sw          $zero, 0x450($a0)
    ctx->pc = 0x18baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1104), GPR_U32(ctx, 0));
    // 0x18baf4: 0xac800484  sw          $zero, 0x484($a0)
    ctx->pc = 0x18baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1156), GPR_U32(ctx, 0));
    // 0x18baf8: 0xac800460  sw          $zero, 0x460($a0)
    ctx->pc = 0x18baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1120), GPR_U32(ctx, 0));
    // 0x18bafc: 0xac800464  sw          $zero, 0x464($a0)
    ctx->pc = 0x18bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1124), GPR_U32(ctx, 0));
    // 0x18bb00: 0xac800468  sw          $zero, 0x468($a0)
    ctx->pc = 0x18bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1128), GPR_U32(ctx, 0));
    // 0x18bb04: 0xac80046c  sw          $zero, 0x46C($a0)
    ctx->pc = 0x18bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 0));
    // 0x18bb08: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB08u;
    SET_GPR_U32(ctx, 31, 0x18BB10u);
    ctx->pc = 0x18BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB08u;
    // 0x18bb0c: 0x262404d0  addiu       $a0, $s1, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB08u, 0x18BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB10u;
label_18bb10:
    // 0x18bb10: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb14: 0x262404e0  addiu       $a0, $s1, 0x4E0
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1248));
    // 0x18bb18: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB18u;
    SET_GPR_U32(ctx, 31, 0x18BB20u);
    ctx->pc = 0x18BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB18u;
    // 0x18bb1c: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB18u, 0x18BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB20u;
label_18bb20:
    // 0x18bb20: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb24: 0x26240520  addiu       $a0, $s1, 0x520
    ctx->pc = 0x18bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x18bb28: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB28u;
    SET_GPR_U32(ctx, 31, 0x18BB30u);
    ctx->pc = 0x18BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB28u;
    // 0x18bb2c: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB28u, 0x18BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB30u;
label_18bb30:
    // 0x18bb30: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb34: 0x26240530  addiu       $a0, $s1, 0x530
    ctx->pc = 0x18bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1328));
    // 0x18bb38: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB38u;
    SET_GPR_U32(ctx, 31, 0x18BB40u);
    ctx->pc = 0x18BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB38u;
    // 0x18bb3c: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB38u, 0x18BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB40u;
label_18bb40:
    // 0x18bb40: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb44: 0x262404f0  addiu       $a0, $s1, 0x4F0
    ctx->pc = 0x18bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1264));
    // 0x18bb48: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB48u;
    SET_GPR_U32(ctx, 31, 0x18BB50u);
    ctx->pc = 0x18BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB48u;
    // 0x18bb4c: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB48u, 0x18BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB50u;
label_18bb50:
    // 0x18bb50: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb54: 0x26240500  addiu       $a0, $s1, 0x500
    ctx->pc = 0x18bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
    // 0x18bb58: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB58u;
    SET_GPR_U32(ctx, 31, 0x18BB60u);
    ctx->pc = 0x18BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB58u;
    // 0x18bb5c: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB58u, 0x18BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB60u;
label_18bb60:
    // 0x18bb60: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb64: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x18bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x18bb68: 0x24a52880  addiu       $a1, $a1, 0x2880
    ctx->pc = 0x18bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    // 0x18bb6c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB6Cu;
    SET_GPR_U32(ctx, 31, 0x18BB74u);
    ctx->pc = 0x18BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB6Cu;
    // 0x18bb70: 0xae200540  sw          $zero, 0x540($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB6Cu, 0x18BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB74u;
label_18bb74:
    // 0x18bb74: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb78: 0x26240570  addiu       $a0, $s1, 0x570
    ctx->pc = 0x18bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    // 0x18bb7c: 0x24a52880  addiu       $a1, $a1, 0x2880
    ctx->pc = 0x18bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    // 0x18bb80: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB80u;
    SET_GPR_U32(ctx, 31, 0x18BB88u);
    ctx->pc = 0x18BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB80u;
    // 0x18bb84: 0xae200560  sw          $zero, 0x560($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB80u, 0x18BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB88u;
label_18bb88:
    // 0x18bb88: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb8c: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x18bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x18bb90: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BB90u;
    SET_GPR_U32(ctx, 31, 0x18BB98u);
    ctx->pc = 0x18BB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB90u;
    // 0x18bb94: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BB90u, 0x18BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB98u;
label_18bb98:
    // 0x18bb98: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bb9c: 0x262405a0  addiu       $a0, $s1, 0x5A0
    ctx->pc = 0x18bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
    // 0x18bba0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BBA0u;
    SET_GPR_U32(ctx, 31, 0x18BBA8u);
    ctx->pc = 0x18BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBA0u;
    // 0x18bba4: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BBA0u, 0x18BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBA8u;
label_18bba8:
    // 0x18bba8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x18bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x18bbac: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x18bbacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x18bbb0: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x18bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
    // 0x18bbb4: 0x24422890  addiu       $v0, $v0, 0x2890
    ctx->pc = 0x18bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10384));
    // 0x18bbb8: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x18bbb8u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x212890u));
    // 0x18bbbc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18bbc0: 0x24c628a0  addiu       $a2, $a2, 0x28A0
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10400));
    // 0x18bbc4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x18bbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18bbc8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x18bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18bbcc: 0x262404a0  addiu       $a0, $s1, 0x4A0
    ctx->pc = 0x18bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1184));
    // 0x18bbd0: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x18bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x18bbd4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x18bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x18bbd8: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x18bbd8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x2128A0u));
    // 0x18bbdc: 0x244228b0  addiu       $v0, $v0, 0x28B0
    ctx->pc = 0x18bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10416));
    // 0x18bbe0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x18bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x18bbe4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18bbe4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2128B0u));
    // 0x18bbe8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BBE8u;
    SET_GPR_U32(ctx, 31, 0x18BBF0u);
    ctx->pc = 0x18BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBE8u;
    // 0x18bbec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BBE8u, 0x18BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBF0u;
label_18bbf0:
    // 0x18bbf0: 0x262404b0  addiu       $a0, $s1, 0x4B0
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    // 0x18bbf4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BBF4u;
    SET_GPR_U32(ctx, 31, 0x18BBFCu);
    ctx->pc = 0x18BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBF4u;
    // 0x18bbf8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BBF4u, 0x18BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBFCu;
label_18bbfc:
    // 0x18bbfc: 0x262404c0  addiu       $a0, $s1, 0x4C0
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
    // 0x18bc00: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18BC00u;
    SET_GPR_U32(ctx, 31, 0x18BC08u);
    ctx->pc = 0x18BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC00u;
    // 0x18bc04: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18BC00u, 0x18BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC08u;
label_18bc08:
    // 0x18bc08: 0xc062fa8  jal         func_18BEA0
    ctx->pc = 0x18BC08u;
    SET_GPR_U32(ctx, 31, 0x18BC10u);
    ctx->pc = 0x18BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC08u;
    // 0x18bc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BEA0u, 0x18BC08u, 0x18BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC10u;
label_18bc10:
    // 0x18bc10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bc10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc14: 0x262504a0  addiu       $a1, $s1, 0x4A0
    ctx->pc = 0x18bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1184));
    // 0x18bc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc1c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18BC1Cu;
    SET_GPR_U32(ctx, 31, 0x18BC24u);
    ctx->pc = 0x18BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC1Cu;
    // 0x18bc20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18BC1Cu, 0x18BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC24u;
label_18bc24:
    // 0x18bc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc28: 0x262504b0  addiu       $a1, $s1, 0x4B0
    ctx->pc = 0x18bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    // 0x18bc2c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18BC2Cu;
    SET_GPR_U32(ctx, 31, 0x18BC34u);
    ctx->pc = 0x18BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC2Cu;
    // 0x18bc30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18BC2Cu, 0x18BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC34u;
label_18bc34:
    // 0x18bc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc38: 0x262504c0  addiu       $a1, $s1, 0x4C0
    ctx->pc = 0x18bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
    // 0x18bc3c: 0xc053320  jal         func_14CC80
    ctx->pc = 0x18BC3Cu;
    SET_GPR_U32(ctx, 31, 0x18BC44u);
    ctx->pc = 0x18BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC3Cu;
    // 0x18bc40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC80u, 0x18BC3Cu, 0x18BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC44u;
label_18bc44:
    // 0x18bc44: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x18BC44u;
    SET_GPR_U32(ctx, 31, 0x18BC4Cu);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x18BC44u, 0x18BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC4Cu;
label_18bc4c:
    // 0x18bc4c: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x18BC4Cu;
    SET_GPR_U32(ctx, 31, 0x18BC54u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x18BC4Cu, 0x18BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC54u;
label_18bc54:
    // 0x18bc54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18bc58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc5c: 0xc05fec8  jal         func_17FB20
    ctx->pc = 0x18BC5Cu;
    SET_GPR_U32(ctx, 31, 0x18BC64u);
    ctx->pc = 0x18BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC5Cu;
    // 0x18bc60: 0x24a5fd20  addiu       $a1, $a1, -0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB20u, 0x18BC5Cu, 0x18BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC64u;
label_18bc64:
    // 0x18bc64: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x18BC64u;
    SET_GPR_U32(ctx, 31, 0x18BC6Cu);
    ctx->pc = 0x18BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC64u;
    // 0x18bc68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x18BC64u, 0x18BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC6Cu;
label_18bc6c:
    // 0x18bc6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc70: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x18BC70u;
    SET_GPR_U32(ctx, 31, 0x18BC78u);
    ctx->pc = 0x18BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC70u;
    // 0x18bc74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x18BC70u, 0x18BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC78u;
label_18bc78:
    // 0x18bc78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18bc7c: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x18bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
    // 0x18bc80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bc84: 0xc05f878  jal         func_17E1E0
    ctx->pc = 0x18BC84u;
    SET_GPR_U32(ctx, 31, 0x18BC8Cu);
    ctx->pc = 0x18BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC84u;
    // 0x18bc88: 0x24a5fd38  addiu       $a1, $a1, -0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18BC84u, 0x18BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC8Cu;
label_18bc8c:
    // 0x18bc8c: 0xae220600  sw          $v0, 0x600($s1)
    ctx->pc = 0x18bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
    // 0x18bc90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18bc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bc94: 0xae2605b0  sw          $a2, 0x5B0($s1)
    ctx->pc = 0x18bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 6));
    // 0x18bc98: 0x262505c0  addiu       $a1, $s1, 0x5C0
    ctx->pc = 0x18bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x18bc9c: 0xc62005b4  lwc1        $f0, 0x5B4($s1)
    ctx->pc = 0x18bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bca0: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x18bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x18bca4: 0xc05ff20  jal         func_17FC80
    ctx->pc = 0x18BCA4u;
    SET_GPR_U32(ctx, 31, 0x18BCACu);
    ctx->pc = 0x18BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCA4u;
    // 0x18bca8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x18BCA4u, 0x18BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCACu;
label_18bcac:
    // 0x18bcac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18bcb0: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x18BCB0u;
    SET_GPR_U32(ctx, 31, 0x18BCB8u);
    ctx->pc = 0x18BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCB0u;
    // 0x18bcb4: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x18BCB0u, 0x18BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCB8u;
label_18bcb8:
    // 0x18bcb8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x18bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x18bcbc: 0x27b20074  addiu       $s2, $sp, 0x74
    ctx->pc = 0x18bcbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x18bcc0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x18bcc4: 0x27b00078  addiu       $s0, $sp, 0x78
    ctx->pc = 0x18bcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x18bcc8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18bccc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18bcd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18bcd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18bcd8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18bcdc: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18BCDCu;
    SET_GPR_U32(ctx, 31, 0x18BCE4u);
    ctx->pc = 0x18BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCDCu;
    // 0x18bce0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18BCDCu, 0x18BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCE4u;
label_18bce4:
    // 0x18bce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bce8: 0xc0630c4  jal         func_18C310
    ctx->pc = 0x18BCE8u;
    SET_GPR_U32(ctx, 31, 0x18BCF0u);
    ctx->pc = 0x18BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCE8u;
    // 0x18bcec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C310u, 0x18BCE8u, 0x18BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCF0u;
label_18bcf0:
    // 0x18bcf0: 0xc06303c  jal         func_18C0F0
    ctx->pc = 0x18BCF0u;
    SET_GPR_U32(ctx, 31, 0x18BCF8u);
    ctx->pc = 0x18BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCF0u;
    // 0x18bcf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C0F0u, 0x18BCF0u, 0x18BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCF8u;
label_18bcf8:
    // 0x18bcf8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x18bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x18bcfc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18bd00: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x18bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x18bd04: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18bd08: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x18bd0c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18bd10: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18BD10u;
    SET_GPR_U32(ctx, 31, 0x18BD18u);
    ctx->pc = 0x18BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD10u;
    // 0x18bd14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18BD10u, 0x18BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD18u;
label_18bd18:
    // 0x18bd18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd1c: 0xc063154  jal         func_18C550
    ctx->pc = 0x18BD1Cu;
    SET_GPR_U32(ctx, 31, 0x18BD24u);
    ctx->pc = 0x18BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD1Cu;
    // 0x18bd20: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C550u, 0x18BD1Cu, 0x18BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD24u;
label_18bd24:
    // 0x18bd24: 0xc063058  jal         func_18C160
    ctx->pc = 0x18BD24u;
    SET_GPR_U32(ctx, 31, 0x18BD2Cu);
    ctx->pc = 0x18BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD24u;
    // 0x18bd28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C160u, 0x18BD24u, 0x18BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD2Cu;
label_18bd2c:
    // 0x18bd2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x18bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x18bd30: 0x26240610  addiu       $a0, $s1, 0x610
    ctx->pc = 0x18bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x18bd34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18bd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x18bd38: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x18bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
    // 0x18bd3c: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x18bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
    // 0x18bd40: 0xae202710  sw          $zero, 0x2710($s1)
    ctx->pc = 0x18bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
    // 0x18bd44: 0xc063cb4  jal         func_18F2D0
    ctx->pc = 0x18BD44u;
    SET_GPR_U32(ctx, 31, 0x18BD4Cu);
    ctx->pc = 0x18BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD44u;
    // 0x18bd48: 0xae202714  sw          $zero, 0x2714($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 10004), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F2D0u, 0x18BD44u, 0x18BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD4Cu;
label_18bd4c:
    // 0x18bd4c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18bd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18bd50: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x18bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18bd54: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x18bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x18bd58: 0x24040320  addiu       $a0, $zero, 0x320
    ctx->pc = 0x18bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x18bd5c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18bd5cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2128C0u));
    // 0x18bd60: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18bd60u;
    { uint32_t bits = FAST_READ32(0x2128C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bd64: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18bd68: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x18BD68u;
    SET_GPR_U32(ctx, 31, 0x18BD70u);
    ctx->pc = 0x18BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD68u;
    // 0x18bd6c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x18BD68u, 0x18BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD70u;
label_18bd70:
    // 0x18bd70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd74: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BD74u;
    {
        const bool branch_taken_0x18bd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD74u;
        // 0x18bd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd74) {
            ctx->pc = 0x18BD88u;
            goto label_18bd88;
        }
    }
    ctx->pc = 0x18BD7Cu;
    // 0x18bd7c: 0xc063d34  jal         func_18F4D0
    ctx->pc = 0x18BD7Cu;
    SET_GPR_U32(ctx, 31, 0x18BD84u);
    ctx->pc = 0x18F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4D0u, 0x18BD7Cu, 0x18BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD84u;
label_18bd84:
    // 0x18bd84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bd88:
    // 0x18bd88: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x18BD88u;
    {
        const bool branch_taken_0x18bd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd88) {
            ctx->pc = 0x18BE48u;
            goto label_18be48;
        }
    }
    ctx->pc = 0x18BD90u;
    // 0x18bd90: 0x26220210  addiu       $v0, $s1, 0x210
    ctx->pc = 0x18bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x18bd94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BD94u;
    {
        const bool branch_taken_0x18bd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd94) {
            ctx->pc = 0x18BDA0u;
            goto label_18bda0;
        }
    }
    ctx->pc = 0x18BD9Cu;
    // 0x18bd9c: 0x2442fdf0  addiu       $v0, $v0, -0x210
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
label_18bda0:
    // 0x18bda0: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18bda4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18bda8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18bda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bdac: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18bdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdb4: 0x24a5fd40  addiu       $a1, $a1, -0x2C0
    ctx->pc = 0x18bdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966592));
    // 0x18bdb8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18bdbc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18bdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18bdc0: 0xacc70254  sw          $a3, 0x254($a2)
    ctx->pc = 0x18bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 596), GPR_U32(ctx, 7));
    // 0x18bdc4: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18bdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18bdc8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x18bdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18bdcc: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x18bdd0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x18bdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x18bdd4: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x18bdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18bdd8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18bddc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18bddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18bde0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x18bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x18bde4: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x18bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x18bde8: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18bdec: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x18bdecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18bdf0: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x18bdf4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x18bdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x18bdf8: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x18bdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18bdfc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18be00: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18be04: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x18be04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x18be08: 0xacc00154  sw          $zero, 0x154($a2)
    ctx->pc = 0x18be08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 0));
    // 0x18be0c: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x18be0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18be10: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18be14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18be18: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18be1c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18be20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18be24: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x18be24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x18be28: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x18be28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x18be2c: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x18be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x18be30: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x18BE30u;
    SET_GPR_U32(ctx, 31, 0x18BE38u);
    ctx->pc = 0x18BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE30u;
    // 0x18be34: 0xac620280  sw          $v0, 0x280($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x18BE30u, 0x18BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE38u;
label_18be38:
    // 0x18be38: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x18be3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18be3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be40: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x18BE40u;
    SET_GPR_U32(ctx, 31, 0x18BE48u);
    ctx->pc = 0x18BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE40u;
    // 0x18be44: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x18BE40u, 0x18BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE48u;
label_18be48:
    // 0x18be48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18be48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18be4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18be4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18be50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18be50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18be54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18be54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18be58: 0x3e00008  jr          $ra
    ctx->pc = 0x18BE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE58u;
        // 0x18be5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BE60u;
}
