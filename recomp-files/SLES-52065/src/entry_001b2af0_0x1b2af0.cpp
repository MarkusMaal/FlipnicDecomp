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

// Function: entry_001b2af0
// Address: 0x1b2af0 - 0x1b2b1c
void entry_001b2af0_0x1b2af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2af0_0x1b2af0");
#endif

    switch (ctx->pc) {
        case 0x1b2b14u: goto label_1b2b14;
        default: break;
    }

    ctx->pc = 0x1b2af0u;

    // 0x1b2af0: 0x8fa90290  lw          $t1, 0x290($sp)
    ctx->pc = 0x1b2af0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1b2af4: 0x26e3ff80  addiu       $v1, $s7, -0x80
    ctx->pc = 0x1b2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b2af8: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1b2af8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b2afc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b04: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1b2b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b0c: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B2B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2B14u);
    ctx->pc = 0x1B2B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B0Cu;
    // 0x1b2b10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B2B0Cu, 0x1B2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B14u;
label_1b2b14:
    // 0x1b2b14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b2b1cu;
}
