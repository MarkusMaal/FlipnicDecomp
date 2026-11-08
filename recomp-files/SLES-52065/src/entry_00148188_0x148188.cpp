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

// Function: entry_00148188
// Address: 0x148188 - 0x1481ac
void entry_00148188_0x148188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148188_0x148188");
#endif

    switch (ctx->pc) {
        case 0x148190u: goto label_148190;
        default: break;
    }

    ctx->pc = 0x148188u;

    // 0x148188: 0xc050224  jal         func_140890
    ctx->pc = 0x148188u;
    SET_GPR_U32(ctx, 31, 0x148190u);
    ctx->pc = 0x14818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148188u;
    // 0x14818c: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x148188u, 0x148190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148190u;
label_148190:
    // 0x148190: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x148194: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148198: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14819c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1481a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1481a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1481a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1481a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1481a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1481a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1481acu;
}
