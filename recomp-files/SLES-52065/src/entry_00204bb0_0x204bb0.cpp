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

// Function: entry_00204bb0
// Address: 0x204bb0 - 0x204c00
void entry_00204bb0_0x204bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204bb0_0x204bb0");
#endif

    switch (ctx->pc) {
        case 0x204bf8u: goto label_204bf8;
        default: break;
    }

    ctx->pc = 0x204bb0u;

    // 0x204bb0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x204bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x204bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204bb8: 0x24425210  addiu       $v0, $v0, 0x5210
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21008));
    // 0x204bbc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x204bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x204bc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204bc4: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x204bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x204bc8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204bcc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204bd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204bdc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204bdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204be0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204be4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204BE4u;
    {
        const bool branch_taken_0x204be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE4u;
        // 0x204be8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204be4) {
            ctx->pc = 0x204C00u;
            return;
        }
    }
    ctx->pc = 0x204BECu;
    // 0x204bec: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204bf0: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204BF0u;
    SET_GPR_U32(ctx, 31, 0x204BF8u);
    ctx->pc = 0x204BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BF0u;
    // 0x204bf4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204BF0u, 0x204BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BF8u;
label_204bf8:
    // 0x204bf8: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x204BF8u;
    {
        const bool branch_taken_0x204bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BF8u;
        // 0x204bfc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bf8) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204C00u;
}
