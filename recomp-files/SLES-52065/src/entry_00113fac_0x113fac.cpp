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

// Function: entry_00113fac
// Address: 0x113fac - 0x113fb0
void entry_00113fac_0x113fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113fac_0x113fac");
#endif

    ctx->pc = 0x113facu;

    // 0x113fac: 0xae430270  sw          $v1, 0x270($s2)
    ctx->pc = 0x113facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 3));
    ctx->pc = 0x113fb0u;
}
