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

// Function: entry_0015f110
// Address: 0x15f110 - 0x15f180
void entry_0015f110_0x15f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f110_0x15f110");
#endif

    ctx->pc = 0x15f110u;

    // 0x15f110: 0x8e452c1c  lw          $a1, 0x2C1C($s2)
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
    // 0x15f114: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x15f118: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x15f11c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x15f120: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f124: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15f124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15f128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f12c: 0x8475000e  lh          $s5, 0xE($v1)
    ctx->pc = 0x15f12cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x15f130: 0x6a0026e  bltz        $s5, . + 4 + (0x26E << 2)
    ctx->pc = 0x15F130u;
    {
        const bool branch_taken_0x15f130 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x15F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F130u;
        // 0x15f134: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f130) {
            ctx->pc = 0x15FAECu;
            return;
        }
    }
    ctx->pc = 0x15F138u;
    // 0x15f138: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15f13c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15f140: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15f144: 0x90e30041  lbu         $v1, 0x41($a3)
    ctx->pc = 0x15f144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 65)));
    // 0x15f148: 0x1460025c  bnez        $v1, . + 4 + (0x25C << 2)
    ctx->pc = 0x15F148u;
    {
        const bool branch_taken_0x15f148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f148) {
            ctx->pc = 0x15FABCu;
            return;
        }
    }
    ctx->pc = 0x15F150u;
    // 0x15f150: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x15f154: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15f158: 0x14640258  bne         $v1, $a0, . + 4 + (0x258 << 2)
    ctx->pc = 0x15F158u;
    {
        const bool branch_taken_0x15f158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15f158) {
            ctx->pc = 0x15FABCu;
            return;
        }
    }
    ctx->pc = 0x15F160u;
    // 0x15f160: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x15f160u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15f164: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15f164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x15f168: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x15f168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15f16c: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15f170: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f174: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15f178: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x15F178u;
    {
        const bool branch_taken_0x15f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F178u;
        // 0x15f17c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f178) {
            ctx->pc = 0x15F324u;
            return;
        }
    }
    ctx->pc = 0x15F180u;
}
