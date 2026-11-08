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

// Function: entry_0014bda0
// Address: 0x14bda0 - 0x14bdb4
void entry_0014bda0_0x14bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bda0_0x14bda0");
#endif

    ctx->pc = 0x14bda0u;

    // 0x14bda0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bda4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BDA4u;
    {
        const bool branch_taken_0x14bda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bda4) {
            ctx->pc = 0x14BDB4u;
            return;
        }
    }
    ctx->pc = 0x14BDACu;
    // 0x14bdac: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14BDACu;
    SET_GPR_U32(ctx, 31, 0x14BDB4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14BDACu, 0x14BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDB4u;
}
