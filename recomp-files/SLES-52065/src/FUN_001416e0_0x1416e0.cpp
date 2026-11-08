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

// Function: FUN_001416e0
// Address: 0x1416e0 - 0x1417d8
void FUN_001416e0_0x1416e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001416e0_0x1416e0");
#endif

    switch (ctx->pc) {
        case 0x141714u: goto label_141714;
        case 0x141730u: goto label_141730;
        case 0x14174cu: goto label_14174c;
        case 0x1417c4u: goto label_1417c4;
        default: break;
    }

    ctx->pc = 0x1416e0u;

    // 0x1416e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1416e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1416e4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1416e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1416e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1416e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1416ec: 0x246391b0  addiu       $v1, $v1, -0x6E50
    ctx->pc = 0x1416ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939056));
    // 0x1416f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1416f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1416f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1416f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1416f8: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1416f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1416fc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1416fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141700: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x141704: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x141704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141708: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x141708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14170c: 0xc049dd8  jal         func_127760
    ctx->pc = 0x14170Cu;
    SET_GPR_U32(ctx, 31, 0x141714u);
    ctx->pc = 0x141710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14170Cu;
    // 0x141710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x14170Cu, 0x141714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141714u;
label_141714:
    // 0x141714: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x141714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x141718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14171c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14171cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x141720: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x141720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141724: 0x2450003c  addiu       $s0, $v0, 0x3C
    ctx->pc = 0x141724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x141728: 0xc049dd8  jal         func_127760
    ctx->pc = 0x141728u;
    SET_GPR_U32(ctx, 31, 0x141730u);
    ctx->pc = 0x14172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141728u;
    // 0x14172c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x141728u, 0x141730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141730u;
label_141730:
    // 0x141730: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x141730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x141734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141738: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x141738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14173c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141740: 0x24500048  addiu       $s0, $v0, 0x48
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x141744: 0xc0505f8  jal         func_1417E0
    ctx->pc = 0x141744u;
    SET_GPR_U32(ctx, 31, 0x14174Cu);
    ctx->pc = 0x141748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141744u;
    // 0x141748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1417E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417E0u, 0x141744u, 0x14174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14174Cu;
label_14174c:
    // 0x14174c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x141750: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x141750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x141754: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x141754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141758: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x141758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x14175c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141760: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x141760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x141764: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x141764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141768: 0xa040002a  sb          $zero, 0x2A($v0)
    ctx->pc = 0x141768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x14176c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141770: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x141770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x141774: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x141774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141778: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x141778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x14177c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141780: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x141780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x141784: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x141784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141788: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x141788u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x14178c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141790: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x141790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x141794: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141798: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x141798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x14179c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1417a0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1417a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1417a4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1417a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1417a8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1417a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1417ac: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1417acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1417b0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1417b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1417b4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1417b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1417b8: 0xa040002b  sb          $zero, 0x2B($v0)
    ctx->pc = 0x1417b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x1417bc: 0xc050d2c  jal         func_1434B0
    ctx->pc = 0x1417BCu;
    SET_GPR_U32(ctx, 31, 0x1417C4u);
    ctx->pc = 0x1417C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417BCu;
    // 0x1417c0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B0u, 0x1417BCu, 0x1417C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417C4u;
label_1417c4:
    // 0x1417c4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1417c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1417c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1417c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1417cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1417ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1417d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1417D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1417D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417D0u;
        // 0x1417d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1417D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1417D8u;
}
