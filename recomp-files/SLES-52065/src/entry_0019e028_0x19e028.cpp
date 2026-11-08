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

// Function: entry_0019e028
// Address: 0x19e028 - 0x19e030
void entry_0019e028_0x19e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e028_0x19e028");
#endif

    ctx->pc = 0x19e028u;

    // 0x19e028: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19e028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x19e02c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19e02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x19e030u;
}
