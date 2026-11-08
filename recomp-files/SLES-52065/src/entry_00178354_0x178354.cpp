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

// Function: entry_00178354
// Address: 0x178354 - 0x178388
void entry_00178354_0x178354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178354_0x178354");
#endif

    ctx->pc = 0x178354u;

    // 0x178354: 0x0  nop
    ctx->pc = 0x178354u;
    // NOP
    // 0x178358: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x178358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17835c: 0x2463f670  addiu       $v1, $v1, -0x990
    ctx->pc = 0x17835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964848));
    // 0x178360: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178364: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x178364u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178368: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x178368u;
    {
        const bool branch_taken_0x178368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178368) {
            ctx->pc = 0x1783B8u;
            return;
        }
    }
    ctx->pc = 0x178370u;
    // 0x178370: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x178370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x178374: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x178374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x178378: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178378u;
    {
        const bool branch_taken_0x178378 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178378u;
        // 0x17837c: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178378) {
            ctx->pc = 0x178388u;
            return;
        }
    }
    ctx->pc = 0x178380u;
    // 0x178380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178380u;
    {
        const bool branch_taken_0x178380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178380) {
            ctx->pc = 0x17838Cu;
            return;
        }
    }
    ctx->pc = 0x178388u;
}
