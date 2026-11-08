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

// Function: entry_001b032c
// Address: 0x1b032c - 0x1b0380
void entry_001b032c_0x1b032c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b032c_0x1b032c");
#endif

    switch (ctx->pc) {
        case 0x1b0338u: goto label_1b0338;
        case 0x1b0378u: goto label_1b0378;
        default: break;
    }

    ctx->pc = 0x1b032cu;

    // 0x1b032c: 0x0  nop
    ctx->pc = 0x1b032cu;
    // NOP
    // 0x1b0330: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B0330u;
    SET_GPR_U32(ctx, 31, 0x1B0338u);
    ctx->pc = 0x1B0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0330u;
    // 0x1b0334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0330u, 0x1B0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0338u;
label_1b0338:
    // 0x1b0338: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1b0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1b033c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0340: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b0340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b0344: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b0348: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b0348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b034c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b034cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0350: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b0350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b0354: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b0354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0358: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b035c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1b035cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0360: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b0364: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b0364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0368: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b0368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b036c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b036cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0370: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B0370u;
    SET_GPR_U32(ctx, 31, 0x1B0378u);
    ctx->pc = 0x1B0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0370u;
    // 0x1b0374: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0370u, 0x1B0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0378u;
label_1b0378:
    // 0x1b0378: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1b0378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1b037c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b037cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x1b0380u;
}
