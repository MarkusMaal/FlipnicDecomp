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

// Function: entry_0012ed10
// Address: 0x12ed10 - 0x12ed28
void entry_0012ed10_0x12ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed10_0x12ed10");
#endif

    switch (ctx->pc) {
        case 0x12ed18u: goto label_12ed18;
        case 0x12ed20u: goto label_12ed20;
        default: break;
    }

    ctx->pc = 0x12ed10u;

    // 0x12ed10: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12ED10u;
    SET_GPR_U32(ctx, 31, 0x12ED18u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12ED10u, 0x12ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED18u;
label_12ed18:
    // 0x12ed18: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12ED18u;
    SET_GPR_U32(ctx, 31, 0x12ED20u);
    ctx->pc = 0x12ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED18u;
    // 0x12ed1c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12ED18u, 0x12ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED20u;
label_12ed20:
    // 0x12ed20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12ED20u;
    SET_GPR_U32(ctx, 31, 0x12ED28u);
    ctx->pc = 0x12ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED20u;
    // 0x12ed24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12ED20u, 0x12ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED28u;
}
