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

// Function: entry_00167ab0
// Address: 0x167ab0 - 0x167ac4
void entry_00167ab0_0x167ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167ab0_0x167ab0");
#endif

    ctx->pc = 0x167ab0u;

    // 0x167ab0: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x167ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x167ab4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167AB4u;
    {
        const bool branch_taken_0x167ab4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x167ab4) {
            ctx->pc = 0x167AC4u;
            return;
        }
    }
    ctx->pc = 0x167ABCu;
    // 0x167abc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x167abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x167ac0: 0xa4830220  sh          $v1, 0x220($a0)
    ctx->pc = 0x167ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x167ac4u;
}
