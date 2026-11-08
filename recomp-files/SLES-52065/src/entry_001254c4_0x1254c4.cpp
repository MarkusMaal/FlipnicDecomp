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

// Function: entry_001254c4
// Address: 0x1254c4 - 0x1254e0
void entry_001254c4_0x1254c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001254c4_0x1254c4");
#endif

    switch (ctx->pc) {
        case 0x1254dcu: goto label_1254dc;
        default: break;
    }

    ctx->pc = 0x1254c4u;

    // 0x1254c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1254c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1254c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1254cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1254ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1254d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254d4: 0xc047578  jal         func_11D5E0
    ctx->pc = 0x1254D4u;
    SET_GPR_U32(ctx, 31, 0x1254DCu);
    ctx->pc = 0x1254D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254D4u;
    // 0x1254d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E0u, 0x1254D4u, 0x1254DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254DCu;
label_1254dc:
    // 0x1254dc: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1254dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x1254e0u;
}
