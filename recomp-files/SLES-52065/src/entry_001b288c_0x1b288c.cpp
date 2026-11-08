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

// Function: entry_001b288c
// Address: 0x1b288c - 0x1b28a0
void entry_001b288c_0x1b288c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b288c_0x1b288c");
#endif

    ctx->pc = 0x1b288cu;

    // 0x1b288c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1b288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b2890: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x1b2890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b2894: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2894u;
    {
        const bool branch_taken_0x1b2894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2894) {
            ctx->pc = 0x1B28A0u;
            return;
        }
    }
    ctx->pc = 0x1B289Cu;
    // 0x1b289c: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1b289cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x1b28a0u;
}
