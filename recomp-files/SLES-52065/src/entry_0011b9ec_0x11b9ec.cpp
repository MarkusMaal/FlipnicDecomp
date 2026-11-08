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

// Function: entry_0011b9ec
// Address: 0x11b9ec - 0x11ba7c
void entry_0011b9ec_0x11b9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9ec_0x11b9ec");
#endif

    switch (ctx->pc) {
        case 0x11ba0cu: goto label_11ba0c;
        case 0x11ba20u: goto label_11ba20;
        case 0x11ba30u: goto label_11ba30;
        case 0x11ba48u: goto label_11ba48;
        default: break;
    }

    ctx->pc = 0x11b9ecu;

    // 0x11b9ec: 0x16c00028  bnez        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x11B9ECu;
    {
        const bool branch_taken_0x11b9ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9ECu;
        // 0x11b9f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9ec) {
            ctx->pc = 0x11BA90u;
            return;
        }
    }
    ctx->pc = 0x11B9F4u;
    // 0x11b9f4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11b9f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11b9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba00: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x11ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x11ba04: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BA04u;
    SET_GPR_U32(ctx, 31, 0x11BA0Cu);
    ctx->pc = 0x11BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA04u;
    // 0x11ba08: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BA04u, 0x11BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA0Cu;
label_11ba0c:
    // 0x11ba0c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x11ba0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba14: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x11ba14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11ba18: 0xc046cd4  jal         func_11B350
    ctx->pc = 0x11BA18u;
    SET_GPR_U32(ctx, 31, 0x11BA20u);
    ctx->pc = 0x11BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA18u;
    // 0x11ba1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B350u, 0x11BA18u, 0x11BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA20u;
label_11ba20:
    // 0x11ba20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba24: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x11ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11ba28: 0xc046d68  jal         func_11B5A0
    ctx->pc = 0x11BA28u;
    SET_GPR_U32(ctx, 31, 0x11BA30u);
    ctx->pc = 0x11BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA28u;
    // 0x11ba2c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B5A0u, 0x11BA28u, 0x11BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA30u;
label_11ba30:
    // 0x11ba30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ba30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba34: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x11ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x11ba38: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x11ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x11ba3c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x11ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ba40: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BA40u;
    SET_GPR_U32(ctx, 31, 0x11BA48u);
    ctx->pc = 0x11BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA40u;
    // 0x11ba44: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BA40u, 0x11BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA48u;
label_11ba48:
    // 0x11ba48: 0x83a300e0  lb          $v1, 0xE0($sp)
    ctx->pc = 0x11ba48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11ba4c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x11ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11ba50: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11BA50u;
    {
        const bool branch_taken_0x11ba50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA50u;
        // 0x11ba54: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba50) {
            ctx->pc = 0x11BA80u;
            return;
        }
    }
    ctx->pc = 0x11BA58u;
    // 0x11ba58: 0x83a300e1  lb          $v1, 0xE1($sp)
    ctx->pc = 0x11ba58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 225)));
    // 0x11ba5c: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x11ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x11ba60: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BA60u;
    {
        const bool branch_taken_0x11ba60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ba60) {
            ctx->pc = 0x11BA7Cu;
            return;
        }
    }
    ctx->pc = 0x11BA68u;
    // 0x11ba68: 0x83a300e2  lb          $v1, 0xE2($sp)
    ctx->pc = 0x11ba68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 226)));
    // 0x11ba6c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x11ba70: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11BA70u;
    {
        const bool branch_taken_0x11ba70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ba70) {
            ctx->pc = 0x11BA7Cu;
            return;
        }
    }
    ctx->pc = 0x11BA78u;
    // 0x11ba78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11ba78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ba7cu;
}
