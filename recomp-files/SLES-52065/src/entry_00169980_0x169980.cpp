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

// Function: entry_00169980
// Address: 0x169980 - 0x1699ac
void entry_00169980_0x169980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169980_0x169980");
#endif

    ctx->pc = 0x169980u;

    // 0x169980: 0x8c8701d4  lw          $a3, 0x1D4($a0)
    ctx->pc = 0x169980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x169984: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x169984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x169988: 0x14e60009  bne         $a3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x169988u;
    {
        const bool branch_taken_0x169988 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x16998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169988u;
        // 0x16998c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169988) {
            ctx->pc = 0x1699B0u;
            return;
        }
    }
    ctx->pc = 0x169990u;
    // 0x169990: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x169990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169994: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x169994u;
    {
        const bool branch_taken_0x169994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x169994) {
            ctx->pc = 0x1699ACu;
            return;
        }
    }
    ctx->pc = 0x16999Cu;
    // 0x16999c: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16999Cu;
    {
        const bool branch_taken_0x16999c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x16999c) {
            ctx->pc = 0x1699ACu;
            return;
        }
    }
    ctx->pc = 0x1699A4u;
    // 0x1699a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1699A4u;
    {
        const bool branch_taken_0x1699a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699A4u;
        // 0x1699a8: 0xa0850223  sb          $a1, 0x223($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 547), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699a4) {
            ctx->pc = 0x1699F8u;
            return;
        }
    }
    ctx->pc = 0x1699ACu;
}
