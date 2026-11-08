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

// Function: entry_001f1f5c
// Address: 0x1f1f5c - 0x1f1f70
void entry_001f1f5c_0x1f1f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1f5c_0x1f1f5c");
#endif

    switch (ctx->pc) {
        case 0x1f1f64u: goto label_1f1f64;
        case 0x1f1f6cu: goto label_1f1f6c;
        default: break;
    }

    ctx->pc = 0x1f1f5cu;

    // 0x1f1f5c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F64u);
    ctx->pc = 0x1F1F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F5Cu;
    // 0x1f1f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1F5Cu, 0x1F1F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F64u;
label_1f1f64:
    // 0x1f1f64: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F64u;
    SET_GPR_U32(ctx, 31, 0x1F1F6Cu);
    ctx->pc = 0x1F1F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F64u;
    // 0x1f1f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F64u, 0x1F1F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F6Cu;
label_1f1f6c:
    // 0x1f1f6c: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x1f1f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f1f70u;
}
