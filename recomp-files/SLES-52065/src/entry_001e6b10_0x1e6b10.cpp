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

// Function: entry_001e6b10
// Address: 0x1e6b10 - 0x1e6b20
void entry_001e6b10_0x1e6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b10_0x1e6b10");
#endif

    ctx->pc = 0x1e6b10u;

    // 0x1e6b10: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1e6b10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1e6b14: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x1e6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1e6b18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6B18u;
    {
        const bool branch_taken_0x1e6b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B18u;
        // 0x1e6b1c: 0xad690000  sw          $t1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b18) {
            ctx->pc = 0x1E6B64u;
            return;
        }
    }
    ctx->pc = 0x1E6B20u;
}
