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

// Function: FUN_0018c310
// Address: 0x18c310 - 0x18c34c
void FUN_0018c310_0x18c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c310_0x18c310");
#endif

    ctx->pc = 0x18c310u;

    // 0x18c310: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x18c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c318: 0xc48004d0  lwc1        $f0, 0x4D0($a0)
    ctx->pc = 0x18c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c31c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c320: 0xe4800550  swc1        $f0, 0x550($a0)
    ctx->pc = 0x18c320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1360), bits); }
    // 0x18c324: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x18c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c328: 0xc48004d8  lwc1        $f0, 0x4D8($a0)
    ctx->pc = 0x18c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c32c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c330: 0xe4800558  swc1        $f0, 0x558($a0)
    ctx->pc = 0x18c330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1368), bits); }
    // 0x18c334: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x18c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c338: 0xc48004d4  lwc1        $f0, 0x4D4($a0)
    ctx->pc = 0x18c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c33c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c340: 0xe4800554  swc1        $f0, 0x554($a0)
    ctx->pc = 0x18c340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1364), bits); }
    // 0x18c344: 0x3e00008  jr          $ra
    ctx->pc = 0x18C344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C344u;
        // 0x18c348: 0xac830540  sw          $v1, 0x540($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C34Cu;
}
