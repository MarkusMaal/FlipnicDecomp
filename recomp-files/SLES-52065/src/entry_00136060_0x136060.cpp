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

// Function: entry_00136060
// Address: 0x136060 - 0x136080
void entry_00136060_0x136060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136060_0x136060");
#endif

    ctx->pc = 0x136060u;

    // 0x136060: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x136060u;
    {
        const bool branch_taken_0x136060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136060) {
            ctx->pc = 0x136080u;
            return;
        }
    }
    ctx->pc = 0x136068u;
    // 0x136068: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x136068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13606c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13606cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x136070: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x136070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136074: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x136074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x136078: 0xc04d824  jal         func_136090
    ctx->pc = 0x136078u;
    SET_GPR_U32(ctx, 31, 0x136080u);
    ctx->pc = 0x13607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136078u;
    // 0x13607c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136090u, 0x136078u, 0x136080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136080u;
}
