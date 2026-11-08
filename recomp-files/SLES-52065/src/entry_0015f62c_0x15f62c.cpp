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

// Function: entry_0015f62c
// Address: 0x15f62c - 0x15f668
void entry_0015f62c_0x15f62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f62c_0x15f62c");
#endif

    ctx->pc = 0x15f62cu;

    // 0x15f62c: 0x0  nop
    ctx->pc = 0x15f62cu;
    // NOP
    // 0x15f630: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15f634: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x15F634u;
    {
        const bool branch_taken_0x15f634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f634) {
            ctx->pc = 0x15F480u;
            return;
        }
    }
    ctx->pc = 0x15F63Cu;
    // 0x15f63c: 0x8e442c1c  lw          $a0, 0x2C1C($s2)
    ctx->pc = 0x15f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
    // 0x15f640: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x15f644: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15f648: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15f64c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f650: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15f654: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x15f654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15f658: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x15f658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15f65c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15f660: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x15F660u;
    {
        const bool branch_taken_0x15f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F660u;
        // 0x15f664: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f660) {
            ctx->pc = 0x15F74Cu;
            return;
        }
    }
    ctx->pc = 0x15F668u;
}
