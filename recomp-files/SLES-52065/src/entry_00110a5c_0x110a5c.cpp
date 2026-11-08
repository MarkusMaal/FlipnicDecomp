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

// Function: entry_00110a5c
// Address: 0x110a5c - 0x110aac
void entry_00110a5c_0x110a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110a5c_0x110a5c");
#endif

    ctx->pc = 0x110a5cu;

    // 0x110a5c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x110a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110a60: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x110a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110a64: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x110a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x110a68: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x110a68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110a6c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x110a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x110a70: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x110a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x110a74: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x110a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x110a78: 0x90e60224  lbu         $a2, 0x224($a3)
    ctx->pc = 0x110a78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x110a7c: 0x62efc  dsll32      $a1, $a2, 27
    ctx->pc = 0x110a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 27));
    // 0x110a80: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x110a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
    // 0x110a84: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x110A84u;
    {
        const bool branch_taken_0x110a84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A84u;
        // 0x110a88: 0x62ebc  dsll32      $a1, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a84) {
            ctx->pc = 0x110ACCu;
            return;
        }
    }
    ctx->pc = 0x110A8Cu;
    // 0x110a8c: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x110a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
    // 0x110a90: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x110A90u;
    {
        const bool branch_taken_0x110a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x110a90) {
            ctx->pc = 0x110AACu;
            return;
        }
    }
    ctx->pc = 0x110A98u;
    // 0x110a98: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x110a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x110a9c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x110a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x110aa0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x110aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x110aa4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x110AA4u;
    {
        const bool branch_taken_0x110aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA4u;
        // 0x110aa8: 0xace50224  sw          $a1, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110aa4) {
            ctx->pc = 0x110ACCu;
            return;
        }
    }
    ctx->pc = 0x110AACu;
}
