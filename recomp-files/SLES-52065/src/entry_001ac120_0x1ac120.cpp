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

// Function: entry_001ac120
// Address: 0x1ac120 - 0x1ac140
void entry_001ac120_0x1ac120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac120_0x1ac120");
#endif

    switch (ctx->pc) {
        case 0x1ac130u: goto label_1ac130;
        default: break;
    }

    ctx->pc = 0x1ac120u;

    // 0x1ac120: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ac120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ac124: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ac128: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AC128u;
    SET_GPR_U32(ctx, 31, 0x1AC130u);
    ctx->pc = 0x1AC12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC128u;
    // 0x1ac12c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AC128u, 0x1AC130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC130u;
label_1ac130:
    // 0x1ac130: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x1ac130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1ac134: 0xac620680  sw          $v0, 0x680($v1)
    ctx->pc = 0x1ac134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 2));
    // 0x1ac138: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC138u;
    {
        const bool branch_taken_0x1ac138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC138u;
        // 0x1ac13c: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac138) {
            ctx->pc = 0x1AC150u;
            return;
        }
    }
    ctx->pc = 0x1AC140u;
}
