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

// Function: entry_001a1d0c
// Address: 0x1a1d0c - 0x1a1d9c
void entry_001a1d0c_0x1a1d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1d0c_0x1a1d0c");
#endif

    switch (ctx->pc) {
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d5cu: goto label_1a1d5c;
        case 0x1a1d78u: goto label_1a1d78;
        default: break;
    }

    ctx->pc = 0x1a1d0cu;

label_1a1d0c:
    // 0x1a1d0c: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1a1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1a1d10:
    // 0x1a1d10: 0x904209fc  lbu         $v0, 0x9FC($v0)
    ctx->pc = 0x1a1d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1d14:
    // 0x1a1d14: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1a1d18:
    if (ctx->pc == 0x1A1D18u) {
        ctx->pc = 0x1A1D1Cu;
        goto label_1a1d1c;
    }
    ctx->pc = 0x1A1D14u;
    {
        const bool branch_taken_0x1a1d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d14) {
            ctx->pc = 0x1A1DACu;
            return;
        }
    }
    ctx->pc = 0x1A1D1Cu;
label_1a1d1c:
    // 0x1a1d1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a1d20:
    // 0x1a1d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d24:
    // 0x1a1d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1d28:
    // 0x1a1d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d2c:
    // 0x1a1d2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a1d30:
    // 0x1a1d30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a1d34:
    // 0x1a1d34: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a1d38:
    // 0x1a1d38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d3c:
    // 0x1a1d3c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a1d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a1d40:
    // 0x1a1d40: 0x320f809  jalr        $t9
label_1a1d44:
    if (ctx->pc == 0x1A1D44u) {
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D48u;
        goto label_1a1d48;
    }
    ctx->pc = 0x1A1D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D48u);
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D40u, 0x1A1D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D48u;
label_1a1d48:
    // 0x1a1d48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1d4c:
    // 0x1a1d4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d50:
    // 0x1a1d50: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a1d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a1d54:
    // 0x1a1d54: 0x320f809  jalr        $t9
label_1a1d58:
    if (ctx->pc == 0x1A1D58u) {
        ctx->pc = 0x1A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D54u;
        // 0x1a1d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D5Cu;
        goto label_1a1d5c;
    }
    ctx->pc = 0x1A1D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D5Cu);
        ctx->pc = 0x1A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D54u;
        // 0x1a1d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D54u, 0x1A1D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D5Cu;
label_1a1d5c:
    // 0x1a1d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1d60:
    // 0x1a1d60: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x1a1d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_1a1d64:
    // 0x1a1d64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1d68:
    // 0x1a1d68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d6c:
    // 0x1a1d6c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1d70:
    // 0x1a1d70: 0x320f809  jalr        $t9
label_1a1d74:
    if (ctx->pc == 0x1A1D74u) {
        ctx->pc = 0x1A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D70u;
        // 0x1a1d74: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D78u;
        goto label_1a1d78;
    }
    ctx->pc = 0x1A1D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D78u);
        ctx->pc = 0x1A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D70u;
        // 0x1a1d74: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D70u, 0x1A1D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D78u;
label_1a1d78:
    // 0x1a1d78: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x1a1d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1d7c:
    // 0x1a1d7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1d80:
    if (ctx->pc == 0x1A1D80u) {
        ctx->pc = 0x1A1D84u;
        goto label_1a1d84;
    }
    ctx->pc = 0x1A1D7Cu;
    {
        const bool branch_taken_0x1a1d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d7c) {
            ctx->pc = 0x1A1D9Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D84u;
label_1a1d84:
    // 0x1a1d84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1d88:
    // 0x1a1d88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1d8c:
    // 0x1a1d8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1d90:
    // 0x1a1d90: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1d94:
    // 0x1a1d94: 0x320f809  jalr        $t9
label_1a1d98:
    if (ctx->pc == 0x1A1D98u) {
        ctx->pc = 0x1A1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D94u;
        // 0x1a1d98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D9Cu;
        goto label_fallthrough_0x1a1d94;
    }
    ctx->pc = 0x1A1D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1D9Cu);
        ctx->pc = 0x1A1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D94u;
        // 0x1a1d98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D94u, 0x1A1D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a1d94:
    ctx->pc = 0x1A1D9Cu;
}
