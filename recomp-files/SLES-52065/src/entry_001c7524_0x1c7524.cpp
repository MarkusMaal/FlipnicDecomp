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

// Function: entry_001c7524
// Address: 0x1c7524 - 0x1c753c
void entry_001c7524_0x1c7524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7524_0x1c7524");
#endif

    ctx->pc = 0x1c7524u;

    // 0x1c7524: 0x8e0301fc  lw          $v1, 0x1FC($s0)
    ctx->pc = 0x1c7524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x1c7528: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c752c: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1C752Cu;
    {
        const bool branch_taken_0x1c752c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C752Cu;
        // 0x1c7530: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c752c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7534u;
    // 0x1c7534: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C7534u;
    {
        const bool branch_taken_0x1c7534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7534u;
        // 0x1c7538: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7534) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C753Cu;
}
