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

// Function: entry_001724a8
// Address: 0x1724a8 - 0x1724bc
void entry_001724a8_0x1724a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001724a8_0x1724a8");
#endif

    ctx->pc = 0x1724a8u;

    // 0x1724a8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1724a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1724ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1724ACu;
    {
        const bool branch_taken_0x1724ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724ac) {
            ctx->pc = 0x1724BCu;
            return;
        }
    }
    ctx->pc = 0x1724B4u;
    // 0x1724b4: 0xc040150  jal         func_100540
    ctx->pc = 0x1724B4u;
    SET_GPR_U32(ctx, 31, 0x1724BCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1724B4u, 0x1724BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724BCu;
}
