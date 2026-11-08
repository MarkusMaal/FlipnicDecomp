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

// Function: entry_0015f09c
// Address: 0x15f09c - 0x15f0b0
void entry_0015f09c_0x15f09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f09c_0x15f09c");
#endif

    ctx->pc = 0x15f09cu;

    // 0x15f09c: 0x0  nop
    ctx->pc = 0x15f09cu;
    // NOP
    // 0x15f0a0: 0x8e433dd8  lw          $v1, 0x3DD8($s2)
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15832)));
    // 0x15f0a4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15f0a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15f0a8: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x15F0A8u;
    {
        const bool branch_taken_0x15f0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f0a8) {
            ctx->pc = 0x15EF90u;
            return;
        }
    }
    ctx->pc = 0x15F0B0u;
}
