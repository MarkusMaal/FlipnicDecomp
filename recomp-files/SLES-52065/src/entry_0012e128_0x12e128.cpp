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

// Function: entry_0012e128
// Address: 0x12e128 - 0x12e158
void entry_0012e128_0x12e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e128_0x12e128");
#endif

    switch (ctx->pc) {
        case 0x12e134u: goto label_12e134;
        case 0x12e154u: goto label_12e154;
        default: break;
    }

    ctx->pc = 0x12e128u;

    // 0x12e128: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x12e128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x12e12c: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x12E12Cu;
    SET_GPR_U32(ctx, 31, 0x12E134u);
    ctx->pc = 0x12E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E12Cu;
    // 0x12e130: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x12E12Cu, 0x12E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E134u;
label_12e134:
    // 0x12e134: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e138: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12e13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e140: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12e140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e144: 0x27a700f4  addiu       $a3, $sp, 0xF4
    ctx->pc = 0x12e144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x12e148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e14c: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x12E14Cu;
    SET_GPR_U32(ctx, 31, 0x12E154u);
    ctx->pc = 0x12E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E14Cu;
    // 0x12e150: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x12E14Cu, 0x12E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E154u;
label_12e154:
    // 0x12e154: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12e154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x12e158u;
}
