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

// Function: entry_0015ffc4
// Address: 0x15ffc4 - 0x15ffd4
void entry_0015ffc4_0x15ffc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ffc4_0x15ffc4");
#endif

    ctx->pc = 0x15ffc4u;

    // 0x15ffc4: 0x0  nop
    ctx->pc = 0x15ffc4u;
    // NOP
    // 0x15ffc8: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x15ffc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15ffcc: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x15FFCCu;
    {
        const bool branch_taken_0x15ffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFCCu;
        // 0x15ffd0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffcc) {
            ctx->pc = 0x15FF54u;
            return;
        }
    }
    ctx->pc = 0x15FFD4u;
}
