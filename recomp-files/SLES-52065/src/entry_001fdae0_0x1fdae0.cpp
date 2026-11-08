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

// Function: entry_001fdae0
// Address: 0x1fdae0 - 0x1fdaf4
void entry_001fdae0_0x1fdae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdae0_0x1fdae0");
#endif

    ctx->pc = 0x1fdae0u;

    // 0x1fdae0: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x1fdae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x1fdae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDAE4u;
    {
        const bool branch_taken_0x1fdae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAE4u;
        // 0x1fdae8: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdae4) {
            ctx->pc = 0x1FDAF4u;
            return;
        }
    }
    ctx->pc = 0x1FDAECu;
    // 0x1fdaec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDAECu;
    {
        const bool branch_taken_0x1fdaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAECu;
        // 0x1fdaf0: 0x2446007c  addiu       $a2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaec) {
            ctx->pc = 0x1FDAF8u;
            return;
        }
    }
    ctx->pc = 0x1FDAF4u;
}
