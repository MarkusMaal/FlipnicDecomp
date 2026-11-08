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

// Function: entry_00179724
// Address: 0x179724 - 0x179738
void entry_00179724_0x179724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179724_0x179724");
#endif

    ctx->pc = 0x179724u;

    // 0x179724: 0x0  nop
    ctx->pc = 0x179724u;
    // NOP
    // 0x179728: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x179728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17972c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17972cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179730: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x179730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179734: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x179734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->pc = 0x179738u;
}
