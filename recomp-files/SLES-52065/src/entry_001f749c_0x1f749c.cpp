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

// Function: entry_001f749c
// Address: 0x1f749c - 0x1f74e8
void entry_001f749c_0x1f749c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f749c_0x1f749c");
#endif

    switch (ctx->pc) {
        case 0x1f74b8u: goto label_1f74b8;
        case 0x1f74e0u: goto label_1f74e0;
        default: break;
    }

    ctx->pc = 0x1f749cu;

    // 0x1f749c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f74a0: 0x26b013c0  addiu       $s0, $s5, 0x13C0
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5056));
    // 0x1f74a4: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1f74a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1f74a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74ac: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x1f74acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x1f74b0: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F74B0u;
    SET_GPR_U32(ctx, 31, 0x1F74B8u);
    ctx->pc = 0x1F74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74B0u;
    // 0x1f74b4: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F74B0u, 0x1F74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74B8u;
label_1f74b8:
    // 0x1f74b8: 0x26e41540  addiu       $a0, $s7, 0x1540
    ctx->pc = 0x1f74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 5440));
    // 0x1f74bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f74c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f74c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f74c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f74c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74cc: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1f74d0: 0x27c91500  addiu       $t1, $fp, 0x1500
    ctx->pc = 0x1f74d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 5376));
    // 0x1f74d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f74d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f74d8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F74D8u;
    SET_GPR_U32(ctx, 31, 0x1F74E0u);
    ctx->pc = 0x1F74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74D8u;
    // 0x1f74dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F74D8u, 0x1F74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74E0u;
label_1f74e0:
    // 0x1f74e0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F74E0u;
    {
        const bool branch_taken_0x1f74e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74E0u;
        // 0x1f74e4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74e0) {
            ctx->pc = 0x1F74FCu;
            return;
        }
    }
    ctx->pc = 0x1F74E8u;
}
