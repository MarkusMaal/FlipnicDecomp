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

// Function: caseD_35
// Address: 0x1ed500 - 0x1ed534
void caseD_35_0x1ed500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_35_0x1ed500");
#endif

    switch (ctx->pc) {
        case 0x1ed500u: goto label_1ed500;
        case 0x1ed504u: goto label_1ed504;
        case 0x1ed508u: goto label_1ed508;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed510u: goto label_1ed510;
        case 0x1ed514u: goto label_1ed514;
        case 0x1ed518u: goto label_1ed518;
        case 0x1ed51cu: goto label_1ed51c;
        case 0x1ed520u: goto label_1ed520;
        case 0x1ed524u: goto label_1ed524;
        case 0x1ed528u: goto label_1ed528;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed530u: goto label_1ed530;
        default: break;
    }

    ctx->pc = 0x1ed500u;

label_1ed500:
    // 0x1ed500: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed504:
    // 0x1ed504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ed508:
    // 0x1ed508: 0xc66cfff8  lwc1        $f12, -0x8($s3)
    ctx->pc = 0x1ed508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ed50c:
    // 0x1ed50c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1ed50cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed510:
    // 0x1ed510: 0x0  nop
    ctx->pc = 0x1ed510u;
    // NOP
label_1ed514:
    // 0x1ed514: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ed518:
    if (ctx->pc == 0x1ED518u) {
        ctx->pc = 0x1ED518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED514u;
        // 0x1ed518: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED51Cu;
        goto label_1ed51c;
    }
    ctx->pc = 0x1ED514u;
    {
        const bool branch_taken_0x1ed514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED514u;
        // 0x1ed518: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed514) {
            ctx->pc = 0x1ED534u;
            return;
        }
    }
    ctx->pc = 0x1ED51Cu;
label_1ed51c:
    // 0x1ed51c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ed51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ed520:
    // 0x1ed520: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed524:
    // 0x1ed524: 0x40f809  jalr        $v0
label_1ed528:
    if (ctx->pc == 0x1ED528u) {
        ctx->pc = 0x1ED528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED524u;
        // 0x1ed528: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED52Cu;
        goto label_1ed52c;
    }
    ctx->pc = 0x1ED524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED52Cu);
        ctx->pc = 0x1ED528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED524u;
        // 0x1ed528: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED524u, 0x1ED52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED52Cu;
label_1ed52c:
    // 0x1ed52c: 0x10000044  b           . + 4 + (0x44 << 2)
label_1ed530:
    if (ctx->pc == 0x1ED530u) {
        ctx->pc = 0x1ED530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED52Cu;
        // 0x1ed530: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED534u;
        goto label_fallthrough_0x1ed52c;
    }
    ctx->pc = 0x1ED52Cu;
    {
        const bool branch_taken_0x1ed52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED52Cu;
        // 0x1ed530: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed52c) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed52c:
    ctx->pc = 0x1ED534u;
}
