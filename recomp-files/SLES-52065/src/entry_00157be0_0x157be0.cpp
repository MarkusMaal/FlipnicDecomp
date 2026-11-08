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

// Function: entry_00157be0
// Address: 0x157be0 - 0x157bec
void entry_00157be0_0x157be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157be0_0x157be0");
#endif

    ctx->pc = 0x157be0u;

    // 0x157be0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x157be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x157be4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157be8: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x157be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    ctx->pc = 0x157becu;
}
