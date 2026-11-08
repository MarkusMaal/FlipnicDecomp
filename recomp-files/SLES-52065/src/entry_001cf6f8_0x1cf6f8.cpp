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

// Function: entry_001cf6f8
// Address: 0x1cf6f8 - 0x1cf720
void entry_001cf6f8_0x1cf6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf6f8_0x1cf6f8");
#endif

    switch (ctx->pc) {
        case 0x1cf70cu: goto label_1cf70c;
        default: break;
    }

    ctx->pc = 0x1cf6f8u;

    // 0x1cf6f8: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1cf6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1cf6fc: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF6FCu;
    {
        const bool branch_taken_0x1cf6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6FCu;
        // 0x1cf700: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6fc) {
            ctx->pc = 0x1CF720u;
            return;
        }
    }
    ctx->pc = 0x1CF704u;
    // 0x1cf704: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF704u;
    SET_GPR_U32(ctx, 31, 0x1CF70Cu);
    ctx->pc = 0x1CF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF704u;
    // 0x1cf708: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF704u, 0x1CF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF70Cu;
label_1cf70c:
    // 0x1cf70c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF70Cu;
    {
        const bool branch_taken_0x1cf70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf70c) {
            ctx->pc = 0x1CF720u;
            return;
        }
    }
    ctx->pc = 0x1CF714u;
    // 0x1cf714: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf718: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf71c: 0xaea30078  sw          $v1, 0x78($s5)
    ctx->pc = 0x1cf71cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf720u;
}
