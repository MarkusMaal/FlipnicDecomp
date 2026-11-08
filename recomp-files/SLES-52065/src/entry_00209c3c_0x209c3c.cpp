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

// Function: entry_00209c3c
// Address: 0x209c3c - 0x209c48
void entry_00209c3c_0x209c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209c3c_0x209c3c");
#endif

    switch (ctx->pc) {
        case 0x209c44u: goto label_209c44;
        default: break;
    }

    ctx->pc = 0x209c3cu;

    // 0x209c3c: 0xc08254c  jal         func_209530
    ctx->pc = 0x209C3Cu;
    SET_GPR_U32(ctx, 31, 0x209C44u);
    ctx->pc = 0x209C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C3Cu;
    // 0x209c40: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209530u, 0x209C3Cu, 0x209C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C44u;
label_209c44:
    // 0x209c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209c48u;
}
