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

// Function: entry_0012b824
// Address: 0x12b824 - 0x12b838
void entry_0012b824_0x12b824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b824_0x12b824");
#endif

    ctx->pc = 0x12b824u;

    // 0x12b824: 0x0  nop
    ctx->pc = 0x12b824u;
    // NOP
    // 0x12b828: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x12b82c: 0x29420003  slti        $v0, $t2, 0x3
    ctx->pc = 0x12b82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12b830: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12B830u;
    {
        const bool branch_taken_0x12b830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B830u;
        // 0x12b834: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b830) {
            ctx->pc = 0x12B7F4u;
            return;
        }
    }
    ctx->pc = 0x12B838u;
}
