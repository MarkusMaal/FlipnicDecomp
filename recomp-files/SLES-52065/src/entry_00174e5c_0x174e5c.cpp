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

// Function: entry_00174e5c
// Address: 0x174e5c - 0x174e78
void entry_00174e5c_0x174e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e5c_0x174e5c");
#endif

    switch (ctx->pc) {
        case 0x174e74u: goto label_174e74;
        default: break;
    }

    ctx->pc = 0x174e5cu;

    // 0x174e5c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x174e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x174e60: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x174e64: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x174e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x174e68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x174e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e6c: 0xc05c748  jal         func_171D20
    ctx->pc = 0x174E6Cu;
    SET_GPR_U32(ctx, 31, 0x174E74u);
    ctx->pc = 0x174E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E6Cu;
    // 0x174e70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D20u, 0x174E6Cu, 0x174E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E74u;
label_174e74:
    // 0x174e74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x174e78u;
}
