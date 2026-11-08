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

// Function: entry_00143540
// Address: 0x143540 - 0x143560
void entry_00143540_0x143540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143540_0x143540");
#endif

    ctx->pc = 0x143540u;

    // 0x143540: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x143540u;
    {
        const bool branch_taken_0x143540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143540) {
            ctx->pc = 0x143560u;
            return;
        }
    }
    ctx->pc = 0x143548u;
    // 0x143548: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x143548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14354c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x14354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x143550: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x143550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x143554: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x143554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x143558: 0xc050ee0  jal         func_143B80
    ctx->pc = 0x143558u;
    SET_GPR_U32(ctx, 31, 0x143560u);
    ctx->pc = 0x14355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143558u;
    // 0x14355c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x143558u, 0x143560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143560u;
}
