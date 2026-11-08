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

// Function: entry_001eb17c
// Address: 0x1eb17c - 0x1eb188
void entry_001eb17c_0x1eb17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb17c_0x1eb17c");
#endif

    ctx->pc = 0x1eb17cu;

    // 0x1eb17c: 0x0  nop
    ctx->pc = 0x1eb17cu;
    // NOP
    // 0x1eb180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB180u;
    {
        const bool branch_taken_0x1eb180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB180u;
        // 0x1eb184: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb180) {
            ctx->pc = 0x1EB1A0u;
            return;
        }
    }
    ctx->pc = 0x1EB188u;
}
