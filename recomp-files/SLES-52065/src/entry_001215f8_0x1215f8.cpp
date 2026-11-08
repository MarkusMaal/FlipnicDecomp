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

// Function: entry_001215f8
// Address: 0x1215f8 - 0x121628
void entry_001215f8_0x1215f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215f8_0x1215f8");
#endif

    ctx->pc = 0x1215f8u;

    // 0x1215f8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1215f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1215fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1215FCu;
    {
        const bool branch_taken_0x1215fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1215fc) {
            ctx->pc = 0x1215E8u;
            return;
        }
    }
    ctx->pc = 0x121604u;
    // 0x121604: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x121604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x121608: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x12160c: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x12160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x121610: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x121610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x121614: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x121614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x121618: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x121618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12161c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x12161cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121620: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x121620u;
    {
        const bool branch_taken_0x121620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x121624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121620u;
        // 0x121624: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121620) {
            ctx->pc = 0x121644u;
            return;
        }
    }
    ctx->pc = 0x121628u;
}
