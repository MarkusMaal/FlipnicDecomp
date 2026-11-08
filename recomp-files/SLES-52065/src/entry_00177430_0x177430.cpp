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

// Function: entry_00177430
// Address: 0x177430 - 0x177440
void entry_00177430_0x177430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177430_0x177430");
#endif

    ctx->pc = 0x177430u;

    // 0x177430: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x177430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x177434: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x177434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177438: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x177438u;
    {
        const bool branch_taken_0x177438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177438u;
        // 0x17743c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177438) {
            ctx->pc = 0x1774F8u;
            return;
        }
    }
    ctx->pc = 0x177440u;
}
