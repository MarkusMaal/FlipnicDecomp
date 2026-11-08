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

// Function: entry_0016157c
// Address: 0x16157c - 0x1615a0
void entry_0016157c_0x16157c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016157c_0x16157c");
#endif

    ctx->pc = 0x16157cu;

    // 0x16157c: 0x0  nop
    ctx->pc = 0x16157cu;
    // NOP
    // 0x161580: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x161580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x161584: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x161584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x161588: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x161588u;
    {
        const bool branch_taken_0x161588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161588u;
        // 0x16158c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161588) {
            ctx->pc = 0x161538u;
            return;
        }
    }
    ctx->pc = 0x161590u;
    // 0x161590: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x161590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x161594: 0x127182a  slt         $v1, $t1, $a3
    ctx->pc = 0x161594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x161598: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x161598u;
    {
        const bool branch_taken_0x161598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161598u;
        // 0x16159c: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161598) {
            ctx->pc = 0x16152Cu;
            return;
        }
    }
    ctx->pc = 0x1615A0u;
}
