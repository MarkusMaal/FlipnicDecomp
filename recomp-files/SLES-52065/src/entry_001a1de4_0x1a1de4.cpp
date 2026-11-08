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

// Function: entry_001a1de4
// Address: 0x1a1de4 - 0x1a1e74
void entry_001a1de4_0x1a1de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1de4_0x1a1de4");
#endif

    switch (ctx->pc) {
        case 0x1a1e20u: goto label_1a1e20;
        case 0x1a1e34u: goto label_1a1e34;
        case 0x1a1e50u: goto label_1a1e50;
        default: break;
    }

    ctx->pc = 0x1a1de4u;

label_1a1de4:
    // 0x1a1de4: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1a1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1a1de8:
    // 0x1a1de8: 0x904209fc  lbu         $v0, 0x9FC($v0)
    ctx->pc = 0x1a1de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1dec:
    // 0x1a1dec: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1a1df0:
    if (ctx->pc == 0x1A1DF0u) {
        ctx->pc = 0x1A1DF4u;
        goto label_1a1df4;
    }
    ctx->pc = 0x1A1DECu;
    {
        const bool branch_taken_0x1a1dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dec) {
            ctx->pc = 0x1A1E84u;
            return;
        }
    }
    ctx->pc = 0x1A1DF4u;
label_1a1df4:
    // 0x1a1df4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a1df8:
    // 0x1a1df8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dfc:
    // 0x1a1dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1e00:
    // 0x1a1e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e04:
    // 0x1a1e04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a1e08:
    // 0x1a1e08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a1e0c:
    // 0x1a1e0c: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a1e10:
    // 0x1a1e10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e14:
    // 0x1a1e14: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a1e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a1e18:
    // 0x1a1e18: 0x320f809  jalr        $t9
label_1a1e1c:
    if (ctx->pc == 0x1A1E1Cu) {
        ctx->pc = 0x1A1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E18u;
        // 0x1a1e1c: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E20u;
        goto label_1a1e20;
    }
    ctx->pc = 0x1A1E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E20u);
        ctx->pc = 0x1A1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E18u;
        // 0x1a1e1c: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E18u, 0x1A1E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E20u;
label_1a1e20:
    // 0x1a1e20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1e24:
    // 0x1a1e24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e28:
    // 0x1a1e28: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a1e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a1e2c:
    // 0x1a1e2c: 0x320f809  jalr        $t9
label_1a1e30:
    if (ctx->pc == 0x1A1E30u) {
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E34u;
        goto label_1a1e34;
    }
    ctx->pc = 0x1A1E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E34u);
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E2Cu, 0x1A1E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E34u;
label_1a1e34:
    // 0x1a1e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e38:
    // 0x1a1e38: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x1a1e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_1a1e3c:
    // 0x1a1e3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1e40:
    // 0x1a1e40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e44:
    // 0x1a1e44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1e48:
    // 0x1a1e48: 0x320f809  jalr        $t9
label_1a1e4c:
    if (ctx->pc == 0x1A1E4Cu) {
        ctx->pc = 0x1A1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E48u;
        // 0x1a1e4c: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E50u;
        goto label_1a1e50;
    }
    ctx->pc = 0x1A1E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E50u);
        ctx->pc = 0x1A1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E48u;
        // 0x1a1e4c: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E48u, 0x1A1E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E50u;
label_1a1e50:
    // 0x1a1e50: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x1a1e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1e54:
    // 0x1a1e54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1e58:
    if (ctx->pc == 0x1A1E58u) {
        ctx->pc = 0x1A1E5Cu;
        goto label_1a1e5c;
    }
    ctx->pc = 0x1A1E54u;
    {
        const bool branch_taken_0x1a1e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e54) {
            ctx->pc = 0x1A1E74u;
            return;
        }
    }
    ctx->pc = 0x1A1E5Cu;
label_1a1e5c:
    // 0x1a1e5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1e60:
    // 0x1a1e60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1e64:
    // 0x1a1e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1e68:
    // 0x1a1e68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1e6c:
    // 0x1a1e6c: 0x320f809  jalr        $t9
label_1a1e70:
    if (ctx->pc == 0x1A1E70u) {
        ctx->pc = 0x1A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E6Cu;
        // 0x1a1e70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E74u;
        goto label_fallthrough_0x1a1e6c;
    }
    ctx->pc = 0x1A1E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1E74u);
        ctx->pc = 0x1A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E6Cu;
        // 0x1a1e70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E6Cu, 0x1A1E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a1e6c:
    ctx->pc = 0x1A1E74u;
}
