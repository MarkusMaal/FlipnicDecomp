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

// Function: entry_00112d24
// Address: 0x112d24 - 0x112d2c
void entry_00112d24_0x112d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112d24_0x112d24");
#endif

    ctx->pc = 0x112d24u;

    // 0x112d24: 0xa2200043  sb          $zero, 0x43($s1)
    ctx->pc = 0x112d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x112d28: 0xa2200041  sb          $zero, 0x41($s1)
    ctx->pc = 0x112d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x112d2cu;
}
