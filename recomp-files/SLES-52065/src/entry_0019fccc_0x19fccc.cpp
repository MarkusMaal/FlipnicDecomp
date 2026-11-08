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

// Function: entry_0019fccc
// Address: 0x19fccc - 0x19fce4
void entry_0019fccc_0x19fccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fccc_0x19fccc");
#endif

    ctx->pc = 0x19fcccu;

    // 0x19fccc: 0x8f878714  lw          $a3, -0x78EC($gp)
    ctx->pc = 0x19fcccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fcd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcd4: 0x24e510c8  addiu       $a1, $a3, 0x10C8
    ctx->pc = 0x19fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4296));
    // 0x19fcd8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x19fcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fcdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FCDCu;
    {
        const bool branch_taken_0x19fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCDCu;
        // 0x19fce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcdc) {
            ctx->pc = 0x19FCFCu;
            return;
        }
    }
    ctx->pc = 0x19FCE4u;
}
