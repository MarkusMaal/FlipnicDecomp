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

// Function: entry_001b3bb8
// Address: 0x1b3bb8 - 0x1b3bc8
void entry_001b3bb8_0x1b3bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3bb8_0x1b3bb8");
#endif

    ctx->pc = 0x1b3bb8u;

    // 0x1b3bb8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1b3bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3bc0: 0xfc602818  sd          $zero, 0x2818($v1)
    ctx->pc = 0x1b3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 10264), GPR_U64(ctx, 0));
    // 0x1b3bc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b3bc8u;
}
