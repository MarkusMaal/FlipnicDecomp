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

// Function: entry_001198ec
// Address: 0x1198ec - 0x1198f4
void entry_001198ec_0x1198ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001198ec_0x1198ec");
#endif

    ctx->pc = 0x1198ecu;

    // 0x1198ec: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x1198ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1198f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1198f4u;
}
