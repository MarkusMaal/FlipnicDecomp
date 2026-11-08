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

// Function: entry_001aec30
// Address: 0x1aec30 - 0x1aecc4
void entry_001aec30_0x1aec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aec30_0x1aec30");
#endif

    switch (ctx->pc) {
        case 0x1aec60u: goto label_1aec60;
        case 0x1aec6cu: goto label_1aec6c;
        case 0x1aec98u: goto label_1aec98;
        case 0x1aeca4u: goto label_1aeca4;
        case 0x1aecbcu: goto label_1aecbc;
        default: break;
    }

    ctx->pc = 0x1aec30u;

    // 0x1aec30: 0xae8006e0  sw          $zero, 0x6E0($s4)
    ctx->pc = 0x1aec30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
    // 0x1aec34: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1aec34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1aec38: 0xae8006d8  sw          $zero, 0x6D8($s4)
    ctx->pc = 0x1aec38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 0));
    // 0x1aec3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aec40: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aec40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
    // 0x1aec44: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x1aec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    // 0x1aec48: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1aec48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
    // 0x1aec4c: 0xa28006e8  sb          $zero, 0x6E8($s4)
    ctx->pc = 0x1aec4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1768), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aec50: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1aec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1aec54: 0x8f868124  lw          $a2, -0x7EDC($gp)
    ctx->pc = 0x1aec54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
    // 0x1aec58: 0xc06cf34  jal         func_1B3CD0
    ctx->pc = 0x1AEC58u;
    SET_GPR_U32(ctx, 31, 0x1AEC60u);
    ctx->pc = 0x1AEC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC58u;
    // 0x1aec5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AEC58u, 0x1AEC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC60u;
label_1aec60:
    // 0x1aec60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec64: 0xc069ac8  jal         func_1A6B20
    ctx->pc = 0x1AEC64u;
    SET_GPR_U32(ctx, 31, 0x1AEC6Cu);
    ctx->pc = 0x1AEC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC64u;
    // 0x1aec68: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AEC64u, 0x1AEC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC6Cu;
label_1aec6c:
    // 0x1aec6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aec74: 0xa28306e9  sb          $v1, 0x6E9($s4)
    ctx->pc = 0x1aec74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aec78: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aec78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
    // 0x1aec7c: 0xae8206d8  sw          $v0, 0x6D8($s4)
    ctx->pc = 0x1aec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 2));
    // 0x1aec80: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1aec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1aec84: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x1aec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x1aec88: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AEC88u;
    {
        const bool branch_taken_0x1aec88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC88u;
        // 0x1aec8c: 0x43802a  slt         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec88) {
            ctx->pc = 0x1AECC4u;
            return;
        }
    }
    ctx->pc = 0x1AEC90u;
    // 0x1aec90: 0xc062114  jal         func_188450
    ctx->pc = 0x1AEC90u;
    SET_GPR_U32(ctx, 31, 0x1AEC98u);
    ctx->pc = 0x1AEC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC90u;
    // 0x1aec94: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AEC90u, 0x1AEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC98u;
label_1aec98:
    // 0x1aec98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec9c: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1AEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1AECA4u);
    ctx->pc = 0x1AECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC9Cu;
    // 0x1aeca0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AEC9Cu, 0x1AECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECA4u;
label_1aeca4:
    // 0x1aeca4: 0x8e8206c8  lw          $v0, 0x6C8($s4)
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
    // 0x1aeca8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AECA8u;
    {
        const bool branch_taken_0x1aeca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeca8) {
            ctx->pc = 0x1AED0Cu;
            return;
        }
    }
    ctx->pc = 0x1AECB0u;
    // 0x1aecb0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1aecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1aecb4: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1AECB4u;
    SET_GPR_U32(ctx, 31, 0x1AECBCu);
    ctx->pc = 0x1AECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECB4u;
    // 0x1aecb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AECB4u, 0x1AECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECBCu;
label_1aecbc:
    // 0x1aecbc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AECBCu;
    {
        const bool branch_taken_0x1aecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECBCu;
        // 0x1aecc0: 0x8e8406d0  lw          $a0, 0x6D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecbc) {
            ctx->pc = 0x1AED10u;
            return;
        }
    }
    ctx->pc = 0x1AECC4u;
}
