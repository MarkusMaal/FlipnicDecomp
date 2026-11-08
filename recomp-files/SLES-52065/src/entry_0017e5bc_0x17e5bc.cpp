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

// Function: entry_0017e5bc
// Address: 0x17e5bc - 0x17e5c0
void entry_0017e5bc_0x17e5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e5bc_0x17e5bc");
#endif

    ctx->pc = 0x17e5bcu;

    // 0x17e5bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x17e5c0u;
}
