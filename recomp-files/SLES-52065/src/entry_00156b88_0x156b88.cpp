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

// Function: entry_00156b88
// Address: 0x156b88 - 0x156b94
void entry_00156b88_0x156b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b88_0x156b88");
#endif

    ctx->pc = 0x156b88u;

    // 0x156b88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x156b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156b8c: 0xa60201ec  sh          $v0, 0x1EC($s0)
    ctx->pc = 0x156b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 2));
    // 0x156b90: 0x3c06c47a  lui         $a2, 0xC47A
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50298 << 16));
    ctx->pc = 0x156b94u;
}
