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

// Function: entry_00157dd4
// Address: 0x157dd4 - 0x157de0
void entry_00157dd4_0x157dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157dd4_0x157dd4");
#endif

    ctx->pc = 0x157dd4u;

    // 0x157dd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x157dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x157dd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x157dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x157ddc: 0xac67021c  sw          $a3, 0x21C($v1)
    ctx->pc = 0x157ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 7));
    ctx->pc = 0x157de0u;
}
