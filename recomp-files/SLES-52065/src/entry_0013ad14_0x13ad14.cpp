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

// Function: entry_0013ad14
// Address: 0x13ad14 - 0x13ad20
void entry_0013ad14_0x13ad14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ad14_0x13ad14");
#endif

    ctx->pc = 0x13ad14u;

    // 0x13ad14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13ad14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13AD18u;
    {
        const bool branch_taken_0x13ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD18u;
        // 0x13ad1c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad18) {
            ctx->pc = 0x13AD24u;
            return;
        }
    }
    ctx->pc = 0x13AD20u;
}
