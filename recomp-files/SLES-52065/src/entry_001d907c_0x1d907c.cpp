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

// Function: entry_001d907c
// Address: 0x1d907c - 0x1d9088
void entry_001d907c_0x1d907c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d907c_0x1d907c");
#endif

    ctx->pc = 0x1d907cu;

    // 0x1d907c: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1d907cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1d9080: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9080u;
    {
        const bool branch_taken_0x1d9080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9080u;
        // 0x1d9084: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9080) {
            ctx->pc = 0x1D9058u;
            return;
        }
    }
    ctx->pc = 0x1D9088u;
}
