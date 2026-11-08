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

// Function: entry_0012f4ec
// Address: 0x12f4ec - 0x12f500
void entry_0012f4ec_0x12f4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f4ec_0x12f4ec");
#endif

    ctx->pc = 0x12f4ecu;

    // 0x12f4ec: 0x0  nop
    ctx->pc = 0x12f4ecu;
    // NOP
    // 0x12f4f0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x12f4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f4f4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x12f4f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f4f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12f4fc: 0xa4620920  sh          $v0, 0x920($v1)
    ctx->pc = 0x12f4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2336), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12f500u;
}
