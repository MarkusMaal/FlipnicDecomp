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

// Function: entry_001e0820
// Address: 0x1e0820 - 0x1e0874
void entry_001e0820_0x1e0820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0820_0x1e0820");
#endif

    switch (ctx->pc) {
        case 0x1e085cu: goto label_1e085c;
        default: break;
    }

    ctx->pc = 0x1e0820u;

    // 0x1e0820: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x1e0820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1e0824: 0x90900000  lbu         $s0, 0x0($a0)
    ctx->pc = 0x1e0824u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0828: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e0828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e082c: 0x24c40003  addiu       $a0, $a2, 0x3
    ctx->pc = 0x1e082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1e0830: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x1e0830u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1e0834: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x1e0834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e0838: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e0838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e083c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1e083cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1e0840: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1e0840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1e0844: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1e0844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0848: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e0848u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e084c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1e084cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1e0850: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1e0850u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1e0854: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E0854u;
    SET_GPR_U32(ctx, 31, 0x1E085Cu);
    ctx->pc = 0x1E0858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0854u;
    // 0x1e0858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E0854u, 0x1E085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E085Cu;
label_1e085c:
    // 0x1e085c: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E085Cu;
    {
        const bool branch_taken_0x1e085c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e085c) {
            ctx->pc = 0x1E0874u;
            return;
        }
    }
    ctx->pc = 0x1E0864u;
    // 0x1e0864: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1e0864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1e0868: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e0868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e086c: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1E086Cu;
    SET_GPR_U32(ctx, 31, 0x1E0874u);
    ctx->pc = 0x1E0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E086Cu;
    // 0x1e0870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1E086Cu, 0x1E0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0874u;
}
