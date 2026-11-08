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

// Function: entry_00203380
// Address: 0x203380 - 0x20339c
void entry_00203380_0x203380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203380_0x203380");
#endif

    ctx->pc = 0x203380u;

    // 0x203380: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203384: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203384u;
    {
        const bool branch_taken_0x203384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203384u;
        // 0x203388: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203384) {
            ctx->pc = 0x20339Cu;
            return;
        }
    }
    ctx->pc = 0x20338Cu;
    // 0x20338c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x203390: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x203390u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x203394: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203398: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x203398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x20339cu;
}
