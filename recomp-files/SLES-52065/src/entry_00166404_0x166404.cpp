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

// Function: entry_00166404
// Address: 0x166404 - 0x166424
void entry_00166404_0x166404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166404_0x166404");
#endif

    ctx->pc = 0x166404u;

    // 0x166404: 0x86020234  lh          $v0, 0x234($s0)
    ctx->pc = 0x166404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x166408: 0xa6020222  sh          $v0, 0x222($s0)
    ctx->pc = 0x166408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x16640c: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x166410: 0x8602022c  lh          $v0, 0x22C($s0)
    ctx->pc = 0x166410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x166414: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166414u;
    {
        const bool branch_taken_0x166414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166414) {
            ctx->pc = 0x166424u;
            return;
        }
    }
    ctx->pc = 0x16641Cu;
    // 0x16641c: 0x86020230  lh          $v0, 0x230($s0)
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x166420: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x166420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x166424u;
}
