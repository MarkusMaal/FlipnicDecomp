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

// Function: entry_002047dc
// Address: 0x2047dc - 0x2047f8
void entry_002047dc_0x2047dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002047dc_0x2047dc");
#endif

    ctx->pc = 0x2047dcu;

    // 0x2047dc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2047dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2047e0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2047e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2047e4: 0x1a000197  blez        $s0, . + 4 + (0x197 << 2)
    ctx->pc = 0x2047E4u;
    {
        const bool branch_taken_0x2047e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2047E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047E4u;
        // 0x2047e8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047e4) {
            ctx->pc = 0x204E44u;
            return;
        }
    }
    ctx->pc = 0x2047ECu;
    // 0x2047ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2047ECu;
    {
        const bool branch_taken_0x2047ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2047F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047ECu;
        // 0x2047f0: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047ec) {
            ctx->pc = 0x204858u;
            return;
        }
    }
    ctx->pc = 0x2047F4u;
    // 0x2047f4: 0x0  nop
    ctx->pc = 0x2047f4u;
    // NOP
    ctx->pc = 0x2047f8u;
}
