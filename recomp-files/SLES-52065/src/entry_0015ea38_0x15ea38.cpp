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

// Function: entry_0015ea38
// Address: 0x15ea38 - 0x15ea84
void entry_0015ea38_0x15ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ea38_0x15ea38");
#endif

    ctx->pc = 0x15ea38u;

    // 0x15ea38: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15ea3c: 0x573021  addu        $a2, $v0, $s7
    ctx->pc = 0x15ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x15ea40: 0x90c20041  lbu         $v0, 0x41($a2)
    ctx->pc = 0x15ea40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 65)));
    // 0x15ea44: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x15EA44u;
    {
        const bool branch_taken_0x15ea44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ea44) {
            ctx->pc = 0x15EB58u;
            return;
        }
    }
    ctx->pc = 0x15EA4Cu;
    // 0x15ea4c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15ea50: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x15ea54: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x15EA54u;
    {
        const bool branch_taken_0x15ea54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ea54) {
            ctx->pc = 0x15EB58u;
            return;
        }
    }
    ctx->pc = 0x15EA5Cu;
    // 0x15ea5c: 0x84c5000a  lh          $a1, 0xA($a2)
    ctx->pc = 0x15ea5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x15ea60: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x15ea64: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x15ea64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15ea68: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x15ea68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15ea6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15ea70: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ea74: 0x222f021  addu        $fp, $s1, $v0
    ctx->pc = 0x15ea74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15ea78: 0x23e082a  slt         $at, $s1, $fp
    ctx->pc = 0x15ea78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x15ea7c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x15EA7Cu;
    {
        const bool branch_taken_0x15ea7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA7Cu;
        // 0x15ea80: 0x11b080  sll         $s6, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea7c) {
            ctx->pc = 0x15EB58u;
            return;
        }
    }
    ctx->pc = 0x15EA84u;
}
