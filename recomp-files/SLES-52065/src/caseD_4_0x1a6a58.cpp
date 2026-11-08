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

// Function: caseD_4
// Address: 0x1a6a58 - 0x1a6a60
void caseD_4_0x1a6a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a6a58");
#endif

    ctx->pc = 0x1a6a58u;

    // 0x1a6a58: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1a6a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a6a5c: 0x0  nop
    ctx->pc = 0x1a6a5cu;
    // NOP
    ctx->pc = 0x1a6a60u;
}
