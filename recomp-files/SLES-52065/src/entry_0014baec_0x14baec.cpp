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

// Function: entry_0014baec
// Address: 0x14baec - 0x14bb08
void entry_0014baec_0x14baec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014baec_0x14baec");
#endif

    switch (ctx->pc) {
        case 0x14baf4u: goto label_14baf4;
        case 0x14bb04u: goto label_14bb04;
        default: break;
    }

    ctx->pc = 0x14baecu;

    // 0x14baec: 0xc050234  jal         func_1408D0
    ctx->pc = 0x14BAECu;
    SET_GPR_U32(ctx, 31, 0x14BAF4u);
    ctx->pc = 0x14BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAECu;
    // 0x14baf0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x14BAECu, 0x14BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAF4u;
label_14baf4:
    // 0x14baf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14baf8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14bafc: 0xc050224  jal         func_140890
    ctx->pc = 0x14BAFCu;
    SET_GPR_U32(ctx, 31, 0x14BB04u);
    ctx->pc = 0x14BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAFCu;
    // 0x14bb00: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14BAFCu, 0x14BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB04u;
label_14bb04:
    // 0x14bb04: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14bb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x14bb08u;
}
