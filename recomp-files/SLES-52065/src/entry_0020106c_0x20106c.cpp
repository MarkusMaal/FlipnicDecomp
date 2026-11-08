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

// Function: entry_0020106c
// Address: 0x20106c - 0x201078
void entry_0020106c_0x20106c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020106c_0x20106c");
#endif

    switch (ctx->pc) {
        case 0x201074u: goto label_201074;
        default: break;
    }

    ctx->pc = 0x20106cu;

    // 0x20106c: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x20106Cu;
    SET_GPR_U32(ctx, 31, 0x201074u);
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x20106Cu, 0x201074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201074u;
label_201074:
    // 0x201074: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x201074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201078u;
}
