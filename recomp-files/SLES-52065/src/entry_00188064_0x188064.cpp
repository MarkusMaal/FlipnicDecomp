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

// Function: entry_00188064
// Address: 0x188064 - 0x188078
void entry_00188064_0x188064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188064_0x188064");
#endif

    ctx->pc = 0x188064u;

    // 0x188064: 0x0  nop
    ctx->pc = 0x188064u;
    // NOP
    // 0x188068: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x188068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18806c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18806Cu;
    {
        const bool branch_taken_0x18806c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18806c) {
            ctx->pc = 0x188090u;
            return;
        }
    }
    ctx->pc = 0x188074u;
    // 0x188074: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x188074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x188078u;
}
