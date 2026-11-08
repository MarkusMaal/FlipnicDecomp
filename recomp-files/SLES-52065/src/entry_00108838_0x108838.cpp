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

// Function: entry_00108838
// Address: 0x108838 - 0x108864
void entry_00108838_0x108838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108838_0x108838");
#endif

    switch (ctx->pc) {
        case 0x108858u: goto label_108858;
        default: break;
    }

    ctx->pc = 0x108838u;

    // 0x108838: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x108838u;
    {
        const bool branch_taken_0x108838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x108838) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108840u;
    // 0x108840: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x108840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x108844: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x108844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x108848: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x108848u;
    {
        const bool branch_taken_0x108848 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108848u;
        // 0x10884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108848) {
            ctx->pc = 0x108864u;
            return;
        }
    }
    ctx->pc = 0x108850u;
    // 0x108850: 0xc057f8c  jal         func_15FE30
    ctx->pc = 0x108850u;
    SET_GPR_U32(ctx, 31, 0x108858u);
    ctx->pc = 0x108854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108850u;
    // 0x108854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE30u, 0x108850u, 0x108858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108858u;
label_108858:
    // 0x108858: 0x4400052  bltz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x108858u;
    {
        const bool branch_taken_0x108858 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108858) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108860u;
    // 0x108860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108864u;
}
