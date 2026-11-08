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

// Function: entry_0014bd8c
// Address: 0x14bd8c - 0x14bda0
void entry_0014bd8c_0x14bd8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bd8c_0x14bd8c");
#endif

    ctx->pc = 0x14bd8cu;

    // 0x14bd8c: 0x0  nop
    ctx->pc = 0x14bd8cu;
    // NOP
    // 0x14bd90: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bd94: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x14bd98: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x14BD98u;
    {
        const bool branch_taken_0x14bd98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x14bd98) {
            ctx->pc = 0x14BD44u;
            return;
        }
    }
    ctx->pc = 0x14BDA0u;
}
