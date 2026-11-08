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

// Function: entry_0011ac64
// Address: 0x11ac64 - 0x11ac7c
void entry_0011ac64_0x11ac64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ac64_0x11ac64");
#endif

    switch (ctx->pc) {
        case 0x11ac6cu: goto label_11ac6c;
        default: break;
    }

    ctx->pc = 0x11ac64u;

    // 0x11ac64: 0xc046eb0  jal         func_11BAC0
    ctx->pc = 0x11AC64u;
    SET_GPR_U32(ctx, 31, 0x11AC6Cu);
    ctx->pc = 0x11BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BAC0u, 0x11AC64u, 0x11AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC6Cu;
label_11ac6c:
    // 0x11ac6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AC6Cu;
    {
        const bool branch_taken_0x11ac6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ac6c) {
            ctx->pc = 0x11AC7Cu;
            return;
        }
    }
    ctx->pc = 0x11AC74u;
    // 0x11ac74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC74u;
    {
        const bool branch_taken_0x11ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC74u;
        // 0x11ac78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac74) {
            ctx->pc = 0x11AC88u;
            return;
        }
    }
    ctx->pc = 0x11AC7Cu;
}
