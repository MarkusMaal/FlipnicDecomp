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

// Function: entry_0011cd5c
// Address: 0x11cd5c - 0x11cd7c
void entry_0011cd5c_0x11cd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd5c_0x11cd5c");
#endif

    switch (ctx->pc) {
        case 0x11cd6cu: goto label_11cd6c;
        case 0x11cd74u: goto label_11cd74;
        default: break;
    }

    ctx->pc = 0x11cd5cu;

    // 0x11cd5c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CD5Cu;
    {
        const bool branch_taken_0x11cd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cd5c) {
            ctx->pc = 0x11CD7Cu;
            return;
        }
    }
    ctx->pc = 0x11CD64u;
    // 0x11cd64: 0xc0470e4  jal         func_11C390
    ctx->pc = 0x11CD64u;
    SET_GPR_U32(ctx, 31, 0x11CD6Cu);
    ctx->pc = 0x11CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD64u;
    // 0x11cd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C390u, 0x11CD64u, 0x11CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD6Cu;
label_11cd6c:
    // 0x11cd6c: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11CD6Cu;
    SET_GPR_U32(ctx, 31, 0x11CD74u);
    ctx->pc = 0x11CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD6Cu;
    // 0x11cd70: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11CD6Cu, 0x11CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD74u;
label_11cd74:
    // 0x11cd74: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x11CD74u;
    {
        const bool branch_taken_0x11cd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd74) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CD7Cu;
}
