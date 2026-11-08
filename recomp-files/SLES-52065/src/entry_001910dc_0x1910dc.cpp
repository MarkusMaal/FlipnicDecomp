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

// Function: entry_001910dc
// Address: 0x1910dc - 0x1910f4
void entry_001910dc_0x1910dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001910dc_0x1910dc");
#endif

    ctx->pc = 0x1910dcu;

    // 0x1910dc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1910e0: 0x29420005  slti        $v0, $t2, 0x5
    ctx->pc = 0x1910e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1910e4: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1910E4u;
    {
        const bool branch_taken_0x1910e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1910E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E4u;
        // 0x1910e8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910e4) {
            ctx->pc = 0x19108Cu;
            return;
        }
    }
    ctx->pc = 0x1910ECu;
    // 0x1910ec: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x1910ECu;
    {
        const bool branch_taken_0x1910ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1910ec) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x1910F4u;
}
