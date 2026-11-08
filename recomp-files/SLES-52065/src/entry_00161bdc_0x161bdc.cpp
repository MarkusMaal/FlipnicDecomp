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

// Function: entry_00161bdc
// Address: 0x161bdc - 0x161be0
void entry_00161bdc_0x161bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161bdc_0x161bdc");
#endif

    ctx->pc = 0x161bdcu;

    // 0x161bdc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x161bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x161be0u;
}
