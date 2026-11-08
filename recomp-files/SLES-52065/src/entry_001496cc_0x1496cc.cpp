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

// Function: entry_001496cc
// Address: 0x1496cc - 0x1496d8
void entry_001496cc_0x1496cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001496cc_0x1496cc");
#endif

    ctx->pc = 0x1496ccu;

    // 0x1496cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1496ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1496d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1496D0u;
    {
        const bool branch_taken_0x1496d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496D0u;
        // 0x1496d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496d0) {
            ctx->pc = 0x149710u;
            return;
        }
    }
    ctx->pc = 0x1496D8u;
}
