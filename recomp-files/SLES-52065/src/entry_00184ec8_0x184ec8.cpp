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

// Function: entry_00184ec8
// Address: 0x184ec8 - 0x184ecc
void entry_00184ec8_0x184ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184ec8_0x184ec8");
#endif

    ctx->pc = 0x184ec8u;

    // 0x184ec8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x184eccu;
}
