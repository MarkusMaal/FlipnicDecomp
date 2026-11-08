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

// Function: entry_0016e378
// Address: 0x16e378 - 0x16e394
void entry_0016e378_0x16e378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e378_0x16e378");
#endif

    ctx->pc = 0x16e378u;

    // 0x16e378: 0x86430214  lh          $v1, 0x214($s2)
    ctx->pc = 0x16e378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x16e37c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e37cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e380: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x16E380u;
    {
        const bool branch_taken_0x16e380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E380u;
        // 0x16e384: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e380) {
            ctx->pc = 0x16E328u;
            return;
        }
    }
    ctx->pc = 0x16E388u;
    // 0x16e388: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x16e388u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x16e38c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16E38Cu;
    {
        const bool branch_taken_0x16e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E38Cu;
        // 0x16e390: 0xa6400216  sh          $zero, 0x216($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 534), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e38c) {
            ctx->pc = 0x16E3C4u;
            return;
        }
    }
    ctx->pc = 0x16E394u;
}
