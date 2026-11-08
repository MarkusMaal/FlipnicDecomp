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

// Function: entry_00141fcc
// Address: 0x141fcc - 0x141ff4
void entry_00141fcc_0x141fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141fcc_0x141fcc");
#endif

    ctx->pc = 0x141fccu;

    // 0x141fcc: 0x0  nop
    ctx->pc = 0x141fccu;
    // NOP
    // 0x141fd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141fd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x141fd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141FD8u;
    {
        const bool branch_taken_0x141fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141fd8) {
            ctx->pc = 0x141FF4u;
            return;
        }
    }
    ctx->pc = 0x141FE0u;
    // 0x141fe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141fe4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x141fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x141fe8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x141fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x141fec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x141fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141ff0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x141ff4u;
}
