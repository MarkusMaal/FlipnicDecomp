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

// Function: entry_001a67e8
// Address: 0x1a67e8 - 0x1a6838
void entry_001a67e8_0x1a67e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a67e8_0x1a67e8");
#endif

    switch (ctx->pc) {
        case 0x1a680cu: goto label_1a680c;
        case 0x1a6824u: goto label_1a6824;
        default: break;
    }

    ctx->pc = 0x1a67e8u;

label_1a67e8:
    // 0x1a67e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a67e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a67ec:
    // 0x1a67ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a67ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a67f0:
    // 0x1a67f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a67f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a67f4:
    // 0x1a67f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a67f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a67f8:
    // 0x1a67f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a67f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a67fc:
    // 0x1a67fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a67fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6800:
    // 0x1a6800: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a6800u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a6804:
    // 0x1a6804: 0xc04bce0  jal         func_12F380
label_1a6808:
    if (ctx->pc == 0x1A6808u) {
        ctx->pc = 0x1A6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6804u;
        // 0x1a6808: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A680Cu;
        goto label_1a680c;
    }
    ctx->pc = 0x1A6804u;
    SET_GPR_U32(ctx, 31, 0x1A680Cu);
    ctx->pc = 0x1A6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6804u;
    // 0x1a6808: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1A6804u, 0x1A680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A680Cu;
label_1a680c:
    // 0x1a680c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a680cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a6810:
    // 0x1a6810: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a6810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a6814:
    // 0x1a6814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6818:
    // 0x1a6818: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a681c:
    // 0x1a681c: 0x320f809  jalr        $t9
label_1a6820:
    if (ctx->pc == 0x1A6820u) {
        ctx->pc = 0x1A6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A681Cu;
        // 0x1a6820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6824u;
        goto label_1a6824;
    }
    ctx->pc = 0x1A681Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6824u);
        ctx->pc = 0x1A6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A681Cu;
        // 0x1a6820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A681Cu, 0x1A6824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6824u;
label_1a6824:
    // 0x1a6824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6828:
    // 0x1a6828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a682c:
    // 0x1a682c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a682cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6830:
    // 0x1a6830: 0x3e00008  jr          $ra
label_1a6834:
    if (ctx->pc == 0x1A6834u) {
        ctx->pc = 0x1A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6830u;
        // 0x1a6834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6838u;
        goto label_fallthrough_0x1a6830;
    }
    ctx->pc = 0x1A6830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6830u;
        // 0x1a6834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6830:
    ctx->pc = 0x1A6838u;
}
