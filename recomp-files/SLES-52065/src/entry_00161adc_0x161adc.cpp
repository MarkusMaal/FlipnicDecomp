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

// Function: entry_00161adc
// Address: 0x161adc - 0x161ae8
void entry_00161adc_0x161adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161adc_0x161adc");
#endif

    ctx->pc = 0x161adcu;

    // 0x161adc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161ae0: 0x84630024  lh          $v1, 0x24($v1)
    ctx->pc = 0x161ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x161ae4: 0x0  nop
    ctx->pc = 0x161ae4u;
    // NOP
    ctx->pc = 0x161ae8u;
}
