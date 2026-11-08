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

// Function: entry_0013add4
// Address: 0x13add4 - 0x13ade4
void entry_0013add4_0x13add4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013add4_0x13add4");
#endif

    ctx->pc = 0x13add4u;

    // 0x13add4: 0x0  nop
    ctx->pc = 0x13add4u;
    // NOP
    // 0x13add8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x13add8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13addc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13addcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ade0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ade0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ade4u;
}
