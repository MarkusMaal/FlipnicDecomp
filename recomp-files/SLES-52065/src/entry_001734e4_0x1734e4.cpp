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

// Function: entry_001734e4
// Address: 0x1734e4 - 0x173520
void entry_001734e4_0x1734e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001734e4_0x1734e4");
#endif

    ctx->pc = 0x1734e4u;

    // 0x1734e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1734e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1734e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1734ec: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1734ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1734f0: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1734f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1734f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1734f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1734f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1734fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1734fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x173500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x173504: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x173504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x173508: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17350c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173510: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x173510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x173514: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x173514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x173518: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x173518u;
    {
        const bool branch_taken_0x173518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173518u;
        // 0x17351c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173518) {
            ctx->pc = 0x1735D8u;
            return;
        }
    }
    ctx->pc = 0x173520u;
}
