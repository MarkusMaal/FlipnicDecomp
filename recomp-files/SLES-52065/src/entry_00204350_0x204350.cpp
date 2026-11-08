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

// Function: entry_00204350
// Address: 0x204350 - 0x204358
void entry_00204350_0x204350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204350_0x204350");
#endif

    ctx->pc = 0x204350u;

    // 0x204350: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x204350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x204354: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x204354u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    ctx->pc = 0x204358u;
}
