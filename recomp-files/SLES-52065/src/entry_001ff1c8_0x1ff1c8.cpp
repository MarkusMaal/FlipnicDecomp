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

// Function: entry_001ff1c8
// Address: 0x1ff1c8 - 0x1ff1dc
void entry_001ff1c8_0x1ff1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff1c8_0x1ff1c8");
#endif

    ctx->pc = 0x1ff1c8u;

    // 0x1ff1c8: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x1ff1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1ff1cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF1CCu;
    {
        const bool branch_taken_0x1ff1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1CCu;
        // 0x1ff1d0: 0x813c2  srl         $v0, $t0, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1cc) {
            ctx->pc = 0x1FF1DCu;
            return;
        }
    }
    ctx->pc = 0x1FF1D4u;
    // 0x1ff1d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF1D4u;
    {
        const bool branch_taken_0x1ff1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1D4u;
        // 0x1ff1d8: 0x24460077  addiu       $a2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1d4) {
            ctx->pc = 0x1FF1F4u;
            return;
        }
    }
    ctx->pc = 0x1FF1DCu;
}
