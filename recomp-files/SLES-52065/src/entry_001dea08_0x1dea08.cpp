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

// Function: entry_001dea08
// Address: 0x1dea08 - 0x1dea20
void entry_001dea08_0x1dea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dea08_0x1dea08");
#endif

    ctx->pc = 0x1dea08u;

    // 0x1dea08: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x1dea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x1dea0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEA0Cu;
    {
        const bool branch_taken_0x1dea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA0Cu;
        // 0x1dea10: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea0c) {
            ctx->pc = 0x1DEA20u;
            return;
        }
    }
    ctx->pc = 0x1DEA14u;
    // 0x1dea14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dea14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea18: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1dea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1dea1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1dea20u;
}
