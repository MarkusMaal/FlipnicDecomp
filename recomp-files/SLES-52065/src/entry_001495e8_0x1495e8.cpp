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

// Function: entry_001495e8
// Address: 0x1495e8 - 0x149604
void entry_001495e8_0x1495e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001495e8_0x1495e8");
#endif

    ctx->pc = 0x1495e8u;

    // 0x1495e8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1495e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1495ec: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1495ECu;
    {
        const bool branch_taken_0x1495ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495ec) {
            ctx->pc = 0x149664u;
            return;
        }
    }
    ctx->pc = 0x1495F4u;
    // 0x1495f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1495f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1495f8: 0x2450fffe  addiu       $s0, $v0, -0x2
    ctx->pc = 0x1495f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1495fc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1495FCu;
    {
        const bool branch_taken_0x1495fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495fc) {
            ctx->pc = 0x149658u;
            return;
        }
    }
    ctx->pc = 0x149604u;
}
