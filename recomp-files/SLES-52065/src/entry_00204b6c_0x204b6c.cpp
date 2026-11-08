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

// Function: entry_00204b6c
// Address: 0x204b6c - 0x204bb0
void entry_00204b6c_0x204b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204b6c_0x204b6c");
#endif

    switch (ctx->pc) {
        case 0x204ba4u: goto label_204ba4;
        default: break;
    }

    ctx->pc = 0x204b6cu;

    // 0x204b6c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204b70: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204b78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204b7c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x204b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204b80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204b84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x204b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204b88: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x204b88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204b8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204b90: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204B90u;
    {
        const bool branch_taken_0x204b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B90u;
        // 0x204b94: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b90) {
            ctx->pc = 0x204BB0u;
            return;
        }
    }
    ctx->pc = 0x204B98u;
    // 0x204b98: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204b9c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204B9Cu;
    SET_GPR_U32(ctx, 31, 0x204BA4u);
    ctx->pc = 0x204BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B9Cu;
    // 0x204ba0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204B9Cu, 0x204BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BA4u;
label_204ba4:
    // 0x204ba4: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x204BA4u;
    {
        const bool branch_taken_0x204ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BA4u;
        // 0x204ba8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ba4) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204BACu;
    // 0x204bac: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    ctx->pc = 0x204bb0u;
}
