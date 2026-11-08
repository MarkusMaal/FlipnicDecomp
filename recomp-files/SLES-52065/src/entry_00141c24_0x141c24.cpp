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

// Function: entry_00141c24
// Address: 0x141c24 - 0x141c30
void entry_00141c24_0x141c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c24_0x141c24");
#endif

    ctx->pc = 0x141c24u;

    // 0x141c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141c28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x141C28u;
    {
        const bool branch_taken_0x141c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C28u;
        // 0x141c2c: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c28) {
            ctx->pc = 0x141C34u;
            return;
        }
    }
    ctx->pc = 0x141C30u;
}
