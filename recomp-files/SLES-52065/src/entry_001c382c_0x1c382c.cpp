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

// Function: entry_001c382c
// Address: 0x1c382c - 0x1c3838
void entry_001c382c_0x1c382c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c382c_0x1c382c");
#endif

    ctx->pc = 0x1c382cu;

    // 0x1c382c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3830: 0x100002f5  b           . + 4 + (0x2F5 << 2)
    ctx->pc = 0x1C3830u;
    {
        const bool branch_taken_0x1c3830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3830u;
        // 0x1c3834: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3830) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3838u;
}
