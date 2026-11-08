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

// Function: entry_0014b094
// Address: 0x14b094 - 0x14b0d4
void entry_0014b094_0x14b094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b094_0x14b094");
#endif

    switch (ctx->pc) {
        case 0x14b0ccu: goto label_14b0cc;
        default: break;
    }

    ctx->pc = 0x14b094u;

    // 0x14b094: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x14b094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x14b098: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x14b098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x14b09c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x14b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b0a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x14b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x14b0a4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x14b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x14b0a8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x14b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x14b0ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14b0b0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x14b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b0b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B0B4u;
    {
        const bool branch_taken_0x14b0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0B4u;
        // 0x14b0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0b4) {
            ctx->pc = 0x14B0D4u;
            return;
        }
    }
    ctx->pc = 0x14B0BCu;
    // 0x14b0bc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14b0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b0c0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x14b0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x14b0c4: 0xc052d20  jal         func_14B480
    ctx->pc = 0x14B0C4u;
    SET_GPR_U32(ctx, 31, 0x14B0CCu);
    ctx->pc = 0x14B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0C4u;
    // 0x14b0c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B480u, 0x14B0C4u, 0x14B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0CCu;
label_14b0cc:
    // 0x14b0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B0CCu;
    {
        const bool branch_taken_0x14b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0CCu;
        // 0x14b0d0: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0cc) {
            ctx->pc = 0x14B0E0u;
            return;
        }
    }
    ctx->pc = 0x14B0D4u;
}
