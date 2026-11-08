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

// Function: entry_001fcc40
// Address: 0x1fcc40 - 0x1fcc50
void entry_001fcc40_0x1fcc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcc40_0x1fcc40");
#endif

    ctx->pc = 0x1fcc40u;

    // 0x1fcc40: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1fcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fcc44: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fcc44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcc48: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x1FCC48u;
    {
        const bool branch_taken_0x1fcc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC48u;
        // 0x1fcc4c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc48) {
            ctx->pc = 0x1FD384u;
            return;
        }
    }
    ctx->pc = 0x1FCC50u;
}
