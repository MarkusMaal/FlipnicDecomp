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

// Function: entry_00193abc
// Address: 0x193abc - 0x193ad4
void entry_00193abc_0x193abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193abc_0x193abc");
#endif

    ctx->pc = 0x193abcu;

    // 0x193abc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193ac0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193ac8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x193acc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x193ACCu;
    {
        const bool branch_taken_0x193acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193ACCu;
        // 0x193ad0: 0xa06001f9  sb          $zero, 0x1F9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193acc) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x193AD4u;
}
