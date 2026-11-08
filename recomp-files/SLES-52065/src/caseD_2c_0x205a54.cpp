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

// Function: caseD_2c
// Address: 0x205a54 - 0x205a58
void caseD_2c_0x205a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2c_0x205a54");
#endif

    ctx->pc = 0x205a54u;

    // 0x205a54: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x205a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
    ctx->pc = 0x205a58u;
}
