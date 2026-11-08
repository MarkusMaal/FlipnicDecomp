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

// Function: entry_00201c84
// Address: 0x201c84 - 0x201cb8
void entry_00201c84_0x201c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201c84_0x201c84");
#endif

    ctx->pc = 0x201c84u;

label_201c84:
    // 0x201c84: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x201c84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x201c88: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x201c8c: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x201c8cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201c90: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x201c90u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x201c94: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x201c94u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x201c98: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201c98u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201c9c: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x201c9cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201ca0: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x201ca0u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201ca4: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x201ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x201ca8: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x201CA8u;
    {
        const bool branch_taken_0x201ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CA8u;
        // 0x201cac: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ca8) {
            ctx->pc = 0x201C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201c84;
        }
    }
    ctx->pc = 0x201CB0u;
    // 0x201cb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x201CB0u;
    {
        const bool branch_taken_0x201cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CB0u;
        // 0x201cb4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cb0) {
            ctx->pc = 0x201CF8u;
            return;
        }
    }
    ctx->pc = 0x201CB8u;
}
