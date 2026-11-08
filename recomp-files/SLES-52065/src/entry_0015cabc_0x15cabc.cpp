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

// Function: entry_0015cabc
// Address: 0x15cabc - 0x15cad8
void entry_0015cabc_0x15cabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cabc_0x15cabc");
#endif

    ctx->pc = 0x15cabcu;

    // 0x15cabc: 0x0  nop
    ctx->pc = 0x15cabcu;
    // NOP
    // 0x15cac0: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cac4: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x15cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15cac8: 0x90a30041  lbu         $v1, 0x41($a1)
    ctx->pc = 0x15cac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 65)));
    // 0x15cacc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15CACCu;
    {
        const bool branch_taken_0x15cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cacc) {
            ctx->pc = 0x15CAD8u;
            return;
        }
    }
    ctx->pc = 0x15CAD4u;
    // 0x15cad4: 0xa0a40042  sb          $a0, 0x42($a1)
    ctx->pc = 0x15cad4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 66), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15cad8u;
}
