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

// Function: entry_0012b924
// Address: 0x12b924 - 0x12b944
void entry_0012b924_0x12b924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b924_0x12b924");
#endif

    switch (ctx->pc) {
        case 0x12b934u: goto label_12b934;
        default: break;
    }

    ctx->pc = 0x12b924u;

    // 0x12b924: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x12b928: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12b92c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B92Cu;
    SET_GPR_U32(ctx, 31, 0x12B934u);
    ctx->pc = 0x12B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B92Cu;
    // 0x12b930: 0x2453000c  addiu       $s3, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A990u, 0x12B92Cu, 0x12B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B934u;
label_12b934:
    // 0x12b934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B934u;
    {
        const bool branch_taken_0x12b934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b934) {
            ctx->pc = 0x12B944u;
            return;
        }
    }
    ctx->pc = 0x12B93Cu;
    // 0x12b93c: 0xc04aa38  jal         func_12A8E0
    ctx->pc = 0x12B93Cu;
    SET_GPR_U32(ctx, 31, 0x12B944u);
    ctx->pc = 0x12B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B93Cu;
    // 0x12b940: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A8E0u, 0x12B93Cu, 0x12B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B944u;
}
