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

// Function: entry_001d9840
// Address: 0x1d9840 - 0x1d9860
void entry_001d9840_0x1d9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9840_0x1d9840");
#endif

    switch (ctx->pc) {
        case 0x1d9854u: goto label_1d9854;
        default: break;
    }

    ctx->pc = 0x1d9840u;

    // 0x1d9840: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d9840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d9844: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d9848: 0x8c8466d0  lw          $a0, 0x66D0($a0)
    ctx->pc = 0x1d9848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26320)));
    // 0x1d984c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D984Cu;
    SET_GPR_U32(ctx, 31, 0x1D9854u);
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D984Cu, 0x1D9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9854u;
label_1d9854:
    // 0x1d9854: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D9854u;
    {
        const bool branch_taken_0x1d9854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9854u;
        // 0x1d9858: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9854) {
            ctx->pc = 0x1D9884u;
            return;
        }
    }
    ctx->pc = 0x1D985Cu;
    // 0x1d985c: 0x0  nop
    ctx->pc = 0x1d985cu;
    // NOP
    ctx->pc = 0x1d9860u;
}
