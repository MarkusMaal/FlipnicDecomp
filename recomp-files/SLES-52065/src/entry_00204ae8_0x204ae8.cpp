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

// Function: entry_00204ae8
// Address: 0x204ae8 - 0x204af0
void entry_00204ae8_0x204ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204ae8_0x204ae8");
#endif

    ctx->pc = 0x204ae8u;

    // 0x204ae8: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x204ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204aec: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x204af0u;
}
