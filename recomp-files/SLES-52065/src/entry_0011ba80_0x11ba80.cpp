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

// Function: entry_0011ba80
// Address: 0x11ba80 - 0x11ba90
void entry_0011ba80_0x11ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba80_0x11ba80");
#endif

    ctx->pc = 0x11ba80u;

    // 0x11ba80: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ba84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11ba88: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x11ba88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ba8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11ba8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ba90u;
}
