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

// Function: entry_0020858c
// Address: 0x20858c - 0x2085ac
void entry_0020858c_0x20858c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020858c_0x20858c");
#endif

    ctx->pc = 0x20858cu;

    // 0x20858c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x208590: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x208590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x208594: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208594u;
    {
        const bool branch_taken_0x208594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208594) {
            ctx->pc = 0x208598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208594u;
            // 0x208598: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208580u;
            return;
        }
    }
    ctx->pc = 0x20859Cu;
    // 0x20859c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x20859cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2085a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2085A0u;
    {
        const bool branch_taken_0x2085a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2085a0) {
            ctx->pc = 0x2085A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085A0u;
            // 0x2085a4: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2085B8u;
            return;
        }
    }
    ctx->pc = 0x2085A8u;
    // 0x2085a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2085acu;
}
