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

// Function: entry_001c5f90
// Address: 0x1c5f90 - 0x1c5fa4
void entry_001c5f90_0x1c5f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f90_0x1c5f90");
#endif

    switch (ctx->pc) {
        case 0x1c5f98u: goto label_1c5f98;
        default: break;
    }

    ctx->pc = 0x1c5f90u;

    // 0x1c5f90: 0xc06d31c  jal         func_1B4C70
    ctx->pc = 0x1C5F90u;
    SET_GPR_U32(ctx, 31, 0x1C5F98u);
    ctx->pc = 0x1B4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C70u, 0x1C5F90u, 0x1C5F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F98u;
label_1c5f98:
    // 0x1c5f98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5f9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C5F9Cu;
    {
        const bool branch_taken_0x1c5f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F9Cu;
        // 0x1c5fa0: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f9c) {
            ctx->pc = 0x1C5FE8u;
            return;
        }
    }
    ctx->pc = 0x1C5FA4u;
}
