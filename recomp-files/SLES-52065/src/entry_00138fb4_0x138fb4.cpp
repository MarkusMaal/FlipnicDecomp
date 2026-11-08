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

// Function: entry_00138fb4
// Address: 0x138fb4 - 0x138fc4
void entry_00138fb4_0x138fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138fb4_0x138fb4");
#endif

    ctx->pc = 0x138fb4u;

    // 0x138fb4: 0x0  nop
    ctx->pc = 0x138fb4u;
    // NOP
    // 0x138fb8: 0x15300002  bne         $t1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138FB8u;
    {
        const bool branch_taken_0x138fb8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 16));
        ctx->pc = 0x138FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FB8u;
        // 0x138fbc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fb8) {
            ctx->pc = 0x138FC4u;
            return;
        }
    }
    ctx->pc = 0x138FC0u;
    // 0x138fc0: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->pc = 0x138fc4u;
}
