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

// Function: entry_00204194
// Address: 0x204194 - 0x204198
void entry_00204194_0x204194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204194_0x204194");
#endif

    ctx->pc = 0x204194u;

    // 0x204194: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x204194u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    ctx->pc = 0x204198u;
}
