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

// Function: entry_001aaef0
// Address: 0x1aaef0 - 0x1aaf10
void entry_001aaef0_0x1aaef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaef0_0x1aaef0");
#endif

    switch (ctx->pc) {
        case 0x1aaf00u: goto label_1aaf00;
        default: break;
    }

    ctx->pc = 0x1aaef0u;

    // 0x1aaef0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aaef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1aaef4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aaef8: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AAEF8u;
    SET_GPR_U32(ctx, 31, 0x1AAF00u);
    ctx->pc = 0x1AAEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEF8u;
    // 0x1aaefc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AAEF8u, 0x1AAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF00u;
label_1aaf00:
    // 0x1aaf00: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1aaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1aaf04: 0xac620680  sw          $v0, 0x680($v1)
    ctx->pc = 0x1aaf04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 2));
    // 0x1aaf08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AAF08u;
    {
        const bool branch_taken_0x1aaf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF08u;
        // 0x1aaf0c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf08) {
            ctx->pc = 0x1AAF40u;
            return;
        }
    }
    ctx->pc = 0x1AAF10u;
}
