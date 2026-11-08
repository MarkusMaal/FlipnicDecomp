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

// Function: entry_001ee448
// Address: 0x1ee448 - 0x1ee484
void entry_001ee448_0x1ee448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee448_0x1ee448");
#endif

    switch (ctx->pc) {
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee480u: goto label_1ee480;
        default: break;
    }

    ctx->pc = 0x1ee448u;

    // 0x1ee448: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee44c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee450: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ee450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ee454: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1ee454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1ee458: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee45c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee464: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee468: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE468u;
    SET_GPR_U32(ctx, 31, 0x1EE470u);
    ctx->pc = 0x1EE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE468u;
    // 0x1ee46c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE468u, 0x1EE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE470u;
label_1ee470:
    // 0x1ee470: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE470u;
    {
        const bool branch_taken_0x1ee470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE470u;
        // 0x1ee474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee470) {
            ctx->pc = 0x1EE484u;
            return;
        }
    }
    ctx->pc = 0x1EE478u;
    // 0x1ee478: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE478u;
    SET_GPR_U32(ctx, 31, 0x1EE480u);
    ctx->pc = 0x1EE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE478u;
    // 0x1ee47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE478u, 0x1EE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE480u;
label_1ee480:
    // 0x1ee480: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ee480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1ee484u;
}
