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

// Function: entry_00204ed0
// Address: 0x204ed0 - 0x204ed8
void entry_00204ed0_0x204ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204ed0_0x204ed0");
#endif

    ctx->pc = 0x204ed0u;

    // 0x204ed0: 0x24c25180  addiu       $v0, $a2, 0x5180
    ctx->pc = 0x204ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
    // 0x204ed4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x204ed8u;
}
