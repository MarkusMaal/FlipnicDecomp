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

// Function: entry_001e776c
// Address: 0x1e776c - 0x1e7780
void entry_001e776c_0x1e776c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e776c_0x1e776c");
#endif

    switch (ctx->pc) {
        case 0x1e7778u: goto label_1e7778;
        default: break;
    }

    ctx->pc = 0x1e776cu;

    // 0x1e776c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7770: 0xc07a034  jal         func_1E80D0
    ctx->pc = 0x1E7770u;
    SET_GPR_U32(ctx, 31, 0x1E7778u);
    ctx->pc = 0x1E7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7770u;
    // 0x1e7774: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E80D0u, 0x1E7770u, 0x1E7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7778u;
label_1e7778:
    // 0x1e7778: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E7778u;
    {
        const bool branch_taken_0x1e7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7778u;
        // 0x1e777c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7778) {
            ctx->pc = 0x1E7848u;
            return;
        }
    }
    ctx->pc = 0x1E7780u;
}
