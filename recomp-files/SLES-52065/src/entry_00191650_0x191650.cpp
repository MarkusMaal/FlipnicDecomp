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

// Function: entry_00191650
// Address: 0x191650 - 0x191698
void entry_00191650_0x191650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191650_0x191650");
#endif

    ctx->pc = 0x191650u;

    // 0x191650: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x191650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191654: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x191654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x191658: 0x8c852c10  lw          $a1, 0x2C10($a0)
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
    // 0x19165c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191664: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191668: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x191668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x19166c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19166cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x191670: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x191670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x191674: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x191678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19167c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191680: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x191680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x191684: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x191684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x191688: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191688u;
    {
        const bool branch_taken_0x191688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191688) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191690u;
    // 0x191690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191690u;
    {
        const bool branch_taken_0x191690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191690u;
        // 0x191694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191690) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191698u;
}
