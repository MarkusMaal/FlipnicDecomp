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

// Function: entry_00158e90
// Address: 0x158e90 - 0x158eac
void entry_00158e90_0x158e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158e90_0x158e90");
#endif

    ctx->pc = 0x158e90u;

    // 0x158e90: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x158e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158e94: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x158E94u;
    {
        const bool branch_taken_0x158e94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e94) {
            ctx->pc = 0x158EACu;
            return;
        }
    }
    ctx->pc = 0x158E9Cu;
    // 0x158e9c: 0x82620029  lb          $v0, 0x29($s3)
    ctx->pc = 0x158e9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x158ea0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x158ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158EA4u;
    {
        const bool branch_taken_0x158ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EA4u;
        // 0x158ea8: 0xa24201d3  sb          $v0, 0x1D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ea4) {
            ctx->pc = 0x158EB4u;
            return;
        }
    }
    ctx->pc = 0x158EACu;
}
