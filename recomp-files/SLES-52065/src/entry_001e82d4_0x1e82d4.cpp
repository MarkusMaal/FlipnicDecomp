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

// Function: entry_001e82d4
// Address: 0x1e82d4 - 0x1e8304
void entry_001e82d4_0x1e82d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e82d4_0x1e82d4");
#endif

    ctx->pc = 0x1e82d4u;

    // 0x1e82d4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E82D4u;
    {
        const bool branch_taken_0x1e82d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e82d4) {
            ctx->pc = 0x1E8304u;
            return;
        }
    }
    ctx->pc = 0x1E82DCu;
    // 0x1e82dc: 0x0  nop
    ctx->pc = 0x1e82dcu;
    // NOP
    // 0x1e82e0: 0xafdd00c4  sw          $sp, 0xC4($fp)
    ctx->pc = 0x1e82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 29));
    // 0x1e82e4: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x1e82e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e82e8: 0x85270002  lh          $a3, 0x2($t1)
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1e82ec: 0x85260004  lh          $a2, 0x4($t1)
    ctx->pc = 0x1e82ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1e82f0: 0x85230006  lh          $v1, 0x6($t1)
    ctx->pc = 0x1e82f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1e82f4: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x1e82f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e82f8: 0xa4870002  sh          $a3, 0x2($a0)
    ctx->pc = 0x1e82f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e82fc: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x1e82fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e8300: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1e8300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1e8304u;
}
