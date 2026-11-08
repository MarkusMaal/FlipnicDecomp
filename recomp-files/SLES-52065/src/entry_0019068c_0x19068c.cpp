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

// Function: entry_0019068c
// Address: 0x19068c - 0x19069c
void entry_0019068c_0x19068c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019068c_0x19068c");
#endif

    ctx->pc = 0x19068cu;

    // 0x19068c: 0x0  nop
    ctx->pc = 0x19068cu;
    // NOP
    // 0x190690: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x190690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x190694: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x190694u;
    {
        const bool branch_taken_0x190694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190694u;
        // 0x190698: 0x24080  sll         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190694) {
            ctx->pc = 0x1906C8u;
            return;
        }
    }
    ctx->pc = 0x19069Cu;
}
