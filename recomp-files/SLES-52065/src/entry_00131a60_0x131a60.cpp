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

// Function: entry_00131a60
// Address: 0x131a60 - 0x131a6c
void entry_00131a60_0x131a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a60_0x131a60");
#endif

    switch (ctx->pc) {
        case 0x131a68u: goto label_131a68;
        default: break;
    }

    ctx->pc = 0x131a60u;

    // 0x131a60: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131A60u;
    SET_GPR_U32(ctx, 31, 0x131A68u);
    ctx->pc = 0x131A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A60u;
    // 0x131a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131A60u, 0x131A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A68u;
label_131a68:
    // 0x131a68: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x131a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->pc = 0x131a6cu;
}
