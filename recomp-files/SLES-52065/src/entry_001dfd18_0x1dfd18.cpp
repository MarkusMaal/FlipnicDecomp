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

// Function: entry_001dfd18
// Address: 0x1dfd18 - 0x1dfd3c
void entry_001dfd18_0x1dfd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfd18_0x1dfd18");
#endif

    ctx->pc = 0x1dfd18u;

    // 0x1dfd18: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1dfd18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfd1c: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFD1Cu;
    {
        const bool branch_taken_0x1dfd1c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1dfd1c) {
            ctx->pc = 0x1DFD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFD1Cu;
            // 0x1dfd20: 0x92420068  lbu         $v0, 0x68($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD3Cu;
            return;
        }
    }
    ctx->pc = 0x1DFD24u;
    // 0x1dfd24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dfd28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1dfd28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfd2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dfd30: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x1dfd30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dfd34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dfd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1dfd38: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x1dfd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    ctx->pc = 0x1dfd3cu;
}
