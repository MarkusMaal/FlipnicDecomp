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

// Function: entry_001914b0
// Address: 0x1914b0 - 0x1914f8
void entry_001914b0_0x1914b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001914b0_0x1914b0");
#endif

    ctx->pc = 0x1914b0u;

    // 0x1914b0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1914b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1914b4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1914b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1914b8: 0x8c852c10  lw          $a1, 0x2C10($a0)
    ctx->pc = 0x1914b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
    // 0x1914bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1914c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1914c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1914c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1914c8: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x1914c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x1914cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1914d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1914d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1914d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1914d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1914dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1914dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1914e0: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1914e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x1914e4: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x1914e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x1914e8: 0x1443006b  bne         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1914E8u;
    {
        const bool branch_taken_0x1914e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1914e8) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x1914F0u;
    // 0x1914f0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1914F0u;
    {
        const bool branch_taken_0x1914f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914F0u;
        // 0x1914f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914f0) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x1914F8u;
}
