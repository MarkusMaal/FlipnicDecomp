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

// Function: entry_001d8a60
// Address: 0x1d8a60 - 0x1d8a70
void entry_001d8a60_0x1d8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a60_0x1d8a60");
#endif

    switch (ctx->pc) {
        case 0x1d8a68u: goto label_1d8a68;
        default: break;
    }

    ctx->pc = 0x1d8a60u;

    // 0x1d8a60: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8A60u;
    SET_GPR_U32(ctx, 31, 0x1D8A68u);
    ctx->pc = 0x1D8A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A60u;
    // 0x1d8a64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8A60u, 0x1D8A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A68u;
label_1d8a68:
    // 0x1d8a68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8A68u;
    {
        const bool branch_taken_0x1d8a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A68u;
        // 0x1d8a6c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a68) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D8A70u;
}
