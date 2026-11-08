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

// Function: entry_001211a0
// Address: 0x1211a0 - 0x1211bc
void entry_001211a0_0x1211a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001211a0_0x1211a0");
#endif

    ctx->pc = 0x1211a0u;

    // 0x1211a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1211a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1211a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1211a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1211a8: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1211ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1211ACu;
    {
        const bool branch_taken_0x1211ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1211B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211ACu;
        // 0x1211b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211ac) {
            ctx->pc = 0x1211BCu;
            return;
        }
    }
    ctx->pc = 0x1211B4u;
    // 0x1211b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1211B4u;
    {
        const bool branch_taken_0x1211b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211B4u;
        // 0x1211b8: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211b4) {
            ctx->pc = 0x121278u;
            return;
        }
    }
    ctx->pc = 0x1211BCu;
}
