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

// Function: entry_001faadc
// Address: 0x1faadc - 0x1faaf8
void entry_001faadc_0x1faadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faadc_0x1faadc");
#endif

    ctx->pc = 0x1faadcu;

    // 0x1faadc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1faadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faae0: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1faae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1faae4: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x1FAAE4u;
    {
        const bool branch_taken_0x1faae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAE4u;
        // 0x1faae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faae4) {
            ctx->pc = 0x1FA83Cu;
            return;
        }
    }
    ctx->pc = 0x1FAAECu;
    // 0x1faaec: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1faaf0: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x1faaf0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1faaf4: 0x0  nop
    ctx->pc = 0x1faaf4u;
    // NOP
    ctx->pc = 0x1faaf8u;
}
