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

// Function: entry_00160ef8
// Address: 0x160ef8 - 0x160f28
void entry_00160ef8_0x160ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ef8_0x160ef8");
#endif

    ctx->pc = 0x160ef8u;

    // 0x160ef8: 0x1095021  addu        $t2, $t0, $t1
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x160efc: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x160efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x160f00: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160F00u;
    {
        const bool branch_taken_0x160f00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f00) {
            ctx->pc = 0x160F28u;
            return;
        }
    }
    ctx->pc = 0x160F08u;
    // 0x160f08: 0x85430002  lh          $v1, 0x2($t2)
    ctx->pc = 0x160f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x160f0c: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160F0Cu;
    {
        const bool branch_taken_0x160f0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f0c) {
            ctx->pc = 0x160F28u;
            return;
        }
    }
    ctx->pc = 0x160F14u;
    // 0x160f14: 0x85430004  lh          $v1, 0x4($t2)
    ctx->pc = 0x160f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x160f18: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160F18u;
    {
        const bool branch_taken_0x160f18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f18) {
            ctx->pc = 0x160F28u;
            return;
        }
    }
    ctx->pc = 0x160F20u;
    // 0x160f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160F20u;
    {
        const bool branch_taken_0x160f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f20) {
            ctx->pc = 0x160F3Cu;
            return;
        }
    }
    ctx->pc = 0x160F28u;
}
