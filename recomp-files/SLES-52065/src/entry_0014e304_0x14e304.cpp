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

// Function: entry_0014e304
// Address: 0x14e304 - 0x14e32c
void entry_0014e304_0x14e304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e304_0x14e304");
#endif

    ctx->pc = 0x14e304u;

    // 0x14e304: 0x0  nop
    ctx->pc = 0x14e304u;
    // NOP
    // 0x14e308: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14e308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e30c: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x14e310: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e314: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x14e314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e318: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e31c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E31Cu;
    {
        const bool branch_taken_0x14e31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E31Cu;
        // 0x14e320: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e31c) {
            ctx->pc = 0x14E2B4u;
            return;
        }
    }
    ctx->pc = 0x14E324u;
    // 0x14e324: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14E324u;
    {
        const bool branch_taken_0x14e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e324) {
            ctx->pc = 0x14E424u;
            return;
        }
    }
    ctx->pc = 0x14E32Cu;
}
