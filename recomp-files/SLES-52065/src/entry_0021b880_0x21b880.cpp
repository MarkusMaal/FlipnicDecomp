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

// Function: entry_0021b880
// Address: 0x21b880 - 0x21b88c
void entry_0021b880_0x21b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b880_0x21b880");
#endif

    ctx->pc = 0x21b880u;

    // 0x21b880: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x21b880u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b884: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x21b884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b888: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x21b888u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x21b88cu;
}
