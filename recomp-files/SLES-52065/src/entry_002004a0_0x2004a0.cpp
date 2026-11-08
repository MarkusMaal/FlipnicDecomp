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

// Function: entry_002004a0
// Address: 0x2004a0 - 0x2004b8
void entry_002004a0_0x2004a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002004a0_0x2004a0");
#endif

    ctx->pc = 0x2004a0u;

    // 0x2004a0: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2004A0u;
    {
        const bool branch_taken_0x2004a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2004A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A0u;
        // 0x2004a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004a0) {
            ctx->pc = 0x2004B8u;
            return;
        }
    }
    ctx->pc = 0x2004A8u;
    // 0x2004a8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2004a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2004acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2004b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2004b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004b4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2004b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2004b8u;
}
