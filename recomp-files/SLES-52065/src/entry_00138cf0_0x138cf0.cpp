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

// Function: entry_00138cf0
// Address: 0x138cf0 - 0x138cfc
void entry_00138cf0_0x138cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138cf0_0x138cf0");
#endif

    ctx->pc = 0x138cf0u;

    // 0x138cf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x138cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138cf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138CF4u;
    {
        const bool branch_taken_0x138cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CF4u;
        // 0x138cf8: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cf4) {
            ctx->pc = 0x138D00u;
            return;
        }
    }
    ctx->pc = 0x138CFCu;
}
