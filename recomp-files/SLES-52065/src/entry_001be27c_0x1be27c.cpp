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

// Function: entry_001be27c
// Address: 0x1be27c - 0x1be298
void entry_001be27c_0x1be27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be27c_0x1be27c");
#endif

    switch (ctx->pc) {
        case 0x1be284u: goto label_1be284;
        case 0x1be294u: goto label_1be294;
        default: break;
    }

    ctx->pc = 0x1be27cu;

    // 0x1be27c: 0xc050234  jal         func_1408D0
    ctx->pc = 0x1BE27Cu;
    SET_GPR_U32(ctx, 31, 0x1BE284u);
    ctx->pc = 0x1BE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE27Cu;
    // 0x1be280: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x1BE27Cu, 0x1BE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE284u;
label_1be284:
    // 0x1be284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be288: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1be28c: 0xc050224  jal         func_140890
    ctx->pc = 0x1BE28Cu;
    SET_GPR_U32(ctx, 31, 0x1BE294u);
    ctx->pc = 0x1BE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE28Cu;
    // 0x1be290: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1BE28Cu, 0x1BE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE294u;
label_1be294:
    // 0x1be294: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1be294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x1be298u;
}
