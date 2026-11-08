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

// Function: entry_00200598
// Address: 0x200598 - 0x2005b8
void entry_00200598_0x200598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200598_0x200598");
#endif

    ctx->pc = 0x200598u;

label_200598:
    // 0x200598: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x20059c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2005a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2005a4: 0x0  nop
    ctx->pc = 0x2005a4u;
    // NOP
    // 0x2005a8: 0x0  nop
    ctx->pc = 0x2005a8u;
    // NOP
    // 0x2005ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2005ACu;
    {
        const bool branch_taken_0x2005ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2005ac) {
            ctx->pc = 0x200598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200598;
        }
    }
    ctx->pc = 0x2005B4u;
    // 0x2005b4: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x2005b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
    ctx->pc = 0x2005b8u;
}
