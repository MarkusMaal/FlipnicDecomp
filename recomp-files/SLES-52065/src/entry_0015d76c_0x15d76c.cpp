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

// Function: entry_0015d76c
// Address: 0x15d76c - 0x15d78c
void entry_0015d76c_0x15d76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d76c_0x15d76c");
#endif

    ctx->pc = 0x15d76cu;

    // 0x15d76c: 0x8c723de0  lw          $s2, 0x3DE0($v1)
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15840)));
    // 0x15d770: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D770u;
    {
        const bool branch_taken_0x15d770 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d770) {
            ctx->pc = 0x15D798u;
            return;
        }
    }
    ctx->pc = 0x15D778u;
    // 0x15d778: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x15d778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15d77c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D77Cu;
    {
        const bool branch_taken_0x15d77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d77c) {
            ctx->pc = 0x15D78Cu;
            return;
        }
    }
    ctx->pc = 0x15D784u;
    // 0x15d784: 0xc04018c  jal         func_100630
    ctx->pc = 0x15D784u;
    SET_GPR_U32(ctx, 31, 0x15D78Cu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15D784u, 0x15D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D78Cu;
}
