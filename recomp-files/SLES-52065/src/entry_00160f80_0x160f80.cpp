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

// Function: entry_00160f80
// Address: 0x160f80 - 0x160fa4
void entry_00160f80_0x160f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160f80_0x160f80");
#endif

    ctx->pc = 0x160f80u;

    // 0x160f80: 0x1495821  addu        $t3, $t2, $t1
    ctx->pc = 0x160f80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x160f84: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x160f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x160f88: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160F88u;
    {
        const bool branch_taken_0x160f88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f88) {
            ctx->pc = 0x160FA4u;
            return;
        }
    }
    ctx->pc = 0x160F90u;
    // 0x160f90: 0x85630002  lh          $v1, 0x2($t3)
    ctx->pc = 0x160f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x160f94: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160F94u;
    {
        const bool branch_taken_0x160f94 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f94) {
            ctx->pc = 0x160FA4u;
            return;
        }
    }
    ctx->pc = 0x160F9Cu;
    // 0x160f9c: 0x85620006  lh          $v0, 0x6($t3)
    ctx->pc = 0x160f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x160fa0: 0xa5660006  sh          $a2, 0x6($t3)
    ctx->pc = 0x160fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x160fa4u;
}
