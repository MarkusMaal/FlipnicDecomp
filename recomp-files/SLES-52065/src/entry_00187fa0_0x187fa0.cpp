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

// Function: entry_00187fa0
// Address: 0x187fa0 - 0x187fb8
void entry_00187fa0_0x187fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fa0_0x187fa0");
#endif

    ctx->pc = 0x187fa0u;

    // 0x187fa0: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x187fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187fa4: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187FA4u;
    {
        const bool branch_taken_0x187fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x187fa4) {
            ctx->pc = 0x187FB8u;
            return;
        }
    }
    ctx->pc = 0x187FACu;
    // 0x187fac: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x187facu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187fb0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187FB0u;
    {
        const bool branch_taken_0x187fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fb0) {
            ctx->pc = 0x187FCCu;
            return;
        }
    }
    ctx->pc = 0x187FB8u;
}
