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

// Function: entry_00190838
// Address: 0x190838 - 0x19084c
void entry_00190838_0x190838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190838_0x190838");
#endif

    ctx->pc = 0x190838u;

    // 0x190838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19083c: 0xa0601684  sb          $zero, 0x1684($v1)
    ctx->pc = 0x19083cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x190840: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x190844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x190844u;
    {
        const bool branch_taken_0x190844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190844u;
        // 0x190848: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190844) {
            ctx->pc = 0x19085Cu;
            return;
        }
    }
    ctx->pc = 0x19084Cu;
}
