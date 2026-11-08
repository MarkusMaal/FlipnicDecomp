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

// Function: entry_0019e9bc
// Address: 0x19e9bc - 0x19e9d8
void entry_0019e9bc_0x19e9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e9bc_0x19e9bc");
#endif

    ctx->pc = 0x19e9bcu;

    // 0x19e9bc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e9c0: 0x8c432838  lw          $v1, 0x2838($v0)
    ctx->pc = 0x19e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10296)));
    // 0x19e9c4: 0x24442838  addiu       $a0, $v0, 0x2838
    ctx->pc = 0x19e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
    // 0x19e9c8: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x19e9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19e9cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E9CCu;
    {
        const bool branch_taken_0x19e9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9CCu;
        // 0x19e9d0: 0x2462fc18  addiu       $v0, $v1, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9cc) {
            ctx->pc = 0x19E9D8u;
            return;
        }
    }
    ctx->pc = 0x19E9D4u;
    // 0x19e9d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19e9d8u;
}
