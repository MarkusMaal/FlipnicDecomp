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

// Function: entry_00137da8
// Address: 0x137da8 - 0x137de4
void entry_00137da8_0x137da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137da8_0x137da8");
#endif

    ctx->pc = 0x137da8u;

    // 0x137da8: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x137dac: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137db0: 0x1245021  addu        $t2, $t1, $a0
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x137db4: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x137db4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x137db8: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x137db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137dbc: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x137dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x137dc0: 0xea4821  addu        $t1, $a3, $t2
    ctx->pc = 0x137dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137dc4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x137dc8: 0x14e80006  bne         $a3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137DC8u;
    {
        const bool branch_taken_0x137dc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x137dc8) {
            ctx->pc = 0x137DE4u;
            return;
        }
    }
    ctx->pc = 0x137DD0u;
    // 0x137dd0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x137dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x137dd4: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137dd8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137ddc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x137DDCu;
    {
        const bool branch_taken_0x137ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DDCu;
        // 0x137de0: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ddc) {
            ctx->pc = 0x137EA8u;
            return;
        }
    }
    ctx->pc = 0x137DE4u;
}
