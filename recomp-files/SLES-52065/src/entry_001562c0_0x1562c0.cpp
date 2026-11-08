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

// Function: entry_001562c0
// Address: 0x1562c0 - 0x1562c4
void entry_001562c0_0x1562c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001562c0_0x1562c0");
#endif

    ctx->pc = 0x1562c0u;

    // 0x1562c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1562c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x1562c4u;
}
