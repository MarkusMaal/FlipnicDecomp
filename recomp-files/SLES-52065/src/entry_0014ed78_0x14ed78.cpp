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

// Function: entry_0014ed78
// Address: 0x14ed78 - 0x14ed98
void entry_0014ed78_0x14ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed78_0x14ed78");
#endif

    ctx->pc = 0x14ed78u;

    // 0x14ed78: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ed7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x14ed7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14ed80: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14ed84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ed88: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14ED88u;
    {
        const bool branch_taken_0x14ed88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x14ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED88u;
        // 0x14ed8c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed88) {
            ctx->pc = 0x14ED68u;
            return;
        }
    }
    ctx->pc = 0x14ED90u;
    // 0x14ed90: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x14ED90u;
    {
        const bool branch_taken_0x14ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed90) {
            ctx->pc = 0x14EE98u;
            return;
        }
    }
    ctx->pc = 0x14ED98u;
}
