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

// Function: entry_002049dc
// Address: 0x2049dc - 0x204a18
void entry_002049dc_0x2049dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002049dc_0x2049dc");
#endif

    ctx->pc = 0x2049dcu;

    // 0x2049dc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2049e0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2049e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2049e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2049e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2049e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2049e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2049ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2049ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2049f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2049f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2049f4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2049f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2049f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2049fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204a00: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x204a00u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204a04: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204a08: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x204A08u;
    {
        const bool branch_taken_0x204a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A08u;
        // 0x204a0c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a08) {
            ctx->pc = 0x204E44u;
            return;
        }
    }
    ctx->pc = 0x204A10u;
    // 0x204a10: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x204A10u;
    {
        const bool branch_taken_0x204a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A10u;
        // 0x204a14: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a10) {
            ctx->pc = 0x204E34u;
            return;
        }
    }
    ctx->pc = 0x204A18u;
}
