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

// Function: entry_002042a4
// Address: 0x2042a4 - 0x2042b8
void entry_002042a4_0x2042a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002042a4_0x2042a4");
#endif

    ctx->pc = 0x2042a4u;

    // 0x2042a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2042A4u;
    {
        const bool branch_taken_0x2042a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2042A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042A4u;
        // 0x2042a8: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042a4) {
            ctx->pc = 0x2042F8u;
            return;
        }
    }
    ctx->pc = 0x2042ACu;
    // 0x2042ac: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2042acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2042b0: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x2042b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x2042b4: 0x0  nop
    ctx->pc = 0x2042b4u;
    // NOP
    ctx->pc = 0x2042b8u;
}
