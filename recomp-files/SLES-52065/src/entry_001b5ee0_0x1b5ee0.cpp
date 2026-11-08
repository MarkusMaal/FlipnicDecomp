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

// Function: entry_001b5ee0
// Address: 0x1b5ee0 - 0x1b5f18
void entry_001b5ee0_0x1b5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ee0_0x1b5ee0");
#endif

    switch (ctx->pc) {
        case 0x1b5ee8u: goto label_1b5ee8;
        case 0x1b5efcu: goto label_1b5efc;
        default: break;
    }

    ctx->pc = 0x1b5ee0u;

label_1b5ee0:
    // 0x1b5ee0: 0xc06d7fc  jal         func_1B5FF0
label_1b5ee4:
    if (ctx->pc == 0x1B5EE4u) {
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE0u;
        // 0x1b5ee4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EE8u;
        goto label_1b5ee8;
    }
    ctx->pc = 0x1B5EE0u;
    SET_GPR_U32(ctx, 31, 0x1B5EE8u);
    ctx->pc = 0x1B5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5EE0u;
    // 0x1b5ee4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FF0u, 0x1B5EE0u, 0x1B5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EE8u;
label_1b5ee8:
    // 0x1b5ee8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1b5eec:
    // 0x1b5eec: 0x1462fff3  bne         $v1, $v0, . + 4 + (-0xD << 2)
label_1b5ef0:
    if (ctx->pc == 0x1B5EF0u) {
        ctx->pc = 0x1B5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EECu;
        // 0x1b5ef0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EF4u;
        goto label_1b5ef4;
    }
    ctx->pc = 0x1B5EECu;
    {
        const bool branch_taken_0x1b5eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EECu;
        // 0x1b5ef0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5eec) {
            ctx->pc = 0x1B5EBCu;
            return;
        }
    }
    ctx->pc = 0x1B5EF4u;
label_1b5ef4:
    // 0x1b5ef4: 0xc06db2c  jal         func_1B6CB0
label_1b5ef8:
    if (ctx->pc == 0x1B5EF8u) {
        ctx->pc = 0x1B5EFCu;
        goto label_1b5efc;
    }
    ctx->pc = 0x1B5EF4u;
    SET_GPR_U32(ctx, 31, 0x1B5EFCu);
    ctx->pc = 0x1B6CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CB0u, 0x1B5EF4u, 0x1B5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EFCu;
label_1b5efc:
    // 0x1b5efc: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1b5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1b5f00:
    // 0x1b5f00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b5f04:
    if (ctx->pc == 0x1B5F04u) {
        ctx->pc = 0x1B5F08u;
        goto label_1b5f08;
    }
    ctx->pc = 0x1B5F00u;
    {
        const bool branch_taken_0x1b5f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f00) {
            ctx->pc = 0x1B5F18u;
            return;
        }
    }
    ctx->pc = 0x1B5F08u;
label_1b5f08:
    // 0x1b5f08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5f0c:
    // 0x1b5f0c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1b5f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1b5f10:
    // 0x1b5f10: 0x320f809  jalr        $t9
label_1b5f14:
    if (ctx->pc == 0x1B5F14u) {
        ctx->pc = 0x1B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F10u;
        // 0x1b5f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F18u;
        goto label_fallthrough_0x1b5f10;
    }
    ctx->pc = 0x1B5F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5F18u);
        ctx->pc = 0x1B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F10u;
        // 0x1b5f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F10u, 0x1B5F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b5f10:
    ctx->pc = 0x1B5F18u;
}
