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

// Function: entry_001e3ac4
// Address: 0x1e3ac4 - 0x1e3acc
void entry_001e3ac4_0x1e3ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3ac4_0x1e3ac4");
#endif

    ctx->pc = 0x1e3ac4u;

    // 0x1e3ac4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1e3ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1e3ac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e3accu;
}
