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

// Function: entry_0018d0bc
// Address: 0x18d0bc - 0x18d0c0
void entry_0018d0bc_0x18d0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d0bc_0x18d0bc");
#endif

    ctx->pc = 0x18d0bcu;

    // 0x18d0bc: 0xae400490  sw          $zero, 0x490($s2)
    ctx->pc = 0x18d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
    ctx->pc = 0x18d0c0u;
}
