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

// Function: entry_001daf00
// Address: 0x1daf00 - 0x1daf28
void entry_001daf00_0x1daf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daf00_0x1daf00");
#endif

    ctx->pc = 0x1daf00u;

    // 0x1daf00: 0x8c82ffec  lw          $v0, -0x14($a0)
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967276)));
    // 0x1daf04: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAF04u;
    {
        const bool branch_taken_0x1daf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1daf04) {
            ctx->pc = 0x1DAF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAF04u;
            // 0x1daf08: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAF28u;
            return;
        }
    }
    ctx->pc = 0x1DAF0Cu;
    // 0x1daf0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1daf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1daf10: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1daf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1daf14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAF14u;
    {
        const bool branch_taken_0x1daf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daf14) {
            ctx->pc = 0x1DAF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAF14u;
            // 0x1daf18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAF28u;
            return;
        }
    }
    ctx->pc = 0x1DAF1Cu;
    // 0x1daf1c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1daf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf20: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1daf20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1daf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1daf28u;
}
