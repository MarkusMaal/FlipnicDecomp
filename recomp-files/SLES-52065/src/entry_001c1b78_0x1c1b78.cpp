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

// Function: entry_001c1b78
// Address: 0x1c1b78 - 0x1c1ba4
void entry_001c1b78_0x1c1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b78_0x1c1b78");
#endif

    switch (ctx->pc) {
        case 0x1c1b88u: goto label_1c1b88;
        default: break;
    }

    ctx->pc = 0x1c1b78u;

    // 0x1c1b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1b80: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1B80u;
    SET_GPR_U32(ctx, 31, 0x1C1B88u);
    ctx->pc = 0x1C1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B80u;
    // 0x1c1b84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1B80u, 0x1C1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B88u;
label_1c1b88:
    // 0x1c1b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1b90: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c1b94: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x1c1b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1b9c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C1B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C1BA4u);
    ctx->pc = 0x1C1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B9Cu;
    // 0x1c1ba0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C1B9Cu, 0x1C1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BA4u;
}
