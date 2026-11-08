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

// Function: entry_0012c484
// Address: 0x12c484 - 0x12c4a4
void entry_0012c484_0x12c484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c484_0x12c484");
#endif

    ctx->pc = 0x12c484u;

    // 0x12c484: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x12c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c488: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C488u;
    {
        const bool branch_taken_0x12c488 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C488u;
        // 0x12c48c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c488) {
            ctx->pc = 0x12C4ACu;
            return;
        }
    }
    ctx->pc = 0x12C490u;
    // 0x12c490: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c494: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C494u;
    {
        const bool branch_taken_0x12c494 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C494u;
        // 0x12c498: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c494) {
            ctx->pc = 0x12C4A4u;
            return;
        }
    }
    ctx->pc = 0x12C49Cu;
    // 0x12c49c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C49Cu;
    {
        const bool branch_taken_0x12c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C49Cu;
        // 0x12c4a0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c49c) {
            ctx->pc = 0x12C4B4u;
            return;
        }
    }
    ctx->pc = 0x12C4A4u;
}
