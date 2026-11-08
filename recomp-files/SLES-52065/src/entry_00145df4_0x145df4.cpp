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

// Function: entry_00145df4
// Address: 0x145df4 - 0x145e10
void entry_00145df4_0x145df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145df4_0x145df4");
#endif

    switch (ctx->pc) {
        case 0x145dfcu: goto label_145dfc;
        case 0x145e0cu: goto label_145e0c;
        default: break;
    }

    ctx->pc = 0x145df4u;

    // 0x145df4: 0xc050234  jal         func_1408D0
    ctx->pc = 0x145DF4u;
    SET_GPR_U32(ctx, 31, 0x145DFCu);
    ctx->pc = 0x145DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DF4u;
    // 0x145df8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x145DF4u, 0x145DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DFCu;
label_145dfc:
    // 0x145dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145e00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x145e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145e04: 0xc050224  jal         func_140890
    ctx->pc = 0x145E04u;
    SET_GPR_U32(ctx, 31, 0x145E0Cu);
    ctx->pc = 0x145E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E04u;
    // 0x145e08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x145E04u, 0x145E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E0Cu;
label_145e0c:
    // 0x145e0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x145e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x145e10u;
}
