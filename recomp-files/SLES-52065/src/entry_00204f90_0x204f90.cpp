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

// Function: entry_00204f90
// Address: 0x204f90 - 0x204f94
void entry_00204f90_0x204f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204f90_0x204f90");
#endif

    ctx->pc = 0x204f90u;

    // 0x204f90: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x204f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    ctx->pc = 0x204f94u;
}
