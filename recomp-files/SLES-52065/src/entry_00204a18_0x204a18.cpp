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

// Function: entry_00204a18
// Address: 0x204a18 - 0x204a6c
void entry_00204a18_0x204a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204a18_0x204a18");
#endif

    switch (ctx->pc) {
        case 0x204a60u: goto label_204a60;
        default: break;
    }

    ctx->pc = 0x204a18u;

    // 0x204a18: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x204a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x204a1c: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x204A1Cu;
    {
        const bool branch_taken_0x204a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204a1c) {
            ctx->pc = 0x204A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204A1Cu;
            // 0x204a20: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204B6Cu;
            return;
        }
    }
    ctx->pc = 0x204A24u;
    // 0x204a24: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x204a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x204a28: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204a2c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204a34: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204a38: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204a40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x204a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204a44: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204a48: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204a4c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204A4Cu;
    {
        const bool branch_taken_0x204a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A4Cu;
        // 0x204a50: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a4c) {
            ctx->pc = 0x204A6Cu;
            return;
        }
    }
    ctx->pc = 0x204A54u;
    // 0x204a54: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204a58: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204A58u;
    SET_GPR_U32(ctx, 31, 0x204A60u);
    ctx->pc = 0x204A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A58u;
    // 0x204a5c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204A58u, 0x204A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A60u;
label_204a60:
    // 0x204a60: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x204A60u;
    {
        const bool branch_taken_0x204a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A60u;
        // 0x204a64: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a60) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204A68u;
    // 0x204a68: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x204a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    ctx->pc = 0x204a6cu;
}
