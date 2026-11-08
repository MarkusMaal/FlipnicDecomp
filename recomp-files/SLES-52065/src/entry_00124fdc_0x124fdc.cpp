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

// Function: entry_00124fdc
// Address: 0x124fdc - 0x124fec
void entry_00124fdc_0x124fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124fdc_0x124fdc");
#endif

    ctx->pc = 0x124fdcu;

    // 0x124fdc: 0x0  nop
    ctx->pc = 0x124fdcu;
    // NOP
    // 0x124fe0: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x124fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x124fe4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x124fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124fe8: 0x23902  srl         $a3, $v0, 4
    ctx->pc = 0x124fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x124fecu;
}
