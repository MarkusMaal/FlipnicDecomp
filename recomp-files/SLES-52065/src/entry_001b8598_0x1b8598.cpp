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

// Function: entry_001b8598
// Address: 0x1b8598 - 0x1b85d8
void entry_001b8598_0x1b8598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8598_0x1b8598");
#endif

    switch (ctx->pc) {
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85d4u: goto label_1b85d4;
        default: break;
    }

    ctx->pc = 0x1b8598u;

    // 0x1b8598: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1b859c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1b859cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1b85a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b85a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b85a8: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1b85ac: 0xc06e57c  jal         func_1B95F0
    ctx->pc = 0x1B85ACu;
    SET_GPR_U32(ctx, 31, 0x1B85B4u);
    ctx->pc = 0x1B85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85ACu;
    // 0x1b85b0: 0xa2a20008  sb          $v0, 0x8($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B95F0u, 0x1B85ACu, 0x1B85B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85B4u;
label_1b85b4:
    // 0x1b85b4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1b85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1b85b8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1b85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1b85bc: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1b85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1b85c0: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x1b85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b85c4: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1b85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1b85c8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1b85c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1b85cc: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1B85CCu;
    SET_GPR_U32(ctx, 31, 0x1B85D4u);
    ctx->pc = 0x1B85D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85CCu;
    // 0x1b85d0: 0xafb5019c  sw          $s5, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1B85CCu, 0x1B85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85D4u;
label_1b85d4:
    // 0x1b85d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1b85d8u;
}
