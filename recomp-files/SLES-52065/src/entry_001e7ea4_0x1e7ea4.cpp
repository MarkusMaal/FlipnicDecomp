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

// Function: entry_001e7ea4
// Address: 0x1e7ea4 - 0x1e7ebc
void entry_001e7ea4_0x1e7ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7ea4_0x1e7ea4");
#endif

    ctx->pc = 0x1e7ea4u;

    // 0x1e7ea4: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x1e7ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x1e7ea8: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x1e7ea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e7eac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7EACu;
    {
        const bool branch_taken_0x1e7eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7eac) {
            ctx->pc = 0x1E7EBCu;
            return;
        }
    }
    ctx->pc = 0x1E7EB4u;
    // 0x1e7eb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7EB4u;
    {
        const bool branch_taken_0x1e7eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EB4u;
        // 0x1e7eb8: 0x14a040  sll         $s4, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7eb4) {
            ctx->pc = 0x1E7EC4u;
            return;
        }
    }
    ctx->pc = 0x1E7EBCu;
}
