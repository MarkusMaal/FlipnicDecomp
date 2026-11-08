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

// Function: entry_00111fa8
// Address: 0x111fa8 - 0x111fc0
void entry_00111fa8_0x111fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111fa8_0x111fa8");
#endif

    ctx->pc = 0x111fa8u;

    // 0x111fa8: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x111fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fb0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x111fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x111fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x111FB8u;
    {
        const bool branch_taken_0x111fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FB8u;
        // 0x111fbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fb8) {
            ctx->pc = 0x111FF8u;
            return;
        }
    }
    ctx->pc = 0x111FC0u;
}
