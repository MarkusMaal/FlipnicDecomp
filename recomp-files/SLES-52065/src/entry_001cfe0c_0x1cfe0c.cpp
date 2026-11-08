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

// Function: entry_001cfe0c
// Address: 0x1cfe0c - 0x1cfe20
void entry_001cfe0c_0x1cfe0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe0c_0x1cfe0c");
#endif

    switch (ctx->pc) {
        case 0x1cfe14u: goto label_1cfe14;
        default: break;
    }

    ctx->pc = 0x1cfe0cu;

    // 0x1cfe0c: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CFE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFE14u);
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CFE0Cu, 0x1CFE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE14u;
label_1cfe14:
    // 0x1cfe14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cfe14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cfe18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cfe20u;
}
