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
// Address: 0x1ac6f8 - 0x1ac718
void caseD_b_0x1ac6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1ac6f8");
#endif

    ctx->pc = 0x1ac6f8u;

    // 0x1ac6f8: 0xa22006d8  sb          $zero, 0x6D8($s1)
    ctx->pc = 0x1ac6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac6fc: 0xa22006d9  sb          $zero, 0x6D9($s1)
    ctx->pc = 0x1ac6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac700: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x1ac704: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ac704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac708: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x1ac708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x1ac70c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AC70Cu;
    {
        const bool branch_taken_0x1ac70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac70c) {
            ctx->pc = 0x1AC718u;
            return;
        }
    }
    ctx->pc = 0x1AC714u;
    // 0x1ac714: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1ac714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x1ac718u;
}
