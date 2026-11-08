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

// Function: entry_001dfd08
// Address: 0x1dfd08 - 0x1dfd18
void entry_001dfd08_0x1dfd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfd08_0x1dfd08");
#endif

    ctx->pc = 0x1dfd08u;

    // 0x1dfd08: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1dfd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1dfd0c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1DFD0Cu;
    {
        const bool branch_taken_0x1dfd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD0Cu;
        // 0x1dfd10: 0x2451a040  addiu       $s1, $v0, -0x5FC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd0c) {
            ctx->pc = 0x1DFDD8u;
            return;
        }
    }
    ctx->pc = 0x1DFD14u;
    // 0x1dfd14: 0x0  nop
    ctx->pc = 0x1dfd14u;
    // NOP
    ctx->pc = 0x1dfd18u;
}
