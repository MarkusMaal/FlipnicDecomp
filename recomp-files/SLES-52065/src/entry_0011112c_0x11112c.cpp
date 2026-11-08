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

// Function: entry_0011112c
// Address: 0x11112c - 0x11117c
void entry_0011112c_0x11112c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011112c_0x11112c");
#endif

    ctx->pc = 0x11112cu;

    // 0x11112c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x11112cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111130: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x111130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111134: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x111134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x111138: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x111138u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11113c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x11113cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x111140: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x111144: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x111144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x111148: 0x90e60224  lbu         $a2, 0x224($a3)
    ctx->pc = 0x111148u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x11114c: 0x62efc  dsll32      $a1, $a2, 27
    ctx->pc = 0x11114cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 27));
    // 0x111150: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x111150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
    // 0x111154: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x111154u;
    {
        const bool branch_taken_0x111154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x111158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111154u;
        // 0x111158: 0x62ebc  dsll32      $a1, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111154) {
            ctx->pc = 0x11119Cu;
            return;
        }
    }
    ctx->pc = 0x11115Cu;
    // 0x11115c: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x11115cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
    // 0x111160: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111160u;
    {
        const bool branch_taken_0x111160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x111160) {
            ctx->pc = 0x11117Cu;
            return;
        }
    }
    ctx->pc = 0x111168u;
    // 0x111168: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x111168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x11116c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x111170: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x111170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x111174: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x111174u;
    {
        const bool branch_taken_0x111174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111174u;
        // 0x111178: 0xace50224  sw          $a1, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111174) {
            ctx->pc = 0x11119Cu;
            return;
        }
    }
    ctx->pc = 0x11117Cu;
}
