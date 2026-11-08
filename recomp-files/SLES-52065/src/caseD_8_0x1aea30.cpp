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

// Function: caseD_8
// Address: 0x1aea30 - 0x1aeabc
void caseD_8_0x1aea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1aea30");
#endif

    switch (ctx->pc) {
        case 0x1aea30u: goto label_1aea30;
        case 0x1aea34u: goto label_1aea34;
        case 0x1aea38u: goto label_1aea38;
        case 0x1aea3cu: goto label_1aea3c;
        case 0x1aea40u: goto label_1aea40;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea48u: goto label_1aea48;
        case 0x1aea4cu: goto label_1aea4c;
        case 0x1aea50u: goto label_1aea50;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea58u: goto label_1aea58;
        case 0x1aea5cu: goto label_1aea5c;
        case 0x1aea60u: goto label_1aea60;
        case 0x1aea64u: goto label_1aea64;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea70u: goto label_1aea70;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea78u: goto label_1aea78;
        case 0x1aea7cu: goto label_1aea7c;
        case 0x1aea80u: goto label_1aea80;
        case 0x1aea84u: goto label_1aea84;
        case 0x1aea88u: goto label_1aea88;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea90u: goto label_1aea90;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aea9cu: goto label_1aea9c;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeaa4u: goto label_1aeaa4;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeaacu: goto label_1aeaac;
        case 0x1aeab0u: goto label_1aeab0;
        case 0x1aeab4u: goto label_1aeab4;
        case 0x1aeab8u: goto label_1aeab8;
        default: break;
    }

    ctx->pc = 0x1aea30u;

label_1aea30:
    // 0x1aea30: 0xae8006e0  sw          $zero, 0x6E0($s4)
    ctx->pc = 0x1aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
label_1aea34:
    // 0x1aea34: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1aea34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1aea38:
    // 0x1aea38: 0xae8006d8  sw          $zero, 0x6D8($s4)
    ctx->pc = 0x1aea38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 0));
label_1aea3c:
    // 0x1aea3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aea40:
    // 0x1aea40: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aea40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1aea44:
    // 0x1aea44: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
label_1aea48:
    // 0x1aea48: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1aea48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
label_1aea4c:
    // 0x1aea4c: 0xa28006e8  sb          $zero, 0x6E8($s4)
    ctx->pc = 0x1aea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1768), (uint8_t)GPR_U32(ctx, 0));
label_1aea50:
    // 0x1aea50: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1aea50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1aea54:
    // 0x1aea54: 0x8f868124  lw          $a2, -0x7EDC($gp)
    ctx->pc = 0x1aea54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
label_1aea58:
    // 0x1aea58: 0xc06cf34  jal         func_1B3CD0
label_1aea5c:
    if (ctx->pc == 0x1AEA5Cu) {
        ctx->pc = 0x1AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA58u;
        // 0x1aea5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA60u;
        goto label_1aea60;
    }
    ctx->pc = 0x1AEA58u;
    SET_GPR_U32(ctx, 31, 0x1AEA60u);
    ctx->pc = 0x1AEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA58u;
    // 0x1aea5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AEA58u, 0x1AEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA60u;
label_1aea60:
    // 0x1aea60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea64:
    // 0x1aea64: 0xc069ac8  jal         func_1A6B20
label_1aea68:
    if (ctx->pc == 0x1AEA68u) {
        ctx->pc = 0x1AEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA64u;
        // 0x1aea68: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA6Cu;
        goto label_1aea6c;
    }
    ctx->pc = 0x1AEA64u;
    SET_GPR_U32(ctx, 31, 0x1AEA6Cu);
    ctx->pc = 0x1AEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA64u;
    // 0x1aea68: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AEA64u, 0x1AEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA6Cu;
label_1aea6c:
    // 0x1aea6c: 0xa28006e9  sb          $zero, 0x6E9($s4)
    ctx->pc = 0x1aea6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 0));
label_1aea70:
    // 0x1aea70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aea74:
    // 0x1aea74: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aea74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1aea78:
    // 0x1aea78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aea78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aea7c:
    // 0x1aea7c: 0xae8206d8  sw          $v0, 0x6D8($s4)
    ctx->pc = 0x1aea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 2));
label_1aea80:
    // 0x1aea80: 0xc069ac0  jal         func_1A6B00
label_1aea84:
    if (ctx->pc == 0x1AEA84u) {
        ctx->pc = 0x1AEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA80u;
        // 0x1aea84: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA88u;
        goto label_1aea88;
    }
    ctx->pc = 0x1AEA80u;
    SET_GPR_U32(ctx, 31, 0x1AEA88u);
    ctx->pc = 0x1AEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA80u;
    // 0x1aea84: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AEA80u, 0x1AEA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA88u;
label_1aea88:
    // 0x1aea88: 0xc062114  jal         func_188450
label_1aea8c:
    if (ctx->pc == 0x1AEA8Cu) {
        ctx->pc = 0x1AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA88u;
        // 0x1aea8c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA90u;
        goto label_1aea90;
    }
    ctx->pc = 0x1AEA88u;
    SET_GPR_U32(ctx, 31, 0x1AEA90u);
    ctx->pc = 0x1AEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA88u;
    // 0x1aea8c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AEA88u, 0x1AEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA90u;
label_1aea90:
    // 0x1aea90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea94:
    // 0x1aea94: 0xc0620fc  jal         func_1883F0
label_1aea98:
    if (ctx->pc == 0x1AEA98u) {
        ctx->pc = 0x1AEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA94u;
        // 0x1aea98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA9Cu;
        goto label_1aea9c;
    }
    ctx->pc = 0x1AEA94u;
    SET_GPR_U32(ctx, 31, 0x1AEA9Cu);
    ctx->pc = 0x1AEA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA94u;
    // 0x1aea98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AEA94u, 0x1AEA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA9Cu;
label_1aea9c:
    // 0x1aea9c: 0x8e8406d0  lw          $a0, 0x6D0($s4)
    ctx->pc = 0x1aea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
label_1aeaa0:
    // 0x1aeaa0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1aeaa4:
    if (ctx->pc == 0x1AEAA4u) {
        ctx->pc = 0x1AEAA8u;
        goto label_1aeaa8;
    }
    ctx->pc = 0x1AEAA0u;
    {
        const bool branch_taken_0x1aeaa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeaa0) {
            ctx->pc = 0x1AEABCu;
            return;
        }
    }
    ctx->pc = 0x1AEAA8u;
label_1aeaa8:
    // 0x1aeaa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aeaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aeaac:
    // 0x1aeaac: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1aeab0:
    // 0x1aeab0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1aeab4:
    // 0x1aeab4: 0x320f809  jalr        $t9
label_1aeab8:
    if (ctx->pc == 0x1AEAB8u) {
        ctx->pc = 0x1AEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAB4u;
        // 0x1aeab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEABCu;
        goto label_fallthrough_0x1aeab4;
    }
    ctx->pc = 0x1AEAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEABCu);
        ctx->pc = 0x1AEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAB4u;
        // 0x1aeab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEAB4u, 0x1AEABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1aeab4:
    ctx->pc = 0x1AEABCu;
}
