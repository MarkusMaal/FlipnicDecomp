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

// Function: entry_001ff1dc
// Address: 0x1ff1dc - 0x1ff1f0
void entry_001ff1dc_0x1ff1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff1dc_0x1ff1dc");
#endif

    ctx->pc = 0x1ff1dcu;

    // 0x1ff1dc: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x1ff1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x1ff1e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF1E0u;
    {
        const bool branch_taken_0x1ff1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1E0u;
        // 0x1ff1e4: 0x81482  srl         $v0, $t0, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1e0) {
            ctx->pc = 0x1FF1F0u;
            return;
        }
    }
    ctx->pc = 0x1FF1E8u;
    // 0x1ff1e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF1E8u;
    {
        const bool branch_taken_0x1ff1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1E8u;
        // 0x1ff1ec: 0x2446007c  addiu       $a2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1e8) {
            ctx->pc = 0x1FF1F4u;
            return;
        }
    }
    ctx->pc = 0x1FF1F0u;
}
