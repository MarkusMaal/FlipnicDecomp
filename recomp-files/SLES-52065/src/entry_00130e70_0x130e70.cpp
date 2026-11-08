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

// Function: entry_00130e70
// Address: 0x130e70 - 0x130e88
void entry_00130e70_0x130e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130e70_0x130e70");
#endif

    switch (ctx->pc) {
        case 0x130e78u: goto label_130e78;
        case 0x130e80u: goto label_130e80;
        default: break;
    }

    ctx->pc = 0x130e70u;

    // 0x130e70: 0xc04c3f8  jal         func_130FE0
    ctx->pc = 0x130E70u;
    SET_GPR_U32(ctx, 31, 0x130E78u);
    ctx->pc = 0x130FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FE0u, 0x130E70u, 0x130E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E78u;
label_130e78:
    // 0x130e78: 0xc04c3f4  jal         func_130FD0
    ctx->pc = 0x130E78u;
    SET_GPR_U32(ctx, 31, 0x130E80u);
    ctx->pc = 0x130E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E78u;
    // 0x130e7c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FD0u, 0x130E78u, 0x130E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E80u;
label_130e80:
    // 0x130e80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130E80u;
    SET_GPR_U32(ctx, 31, 0x130E88u);
    ctx->pc = 0x130E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E80u;
    // 0x130e84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130E80u, 0x130E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E88u;
}
