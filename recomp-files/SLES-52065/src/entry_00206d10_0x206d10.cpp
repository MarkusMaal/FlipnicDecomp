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

// Function: entry_00206d10
// Address: 0x206d10 - 0x206d1c
void entry_00206d10_0x206d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206d10_0x206d10");
#endif

    ctx->pc = 0x206d10u;

    // 0x206d10: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x206d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x206d14: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206D14u;
    {
        const bool branch_taken_0x206d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d14) {
            ctx->pc = 0x206D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D14u;
            // 0x206d18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D1Cu;
            return;
        }
    }
    ctx->pc = 0x206D1Cu;
}
