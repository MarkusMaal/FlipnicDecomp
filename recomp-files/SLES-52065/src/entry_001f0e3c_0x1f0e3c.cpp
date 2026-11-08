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

// Function: entry_001f0e3c
// Address: 0x1f0e3c - 0x1f0e50
void entry_001f0e3c_0x1f0e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0e3c_0x1f0e3c");
#endif

    switch (ctx->pc) {
        case 0x1f0e44u: goto label_1f0e44;
        case 0x1f0e4cu: goto label_1f0e4c;
        default: break;
    }

    ctx->pc = 0x1f0e3cu;

    // 0x1f0e3c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0E44u);
    ctx->pc = 0x1F0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E3Cu;
    // 0x1f0e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0E3Cu, 0x1F0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E44u;
label_1f0e44:
    // 0x1f0e44: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0E44u;
    SET_GPR_U32(ctx, 31, 0x1F0E4Cu);
    ctx->pc = 0x1F0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E44u;
    // 0x1f0e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0E44u, 0x1F0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E4Cu;
label_1f0e4c:
    // 0x1f0e4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f0e50u;
}
