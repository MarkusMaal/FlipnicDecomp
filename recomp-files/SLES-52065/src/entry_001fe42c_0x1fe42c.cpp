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

// Function: entry_001fe42c
// Address: 0x1fe42c - 0x1fe438
void entry_001fe42c_0x1fe42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe42c_0x1fe42c");
#endif

    ctx->pc = 0x1fe42cu;

    // 0x1fe42c: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE42Cu;
    {
        const bool branch_taken_0x1fe42c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE42Cu;
        // 0x1fe430: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe42c) {
            ctx->pc = 0x1FE45Cu;
            return;
        }
    }
    ctx->pc = 0x1FE434u;
    // 0x1fe434: 0x0  nop
    ctx->pc = 0x1fe434u;
    // NOP
    ctx->pc = 0x1fe438u;
}
