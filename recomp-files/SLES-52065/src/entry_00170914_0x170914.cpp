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

// Function: entry_00170914
// Address: 0x170914 - 0x17091c
void entry_00170914_0x170914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170914_0x170914");
#endif

    ctx->pc = 0x170914u;

    // 0x170914: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x170914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x170918: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x170918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
    ctx->pc = 0x17091cu;
}
