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

// Function: entry_0015e110
// Address: 0x15e110 - 0x15e11c
void entry_0015e110_0x15e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e110_0x15e110");
#endif

    ctx->pc = 0x15e110u;

    // 0x15e110: 0x130082a  slt         $at, $t1, $s0
    ctx->pc = 0x15e110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15e114: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x15E114u;
    {
        const bool branch_taken_0x15e114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E114u;
        // 0x15e118: 0x92880  sll         $a1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e114) {
            ctx->pc = 0x15E154u;
            return;
        }
    }
    ctx->pc = 0x15E11Cu;
}
