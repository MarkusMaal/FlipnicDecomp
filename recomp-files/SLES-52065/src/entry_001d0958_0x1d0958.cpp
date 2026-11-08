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

// Function: entry_001d0958
// Address: 0x1d0958 - 0x1d0970
void entry_001d0958_0x1d0958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0958_0x1d0958");
#endif

    ctx->pc = 0x1d0958u;

    // 0x1d0958: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d0958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d095c: 0x284100f1  slti        $at, $v0, 0xF1
    ctx->pc = 0x1d095cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x1d0960: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0960u;
    {
        const bool branch_taken_0x1d0960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0960u;
        // 0x1d0964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0960) {
            ctx->pc = 0x1D0970u;
            return;
        }
    }
    ctx->pc = 0x1D0968u;
    // 0x1d0968: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x1D0968u;
    SET_GPR_U32(ctx, 31, 0x1D0970u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x1D0968u, 0x1D0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0970u;
}
