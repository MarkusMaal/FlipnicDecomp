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

// Function: entry_0019e9d8
// Address: 0x19e9d8 - 0x19e9f4
void entry_0019e9d8_0x19e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e9d8_0x19e9d8");
#endif

    ctx->pc = 0x19e9d8u;

    // 0x19e9d8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e9dc: 0x8c432840  lw          $v1, 0x2840($v0)
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10304)));
    // 0x19e9e0: 0x24442840  addiu       $a0, $v0, 0x2840
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x19e9e4: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x19e9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19e9e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E9E8u;
    {
        const bool branch_taken_0x19e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9E8u;
        // 0x19e9ec: 0x2462fc18  addiu       $v0, $v1, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9e8) {
            ctx->pc = 0x19E9F4u;
            return;
        }
    }
    ctx->pc = 0x19E9F0u;
    // 0x19e9f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19e9f4u;
}
