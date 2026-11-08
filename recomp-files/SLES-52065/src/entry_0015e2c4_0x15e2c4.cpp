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

// Function: entry_0015e2c4
// Address: 0x15e2c4 - 0x15e2d8
void entry_0015e2c4_0x15e2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e2c4_0x15e2c4");
#endif

    ctx->pc = 0x15e2c4u;

    // 0x15e2c4: 0x0  nop
    ctx->pc = 0x15e2c4u;
    // NOP
    // 0x15e2c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e2cc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x15e2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e2d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x15E2D0u;
    {
        const bool branch_taken_0x15e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2D0u;
        // 0x15e2d4: 0xa482022a  sh          $v0, 0x22A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2d0) {
            ctx->pc = 0x15E418u;
            return;
        }
    }
    ctx->pc = 0x15E2D8u;
}
