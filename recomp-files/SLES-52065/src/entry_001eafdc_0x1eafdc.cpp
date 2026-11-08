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

// Function: entry_001eafdc
// Address: 0x1eafdc - 0x1eaff4
void entry_001eafdc_0x1eafdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eafdc_0x1eafdc");
#endif

    ctx->pc = 0x1eafdcu;

    // 0x1eafdc: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAFDCu;
    {
        const bool branch_taken_0x1eafdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFDCu;
        // 0x1eafe0: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafdc) {
            ctx->pc = 0x1EAFF4u;
            return;
        }
    }
    ctx->pc = 0x1EAFE4u;
    // 0x1eafe4: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1eafe8: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x1eafe8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eafec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EAFECu;
    {
        const bool branch_taken_0x1eafec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFECu;
        // 0x1eaff0: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafec) {
            ctx->pc = 0x1EB010u;
            return;
        }
    }
    ctx->pc = 0x1EAFF4u;
}
