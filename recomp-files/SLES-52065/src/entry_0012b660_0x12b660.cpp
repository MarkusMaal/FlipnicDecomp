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

// Function: entry_0012b660
// Address: 0x12b660 - 0x12b68c
void entry_0012b660_0x12b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b660_0x12b660");
#endif

    ctx->pc = 0x12b660u;

    // 0x12b660: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12b660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12b664: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x12b664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12b668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12B668u;
    {
        const bool branch_taken_0x12b668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B668u;
        // 0x12b66c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b668) {
            ctx->pc = 0x12B648u;
            return;
        }
    }
    ctx->pc = 0x12B670u;
    // 0x12b670: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12b674: 0x12220027  beq         $s1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x12B674u;
    {
        const bool branch_taken_0x12b674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B674u;
        // 0x12b678: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b674) {
            ctx->pc = 0x12B714u;
            return;
        }
    }
    ctx->pc = 0x12B67Cu;
    // 0x12b67c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B67Cu;
    {
        const bool branch_taken_0x12b67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b67c) {
            ctx->pc = 0x12B68Cu;
            return;
        }
    }
    ctx->pc = 0x12B684u;
    // 0x12b684: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x12B684u;
    {
        const bool branch_taken_0x12b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b684) {
            ctx->pc = 0x12B864u;
            return;
        }
    }
    ctx->pc = 0x12B68Cu;
}
