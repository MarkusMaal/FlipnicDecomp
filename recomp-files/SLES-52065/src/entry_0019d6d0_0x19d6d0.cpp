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

// Function: entry_0019d6d0
// Address: 0x19d6d0 - 0x19d6e4
void entry_0019d6d0_0x19d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d6d0_0x19d6d0");
#endif

    ctx->pc = 0x19d6d0u;

    // 0x19d6d0: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x19d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x19d6d4: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x19d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x19d6d8: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D6D8u;
    {
        const bool branch_taken_0x19d6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19d6d8) {
            ctx->pc = 0x19D6E4u;
            return;
        }
    }
    ctx->pc = 0x19D6E0u;
    // 0x19d6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19d6e4u;
}
