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

// Function: entry_001f9970
// Address: 0x1f9970 - 0x1f9994
void entry_001f9970_0x1f9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9970_0x1f9970");
#endif

    ctx->pc = 0x1f9970u;

    // 0x1f9970: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1f9970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9974u;
    {
        const bool branch_taken_0x1f9974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9974u;
        // 0x1f9978: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9974) {
            ctx->pc = 0x1F9994u;
            return;
        }
    }
    ctx->pc = 0x1F997Cu;
    // 0x1f997c: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x1f997cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x1f9980: 0x0  nop
    ctx->pc = 0x1f9980u;
    // NOP
    // 0x1f9984: 0x0  nop
    ctx->pc = 0x1f9984u;
    // NOP
    // 0x1f9988: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1f9988u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x1f998c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1F998Cu;
    {
        const bool branch_taken_0x1f998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F998Cu;
        // 0x1f9990: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f998c) {
            ctx->pc = 0x1F9D38u;
            return;
        }
    }
    ctx->pc = 0x1F9994u;
}
