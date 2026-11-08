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

// Function: entry_001602dc
// Address: 0x1602dc - 0x160304
void entry_001602dc_0x1602dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001602dc_0x1602dc");
#endif

    ctx->pc = 0x1602dcu;

    // 0x1602dc: 0x0  nop
    ctx->pc = 0x1602dcu;
    // NOP
    // 0x1602e0: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x1602e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x1602e4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1602e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1602e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1602ec: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x1602ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1602f0: 0x84a50020  lh          $a1, 0x20($a1)
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1602f4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1602F4u;
    {
        const bool branch_taken_0x1602f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1602F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602F4u;
        // 0x1602f8: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602f4) {
            ctx->pc = 0x160304u;
            return;
        }
    }
    ctx->pc = 0x1602FCu;
    // 0x1602fc: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1602FCu;
    {
        const bool branch_taken_0x1602fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1602fc) {
            ctx->pc = 0x160320u;
            return;
        }
    }
    ctx->pc = 0x160304u;
}
