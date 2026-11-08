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

// Function: entry_001f6de4
// Address: 0x1f6de4 - 0x1f6dec
void entry_001f6de4_0x1f6de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6de4_0x1f6de4");
#endif

    ctx->pc = 0x1f6de4u;

    // 0x1f6de4: 0xae00bb64  sw          $zero, -0x449C($s0)
    ctx->pc = 0x1f6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949732), GPR_U32(ctx, 0));
    // 0x1f6de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1f6decu;
}
