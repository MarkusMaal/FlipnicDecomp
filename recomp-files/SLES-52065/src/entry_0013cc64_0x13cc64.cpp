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

// Function: entry_0013cc64
// Address: 0x13cc64 - 0x13cc74
void entry_0013cc64_0x13cc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc64_0x13cc64");
#endif

    switch (ctx->pc) {
        case 0x13cc70u: goto label_13cc70;
        default: break;
    }

    ctx->pc = 0x13cc64u;

    // 0x13cc64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13cc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc68: 0xc0509cc  jal         func_142730
    ctx->pc = 0x13CC68u;
    SET_GPR_U32(ctx, 31, 0x13CC70u);
    ctx->pc = 0x13CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC68u;
    // 0x13cc6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142730u, 0x13CC68u, 0x13CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC70u;
label_13cc70:
    // 0x13cc70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13cc74u;
}
