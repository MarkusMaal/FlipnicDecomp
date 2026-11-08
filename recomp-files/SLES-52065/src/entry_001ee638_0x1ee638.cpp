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

// Function: entry_001ee638
// Address: 0x1ee638 - 0x1ee678
void entry_001ee638_0x1ee638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee638_0x1ee638");
#endif

    switch (ctx->pc) {
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee670u: goto label_1ee670;
        default: break;
    }

    ctx->pc = 0x1ee638u;

    // 0x1ee638: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee63c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee640: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1ee640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1ee644: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee64c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee650: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE650u;
    SET_GPR_U32(ctx, 31, 0x1EE658u);
    ctx->pc = 0x1EE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE650u;
    // 0x1ee654: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE650u, 0x1EE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE658u;
label_1ee658:
    // 0x1ee658: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE658u;
    {
        const bool branch_taken_0x1ee658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee658) {
            ctx->pc = 0x1EE678u;
            return;
        }
    }
    ctx->pc = 0x1EE660u;
    // 0x1ee660: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE660u;
    SET_GPR_U32(ctx, 31, 0x1EE668u);
    ctx->pc = 0x1EE664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE660u;
    // 0x1ee664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE660u, 0x1EE668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE668u;
label_1ee668:
    // 0x1ee668: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE668u;
    SET_GPR_U32(ctx, 31, 0x1EE670u);
    ctx->pc = 0x1EE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE668u;
    // 0x1ee66c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE668u, 0x1EE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE670u;
label_1ee670:
    // 0x1ee670: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EE670u;
    {
        const bool branch_taken_0x1ee670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE670u;
        // 0x1ee674: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee670) {
            ctx->pc = 0x1EE6CCu;
            return;
        }
    }
    ctx->pc = 0x1EE678u;
}
