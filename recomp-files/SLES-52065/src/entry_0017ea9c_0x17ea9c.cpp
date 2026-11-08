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

// Function: entry_0017ea9c
// Address: 0x17ea9c - 0x17eabc
void entry_0017ea9c_0x17ea9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea9c_0x17ea9c");
#endif

    ctx->pc = 0x17ea9cu;

    // 0x17ea9c: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x17ea9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17eaa0: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x17EAA0u;
    {
        const bool branch_taken_0x17eaa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eaa0) {
            ctx->pc = 0x17EB28u;
            return;
        }
    }
    ctx->pc = 0x17EAA8u;
    // 0x17eaa8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17eaac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EAACu;
    {
        const bool branch_taken_0x17eaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eaac) {
            ctx->pc = 0x17EABCu;
            return;
        }
    }
    ctx->pc = 0x17EAB4u;
    // 0x17eab4: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x17EAB4u;
    SET_GPR_U32(ctx, 31, 0x17EABCu);
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x17EAB4u, 0x17EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EABCu;
}
