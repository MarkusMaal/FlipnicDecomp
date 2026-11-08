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

// Function: entry_001e7cac
// Address: 0x1e7cac - 0x1e7cd4
void entry_001e7cac_0x1e7cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7cac_0x1e7cac");
#endif

    ctx->pc = 0x1e7cacu;

    // 0x1e7cac: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7CACu;
    {
        const bool branch_taken_0x1e7cac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7cac) {
            ctx->pc = 0x1E7CD4u;
            return;
        }
    }
    ctx->pc = 0x1E7CB4u;
    // 0x1e7cb4: 0x0  nop
    ctx->pc = 0x1e7cb4u;
    // NOP
    // 0x1e7cb8: 0xafdd00a4  sw          $sp, 0xA4($fp)
    ctx->pc = 0x1e7cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    // 0x1e7cbc: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x1e7cbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7cc0: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1e7cc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e7cc4: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x1e7cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7cc8: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1e7cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e7ccc: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x1e7cccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7cd0: 0xa5040004  sh          $a0, 0x4($t0)
    ctx->pc = 0x1e7cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1e7cd4u;
}
