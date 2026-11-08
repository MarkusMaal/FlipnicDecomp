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

// Function: entry_001ac0f8
// Address: 0x1ac0f8 - 0x1ac120
void entry_001ac0f8_0x1ac0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac0f8_0x1ac0f8");
#endif

    switch (ctx->pc) {
        case 0x1ac108u: goto label_1ac108;
        default: break;
    }

    ctx->pc = 0x1ac0f8u;

    // 0x1ac0f8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ac0fc: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ac0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ac100: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AC100u;
    SET_GPR_U32(ctx, 31, 0x1AC108u);
    ctx->pc = 0x1AC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC100u;
    // 0x1ac104: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AC100u, 0x1AC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC108u;
label_1ac108:
    // 0x1ac108: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ac108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ac10c: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x1ac10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1ac110: 0x2673002c  addiu       $s3, $s3, 0x2C
    ctx->pc = 0x1ac110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1ac114: 0xac830674  sw          $v1, 0x674($a0)
    ctx->pc = 0x1ac114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 3));
    // 0x1ac118: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AC118u;
    {
        const bool branch_taken_0x1ac118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC118u;
        // 0x1ac11c: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac118) {
            ctx->pc = 0x1AC150u;
            return;
        }
    }
    ctx->pc = 0x1AC120u;
}
