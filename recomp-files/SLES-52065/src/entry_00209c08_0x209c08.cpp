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

// Function: entry_00209c08
// Address: 0x209c08 - 0x209c14
void entry_00209c08_0x209c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209c08_0x209c08");
#endif

    switch (ctx->pc) {
        case 0x209c10u: goto label_209c10;
        default: break;
    }

    ctx->pc = 0x209c08u;

    // 0x209c08: 0xc082530  jal         func_2094C0
    ctx->pc = 0x209C08u;
    SET_GPR_U32(ctx, 31, 0x209C10u);
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x209C08u, 0x209C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C10u;
label_209c10:
    // 0x209c10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209c14u;
}
