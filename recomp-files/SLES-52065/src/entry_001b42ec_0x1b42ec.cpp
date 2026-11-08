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

// Function: entry_001b42ec
// Address: 0x1b42ec - 0x1b4320
void entry_001b42ec_0x1b42ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b42ec_0x1b42ec");
#endif

    ctx->pc = 0x1b42ecu;

    // 0x1b42ec: 0x0  nop
    ctx->pc = 0x1b42ecu;
    // NOP
    // 0x1b42f0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1b42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b42f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b42f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b42f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B42F8u;
    {
        const bool branch_taken_0x1b42f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42f8) {
            ctx->pc = 0x1B42D8u;
            return;
        }
    }
    ctx->pc = 0x1B4300u;
    // 0x1b4300: 0x8f828718  lw          $v0, -0x78E8($gp)
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x1b4304: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4304u;
    {
        const bool branch_taken_0x1b4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4304) {
            ctx->pc = 0x1B4320u;
            return;
        }
    }
    ctx->pc = 0x1B430Cu;
    // 0x1b430c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1b430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b4310: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b4310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b4314: 0x8f828718  lw          $v0, -0x78E8($gp)
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x1b4318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4318u;
    {
        const bool branch_taken_0x1b4318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4318u;
        // 0x1b431c: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4318) {
            ctx->pc = 0x1B4324u;
            return;
        }
    }
    ctx->pc = 0x1B4320u;
}
