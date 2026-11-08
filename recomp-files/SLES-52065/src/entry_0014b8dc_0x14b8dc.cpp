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

// Function: entry_0014b8dc
// Address: 0x14b8dc - 0x14b908
void entry_0014b8dc_0x14b8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b8dc_0x14b8dc");
#endif

    ctx->pc = 0x14b8dcu;

    // 0x14b8dc: 0x0  nop
    ctx->pc = 0x14b8dcu;
    // NOP
    // 0x14b8e0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x14b8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b8e4: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x14b8e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14b8e8: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14B8E8u;
    {
        const bool branch_taken_0x14b8e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8e8) {
            ctx->pc = 0x14B898u;
            return;
        }
    }
    ctx->pc = 0x14B8F0u;
    // 0x14b8f0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B8F0u;
    {
        const bool branch_taken_0x14b8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8f0) {
            ctx->pc = 0x14B924u;
            return;
        }
    }
    ctx->pc = 0x14B8F8u;
    // 0x14b8f8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14b8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14b8fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14b900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B900u;
    {
        const bool branch_taken_0x14b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B900u;
        // 0x14b904: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b900) {
            ctx->pc = 0x14B90Cu;
            return;
        }
    }
    ctx->pc = 0x14B908u;
}
