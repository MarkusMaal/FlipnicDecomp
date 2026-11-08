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

// Function: entry_002008bc
// Address: 0x2008bc - 0x2008dc
void entry_002008bc_0x2008bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002008bc_0x2008bc");
#endif

    ctx->pc = 0x2008bcu;

    // 0x2008bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2008c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2008c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2008c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2008c8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2008c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2008cc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2008ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2008d0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2008d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2008D4u;
    {
        const bool branch_taken_0x2008d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008D4u;
        // 0x2008d8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008d4) {
            ctx->pc = 0x2008FCu;
            return;
        }
    }
    ctx->pc = 0x2008DCu;
}
