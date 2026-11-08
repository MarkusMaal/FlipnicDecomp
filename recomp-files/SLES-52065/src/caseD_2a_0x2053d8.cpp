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

// Function: caseD_2a
// Address: 0x2053d8 - 0x2053e0
void caseD_2a_0x2053d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2a_0x2053d8");
#endif

    ctx->pc = 0x2053d8u;

    // 0x2053d8: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x2053D8u;
    {
        const bool branch_taken_0x2053d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D8u;
        // 0x2053dc: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053d8) {
            ctx->pc = 0x205348u;
            return;
        }
    }
    ctx->pc = 0x2053E0u;
}
