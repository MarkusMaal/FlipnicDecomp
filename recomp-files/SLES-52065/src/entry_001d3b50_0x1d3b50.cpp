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

// Function: entry_001d3b50
// Address: 0x1d3b50 - 0x1d3b6c
void entry_001d3b50_0x1d3b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b50_0x1d3b50");
#endif

    switch (ctx->pc) {
        case 0x1d3b68u: goto label_1d3b68;
        default: break;
    }

    ctx->pc = 0x1d3b50u;

    // 0x1d3b50: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d3b50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3B54u;
    {
        const bool branch_taken_0x1d3b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b54) {
            ctx->pc = 0x1D3B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3B54u;
            // 0x1d3b58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B6Cu;
            return;
        }
    }
    ctx->pc = 0x1D3B5Cu;
    // 0x1d3b5c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b60: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1D3B60u;
    SET_GPR_U32(ctx, 31, 0x1D3B68u);
    ctx->pc = 0x1D3B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B60u;
    // 0x1d3b64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1D3B60u, 0x1D3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B68u;
label_1d3b68:
    // 0x1d3b68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1d3b6cu;
}
