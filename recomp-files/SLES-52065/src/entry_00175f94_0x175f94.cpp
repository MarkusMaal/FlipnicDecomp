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

// Function: entry_00175f94
// Address: 0x175f94 - 0x175fb4
void entry_00175f94_0x175f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f94_0x175f94");
#endif

    ctx->pc = 0x175f94u;

    // 0x175f94: 0x0  nop
    ctx->pc = 0x175f94u;
    // NOP
    // 0x175f98: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x175f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x175f9c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175fa0: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175FA0u;
    {
        const bool branch_taken_0x175fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FA0u;
        // 0x175fa4: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fa0) {
            ctx->pc = 0x175E28u;
            return;
        }
    }
    ctx->pc = 0x175FA8u;
    // 0x175fa8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x175fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x175fac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x175FACu;
    {
        const bool branch_taken_0x175fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FACu;
        // 0x175fb0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fac) {
            ctx->pc = 0x176044u;
            return;
        }
    }
    ctx->pc = 0x175FB4u;
}
