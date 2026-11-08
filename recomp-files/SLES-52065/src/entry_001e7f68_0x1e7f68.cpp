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

// Function: entry_001e7f68
// Address: 0x1e7f68 - 0x1e7f8c
void entry_001e7f68_0x1e7f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7f68_0x1e7f68");
#endif

    ctx->pc = 0x1e7f68u;

    // 0x1e7f68: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7F68u;
    {
        const bool branch_taken_0x1e7f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f68) {
            ctx->pc = 0x1E7F8Cu;
            return;
        }
    }
    ctx->pc = 0x1E7F70u;
    // 0x1e7f70: 0xafdd0124  sw          $sp, 0x124($fp)
    ctx->pc = 0x1e7f70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 292), GPR_U32(ctx, 29));
    // 0x1e7f74: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x1e7f74u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7f78: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e7f7c: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1e7f7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7f80: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1e7f80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e7f84: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x1e7f84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e7f88: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x1e7f88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e7f8cu;
}
