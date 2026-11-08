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

// Function: entry_001b04a4
// Address: 0x1b04a4 - 0x1b04e4
void entry_001b04a4_0x1b04a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b04a4_0x1b04a4");
#endif

    switch (ctx->pc) {
        case 0x1b04acu: goto label_1b04ac;
        default: break;
    }

    ctx->pc = 0x1b04a4u;

    // 0x1b04a4: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B04A4u;
    SET_GPR_U32(ctx, 31, 0x1B04ACu);
    ctx->pc = 0x1B04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04A4u;
    // 0x1b04a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B04A4u, 0x1B04ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04ACu;
label_1b04ac:
    // 0x1b04ac: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x1b04b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b04b4: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x1b04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
    // 0x1b04b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b04b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04bc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1b04bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b04c0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b04c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b04c4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b04c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04c8: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b04c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b04cc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b04ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04d0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b04d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b04d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b04d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04dc: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B04DCu;
    SET_GPR_U32(ctx, 31, 0x1B04E4u);
    ctx->pc = 0x1B04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04DCu;
    // 0x1b04e0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B04DCu, 0x1B04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04E4u;
}
