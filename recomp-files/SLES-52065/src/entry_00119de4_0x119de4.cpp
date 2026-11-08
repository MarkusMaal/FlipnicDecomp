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

// Function: entry_00119de4
// Address: 0x119de4 - 0x119e08
void entry_00119de4_0x119de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119de4_0x119de4");
#endif

    ctx->pc = 0x119de4u;

    // 0x119de4: 0x0  nop
    ctx->pc = 0x119de4u;
    // NOP
    // 0x119de8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x119de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x119dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119df0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x119df0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x119df4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x119df8: 0x2842012c  slti        $v0, $v0, 0x12C
    ctx->pc = 0x119df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x119dfc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119DFCu;
    {
        const bool branch_taken_0x119dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119dfc) {
            ctx->pc = 0x119E08u;
            return;
        }
    }
    ctx->pc = 0x119E04u;
    // 0x119e04: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x119e04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x119e08u;
}
