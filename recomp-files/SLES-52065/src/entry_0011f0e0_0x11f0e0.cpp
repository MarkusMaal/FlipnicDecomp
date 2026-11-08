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

// Function: entry_0011f0e0
// Address: 0x11f0e0 - 0x11f0f4
void entry_0011f0e0_0x11f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f0e0_0x11f0e0");
#endif

    switch (ctx->pc) {
        case 0x11f0f0u: goto label_11f0f0;
        default: break;
    }

    ctx->pc = 0x11f0e0u;

    // 0x11f0e0: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x11f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x11f0e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0e8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11F0E8u;
    SET_GPR_U32(ctx, 31, 0x11F0F0u);
    ctx->pc = 0x11F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0E8u;
    // 0x11f0ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11F0E8u, 0x11F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0F0u;
label_11f0f0:
    // 0x11f0f0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x11f0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x11f0f4u;
}
