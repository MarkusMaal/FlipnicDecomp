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

// Function: entry_001a2edc
// Address: 0x1a2edc - 0x1a2ee8
void entry_001a2edc_0x1a2edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2edc_0x1a2edc");
#endif

    ctx->pc = 0x1a2edcu;

    // 0x1a2edc: 0x0  nop
    ctx->pc = 0x1a2edcu;
    // NOP
    // 0x1a2ee0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2ee4: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1a2ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1a2ee8u;
}
