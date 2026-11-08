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

// Function: entry_001493c8
// Address: 0x1493c8 - 0x1493e8
void entry_001493c8_0x1493c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001493c8_0x1493c8");
#endif

    switch (ctx->pc) {
        case 0x1493d0u: goto label_1493d0;
        default: break;
    }

    ctx->pc = 0x1493c8u;

    // 0x1493c8: 0xc050224  jal         func_140890
    ctx->pc = 0x1493C8u;
    SET_GPR_U32(ctx, 31, 0x1493D0u);
    ctx->pc = 0x1493CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493C8u;
    // 0x1493cc: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1493C8u, 0x1493D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493D0u;
label_1493d0:
    // 0x1493d0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1493d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1493d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1493d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1493d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1493d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1493dc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1493dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1493e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1493e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1493e4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1493e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1493e8u;
}
