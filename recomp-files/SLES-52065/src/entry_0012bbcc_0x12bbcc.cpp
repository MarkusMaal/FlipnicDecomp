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

// Function: entry_0012bbcc
// Address: 0x12bbcc - 0x12bbd8
void entry_0012bbcc_0x12bbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bbcc_0x12bbcc");
#endif

    ctx->pc = 0x12bbccu;

    // 0x12bbcc: 0x0  nop
    ctx->pc = 0x12bbccu;
    // NOP
    // 0x12bbd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12BBD0u;
    {
        const bool branch_taken_0x12bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBD0u;
        // 0x12bbd4: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbd0) {
            ctx->pc = 0x12BBF0u;
            return;
        }
    }
    ctx->pc = 0x12BBD8u;
}
