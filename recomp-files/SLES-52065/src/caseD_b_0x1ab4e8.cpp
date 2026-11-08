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

// Function: caseD_b
// Address: 0x1ab4e8 - 0x1ab508
void caseD_b_0x1ab4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1ab4e8");
#endif

    ctx->pc = 0x1ab4e8u;

    // 0x1ab4e8: 0xa28006d8  sb          $zero, 0x6D8($s4)
    ctx->pc = 0x1ab4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab4ec: 0xa28006d9  sb          $zero, 0x6D9($s4)
    ctx->pc = 0x1ab4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab4f0: 0x8e820800  lw          $v0, 0x800($s4)
    ctx->pc = 0x1ab4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
    // 0x1ab4f4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ab4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab4f8: 0x8e8206ec  lw          $v0, 0x6EC($s4)
    ctx->pc = 0x1ab4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1772)));
    // 0x1ab4fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB4FCu;
    {
        const bool branch_taken_0x1ab4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4fc) {
            ctx->pc = 0x1AB508u;
            return;
        }
    }
    ctx->pc = 0x1AB504u;
    // 0x1ab504: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1ab504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x1ab508u;
}
