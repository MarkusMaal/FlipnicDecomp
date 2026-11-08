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

// Function: entry_0011a2b4
// Address: 0x11a2b4 - 0x11a2c0
void entry_0011a2b4_0x11a2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a2b4_0x11a2b4");
#endif

    ctx->pc = 0x11a2b4u;

    // 0x11a2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a2b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2bc: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x11a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    ctx->pc = 0x11a2c0u;
}
