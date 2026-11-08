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

// Function: entry_001a1ed8
// Address: 0x1a1ed8 - 0x1a1f68
void entry_001a1ed8_0x1a1ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ed8_0x1a1ed8");
#endif

    switch (ctx->pc) {
        case 0x1a1f14u: goto label_1a1f14;
        case 0x1a1f28u: goto label_1a1f28;
        case 0x1a1f44u: goto label_1a1f44;
        default: break;
    }

    ctx->pc = 0x1a1ed8u;

label_1a1ed8:
    // 0x1a1ed8: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1a1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1a1edc:
    // 0x1a1edc: 0x904209fc  lbu         $v0, 0x9FC($v0)
    ctx->pc = 0x1a1edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2556)));
label_1a1ee0:
    // 0x1a1ee0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1a1ee4:
    if (ctx->pc == 0x1A1EE4u) {
        ctx->pc = 0x1A1EE8u;
        goto label_1a1ee8;
    }
    ctx->pc = 0x1A1EE0u;
    {
        const bool branch_taken_0x1a1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ee0) {
            ctx->pc = 0x1A1F78u;
            return;
        }
    }
    ctx->pc = 0x1A1EE8u;
label_1a1ee8:
    // 0x1a1ee8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a1eec:
    // 0x1a1eec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ef0:
    // 0x1a1ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1ef4:
    // 0x1a1ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ef8:
    // 0x1a1ef8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a1efc:
    // 0x1a1efc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a1f00:
    // 0x1a1f00: 0x8c4409e0  lw          $a0, 0x9E0($v0)
    ctx->pc = 0x1a1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2528)));
label_1a1f04:
    // 0x1a1f04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f08:
    // 0x1a1f08: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a1f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a1f0c:
    // 0x1a1f0c: 0x320f809  jalr        $t9
label_1a1f10:
    if (ctx->pc == 0x1A1F10u) {
        ctx->pc = 0x1A1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F0Cu;
        // 0x1a1f10: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F14u;
        goto label_1a1f14;
    }
    ctx->pc = 0x1A1F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F14u);
        ctx->pc = 0x1A1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F0Cu;
        // 0x1a1f10: 0x245009dc  addiu       $s0, $v0, 0x9DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F0Cu, 0x1A1F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F14u;
label_1a1f14:
    // 0x1a1f14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1f18:
    // 0x1a1f18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f1c:
    // 0x1a1f1c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a1f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a1f20:
    // 0x1a1f20: 0x320f809  jalr        $t9
label_1a1f24:
    if (ctx->pc == 0x1A1F24u) {
        ctx->pc = 0x1A1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F20u;
        // 0x1a1f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F28u;
        goto label_1a1f28;
    }
    ctx->pc = 0x1A1F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F28u);
        ctx->pc = 0x1A1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F20u;
        // 0x1a1f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F20u, 0x1A1F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F28u;
label_1a1f28:
    // 0x1a1f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1f2c:
    // 0x1a1f2c: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x1a1f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_1a1f30:
    // 0x1a1f30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1f34:
    // 0x1a1f34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f38:
    // 0x1a1f38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1f3c:
    // 0x1a1f3c: 0x320f809  jalr        $t9
label_1a1f40:
    if (ctx->pc == 0x1A1F40u) {
        ctx->pc = 0x1A1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F3Cu;
        // 0x1a1f40: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F44u;
        goto label_1a1f44;
    }
    ctx->pc = 0x1A1F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F44u);
        ctx->pc = 0x1A1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F3Cu;
        // 0x1a1f40: 0x92050020  lbu         $a1, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F3Cu, 0x1A1F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F44u;
label_1a1f44:
    // 0x1a1f44: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x1a1f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1f48:
    // 0x1a1f48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1f4c:
    if (ctx->pc == 0x1A1F4Cu) {
        ctx->pc = 0x1A1F50u;
        goto label_1a1f50;
    }
    ctx->pc = 0x1A1F48u;
    {
        const bool branch_taken_0x1a1f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f48) {
            ctx->pc = 0x1A1F68u;
            return;
        }
    }
    ctx->pc = 0x1A1F50u;
label_1a1f50:
    // 0x1a1f50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1f54:
    // 0x1a1f54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a1f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1f58:
    // 0x1a1f58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1f5c:
    // 0x1a1f5c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1f60:
    // 0x1a1f60: 0x320f809  jalr        $t9
label_1a1f64:
    if (ctx->pc == 0x1A1F64u) {
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F68u;
        goto label_fallthrough_0x1a1f60;
    }
    ctx->pc = 0x1A1F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1F68u);
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F60u, 0x1A1F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a1f60:
    ctx->pc = 0x1A1F68u;
}
