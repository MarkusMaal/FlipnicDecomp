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

// Function: entry_00141d94
// Address: 0x141d94 - 0x141db8
void entry_00141d94_0x141d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d94_0x141d94");
#endif

    switch (ctx->pc) {
        case 0x141dacu: goto label_141dac;
        default: break;
    }

    ctx->pc = 0x141d94u;

label_141d94:
    // 0x141d94: 0x92a50028  lbu         $a1, 0x28($s5)
    ctx->pc = 0x141d94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x141d98: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x141d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141d9c: 0x8e64fffc  lw          $a0, -0x4($s3)
    ctx->pc = 0x141d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x141da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141da4: 0xc050850  jal         func_142140
    ctx->pc = 0x141DA4u;
    SET_GPR_U32(ctx, 31, 0x141DACu);
    ctx->pc = 0x141DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DA4u;
    // 0x141da8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142140u, 0x141DA4u, 0x141DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DACu;
label_141dac:
    // 0x141dac: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x141dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x141db0: 0x1672fff8  bne         $s3, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x141DB0u;
    {
        const bool branch_taken_0x141db0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x141db0) {
            ctx->pc = 0x141D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141d94;
        }
    }
    ctx->pc = 0x141DB8u;
}
