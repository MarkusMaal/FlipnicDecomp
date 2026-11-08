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

// Function: entry_0013d8d0
// Address: 0x13d8d0 - 0x13d8dc
void entry_0013d8d0_0x13d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d8d0_0x13d8d0");
#endif

    ctx->pc = 0x13d8d0u;

    // 0x13d8d0: 0x908200da  lbu         $v0, 0xDA($a0)
    ctx->pc = 0x13d8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 218)));
    // 0x13d8d4: 0x0  nop
    ctx->pc = 0x13d8d4u;
    // NOP
    // 0x13d8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13d8dcu;
}
