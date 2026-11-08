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

// Function: entry_00165e40
// Address: 0x165e40 - 0x165e64
void entry_00165e40_0x165e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165e40_0x165e40");
#endif

    ctx->pc = 0x165e40u;

    // 0x165e40: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x165e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x165e44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x165E44u;
    {
        const bool branch_taken_0x165e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e44) {
            ctx->pc = 0x165E68u;
            return;
        }
    }
    ctx->pc = 0x165E4Cu;
    // 0x165e4c: 0x84830222  lh          $v1, 0x222($a0)
    ctx->pc = 0x165e4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 546)));
    // 0x165e50: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x165E50u;
    {
        const bool branch_taken_0x165e50 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x165e50) {
            ctx->pc = 0x165E64u;
            return;
        }
    }
    ctx->pc = 0x165E58u;
    // 0x165e58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x165e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x165e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165E5Cu;
    {
        const bool branch_taken_0x165e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E5Cu;
        // 0x165e60: 0xa4830222  sh          $v1, 0x222($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e5c) {
            ctx->pc = 0x165E68u;
            return;
        }
    }
    ctx->pc = 0x165E64u;
}
