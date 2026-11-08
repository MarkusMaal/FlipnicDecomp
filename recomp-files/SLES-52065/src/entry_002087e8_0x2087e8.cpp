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

// Function: entry_002087e8
// Address: 0x2087e8 - 0x208800
void entry_002087e8_0x2087e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002087e8_0x2087e8");
#endif

    ctx->pc = 0x2087e8u;

    // 0x2087e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2087E8u;
    {
        const bool branch_taken_0x2087e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2087ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087E8u;
        // 0x2087ec: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087e8) {
            ctx->pc = 0x208800u;
            return;
        }
    }
    ctx->pc = 0x2087F0u;
    // 0x2087f0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2087f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2087f4: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x2087f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x2087f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2087F8u;
    {
        const bool branch_taken_0x2087f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087F8u;
        // 0x2087fc: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087f8) {
            ctx->pc = 0x20880Cu;
            return;
        }
    }
    ctx->pc = 0x208800u;
}
