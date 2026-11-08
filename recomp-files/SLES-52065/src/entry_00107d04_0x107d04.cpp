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

// Function: entry_00107d04
// Address: 0x107d04 - 0x107d10
void entry_00107d04_0x107d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d04_0x107d04");
#endif

    ctx->pc = 0x107d04u;

    // 0x107d04: 0x0  nop
    ctx->pc = 0x107d04u;
    // NOP
    // 0x107d08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x107D08u;
    {
        const bool branch_taken_0x107d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D08u;
        // 0x107d0c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d08) {
            ctx->pc = 0x107DD0u;
            return;
        }
    }
    ctx->pc = 0x107D10u;
}
