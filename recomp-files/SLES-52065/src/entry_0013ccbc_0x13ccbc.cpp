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

// Function: entry_0013ccbc
// Address: 0x13ccbc - 0x13cce0
void entry_0013ccbc_0x13ccbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ccbc_0x13ccbc");
#endif

    switch (ctx->pc) {
        case 0x13ccd4u: goto label_13ccd4;
        default: break;
    }

    ctx->pc = 0x13ccbcu;

label_13ccbc:
    // 0x13ccbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13ccc0:
    // 0x13ccc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13ccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13ccc4:
    // 0x13ccc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ccc8:
    // 0x13ccc8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13cccc:
    // 0x13cccc: 0x320f809  jalr        $t9
label_13ccd0:
    if (ctx->pc == 0x13CCD0u) {
        ctx->pc = 0x13CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCCCu;
        // 0x13ccd0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CCD4u;
        goto label_13ccd4;
    }
    ctx->pc = 0x13CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13CCD4u);
        ctx->pc = 0x13CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCCCu;
        // 0x13ccd0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCCCu, 0x13CCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CCD4u;
label_13ccd4:
    // 0x13ccd4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13ccd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_13ccd8:
    // 0x13ccd8: 0x1630fff8  bne         $s1, $s0, . + 4 + (-0x8 << 2)
label_13ccdc:
    if (ctx->pc == 0x13CCDCu) {
        ctx->pc = 0x13CCE0u;
        goto label_fallthrough_0x13ccd8;
    }
    ctx->pc = 0x13CCD8u;
    {
        const bool branch_taken_0x13ccd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ccd8) {
            ctx->pc = 0x13CCBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ccbc;
        }
    }
label_fallthrough_0x13ccd8:
    ctx->pc = 0x13CCE0u;
}
