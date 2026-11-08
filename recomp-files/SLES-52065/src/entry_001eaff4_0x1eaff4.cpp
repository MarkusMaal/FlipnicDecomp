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

// Function: entry_001eaff4
// Address: 0x1eaff4 - 0x1eb010
void entry_001eaff4_0x1eaff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eaff4_0x1eaff4");
#endif

    ctx->pc = 0x1eaff4u;

    // 0x1eaff4: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1eaff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1eaff8: 0x14c80006  bne         $a2, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAFF8u;
    {
        const bool branch_taken_0x1eaff8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x1EAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFF8u;
        // 0x1eaffc: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaff8) {
            ctx->pc = 0x1EB014u;
            return;
        }
    }
    ctx->pc = 0x1EB000u;
    // 0x1eb000: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1eb000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1eb004: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x1eb004u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x1eb008: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x1eb008u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eb00c: 0x7c880200  sq          $t0, 0x200($a0)
    ctx->pc = 0x1eb00cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
    ctx->pc = 0x1eb010u;
}
