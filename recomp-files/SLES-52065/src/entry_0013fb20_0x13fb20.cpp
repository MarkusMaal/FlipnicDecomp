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

// Function: entry_0013fb20
// Address: 0x13fb20 - 0x13fb34
void entry_0013fb20_0x13fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fb20_0x13fb20");
#endif

    ctx->pc = 0x13fb20u;

    // 0x13fb20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13fb24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FB24u;
    {
        const bool branch_taken_0x13fb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb24) {
            ctx->pc = 0x13FB34u;
            return;
        }
    }
    ctx->pc = 0x13FB2Cu;
    // 0x13fb2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13FB2Cu;
    SET_GPR_U32(ctx, 31, 0x13FB34u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13FB2Cu, 0x13FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB34u;
}
