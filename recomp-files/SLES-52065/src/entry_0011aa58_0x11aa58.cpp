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

// Function: entry_0011aa58
// Address: 0x11aa58 - 0x11aa60
void entry_0011aa58_0x11aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa58_0x11aa58");
#endif

    ctx->pc = 0x11aa58u;

    // 0x11aa58: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x11aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x11aa5c: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x11aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->pc = 0x11aa60u;
}
