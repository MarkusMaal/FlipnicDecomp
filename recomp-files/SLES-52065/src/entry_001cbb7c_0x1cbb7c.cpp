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

// Function: entry_001cbb7c
// Address: 0x1cbb7c - 0x1cbb9c
void entry_001cbb7c_0x1cbb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb7c_0x1cbb7c");
#endif

    switch (ctx->pc) {
        case 0x1cbb88u: goto label_1cbb88;
        default: break;
    }

    ctx->pc = 0x1cbb7cu;

    // 0x1cbb7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cbb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb80: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1CBB80u;
    SET_GPR_U32(ctx, 31, 0x1CBB88u);
    ctx->pc = 0x1CBB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB80u;
    // 0x1cbb84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1CBB80u, 0x1CBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB88u;
label_1cbb88:
    // 0x1cbb88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbb8c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBB8Cu;
    {
        const bool branch_taken_0x1cbb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbb8c) {
            ctx->pc = 0x1CBB9Cu;
            return;
        }
    }
    ctx->pc = 0x1CBB94u;
    // 0x1cbb94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBB94u;
    {
        const bool branch_taken_0x1cbb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB94u;
        // 0x1cbb98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb94) {
            ctx->pc = 0x1CBBB4u;
            return;
        }
    }
    ctx->pc = 0x1CBB9Cu;
}
