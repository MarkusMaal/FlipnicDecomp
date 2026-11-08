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

// Function: entry_00201a14
// Address: 0x201a14 - 0x201a40
void entry_00201a14_0x201a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201a14_0x201a14");
#endif

    ctx->pc = 0x201a14u;

label_201a14:
    // 0x201a14: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x201a14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201a18: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x201a18u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x201a1c: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x201a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x201a20: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201a20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201a24: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x201a24u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201a28: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x201a28u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x201a2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201a30: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201A30u;
    {
        const bool branch_taken_0x201a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a30) {
            ctx->pc = 0x201A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A30u;
            // 0x201a34: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a14;
        }
    }
    ctx->pc = 0x201A38u;
    // 0x201a38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x201A38u;
    {
        const bool branch_taken_0x201a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A38u;
        // 0x201a3c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a38) {
            ctx->pc = 0x201A84u;
            return;
        }
    }
    ctx->pc = 0x201A40u;
}
