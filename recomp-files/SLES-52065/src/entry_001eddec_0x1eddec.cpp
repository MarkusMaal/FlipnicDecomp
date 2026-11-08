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

// Function: entry_001eddec
// Address: 0x1eddec - 0x1ede08
void entry_001eddec_0x1eddec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eddec_0x1eddec");
#endif

    ctx->pc = 0x1eddecu;

label_1eddec:
    // 0x1eddec: 0xf  sync
    ctx->pc = 0x1eddecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1eddf0: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1eddf0u;
    // CACHE instruction (ignored)
    // 0x1eddf4: 0xf  sync
    ctx->pc = 0x1eddf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1eddf8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1eddf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1eddfc: 0x0  nop
    ctx->pc = 0x1eddfcu;
    // NOP
    // 0x1ede00: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EDE00u;
    {
        const bool branch_taken_0x1ede00 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x1EDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE00u;
        // 0x1ede04: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede00) {
            ctx->pc = 0x1EDDECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eddec;
        }
    }
    ctx->pc = 0x1EDE08u;
}
