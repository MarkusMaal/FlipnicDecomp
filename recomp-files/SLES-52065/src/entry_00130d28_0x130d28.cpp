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

// Function: entry_00130d28
// Address: 0x130d28 - 0x130d40
void entry_00130d28_0x130d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d28_0x130d28");
#endif

    switch (ctx->pc) {
        case 0x130d30u: goto label_130d30;
        case 0x130d38u: goto label_130d38;
        default: break;
    }

    ctx->pc = 0x130d28u;

    // 0x130d28: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130D28u;
    SET_GPR_U32(ctx, 31, 0x130D30u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130D28u, 0x130D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D30u;
label_130d30:
    // 0x130d30: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130D30u;
    SET_GPR_U32(ctx, 31, 0x130D38u);
    ctx->pc = 0x130D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D30u;
    // 0x130d34: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130D30u, 0x130D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D38u;
label_130d38:
    // 0x130d38: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130D38u;
    SET_GPR_U32(ctx, 31, 0x130D40u);
    ctx->pc = 0x130D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D38u;
    // 0x130d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130D38u, 0x130D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D40u;
}
