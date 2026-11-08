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

// Function: entry_001d9b8c
// Address: 0x1d9b8c - 0x1d9ba4
void entry_001d9b8c_0x1d9b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9b8c_0x1d9b8c");
#endif

    switch (ctx->pc) {
        case 0x1d9b98u: goto label_1d9b98;
        default: break;
    }

    ctx->pc = 0x1d9b8cu;

    // 0x1d9b8c: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x1d9b8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d9b90: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1D9B90u;
    SET_GPR_U32(ctx, 31, 0x1D9B98u);
    ctx->pc = 0x1D9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B90u;
    // 0x1d9b94: 0xde050030  ld          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1D9B90u, 0x1D9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B98u;
label_1d9b98:
    // 0x1d9b98: 0x443ffc9  bgezl       $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1D9B98u;
    {
        const bool branch_taken_0x1d9b98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d9b98) {
            ctx->pc = 0x1D9B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B98u;
            // 0x1d9b9c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AC0u;
            return;
        }
    }
    ctx->pc = 0x1D9BA0u;
    // 0x1d9ba0: 0x8e8571d0  lw          $a1, 0x71D0($s4)
    ctx->pc = 0x1d9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29136)));
    ctx->pc = 0x1d9ba4u;
}
