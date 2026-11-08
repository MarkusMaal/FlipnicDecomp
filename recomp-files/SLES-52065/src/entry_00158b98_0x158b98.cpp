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

// Function: entry_00158b98
// Address: 0x158b98 - 0x158bac
void entry_00158b98_0x158b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b98_0x158b98");
#endif

    ctx->pc = 0x158b98u;

    // 0x158b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158b9c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158BACu;
            return;
        }
    }
    ctx->pc = 0x158BA4u;
    // 0x158ba4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x158BA4u;
    {
        const bool branch_taken_0x158ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BA4u;
        // 0x158ba8: 0xa08301f2  sb          $v1, 0x1F2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 498), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ba4) {
            ctx->pc = 0x158BF8u;
            return;
        }
    }
    ctx->pc = 0x158BACu;
}
