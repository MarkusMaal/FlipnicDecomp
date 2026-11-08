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

// Function: entry_001fda9c
// Address: 0x1fda9c - 0x1fdaac
void entry_001fda9c_0x1fda9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fda9c_0x1fda9c");
#endif

    ctx->pc = 0x1fda9cu;

    // 0x1fda9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDA9Cu;
    {
        const bool branch_taken_0x1fda9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA9Cu;
        // 0x1fdaa0: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda9c) {
            ctx->pc = 0x1FDAACu;
            return;
        }
    }
    ctx->pc = 0x1FDAA4u;
    // 0x1fdaa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FDAA4u;
    {
        const bool branch_taken_0x1fdaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAA4u;
        // 0x1fdaa8: 0x24460038  addiu       $a2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaa4) {
            ctx->pc = 0x1FDAF8u;
            return;
        }
    }
    ctx->pc = 0x1FDAACu;
}
