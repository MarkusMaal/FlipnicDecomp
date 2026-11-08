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

// Function: entry_001baec4
// Address: 0x1baec4 - 0x1baed0
void entry_001baec4_0x1baec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baec4_0x1baec4");
#endif

    ctx->pc = 0x1baec4u;

    // 0x1baec4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1baec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAEC8u;
    {
        const bool branch_taken_0x1baec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEC8u;
        // 0x1baecc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baec8) {
            ctx->pc = 0x1BAED4u;
            return;
        }
    }
    ctx->pc = 0x1BAED0u;
}
