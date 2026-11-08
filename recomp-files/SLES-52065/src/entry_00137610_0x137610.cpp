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

// Function: entry_00137610
// Address: 0x137610 - 0x137638
void entry_00137610_0x137610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137610_0x137610");
#endif

    ctx->pc = 0x137610u;

    // 0x137610: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x137610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x137614: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x137614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137618: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x137618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13761c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x137620: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x137620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x137624: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x137624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x137628: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137628u;
    {
        const bool branch_taken_0x137628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137628u;
        // 0x13762c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137628) {
            ctx->pc = 0x137638u;
            return;
        }
    }
    ctx->pc = 0x137630u;
    // 0x137630: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137630u;
    {
        const bool branch_taken_0x137630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137630) {
            ctx->pc = 0x137650u;
            return;
        }
    }
    ctx->pc = 0x137638u;
}
