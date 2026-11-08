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

// Function: entry_00204d88
// Address: 0x204d88 - 0x204d90
void entry_00204d88_0x204d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204d88_0x204d88");
#endif

    ctx->pc = 0x204d88u;

    // 0x204d88: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204d8c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x204d90u;
}
