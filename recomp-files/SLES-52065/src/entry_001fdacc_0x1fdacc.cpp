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

// Function: entry_001fdacc
// Address: 0x1fdacc - 0x1fdae0
void entry_001fdacc_0x1fdacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdacc_0x1fdacc");
#endif

    ctx->pc = 0x1fdaccu;

    // 0x1fdacc: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x1fdaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1fdad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDAD0u;
    {
        const bool branch_taken_0x1fdad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAD0u;
        // 0x1fdad4: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdad0) {
            ctx->pc = 0x1FDAE0u;
            return;
        }
    }
    ctx->pc = 0x1FDAD8u;
    // 0x1fdad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDAD8u;
    {
        const bool branch_taken_0x1fdad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAD8u;
        // 0x1fdadc: 0x24460077  addiu       $a2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdad8) {
            ctx->pc = 0x1FDAF8u;
            return;
        }
    }
    ctx->pc = 0x1FDAE0u;
}
