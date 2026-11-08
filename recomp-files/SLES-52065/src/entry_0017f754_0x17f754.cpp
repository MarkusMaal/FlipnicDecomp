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

// Function: entry_0017f754
// Address: 0x17f754 - 0x17f770
void entry_0017f754_0x17f754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f754_0x17f754");
#endif

    ctx->pc = 0x17f754u;

label_17f754:
    // 0x17f754: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x17f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x17f758: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x17f758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17f75c: 0x0  nop
    ctx->pc = 0x17f75cu;
    // NOP
    // 0x17f760: 0x0  nop
    ctx->pc = 0x17f760u;
    // NOP
    // 0x17f764: 0x0  nop
    ctx->pc = 0x17f764u;
    // NOP
    // 0x17f768: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17F768u;
    {
        const bool branch_taken_0x17f768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f768) {
            ctx->pc = 0x17F754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f754;
        }
    }
    ctx->pc = 0x17F770u;
}
