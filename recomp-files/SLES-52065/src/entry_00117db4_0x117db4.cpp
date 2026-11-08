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

// Function: entry_00117db4
// Address: 0x117db4 - 0x117dbc
void entry_00117db4_0x117db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117db4_0x117db4");
#endif

    ctx->pc = 0x117db4u;

    // 0x117db4: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x117db4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x117db8: 0x2631e5b8  addiu       $s1, $s1, -0x1A48
    ctx->pc = 0x117db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960568));
    ctx->pc = 0x117dbcu;
}
