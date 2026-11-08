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

// Function: entry_00204ed8
// Address: 0x204ed8 - 0x204f10
void entry_00204ed8_0x204ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204ed8_0x204ed8");
#endif

    switch (ctx->pc) {
        case 0x204f08u: goto label_204f08;
        default: break;
    }

    ctx->pc = 0x204ed8u;

    // 0x204ed8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204edc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204ee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204ee8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204eec: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204eecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204ef0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204ef4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204EF4u;
    {
        const bool branch_taken_0x204ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EF4u;
        // 0x204ef8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ef4) {
            ctx->pc = 0x204F10u;
            return;
        }
    }
    ctx->pc = 0x204EFCu;
    // 0x204efc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204f00: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204F00u;
    SET_GPR_U32(ctx, 31, 0x204F08u);
    ctx->pc = 0x204F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F00u;
    // 0x204f04: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204F00u, 0x204F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F08u;
label_204f08:
    // 0x204f08: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x204F08u;
    {
        const bool branch_taken_0x204f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F08u;
        // 0x204f0c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f08) {
            ctx->pc = 0x204F7Cu;
            return;
        }
    }
    ctx->pc = 0x204F10u;
}
