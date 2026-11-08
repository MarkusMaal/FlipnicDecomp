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

// Function: entry_0012407c
// Address: 0x12407c - 0x12408c
void entry_0012407c_0x12407c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012407c_0x12407c");
#endif

    ctx->pc = 0x12407cu;

    // 0x12407c: 0x0  nop
    ctx->pc = 0x12407cu;
    // NOP
    // 0x124080: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x124080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x124084: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x124084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124088: 0x23902  srl         $a3, $v0, 4
    ctx->pc = 0x124088u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x12408cu;
}
