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

// Function: entry_001856ac
// Address: 0x1856ac - 0x1856b0
void entry_001856ac_0x1856ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001856ac_0x1856ac");
#endif

    ctx->pc = 0x1856acu;

    // 0x1856ac: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1856acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1856b0u;
}
