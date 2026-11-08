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

// Function: caseD_33
// Address: 0x1ed5f0 - 0x1ed618
void caseD_33_0x1ed5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_33_0x1ed5f0");
#endif

    switch (ctx->pc) {
        case 0x1ed5f0u: goto label_1ed5f0;
        case 0x1ed5f4u: goto label_1ed5f4;
        case 0x1ed5f8u: goto label_1ed5f8;
        case 0x1ed5fcu: goto label_1ed5fc;
        case 0x1ed600u: goto label_1ed600;
        case 0x1ed604u: goto label_1ed604;
        case 0x1ed608u: goto label_1ed608;
        case 0x1ed60cu: goto label_1ed60c;
        case 0x1ed610u: goto label_1ed610;
        case 0x1ed614u: goto label_1ed614;
        default: break;
    }

    ctx->pc = 0x1ed5f0u;

label_1ed5f0:
    // 0x1ed5f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed5f4:
    // 0x1ed5f4: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed5f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed5f8:
    // 0x1ed5f8: 0x8271fff8  lb          $s1, -0x8($s3)
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed5fc:
    // 0x1ed5fc: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed600:
    // 0x1ed600: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1ed600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_1ed604:
    // 0x1ed604: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ed604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1ed608:
    // 0x1ed608: 0x40f809  jalr        $v0
label_1ed60c:
    if (ctx->pc == 0x1ED60Cu) {
        ctx->pc = 0x1ED60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED608u;
        // 0x1ed60c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED610u;
        goto label_1ed610;
    }
    ctx->pc = 0x1ED608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED610u);
        ctx->pc = 0x1ED60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED608u;
        // 0x1ed60c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED608u, 0x1ED610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED610u;
label_1ed610:
    // 0x1ed610: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ed614:
    if (ctx->pc == 0x1ED614u) {
        ctx->pc = 0x1ED614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED610u;
        // 0x1ed614: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED618u;
        goto label_fallthrough_0x1ed610;
    }
    ctx->pc = 0x1ED610u;
    {
        const bool branch_taken_0x1ed610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED610u;
        // 0x1ed614: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed610) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed610:
    ctx->pc = 0x1ED618u;
}
