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

// Function: entry_001df8b8
// Address: 0x1df8b8 - 0x1df8c8
void entry_001df8b8_0x1df8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8b8_0x1df8b8");
#endif

    ctx->pc = 0x1df8b8u;

    // 0x1df8b8: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1df8bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF8BCu;
    {
        const bool branch_taken_0x1df8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8BCu;
        // 0x1df8c0: 0xac490018  sw          $t1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8bc) {
            ctx->pc = 0x1DF8D4u;
            return;
        }
    }
    ctx->pc = 0x1DF8C4u;
    // 0x1df8c4: 0x0  nop
    ctx->pc = 0x1df8c4u;
    // NOP
    ctx->pc = 0x1df8c8u;
}
