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

// Function: entry_00204e44
// Address: 0x204e44 - 0x204e48
void entry_00204e44_0x204e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e44_0x204e44");
#endif

    ctx->pc = 0x204e44u;

    // 0x204e44: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x204e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
    ctx->pc = 0x204e48u;
}
