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

// Function: entry_001920b0
// Address: 0x1920b0 - 0x1920f8
void entry_001920b0_0x1920b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001920b0_0x1920b0");
#endif

    ctx->pc = 0x1920b0u;

    // 0x1920b0: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x1920b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1920b4: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1920b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1920b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1920bc: 0x8ca62c10  lw          $a2, 0x2C10($a1)
    ctx->pc = 0x1920bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
    // 0x1920c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1920c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1920c8: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x1920cc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1920d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1920d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1920d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1920d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1920d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1920dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1920dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1920e0: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x1920e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x1920e4: 0x9084003f  lbu         $a0, 0x3F($a0)
    ctx->pc = 0x1920e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 63)));
    // 0x1920e8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1920E8u;
    {
        const bool branch_taken_0x1920e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1920ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E8u;
        // 0x1920ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920e8) {
            ctx->pc = 0x1920F8u;
            return;
        }
    }
    ctx->pc = 0x1920F0u;
    // 0x1920f0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1920F0u;
    {
        const bool branch_taken_0x1920f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F0u;
        // 0x1920f4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920f0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1920F8u;
}
