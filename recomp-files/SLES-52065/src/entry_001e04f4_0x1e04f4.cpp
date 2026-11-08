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

// Function: entry_001e04f4
// Address: 0x1e04f4 - 0x1e051c
void entry_001e04f4_0x1e04f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e04f4_0x1e04f4");
#endif

    ctx->pc = 0x1e04f4u;

    // 0x1e04f4: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e04f8: 0x24c3a310  addiu       $v1, $a2, -0x5CF0
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943504));
    // 0x1e04fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0500: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e0500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0508: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e050c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0510: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x1e0510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e0514: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0518: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x1e0518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x1e051cu;
}
