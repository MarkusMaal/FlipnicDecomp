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

// Function: entry_001aaf10
// Address: 0x1aaf10 - 0x1aaf30
void entry_001aaf10_0x1aaf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf10_0x1aaf10");
#endif

    switch (ctx->pc) {
        case 0x1aaf20u: goto label_1aaf20;
        default: break;
    }

    ctx->pc = 0x1aaf10u;

    // 0x1aaf10: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1aaf14: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aaf14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aaf18: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AAF18u;
    SET_GPR_U32(ctx, 31, 0x1AAF20u);
    ctx->pc = 0x1AAF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF18u;
    // 0x1aaf1c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AAF18u, 0x1AAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF20u;
label_1aaf20:
    // 0x1aaf20: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x1aaf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1aaf24: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1aaf24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
    // 0x1aaf28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAF28u;
    {
        const bool branch_taken_0x1aaf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF28u;
        // 0x1aaf2c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf28) {
            ctx->pc = 0x1AAF40u;
            return;
        }
    }
    ctx->pc = 0x1AAF30u;
}
