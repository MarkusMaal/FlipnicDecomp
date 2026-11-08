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

// Function: entry_001d029c
// Address: 0x1d029c - 0x1d02b0
void entry_001d029c_0x1d029c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d029c_0x1d029c");
#endif

    ctx->pc = 0x1d029cu;

    // 0x1d029c: 0x0  nop
    ctx->pc = 0x1d029cu;
    // NOP
    // 0x1d02a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d02a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d02a4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1d02a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d02a8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1D02A8u;
    {
        const bool branch_taken_0x1d02a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02A8u;
        // 0x1d02ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02a8) {
            ctx->pc = 0x1D0220u;
            return;
        }
    }
    ctx->pc = 0x1D02B0u;
}
