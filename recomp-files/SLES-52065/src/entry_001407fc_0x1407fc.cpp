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

// Function: entry_001407fc
// Address: 0x1407fc - 0x140818
void entry_001407fc_0x1407fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001407fc_0x1407fc");
#endif

    switch (ctx->pc) {
        case 0x140804u: goto label_140804;
        case 0x140814u: goto label_140814;
        default: break;
    }

    ctx->pc = 0x1407fcu;

    // 0x1407fc: 0xc050234  jal         func_1408D0
    ctx->pc = 0x1407FCu;
    SET_GPR_U32(ctx, 31, 0x140804u);
    ctx->pc = 0x140800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407FCu;
    // 0x140800: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x1407FCu, 0x140804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140804u;
label_140804:
    // 0x140804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140808: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x140808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14080c: 0xc050224  jal         func_140890
    ctx->pc = 0x14080Cu;
    SET_GPR_U32(ctx, 31, 0x140814u);
    ctx->pc = 0x140810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14080Cu;
    // 0x140810: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14080Cu, 0x140814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140814u;
label_140814:
    // 0x140814: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x140818u;
}
