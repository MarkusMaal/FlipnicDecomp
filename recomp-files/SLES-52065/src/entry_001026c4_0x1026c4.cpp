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

// Function: entry_001026c4
// Address: 0x1026c4 - 0x1026d0
void entry_001026c4_0x1026c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001026c4_0x1026c4");
#endif

    ctx->pc = 0x1026c4u;

    // 0x1026c4: 0x86460008  lh          $a2, 0x8($s2)
    ctx->pc = 0x1026c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1026c8: 0x0  nop
    ctx->pc = 0x1026c8u;
    // NOP
    // 0x1026cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1026ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1026d0u;
}
