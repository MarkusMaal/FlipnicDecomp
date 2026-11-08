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

// Function: entry_001212d8
// Address: 0x1212d8 - 0x1212f8
void entry_001212d8_0x1212d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001212d8_0x1212d8");
#endif

    ctx->pc = 0x1212d8u;

    // 0x1212d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1212D8u;
    {
        const bool branch_taken_0x1212d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212d8) {
            ctx->pc = 0x1212F8u;
            return;
        }
    }
    ctx->pc = 0x1212E0u;
    // 0x1212e0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1212e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1212e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1212e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1212e8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1212e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1212ec: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1212ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1212f0: 0xc0484c4  jal         func_121310
    ctx->pc = 0x1212F0u;
    SET_GPR_U32(ctx, 31, 0x1212F8u);
    ctx->pc = 0x1212F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212F0u;
    // 0x1212f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121310u, 0x1212F0u, 0x1212F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212F8u;
}
