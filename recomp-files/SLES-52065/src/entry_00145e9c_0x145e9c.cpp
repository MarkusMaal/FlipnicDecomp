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

// Function: entry_00145e9c
// Address: 0x145e9c - 0x145eb8
void entry_00145e9c_0x145e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e9c_0x145e9c");
#endif

    switch (ctx->pc) {
        case 0x145ea4u: goto label_145ea4;
        case 0x145eb4u: goto label_145eb4;
        default: break;
    }

    ctx->pc = 0x145e9cu;

    // 0x145e9c: 0xc050234  jal         func_1408D0
    ctx->pc = 0x145E9Cu;
    SET_GPR_U32(ctx, 31, 0x145EA4u);
    ctx->pc = 0x145EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E9Cu;
    // 0x145ea0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x145E9Cu, 0x145EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EA4u;
label_145ea4:
    // 0x145ea4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145ea8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145eac: 0xc050224  jal         func_140890
    ctx->pc = 0x145EACu;
    SET_GPR_U32(ctx, 31, 0x145EB4u);
    ctx->pc = 0x145EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EACu;
    // 0x145eb0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x145EACu, 0x145EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EB4u;
label_145eb4:
    // 0x145eb4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x145eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x145eb8u;
}
