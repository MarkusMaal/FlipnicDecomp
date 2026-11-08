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

// Function: entry_00187fcc
// Address: 0x187fcc - 0x187fe0
void entry_00187fcc_0x187fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fcc_0x187fcc");
#endif

    ctx->pc = 0x187fccu;

    // 0x187fcc: 0x0  nop
    ctx->pc = 0x187fccu;
    // NOP
    // 0x187fd0: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x187fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187fd4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187FD4u;
    {
        const bool branch_taken_0x187fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fd4) {
            ctx->pc = 0x187FF8u;
            return;
        }
    }
    ctx->pc = 0x187FDCu;
    // 0x187fdc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x187fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x187fe0u;
}
