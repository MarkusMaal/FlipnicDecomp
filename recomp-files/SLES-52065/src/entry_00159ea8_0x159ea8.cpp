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

// Function: entry_00159ea8
// Address: 0x159ea8 - 0x159ec8
void entry_00159ea8_0x159ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159ea8_0x159ea8");
#endif

    ctx->pc = 0x159ea8u;

    // 0x159ea8: 0x8603022e  lh          $v1, 0x22E($s0)
    ctx->pc = 0x159ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x159eac: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x159EACu;
    {
        const bool branch_taken_0x159eac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x159eac) {
            ctx->pc = 0x159F08u;
            return;
        }
    }
    ctx->pc = 0x159EB4u;
    // 0x159eb4: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x159EB4u;
    {
        const bool branch_taken_0x159eb4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x159eb4) {
            ctx->pc = 0x159EC8u;
            return;
        }
    }
    ctx->pc = 0x159EBCu;
    // 0x159ebc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x159ec0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159EC0u;
    {
        const bool branch_taken_0x159ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EC0u;
        // 0x159ec4: 0xa603022e  sh          $v1, 0x22E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ec0) {
            ctx->pc = 0x159F08u;
            return;
        }
    }
    ctx->pc = 0x159EC8u;
}
