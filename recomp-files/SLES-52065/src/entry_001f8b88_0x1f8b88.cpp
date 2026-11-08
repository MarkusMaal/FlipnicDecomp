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

// Function: entry_001f8b88
// Address: 0x1f8b88 - 0x1f8bb0
void entry_001f8b88_0x1f8b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8b88_0x1f8b88");
#endif

    switch (ctx->pc) {
        case 0x1f8b94u: goto label_1f8b94;
        default: break;
    }

    ctx->pc = 0x1f8b88u;

    // 0x1f8b88: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f8b88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f8b8c: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B94u);
    ctx->pc = 0x1F8B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B8Cu;
    // 0x1f8b90: 0x26241600  addiu       $a0, $s1, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F8B8Cu, 0x1F8B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B94u;
label_1f8b94:
    // 0x1f8b94: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8B94u;
    {
        const bool branch_taken_0x1f8b94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B94u;
        // 0x1f8b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b94) {
            ctx->pc = 0x1F8BC8u;
            return;
        }
    }
    ctx->pc = 0x1F8B9Cu;
    // 0x1f8b9c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8B9Cu;
    {
        const bool branch_taken_0x1f8b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b9c) {
            ctx->pc = 0x1F8BC8u;
            return;
        }
    }
    ctx->pc = 0x1F8BA4u;
    // 0x1f8ba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8BA4u;
    {
        const bool branch_taken_0x1f8ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ba4) {
            ctx->pc = 0x1F8BB8u;
            return;
        }
    }
    ctx->pc = 0x1F8BACu;
    // 0x1f8bac: 0x0  nop
    ctx->pc = 0x1f8bacu;
    // NOP
    ctx->pc = 0x1f8bb0u;
}
