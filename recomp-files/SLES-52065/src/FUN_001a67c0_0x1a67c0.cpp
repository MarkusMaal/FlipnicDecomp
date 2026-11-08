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

// Function: FUN_001a67c0
// Address: 0x1a67c0 - 0x1a6838
void FUN_001a67c0_0x1a67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a67c0_0x1a67c0");
#endif

    switch (ctx->pc) {
        case 0x1a67c0u: goto label_1a67c0;
        case 0x1a67c4u: goto label_1a67c4;
        case 0x1a67c8u: goto label_1a67c8;
        case 0x1a67ccu: goto label_1a67cc;
        case 0x1a67d0u: goto label_1a67d0;
        case 0x1a67d4u: goto label_1a67d4;
        case 0x1a67d8u: goto label_1a67d8;
        case 0x1a67dcu: goto label_1a67dc;
        case 0x1a67e0u: goto label_1a67e0;
        case 0x1a67e4u: goto label_1a67e4;
        case 0x1a67e8u: goto label_1a67e8;
        case 0x1a67ecu: goto label_1a67ec;
        case 0x1a67f0u: goto label_1a67f0;
        case 0x1a67f4u: goto label_1a67f4;
        case 0x1a67f8u: goto label_1a67f8;
        case 0x1a67fcu: goto label_1a67fc;
        case 0x1a6800u: goto label_1a6800;
        case 0x1a6804u: goto label_1a6804;
        case 0x1a6808u: goto label_1a6808;
        case 0x1a680cu: goto label_1a680c;
        case 0x1a6810u: goto label_1a6810;
        case 0x1a6814u: goto label_1a6814;
        case 0x1a6818u: goto label_1a6818;
        case 0x1a681cu: goto label_1a681c;
        case 0x1a6820u: goto label_1a6820;
        case 0x1a6824u: goto label_1a6824;
        case 0x1a6828u: goto label_1a6828;
        case 0x1a682cu: goto label_1a682c;
        case 0x1a6830u: goto label_1a6830;
        case 0x1a6834u: goto label_1a6834;
        default: break;
    }

    ctx->pc = 0x1a67c0u;

label_1a67c0:
    // 0x1a67c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a67c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a67c4:
    // 0x1a67c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a67c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a67c8:
    // 0x1a67c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a67c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a67cc:
    // 0x1a67cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a67ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a67d0:
    // 0x1a67d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a67d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a67d4:
    // 0x1a67d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a67d8:
    // 0x1a67d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a67dc:
    if (ctx->pc == 0x1A67DCu) {
        ctx->pc = 0x1A67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67D8u;
        // 0x1a67dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67E0u;
        goto label_1a67e0;
    }
    ctx->pc = 0x1A67D8u;
    {
        const bool branch_taken_0x1a67d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67D8u;
        // 0x1a67dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67d8) {
            ctx->pc = 0x1A67E8u;
            goto label_1a67e8;
        }
    }
    ctx->pc = 0x1A67E0u;
label_1a67e0:
    // 0x1a67e0: 0xc069a10  jal         func_1A6840
label_1a67e4:
    if (ctx->pc == 0x1A67E4u) {
        ctx->pc = 0x1A67E8u;
        goto label_1a67e8;
    }
    ctx->pc = 0x1A67E0u;
    SET_GPR_U32(ctx, 31, 0x1A67E8u);
    ctx->pc = 0x1A6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6840u, 0x1A67E0u, 0x1A67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A67E8u;
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
