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

// Function: entry_00172338
// Address: 0x172338 - 0x17233c
void entry_00172338_0x172338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172338_0x172338");
#endif

    ctx->pc = 0x172338u;

    // 0x172338: 0x26220098  addiu       $v0, $s1, 0x98
    ctx->pc = 0x172338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    ctx->pc = 0x17233cu;
}
