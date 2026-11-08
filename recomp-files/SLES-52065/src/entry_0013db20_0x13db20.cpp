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

// Function: entry_0013db20
// Address: 0x13db20 - 0x13db54
void entry_0013db20_0x13db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013db20_0x13db20");
#endif

    ctx->pc = 0x13db20u;

    // 0x13db20: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13db24: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13DB24u;
    {
        const bool branch_taken_0x13db24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db24) {
            ctx->pc = 0x13DB54u;
            return;
        }
    }
    ctx->pc = 0x13DB2Cu;
    // 0x13db2c: 0x8c83017c  lw          $v1, 0x17C($a0)
    ctx->pc = 0x13db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13db30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13db34: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DB34u;
    {
        const bool branch_taken_0x13db34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13db34) {
            ctx->pc = 0x13DB54u;
            return;
        }
    }
    ctx->pc = 0x13DB3Cu;
    // 0x13db3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13db40: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13db44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13db48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13db48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13db4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DB4Cu;
    {
        const bool branch_taken_0x13db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB4Cu;
        // 0x13db50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db4c) {
            ctx->pc = 0x13DB58u;
            return;
        }
    }
    ctx->pc = 0x13DB54u;
}
