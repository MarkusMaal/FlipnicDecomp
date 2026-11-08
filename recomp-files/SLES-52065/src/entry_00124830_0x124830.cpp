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

// Function: entry_00124830
// Address: 0x124830 - 0x124854
void entry_00124830_0x124830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124830_0x124830");
#endif

    switch (ctx->pc) {
        case 0x124844u: goto label_124844;
        default: break;
    }

    ctx->pc = 0x124830u;

    // 0x124830: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x124830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x124834: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124834u;
    {
        const bool branch_taken_0x124834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124834u;
        // 0x124838: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124834) {
            ctx->pc = 0x124854u;
            return;
        }
    }
    ctx->pc = 0x12483Cu;
    // 0x12483c: 0xc048148  jal         func_120520
    ctx->pc = 0x12483Cu;
    SET_GPR_U32(ctx, 31, 0x124844u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12483Cu, 0x124844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124844u;
label_124844:
    // 0x124844: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x124844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x124848: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x124848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x12484c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x124850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124854u;
}
