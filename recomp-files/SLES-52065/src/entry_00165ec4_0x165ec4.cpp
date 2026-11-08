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

// Function: entry_00165ec4
// Address: 0x165ec4 - 0x165ee0
void entry_00165ec4_0x165ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165ec4_0x165ec4");
#endif

    ctx->pc = 0x165ec4u;

    // 0x165ec4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x165EC4u;
    {
        const bool branch_taken_0x165ec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ec4) {
            ctx->pc = 0x165EE0u;
            return;
        }
    }
    ctx->pc = 0x165ECCu;
    // 0x165ecc: 0xa4800226  sh          $zero, 0x226($a0)
    ctx->pc = 0x165eccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x165ed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165ed4: 0xa4830224  sh          $v1, 0x224($a0)
    ctx->pc = 0x165ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x165ed8: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x165ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x165edc: 0xa4830222  sh          $v1, 0x222($a0)
    ctx->pc = 0x165edcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x165ee0u;
}
