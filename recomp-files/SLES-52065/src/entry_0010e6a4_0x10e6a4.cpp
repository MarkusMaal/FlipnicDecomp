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

// Function: entry_0010e6a4
// Address: 0x10e6a4 - 0x10e6b4
void entry_0010e6a4_0x10e6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e6a4_0x10e6a4");
#endif

    ctx->pc = 0x10e6a4u;

    // 0x10e6a4: 0x0  nop
    ctx->pc = 0x10e6a4u;
    // NOP
    // 0x10e6a8: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10e6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10e6ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10E6ACu;
    {
        const bool branch_taken_0x10e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6ACu;
        // 0x10e6b0: 0x23880  sll         $a3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6ac) {
            ctx->pc = 0x10E6E8u;
            return;
        }
    }
    ctx->pc = 0x10E6B4u;
}
