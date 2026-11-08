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

// Function: entry_0012e0d8
// Address: 0x12e0d8 - 0x12e108
void entry_0012e0d8_0x12e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e0d8_0x12e0d8");
#endif

    switch (ctx->pc) {
        case 0x12e0e4u: goto label_12e0e4;
        case 0x12e104u: goto label_12e104;
        default: break;
    }

    ctx->pc = 0x12e0d8u;

    // 0x12e0d8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x12e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x12e0dc: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x12E0DCu;
    SET_GPR_U32(ctx, 31, 0x12E0E4u);
    ctx->pc = 0x12E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0DCu;
    // 0x12e0e0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x12E0DCu, 0x12E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0E4u;
label_12e0e4:
    // 0x12e0e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e0e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12e0ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e0f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e0f4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x12e0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12e0f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e0fc: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x12E0FCu;
    SET_GPR_U32(ctx, 31, 0x12E104u);
    ctx->pc = 0x12E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0FCu;
    // 0x12e100: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x12E0FCu, 0x12E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E104u;
label_12e104:
    // 0x12e104: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x12e108u;
}
