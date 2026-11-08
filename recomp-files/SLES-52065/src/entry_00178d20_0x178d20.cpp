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

// Function: entry_00178d20
// Address: 0x178d20 - 0x178d38
void entry_00178d20_0x178d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d20_0x178d20");
#endif

    ctx->pc = 0x178d20u;

    // 0x178d20: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x178d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x178d24: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x178D24u;
    {
        const bool branch_taken_0x178d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D24u;
        // 0x178d28: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d24) {
            ctx->pc = 0x178C6Cu;
            return;
        }
    }
    ctx->pc = 0x178D2Cu;
    // 0x178d2c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x178d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178d30: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x178D30u;
    {
        const bool branch_taken_0x178d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D30u;
        // 0x178d34: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d30) {
            ctx->pc = 0x178DCCu;
            return;
        }
    }
    ctx->pc = 0x178D38u;
}
