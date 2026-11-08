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

// Function: entry_0012ed60
// Address: 0x12ed60 - 0x12ed7c
void entry_0012ed60_0x12ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed60_0x12ed60");
#endif

    switch (ctx->pc) {
        case 0x12ed68u: goto label_12ed68;
        case 0x12ed70u: goto label_12ed70;
        case 0x12ed78u: goto label_12ed78;
        default: break;
    }

    ctx->pc = 0x12ed60u;

    // 0x12ed60: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12ED60u;
    SET_GPR_U32(ctx, 31, 0x12ED68u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12ED60u, 0x12ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED68u;
label_12ed68:
    // 0x12ed68: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12ED68u;
    SET_GPR_U32(ctx, 31, 0x12ED70u);
    ctx->pc = 0x12ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED68u;
    // 0x12ed6c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12ED68u, 0x12ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED70u;
label_12ed70:
    // 0x12ed70: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12ED70u;
    SET_GPR_U32(ctx, 31, 0x12ED78u);
    ctx->pc = 0x12ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED70u;
    // 0x12ed74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12ED70u, 0x12ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED78u;
label_12ed78:
    // 0x12ed78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12ed7cu;
}
