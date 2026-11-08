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

// Function: entry_001fa4b4
// Address: 0x1fa4b4 - 0x1fa4bc
void entry_001fa4b4_0x1fa4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa4b4_0x1fa4b4");
#endif

    ctx->pc = 0x1fa4b4u;

    // 0x1fa4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa4b8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1fa4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1fa4bcu;
}
