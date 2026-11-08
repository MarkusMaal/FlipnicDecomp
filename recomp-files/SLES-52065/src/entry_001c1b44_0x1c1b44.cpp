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

// Function: entry_001c1b44
// Address: 0x1c1b44 - 0x1c1b78
void entry_001c1b44_0x1c1b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b44_0x1c1b44");
#endif

    switch (ctx->pc) {
        case 0x1c1b60u: goto label_1c1b60;
        case 0x1c1b70u: goto label_1c1b70;
        default: break;
    }

    ctx->pc = 0x1c1b44u;

    // 0x1c1b44: 0x0  nop
    ctx->pc = 0x1c1b44u;
    // NOP
    // 0x1c1b48: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x1c1b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c1b4c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C1B4Cu;
    {
        const bool branch_taken_0x1c1b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B4Cu;
        // 0x1c1b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b4c) {
            ctx->pc = 0x1C1B78u;
            return;
        }
    }
    ctx->pc = 0x1C1B54u;
    // 0x1c1b54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1b58: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1B58u;
    SET_GPR_U32(ctx, 31, 0x1C1B60u);
    ctx->pc = 0x1C1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B58u;
    // 0x1c1b5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1B58u, 0x1C1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B60u;
label_1c1b60:
    // 0x1c1b60: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b68: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C1B68u;
    SET_GPR_U32(ctx, 31, 0x1C1B70u);
    ctx->pc = 0x1C1B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B68u;
    // 0x1c1b6c: 0x24a54a80  addiu       $a1, $a1, 0x4A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C1B68u, 0x1C1B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B70u;
label_1c1b70:
    // 0x1c1b70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C1B70u;
    {
        const bool branch_taken_0x1c1b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b70) {
            ctx->pc = 0x1C1BA4u;
            return;
        }
    }
    ctx->pc = 0x1C1B78u;
}
