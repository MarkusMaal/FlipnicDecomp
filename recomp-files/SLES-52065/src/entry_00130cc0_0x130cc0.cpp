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

// Function: entry_00130cc0
// Address: 0x130cc0 - 0x130cdc
void entry_00130cc0_0x130cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130cc0_0x130cc0");
#endif

    switch (ctx->pc) {
        case 0x130cc8u: goto label_130cc8;
        case 0x130cd0u: goto label_130cd0;
        case 0x130cd8u: goto label_130cd8;
        default: break;
    }

    ctx->pc = 0x130cc0u;

    // 0x130cc0: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130CC0u;
    SET_GPR_U32(ctx, 31, 0x130CC8u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130CC0u, 0x130CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CC8u;
label_130cc8:
    // 0x130cc8: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130CC8u;
    SET_GPR_U32(ctx, 31, 0x130CD0u);
    ctx->pc = 0x130CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CC8u;
    // 0x130ccc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130CC8u, 0x130CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CD0u;
label_130cd0:
    // 0x130cd0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130CD0u;
    SET_GPR_U32(ctx, 31, 0x130CD8u);
    ctx->pc = 0x130CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CD0u;
    // 0x130cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130CD0u, 0x130CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CD8u;
label_130cd8:
    // 0x130cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130cdcu;
}
