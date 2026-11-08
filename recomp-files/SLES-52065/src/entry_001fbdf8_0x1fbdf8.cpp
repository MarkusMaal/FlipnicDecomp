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

// Function: entry_001fbdf8
// Address: 0x1fbdf8 - 0x1fbe08
void entry_001fbdf8_0x1fbdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbdf8_0x1fbdf8");
#endif

    switch (ctx->pc) {
        case 0x1fbe00u: goto label_1fbe00;
        default: break;
    }

    ctx->pc = 0x1fbdf8u;

    // 0x1fbdf8: 0xc082222  jal         func_208888
    ctx->pc = 0x1FBDF8u;
    SET_GPR_U32(ctx, 31, 0x1FBE00u);
    ctx->pc = 0x1FBDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDF8u;
    // 0x1fbdfc: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x1FBDF8u, 0x1FBE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE00u;
label_1fbe00:
    // 0x1fbe00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBE00u;
    {
        const bool branch_taken_0x1fbe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE00u;
        // 0x1fbe04: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe00) {
            ctx->pc = 0x1FBE10u;
            return;
        }
    }
    ctx->pc = 0x1FBE08u;
}
