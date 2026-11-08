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

// Function: entry_001349b0
// Address: 0x1349b0 - 0x1349cc
void entry_001349b0_0x1349b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001349b0_0x1349b0");
#endif

    switch (ctx->pc) {
        case 0x1349bcu: goto label_1349bc;
        default: break;
    }

    ctx->pc = 0x1349b0u;

    // 0x1349b0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1349b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1349b4: 0xc04d808  jal         func_136020
    ctx->pc = 0x1349B4u;
    SET_GPR_U32(ctx, 31, 0x1349BCu);
    ctx->pc = 0x1349B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349B4u;
    // 0x1349b8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136020u, 0x1349B4u, 0x1349BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349BCu;
label_1349bc:
    // 0x1349bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1349bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1349c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1349c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1349c4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1349c8: 0x24846370  addiu       $a0, $a0, 0x6370
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25456));
    ctx->pc = 0x1349ccu;
}
