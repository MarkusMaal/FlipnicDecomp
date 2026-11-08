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

// Function: entry_001d3b30
// Address: 0x1d3b30 - 0x1d3b50
void entry_001d3b30_0x1d3b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b30_0x1d3b30");
#endif

    switch (ctx->pc) {
        case 0x1d3b4cu: goto label_1d3b4c;
        default: break;
    }

    ctx->pc = 0x1d3b30u;

    // 0x1d3b30: 0x3b02821  addu        $a1, $sp, $s0
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1d3b34: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d3b34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3B38u;
    {
        const bool branch_taken_0x1d3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b38) {
            ctx->pc = 0x1D3B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3B38u;
            // 0x1d3b3c: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B50u;
            return;
        }
    }
    ctx->pc = 0x1D3B40u;
    // 0x1d3b40: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b44: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D3B44u;
    SET_GPR_U32(ctx, 31, 0x1D3B4Cu);
    ctx->pc = 0x1D3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B44u;
    // 0x1d3b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D3B44u, 0x1D3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B4Cu;
label_1d3b4c:
    // 0x1d3b4c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->pc = 0x1d3b50u;
}
