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

// Function: entry_00193688
// Address: 0x193688 - 0x1936a8
void entry_00193688_0x193688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193688_0x193688");
#endif

    ctx->pc = 0x193688u;

    // 0x193688: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19368c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19368cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193698: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19369c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1936a0: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x1936A0u;
    {
        const bool branch_taken_0x1936a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936A0u;
        // 0x1936a4: 0xa0650028  sb          $a1, 0x28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936a0) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x1936A8u;
}
