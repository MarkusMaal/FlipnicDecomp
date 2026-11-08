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

// Function: entry_001b1468
// Address: 0x1b1468 - 0x1b14b8
void entry_001b1468_0x1b1468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1468_0x1b1468");
#endif

    switch (ctx->pc) {
        case 0x1b1474u: goto label_1b1474;
        case 0x1b14b0u: goto label_1b14b0;
        default: break;
    }

    ctx->pc = 0x1b1468u;

    // 0x1b1468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b146c: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B146Cu;
    SET_GPR_U32(ctx, 31, 0x1B1474u);
    ctx->pc = 0x1B1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B146Cu;
    // 0x1b1470: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B146Cu, 0x1B1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1474u;
label_1b1474:
    // 0x1b1474: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x1b1474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1b1478: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b147c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1b147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x1b1480: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1484: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1488: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b1488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b148c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b1490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b1490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1494: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b1494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b1498: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b1498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
    // 0x1b149c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b149cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b14a0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b14a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b14a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14a8: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B14A8u;
    SET_GPR_U32(ctx, 31, 0x1B14B0u);
    ctx->pc = 0x1B14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14A8u;
    // 0x1b14ac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B14A8u, 0x1B14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14B0u;
label_1b14b0:
    // 0x1b14b0: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1b14b4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b14b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x1b14b8u;
}
