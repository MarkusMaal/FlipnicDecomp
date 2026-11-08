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

// Function: entry_001f4598
// Address: 0x1f4598 - 0x1f45a8
void entry_001f4598_0x1f4598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4598_0x1f4598");
#endif

    ctx->pc = 0x1f4598u;

    // 0x1f4598: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F4598u;
    {
        const bool branch_taken_0x1f4598 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1F459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4598u;
        // 0x1f459c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4598) {
            ctx->pc = 0x1F4560u;
            return;
        }
    }
    ctx->pc = 0x1F45A0u;
    // 0x1f45a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F45A0u;
    {
        const bool branch_taken_0x1f45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45A0u;
        // 0x1f45a4: 0xaed1aad8  sw          $s1, -0x5528($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294945496), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45a0) {
            ctx->pc = 0x1F45ACu;
            return;
        }
    }
    ctx->pc = 0x1F45A8u;
}
