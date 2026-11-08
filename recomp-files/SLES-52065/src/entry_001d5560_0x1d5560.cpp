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

// Function: entry_001d5560
// Address: 0x1d5560 - 0x1d557c
void entry_001d5560_0x1d5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5560_0x1d5560");
#endif

    ctx->pc = 0x1d5560u;

    // 0x1d5560: 0x483000a  bgezl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5560u;
    {
        const bool branch_taken_0x1d5560 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d5560) {
            ctx->pc = 0x1D5564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5560u;
            // 0x1d5564: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D558Cu;
            return;
        }
    }
    ctx->pc = 0x1D5568u;
    // 0x1d5568: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d5568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d556c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1d556cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d5570: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5570u;
    {
        const bool branch_taken_0x1d5570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5570u;
        // 0x1d5574: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5570) {
            ctx->pc = 0x1D558Cu;
            return;
        }
    }
    ctx->pc = 0x1D5578u;
    // 0x1d5578: 0x8ee20550  lw          $v0, 0x550($s7)
    ctx->pc = 0x1d5578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
    ctx->pc = 0x1d557cu;
}
