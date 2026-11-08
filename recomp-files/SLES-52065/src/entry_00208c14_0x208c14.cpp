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

// Function: entry_00208c14
// Address: 0x208c14 - 0x208c24
void entry_00208c14_0x208c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208c14_0x208c14");
#endif

    ctx->pc = 0x208c14u;

    // 0x208c14: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x208c14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x208c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208c1c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x208c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x208c20: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208c20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x208c24u;
}
