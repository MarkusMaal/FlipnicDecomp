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

// Function: entry_001c9288
// Address: 0x1c9288 - 0x1c92a4
void entry_001c9288_0x1c9288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9288_0x1c9288");
#endif

    switch (ctx->pc) {
        case 0x1c9290u: goto label_1c9290;
        default: break;
    }

    ctx->pc = 0x1c9288u;

    // 0x1c9288: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C9288u;
    SET_GPR_U32(ctx, 31, 0x1C9290u);
    ctx->pc = 0x1C928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9288u;
    // 0x1c928c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C9288u, 0x1C9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9290u;
label_1c9290:
    // 0x1c9290: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9294: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9294u;
    {
        const bool branch_taken_0x1c9294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9294u;
        // 0x1c9298: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9294) {
            ctx->pc = 0x1C92A4u;
            return;
        }
    }
    ctx->pc = 0x1C929Cu;
    // 0x1c929c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C929Cu;
    {
        const bool branch_taken_0x1c929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C929Cu;
        // 0x1c92a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c929c) {
            ctx->pc = 0x1C92C8u;
            return;
        }
    }
    ctx->pc = 0x1C92A4u;
}
