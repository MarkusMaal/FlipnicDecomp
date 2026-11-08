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

// Function: entry_0013f7ac
// Address: 0x13f7ac - 0x13f7c0
void entry_0013f7ac_0x13f7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f7ac_0x13f7ac");
#endif

    ctx->pc = 0x13f7acu;

    // 0x13f7ac: 0x0  nop
    ctx->pc = 0x13f7acu;
    // NOP
    // 0x13f7b0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x13f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13f7b4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x13f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x13f7b8: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13F7B8u;
    {
        const bool branch_taken_0x13f7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f7b8) {
            ctx->pc = 0x13F790u;
            return;
        }
    }
    ctx->pc = 0x13F7C0u;
}
