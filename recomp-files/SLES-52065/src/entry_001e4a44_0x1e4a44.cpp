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

// Function: entry_001e4a44
// Address: 0x1e4a44 - 0x1e4a54
void entry_001e4a44_0x1e4a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4a44_0x1e4a44");
#endif

    ctx->pc = 0x1e4a44u;

    // 0x1e4a44: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1e4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e4a48: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1e4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1e4a4c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1e4a50: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1e4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1e4a54u;
}
