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

// Function: entry_00164990
// Address: 0x164990 - 0x164994
void entry_00164990_0x164990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164990_0x164990");
#endif

    ctx->pc = 0x164990u;

    // 0x164990: 0xa240024e  sb          $zero, 0x24E($s2)
    ctx->pc = 0x164990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 590), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x164994u;
}
