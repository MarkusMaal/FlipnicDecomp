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

// Function: entry_0010c1e8
// Address: 0x10c1e8 - 0x10c1f8
void entry_0010c1e8_0x10c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c1e8_0x10c1e8");
#endif

    ctx->pc = 0x10c1e8u;

    // 0x10c1e8: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C1E8u;
    {
        const bool branch_taken_0x10c1e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x10c1e8) {
            ctx->pc = 0x10C1F8u;
            return;
        }
    }
    ctx->pc = 0x10C1F0u;
    // 0x10c1f0: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10C1F0u;
    SET_GPR_U32(ctx, 31, 0x10C1F8u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10C1F0u, 0x10C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1F8u;
}
