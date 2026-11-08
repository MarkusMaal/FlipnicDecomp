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

// Function: caseD_3
// Address: 0x127bbc - 0x127bc8
void caseD_3_0x127bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x127bbc");
#endif

    ctx->pc = 0x127bbcu;

    // 0x127bbc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x127bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x127bc0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x127BC0u;
    {
        const bool branch_taken_0x127bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BC0u;
        // 0x127bc4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bc0) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BC8u;
}
