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

// Function: entry_001106fc
// Address: 0x1106fc - 0x11072c
void entry_001106fc_0x1106fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001106fc_0x1106fc");
#endif

    switch (ctx->pc) {
        case 0x110724u: goto label_110724;
        default: break;
    }

    ctx->pc = 0x1106fcu;

    // 0x1106fc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1106fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110700: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x110700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x110704: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110708: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11070c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11070cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110710: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110718: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11071c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11071Cu;
    SET_GPR_U32(ctx, 31, 0x110724u);
    ctx->pc = 0x110720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11071Cu;
    // 0x110720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11071Cu, 0x110724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110724u;
label_110724:
    // 0x110724: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x110724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x110728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x11072cu;
}
