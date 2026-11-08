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

// Function: entry_001fd0b4
// Address: 0x1fd0b4 - 0x1fd0e4
void entry_001fd0b4_0x1fd0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd0b4_0x1fd0b4");
#endif

    switch (ctx->pc) {
        case 0x1fd0c8u: goto label_1fd0c8;
        case 0x1fd0e0u: goto label_1fd0e0;
        default: break;
    }

    ctx->pc = 0x1fd0b4u;

    // 0x1fd0b4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1fd0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd0b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd0c0: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD0C0u;
    SET_GPR_U32(ctx, 31, 0x1FD0C8u);
    ctx->pc = 0x1FD0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0C0u;
    // 0x1fd0c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD0C0u, 0x1FD0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0C8u;
label_1fd0c8:
    // 0x1fd0c8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fd0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd0cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0d0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1fd0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1fd0d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd0d8: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD0D8u;
    SET_GPR_U32(ctx, 31, 0x1FD0E0u);
    ctx->pc = 0x1FD0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0D8u;
    // 0x1fd0dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD0D8u, 0x1FD0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0E0u;
label_1fd0e0:
    // 0x1fd0e0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1fd0e4u;
}
