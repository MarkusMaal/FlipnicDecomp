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

// Function: entry_0013daf0
// Address: 0x13daf0 - 0x13db14
void entry_0013daf0_0x13daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013daf0_0x13daf0");
#endif

    ctx->pc = 0x13daf0u;

    // 0x13daf0: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x13daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13daf4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DAF4u;
    {
        const bool branch_taken_0x13daf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13daf4) {
            ctx->pc = 0x13DB14u;
            return;
        }
    }
    ctx->pc = 0x13DAFCu;
    // 0x13dafc: 0x8c83017c  lw          $v1, 0x17C($a0)
    ctx->pc = 0x13dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13db00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13db04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DB04u;
    {
        const bool branch_taken_0x13db04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13db04) {
            ctx->pc = 0x13DB14u;
            return;
        }
    }
    ctx->pc = 0x13DB0Cu;
    // 0x13db0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DB0Cu;
    {
        const bool branch_taken_0x13db0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB0Cu;
        // 0x13db10: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db0c) {
            ctx->pc = 0x13DB18u;
            return;
        }
    }
    ctx->pc = 0x13DB14u;
}
