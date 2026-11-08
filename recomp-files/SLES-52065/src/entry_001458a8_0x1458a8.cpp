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

// Function: entry_001458a8
// Address: 0x1458a8 - 0x1458c8
void entry_001458a8_0x1458a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001458a8_0x1458a8");
#endif

    switch (ctx->pc) {
        case 0x1458b0u: goto label_1458b0;
        default: break;
    }

    ctx->pc = 0x1458a8u;

    // 0x1458a8: 0xc051644  jal         func_145910
    ctx->pc = 0x1458A8u;
    SET_GPR_U32(ctx, 31, 0x1458B0u);
    ctx->pc = 0x1458ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458A8u;
    // 0x1458ac: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145910u, 0x1458A8u, 0x1458B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458B0u;
label_1458b0:
    // 0x1458b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1458b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1458b4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1458b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1458b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1458b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1458bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1458bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1458c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1458c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1458c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1458c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1458c8u;
}
