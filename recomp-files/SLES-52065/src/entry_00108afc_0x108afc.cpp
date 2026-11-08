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

// Function: entry_00108afc
// Address: 0x108afc - 0x108b18
void entry_00108afc_0x108afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108afc_0x108afc");
#endif

    ctx->pc = 0x108afcu;

    // 0x108afc: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x108afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108b00: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x108b04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108B04u;
    {
        const bool branch_taken_0x108b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108b04) {
            ctx->pc = 0x108B18u;
            return;
        }
    }
    ctx->pc = 0x108B0Cu;
    // 0x108b0c: 0x84f10004  lh          $s1, 0x4($a3)
    ctx->pc = 0x108b0cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x108b10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x108B10u;
    {
        const bool branch_taken_0x108b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B10u;
        // 0x108b14: 0x84f20002  lh          $s2, 0x2($a3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b10) {
            ctx->pc = 0x108B28u;
            return;
        }
    }
    ctx->pc = 0x108B18u;
}
