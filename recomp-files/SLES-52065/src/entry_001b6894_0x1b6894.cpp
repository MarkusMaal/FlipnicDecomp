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

// Function: entry_001b6894
// Address: 0x1b6894 - 0x1b68c4
void entry_001b6894_0x1b6894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6894_0x1b6894");
#endif

    switch (ctx->pc) {
        case 0x1b68a4u: goto label_1b68a4;
        case 0x1b68c0u: goto label_1b68c0;
        default: break;
    }

    ctx->pc = 0x1b6894u;

    // 0x1b6894: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x1b6894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1b6898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b689c: 0xc06d914  jal         func_1B6450
    ctx->pc = 0x1B689Cu;
    SET_GPR_U32(ctx, 31, 0x1B68A4u);
    ctx->pc = 0x1B68A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B689Cu;
    // 0x1b68a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6450u, 0x1B689Cu, 0x1B68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68A4u;
label_1b68a4:
    // 0x1b68a4: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x1b68a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x1b68a8: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1b68ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b68acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68b0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1b68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b68b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b68b8: 0xc06db6c  jal         func_1B6DB0
    ctx->pc = 0x1B68B8u;
    SET_GPR_U32(ctx, 31, 0x1B68C0u);
    ctx->pc = 0x1B68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68B8u;
    // 0x1b68bc: 0xafb00044  sw          $s0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6DB0u, 0x1B68B8u, 0x1B68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68C0u;
label_1b68c0:
    // 0x1b68c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b68c4u;
}
