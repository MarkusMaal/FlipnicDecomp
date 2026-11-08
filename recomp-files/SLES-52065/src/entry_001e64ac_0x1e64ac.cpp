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

// Function: entry_001e64ac
// Address: 0x1e64ac - 0x1e64b4
void entry_001e64ac_0x1e64ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e64ac_0x1e64ac");
#endif

    ctx->pc = 0x1e64acu;

    // 0x1e64ac: 0x97a20058  lhu         $v0, 0x58($sp)
    ctx->pc = 0x1e64acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e64b0: 0xa7a2006e  sh          $v0, 0x6E($sp)
    ctx->pc = 0x1e64b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 110), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e64b4u;
}
