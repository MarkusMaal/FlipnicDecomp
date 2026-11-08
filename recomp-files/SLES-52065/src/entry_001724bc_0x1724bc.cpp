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

// Function: entry_001724bc
// Address: 0x1724bc - 0x1724d0
void entry_001724bc_0x1724bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001724bc_0x1724bc");
#endif

    ctx->pc = 0x1724bcu;

    // 0x1724bc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1724c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1724C0u;
    {
        const bool branch_taken_0x1724c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724c0) {
            ctx->pc = 0x1724D0u;
            return;
        }
    }
    ctx->pc = 0x1724C8u;
    // 0x1724c8: 0xc040150  jal         func_100540
    ctx->pc = 0x1724C8u;
    SET_GPR_U32(ctx, 31, 0x1724D0u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1724C8u, 0x1724D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724D0u;
}
