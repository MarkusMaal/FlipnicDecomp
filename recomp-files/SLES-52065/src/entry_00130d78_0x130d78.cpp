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

// Function: entry_00130d78
// Address: 0x130d78 - 0x130d94
void entry_00130d78_0x130d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d78_0x130d78");
#endif

    switch (ctx->pc) {
        case 0x130d80u: goto label_130d80;
        case 0x130d88u: goto label_130d88;
        case 0x130d90u: goto label_130d90;
        default: break;
    }

    ctx->pc = 0x130d78u;

    // 0x130d78: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130D78u;
    SET_GPR_U32(ctx, 31, 0x130D80u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130D78u, 0x130D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D80u;
label_130d80:
    // 0x130d80: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130D80u;
    SET_GPR_U32(ctx, 31, 0x130D88u);
    ctx->pc = 0x130D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D80u;
    // 0x130d84: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130D80u, 0x130D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D88u;
label_130d88:
    // 0x130d88: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130D88u;
    SET_GPR_U32(ctx, 31, 0x130D90u);
    ctx->pc = 0x130D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D88u;
    // 0x130d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130D88u, 0x130D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D90u;
label_130d90:
    // 0x130d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130d94u;
}
