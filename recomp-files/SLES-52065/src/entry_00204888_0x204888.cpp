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

// Function: entry_00204888
// Address: 0x204888 - 0x2048dc
void entry_00204888_0x204888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204888_0x204888");
#endif

    switch (ctx->pc) {
        case 0x2048d4u: goto label_2048d4;
        default: break;
    }

    ctx->pc = 0x204888u;

    // 0x204888: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x204888u;
    {
        const bool branch_taken_0x204888 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204888u;
        // 0x20488c: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204888) {
            ctx->pc = 0x204A18u;
            return;
        }
    }
    ctx->pc = 0x204890u;
    // 0x204890: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x204890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x204894: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x204894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204898: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x204898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
    // 0x20489c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x20489cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2048a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2048a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2048a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2048a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2048a8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2048a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2048acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2048b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2048b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2048b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2048b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2048b8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2048b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2048bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2048bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2048c0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2048C0u;
    {
        const bool branch_taken_0x2048c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048C0u;
        // 0x2048c4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048c0) {
            ctx->pc = 0x2048DCu;
            return;
        }
    }
    ctx->pc = 0x2048C8u;
    // 0x2048c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2048c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2048cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2048CCu;
    SET_GPR_U32(ctx, 31, 0x2048D4u);
    ctx->pc = 0x2048D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048CCu;
    // 0x2048d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2048CCu, 0x2048D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048D4u;
label_2048d4:
    // 0x2048d4: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x2048D4u;
    {
        const bool branch_taken_0x2048d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2048D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048D4u;
        // 0x2048d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048d4) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x2048DCu;
}
