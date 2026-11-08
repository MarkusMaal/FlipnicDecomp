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

// Function: entry_0019e778
// Address: 0x19e778 - 0x19e77c
void entry_0019e778_0x19e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e778_0x19e778");
#endif

    ctx->pc = 0x19e778u;

    // 0x19e778: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19e778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x19e77cu;
}
