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

// Function: entry_00123acc
// Address: 0x123acc - 0x123ad0
void entry_00123acc_0x123acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123acc_0x123acc");
#endif

    ctx->pc = 0x123accu;

    // 0x123acc: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x123accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    ctx->pc = 0x123ad0u;
}
