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

// Function: entry_00204f10
// Address: 0x204f10 - 0x204f4c
void entry_00204f10_0x204f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204f10_0x204f10");
#endif

    switch (ctx->pc) {
        case 0x204f44u: goto label_204f44;
        default: break;
    }

    ctx->pc = 0x204f10u;

    // 0x204f10: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x204f14: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x204f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x204f18: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x204f1c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x204f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x204f20: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x204f24: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x204f24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x204f28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204f2c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x204f30: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x204F30u;
    {
        const bool branch_taken_0x204f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F30u;
        // 0x204f34: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f30) {
            ctx->pc = 0x204F4Cu;
            return;
        }
    }
    ctx->pc = 0x204F38u;
    // 0x204f38: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204f3c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204F3Cu;
    SET_GPR_U32(ctx, 31, 0x204F44u);
    ctx->pc = 0x204F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F3Cu;
    // 0x204f40: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204F3Cu, 0x204F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F44u;
label_204f44:
    // 0x204f44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x204F44u;
    {
        const bool branch_taken_0x204f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F44u;
        // 0x204f48: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f44) {
            ctx->pc = 0x204F7Cu;
            return;
        }
    }
    ctx->pc = 0x204F4Cu;
}
