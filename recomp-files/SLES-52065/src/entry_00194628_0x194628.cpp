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

// Function: entry_00194628
// Address: 0x194628 - 0x194634
void entry_00194628_0x194628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194628_0x194628");
#endif

    ctx->pc = 0x194628u;

    // 0x194628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19462c: 0x100005d1  b           . + 4 + (0x5D1 << 2)
    ctx->pc = 0x19462Cu;
    {
        const bool branch_taken_0x19462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19462Cu;
        // 0x194630: 0xae83033c  sw          $v1, 0x33C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19462c) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194634u;
}
