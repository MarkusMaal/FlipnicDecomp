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

// Function: entry_001f9d9c
// Address: 0x1f9d9c - 0x1f9db4
void entry_001f9d9c_0x1f9d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9d9c_0x1f9d9c");
#endif

    switch (ctx->pc) {
        case 0x1f9dacu: goto label_1f9dac;
        default: break;
    }

    ctx->pc = 0x1f9d9cu;

    // 0x1f9d9c: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9D9Cu;
    {
        const bool branch_taken_0x1f9d9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D9Cu;
        // 0x1f9da0: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d9c) {
            ctx->pc = 0x1F9DB4u;
            return;
        }
    }
    ctx->pc = 0x1F9DA4u;
    // 0x1f9da4: 0xc07ed0e  jal         func_1FB438
    ctx->pc = 0x1F9DA4u;
    SET_GPR_U32(ctx, 31, 0x1F9DACu);
    ctx->pc = 0x1F9DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DA4u;
    // 0x1f9da8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB438u, 0x1F9DA4u, 0x1F9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DACu;
label_1f9dac:
    // 0x1f9dac: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1F9DACu;
    {
        const bool branch_taken_0x1f9dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DACu;
        // 0x1f9db0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dac) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9DB4u;
}
