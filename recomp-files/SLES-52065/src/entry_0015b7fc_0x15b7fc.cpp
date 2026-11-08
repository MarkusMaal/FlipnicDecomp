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

// Function: entry_0015b7fc
// Address: 0x15b7fc - 0x15b804
void entry_0015b7fc_0x15b7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b7fc_0x15b7fc");
#endif

    ctx->pc = 0x15b7fcu;

    // 0x15b7fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15b800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x15b804u;
}
