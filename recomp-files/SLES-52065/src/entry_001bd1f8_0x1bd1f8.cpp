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

// Function: entry_001bd1f8
// Address: 0x1bd1f8 - 0x1bd20c
void entry_001bd1f8_0x1bd1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd1f8_0x1bd1f8");
#endif

    switch (ctx->pc) {
        case 0x1bd200u: goto label_1bd200;
        default: break;
    }

    ctx->pc = 0x1bd1f8u;

    // 0x1bd1f8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1BD1F8u;
    SET_GPR_U32(ctx, 31, 0x1BD200u);
    ctx->pc = 0x1BD1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1F8u;
    // 0x1bd1fc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1BD1F8u, 0x1BD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD200u;
label_1bd200:
    // 0x1bd200: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1bd200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd204: 0x1462fff2  bne         $v1, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BD204u;
    {
        const bool branch_taken_0x1bd204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd204) {
            ctx->pc = 0x1BD1D0u;
            return;
        }
    }
    ctx->pc = 0x1BD20Cu;
}
