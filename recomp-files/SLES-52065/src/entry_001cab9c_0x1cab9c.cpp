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

// Function: entry_001cab9c
// Address: 0x1cab9c - 0x1cabac
void entry_001cab9c_0x1cab9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cab9c_0x1cab9c");
#endif

    switch (ctx->pc) {
        case 0x1caba4u: goto label_1caba4;
        default: break;
    }

    ctx->pc = 0x1cab9cu;

    // 0x1cab9c: 0xc060894  jal         func_182250
    ctx->pc = 0x1CAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CABA4u);
    ctx->pc = 0x1CABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB9Cu;
    // 0x1caba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182250u, 0x1CAB9Cu, 0x1CABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABA4u;
label_1caba4:
    // 0x1caba4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CABA4u;
    {
        const bool branch_taken_0x1caba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABA4u;
        // 0x1caba8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caba4) {
            ctx->pc = 0x1CABD8u;
            return;
        }
    }
    ctx->pc = 0x1CABACu;
}
