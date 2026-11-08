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

// Function: entry_00145bb0
// Address: 0x145bb0 - 0x145bc4
void entry_00145bb0_0x145bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145bb0_0x145bb0");
#endif

    ctx->pc = 0x145bb0u;

    // 0x145bb0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x145bb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145BB4u;
    {
        const bool branch_taken_0x145bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145bb4) {
            ctx->pc = 0x145BC4u;
            return;
        }
    }
    ctx->pc = 0x145BBCu;
    // 0x145bbc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145BBCu;
    SET_GPR_U32(ctx, 31, 0x145BC4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145BBCu, 0x145BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BC4u;
}
