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

// Function: entry_00123974
// Address: 0x123974 - 0x1239a8
void entry_00123974_0x123974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123974_0x123974");
#endif

    ctx->pc = 0x123974u;

    // 0x123974: 0x0  nop
    ctx->pc = 0x123974u;
    // NOP
    // 0x123978: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x123978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12397c: 0x1206000a  beq         $s0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x12397Cu;
    {
        const bool branch_taken_0x12397c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x12397c) {
            ctx->pc = 0x1239A8u;
            return;
        }
    }
    ctx->pc = 0x123984u;
    // 0x123984: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123988: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12398c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123990: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x123990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x123994: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123998: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x123998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x12399c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x12399cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1239a0: 0x10a3ff8c  beq         $a1, $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x1239A0u;
    {
        const bool branch_taken_0x1239a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1239a0) {
            ctx->pc = 0x1237D4u;
            return;
        }
    }
    ctx->pc = 0x1239A8u;
}
