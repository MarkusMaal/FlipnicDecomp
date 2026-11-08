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

// Function: entry_001904cc
// Address: 0x1904cc - 0x1904dc
void entry_001904cc_0x1904cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904cc_0x1904cc");
#endif

    ctx->pc = 0x1904ccu;

    // 0x1904cc: 0x0  nop
    ctx->pc = 0x1904ccu;
    // NOP
    // 0x1904d0: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1904d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1904d4: 0xa0601484  sb          $zero, 0x1484($v1)
    ctx->pc = 0x1904d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5252), (uint8_t)GPR_U32(ctx, 0));
    // 0x1904d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1904dcu;
}
