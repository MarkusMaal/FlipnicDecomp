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

// Function: entry_001b27e4
// Address: 0x1b27e4 - 0x1b2810
void entry_001b27e4_0x1b27e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b27e4_0x1b27e4");
#endif

    switch (ctx->pc) {
        case 0x1b2808u: goto label_1b2808;
        default: break;
    }

    ctx->pc = 0x1b27e4u;

    // 0x1b27e4: 0x8fa80280  lw          $t0, 0x280($sp)
    ctx->pc = 0x1b27e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1b27e8: 0x26e3ff80  addiu       $v1, $s7, -0x80
    ctx->pc = 0x1b27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b27ec: 0x8fa90270  lw          $t1, 0x270($sp)
    ctx->pc = 0x1b27ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1b27f0: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1b27f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b27f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b27f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b27f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b27fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2800: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B2800u;
    SET_GPR_U32(ctx, 31, 0x1B2808u);
    ctx->pc = 0x1B2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2800u;
    // 0x1b2804: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B2800u, 0x1B2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2808u;
label_1b2808:
    // 0x1b2808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b280c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b280cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b2810u;
}
