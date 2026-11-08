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

// Function: entry_0016e4d4
// Address: 0x16e4d4 - 0x16e4fc
void entry_0016e4d4_0x16e4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e4d4_0x16e4d4");
#endif

    ctx->pc = 0x16e4d4u;

    // 0x16e4d4: 0x0  nop
    ctx->pc = 0x16e4d4u;
    // NOP
    // 0x16e4d8: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e4dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e4e0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16E4E0u;
    {
        const bool branch_taken_0x16e4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e4e0) {
            ctx->pc = 0x16E480u;
            return;
        }
    }
    ctx->pc = 0x16E4E8u;
    // 0x16e4e8: 0x86230218  lh          $v1, 0x218($s1)
    ctx->pc = 0x16e4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x16e4ec: 0x4610023  bgez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x16E4ECu;
    {
        const bool branch_taken_0x16e4ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4ECu;
        // 0x16e4f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4ec) {
            ctx->pc = 0x16E57Cu;
            return;
        }
    }
    ctx->pc = 0x16E4F4u;
    // 0x16e4f4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16E4F4u;
    {
        const bool branch_taken_0x16e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4f4) {
            ctx->pc = 0x16E55Cu;
            return;
        }
    }
    ctx->pc = 0x16E4FCu;
}
