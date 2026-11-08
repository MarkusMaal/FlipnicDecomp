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

// Function: entry_00203ec8
// Address: 0x203ec8 - 0x203ed0
void entry_00203ec8_0x203ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ec8_0x203ec8");
#endif

    ctx->pc = 0x203ec8u;

    // 0x203ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203ecc: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x203eccu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->pc = 0x203ed0u;
}
