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

// Function: entry_001b3ec0
// Address: 0x1b3ec0 - 0x1b3edc
void entry_001b3ec0_0x1b3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ec0_0x1b3ec0");
#endif

    switch (ctx->pc) {
        case 0x1b3ed4u: goto label_1b3ed4;
        default: break;
    }

    ctx->pc = 0x1b3ec0u;

    // 0x1b3ec0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3ec4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3ec8: 0x24a50cd0  addiu       $a1, $a1, 0xCD0
    ctx->pc = 0x1b3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
    // 0x1b3ecc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B3ECCu;
    SET_GPR_U32(ctx, 31, 0x1B3ED4u);
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B3ECCu, 0x1B3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ED4u;
label_1b3ed4:
    // 0x1b3ed4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3ED4u;
    {
        const bool branch_taken_0x1b3ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ed4) {
            ctx->pc = 0x1B3EFCu;
            return;
        }
    }
    ctx->pc = 0x1B3EDCu;
}
