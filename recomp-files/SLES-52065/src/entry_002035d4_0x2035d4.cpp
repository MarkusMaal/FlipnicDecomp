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

// Function: entry_002035d4
// Address: 0x2035d4 - 0x2035dc
void entry_002035d4_0x2035d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002035d4_0x2035d4");
#endif

    ctx->pc = 0x2035d4u;

    // 0x2035d4: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x2035d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x2035d8: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2035d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->pc = 0x2035dcu;
}
