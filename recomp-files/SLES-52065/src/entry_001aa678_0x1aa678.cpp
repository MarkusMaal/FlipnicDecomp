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

// Function: entry_001aa678
// Address: 0x1aa678 - 0x1aa68c
void entry_001aa678_0x1aa678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa678_0x1aa678");
#endif

    ctx->pc = 0x1aa678u;

    // 0x1aa678: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1aa678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1aa67c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1aa67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aa680: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AA680u;
    {
        const bool branch_taken_0x1aa680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa680) {
            ctx->pc = 0x1AA660u;
            return;
        }
    }
    ctx->pc = 0x1AA688u;
    // 0x1aa688: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1aa688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x1aa68cu;
}
