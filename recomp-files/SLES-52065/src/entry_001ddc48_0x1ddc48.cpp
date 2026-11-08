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

// Function: entry_001ddc48
// Address: 0x1ddc48 - 0x1ddc50
void entry_001ddc48_0x1ddc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddc48_0x1ddc48");
#endif

    ctx->pc = 0x1ddc48u;

    // 0x1ddc48: 0x24c2ffe8  addiu       $v0, $a2, -0x18
    ctx->pc = 0x1ddc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1ddc4c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x1ddc50u;
}
