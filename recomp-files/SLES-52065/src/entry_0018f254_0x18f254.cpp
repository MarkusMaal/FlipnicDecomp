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

// Function: entry_0018f254
// Address: 0x18f254 - 0x18f264
void entry_0018f254_0x18f254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f254_0x18f254");
#endif

    ctx->pc = 0x18f254u;

    // 0x18f254: 0x0  nop
    ctx->pc = 0x18f254u;
    // NOP
    // 0x18f258: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x18f258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x18f25c: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x18F25Cu;
    {
        const bool branch_taken_0x18f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F25Cu;
        // 0x18f260: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f25c) {
            ctx->pc = 0x18F14Cu;
            return;
        }
    }
    ctx->pc = 0x18F264u;
}
