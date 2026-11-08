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

// Function: entry_001d0650
// Address: 0x1d0650 - 0x1d0680
void entry_001d0650_0x1d0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0650_0x1d0650");
#endif

    switch (ctx->pc) {
        case 0x1d0664u: goto label_1d0664;
        default: break;
    }

    ctx->pc = 0x1d0650u;

    // 0x1d0650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d065c: 0xc04678c  jal         func_119E30
    ctx->pc = 0x1D065Cu;
    SET_GPR_U32(ctx, 31, 0x1D0664u);
    ctx->pc = 0x1D0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D065Cu;
    // 0x1d0660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119E30u, 0x1D065Cu, 0x1D0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0664u;
label_1d0664:
    // 0x1d0664: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d0664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0668: 0x286100f0  slti        $at, $v1, 0xF0
    ctx->pc = 0x1d0668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x1d066c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D066Cu;
    {
        const bool branch_taken_0x1d066c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D066Cu;
        // 0x1d0670: 0x2861000b  slti        $at, $v1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d066c) {
            ctx->pc = 0x1D0680u;
            return;
        }
    }
    ctx->pc = 0x1D0674u;
    // 0x1d0674: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0674u;
    {
        const bool branch_taken_0x1d0674 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0674) {
            ctx->pc = 0x1D0680u;
            return;
        }
    }
    ctx->pc = 0x1D067Cu;
    // 0x1d067c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d067cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d0680u;
}
