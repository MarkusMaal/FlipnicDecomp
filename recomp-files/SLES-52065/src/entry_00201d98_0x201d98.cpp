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

// Function: entry_00201d98
// Address: 0x201d98 - 0x201dc4
void entry_00201d98_0x201d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201d98_0x201d98");
#endif

    ctx->pc = 0x201d98u;

label_201d98:
    // 0x201d98: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x201d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201d9c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x201d9cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x201da0: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x201da0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201da4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201da4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201da8: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x201da8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201dac: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x201dacu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x201db0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x201db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x201db4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201DB4u;
    {
        const bool branch_taken_0x201db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201db4) {
            ctx->pc = 0x201DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201DB4u;
            // 0x201db8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201d98;
        }
    }
    ctx->pc = 0x201DBCu;
    // 0x201dbc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x201DBCu;
    {
        const bool branch_taken_0x201dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DBCu;
        // 0x201dc0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dbc) {
            ctx->pc = 0x201E34u;
            return;
        }
    }
    ctx->pc = 0x201DC4u;
}
