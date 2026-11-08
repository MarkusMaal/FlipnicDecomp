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

// Function: entry_0019bcbc
// Address: 0x19bcbc - 0x19bcdc
void entry_0019bcbc_0x19bcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bcbc_0x19bcbc");
#endif

    switch (ctx->pc) {
        case 0x19bcd0u: goto label_19bcd0;
        default: break;
    }

    ctx->pc = 0x19bcbcu;

    // 0x19bcbc: 0x0  nop
    ctx->pc = 0x19bcbcu;
    // NOP
    // 0x19bcc0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x19bcc4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19bcc8: 0xc057040  jal         func_15C100
    ctx->pc = 0x19BCC8u;
    SET_GPR_U32(ctx, 31, 0x19BCD0u);
    ctx->pc = 0x19BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCC8u;
    // 0x19bccc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BCC8u, 0x19BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCD0u;
label_19bcd0:
    // 0x19bcd0: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x19bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x19bcd4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x19BCD4u;
    {
        const bool branch_taken_0x19bcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCD4u;
        // 0x19bcd8: 0xae320678  sw          $s2, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcd4) {
            ctx->pc = 0x19BDE4u;
            return;
        }
    }
    ctx->pc = 0x19BCDCu;
}
