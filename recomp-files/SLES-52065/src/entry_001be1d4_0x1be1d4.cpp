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

// Function: entry_001be1d4
// Address: 0x1be1d4 - 0x1be1f0
void entry_001be1d4_0x1be1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be1d4_0x1be1d4");
#endif

    switch (ctx->pc) {
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1ecu: goto label_1be1ec;
        default: break;
    }

    ctx->pc = 0x1be1d4u;

    // 0x1be1d4: 0xc050234  jal         func_1408D0
    ctx->pc = 0x1BE1D4u;
    SET_GPR_U32(ctx, 31, 0x1BE1DCu);
    ctx->pc = 0x1BE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1D4u;
    // 0x1be1d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x1BE1D4u, 0x1BE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1DCu;
label_1be1dc:
    // 0x1be1dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1be1e4: 0xc050224  jal         func_140890
    ctx->pc = 0x1BE1E4u;
    SET_GPR_U32(ctx, 31, 0x1BE1ECu);
    ctx->pc = 0x1BE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1E4u;
    // 0x1be1e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1BE1E4u, 0x1BE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1ECu;
label_1be1ec:
    // 0x1be1ec: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1be1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x1be1f0u;
}
