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

// Function: entry_0010e328
// Address: 0x10e328 - 0x10e348
void entry_0010e328_0x10e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e328_0x10e328");
#endif

    ctx->pc = 0x10e328u;

    // 0x10e328: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10e328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10e32c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e330: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10e334: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x10e334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10e338: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E338u;
    {
        const bool branch_taken_0x10e338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x10e338) {
            ctx->pc = 0x10E348u;
            return;
        }
    }
    ctx->pc = 0x10E340u;
    // 0x10e340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E340u;
    {
        const bool branch_taken_0x10e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e340) {
            ctx->pc = 0x10E34Cu;
            return;
        }
    }
    ctx->pc = 0x10E348u;
}
