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

// Function: FUN_001a6650
// Address: 0x1a6650 - 0x1a66e8
void FUN_001a6650_0x1a6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6650_0x1a6650");
#endif

    switch (ctx->pc) {
        case 0x1a6650u: goto label_1a6650;
        case 0x1a6654u: goto label_1a6654;
        case 0x1a6658u: goto label_1a6658;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6664u: goto label_1a6664;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a666cu: goto label_1a666c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6674u: goto label_1a6674;
        case 0x1a6678u: goto label_1a6678;
        case 0x1a667cu: goto label_1a667c;
        case 0x1a6680u: goto label_1a6680;
        case 0x1a6684u: goto label_1a6684;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6690u: goto label_1a6690;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a669cu: goto label_1a669c;
        case 0x1a66a0u: goto label_1a66a0;
        case 0x1a66a4u: goto label_1a66a4;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66acu: goto label_1a66ac;
        case 0x1a66b0u: goto label_1a66b0;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66bcu: goto label_1a66bc;
        case 0x1a66c0u: goto label_1a66c0;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66c8u: goto label_1a66c8;
        case 0x1a66ccu: goto label_1a66cc;
        case 0x1a66d0u: goto label_1a66d0;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66d8u: goto label_1a66d8;
        case 0x1a66dcu: goto label_1a66dc;
        case 0x1a66e0u: goto label_1a66e0;
        case 0x1a66e4u: goto label_1a66e4;
        default: break;
    }

    ctx->pc = 0x1a6650u;

label_1a6650:
    // 0x1a6650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a6650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a6654:
    // 0x1a6654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a6658:
    // 0x1a6658: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a6658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a665c:
    // 0x1a665c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a6660:
    // 0x1a6660: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a6660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a6664:
    // 0x1a6664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6668:
    // 0x1a6668: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a6668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a666c:
    // 0x1a666c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a666cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1a6670:
    // 0x1a6670: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x1a6670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_1a6674:
    // 0x1a6674: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a6674u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1a6678:
    // 0x1a6678: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a6678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a667c:
    // 0x1a667c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a667cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_1a6680:
    // 0x1a6680: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a6680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a6684:
    // 0x1a6684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6688:
    // 0x1a6688: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a668c:
    // 0x1a668c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1a668cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6690:
    // 0x1a6690: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a6690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a6694:
    // 0x1a6694: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6698:
    // 0x1a6698: 0x320f809  jalr        $t9
label_1a669c:
    if (ctx->pc == 0x1A669Cu) {
        ctx->pc = 0x1A669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6698u;
        // 0x1a669c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66A0u;
        goto label_1a66a0;
    }
    ctx->pc = 0x1A6698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A66A0u);
        ctx->pc = 0x1A669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6698u;
        // 0x1a669c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6698u, 0x1A66A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A66A0u;
label_1a66a0:
    // 0x1a66a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1a66a4:
    if (ctx->pc == 0x1A66A4u) {
        ctx->pc = 0x1A66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66A0u;
        // 0x1a66a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66A8u;
        goto label_1a66a8;
    }
    ctx->pc = 0x1A66A0u;
    {
        const bool branch_taken_0x1a66a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66A0u;
        // 0x1a66a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66a0) {
            ctx->pc = 0x1A66CCu;
            goto label_1a66cc;
        }
    }
    ctx->pc = 0x1A66A8u;
label_1a66a8:
    // 0x1a66a8: 0xc04c6d8  jal         func_131B60
label_1a66ac:
    if (ctx->pc == 0x1A66ACu) {
        ctx->pc = 0x1A66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66A8u;
        // 0x1a66ac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66B0u;
        goto label_1a66b0;
    }
    ctx->pc = 0x1A66A8u;
    SET_GPR_U32(ctx, 31, 0x1A66B0u);
    ctx->pc = 0x1A66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66A8u;
    // 0x1a66ac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x1A66A8u, 0x1A66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66B0u;
label_1a66b0:
    // 0x1a66b0: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x1a66b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a66b4:
    // 0x1a66b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a66b8:
    // 0x1a66b8: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x1a66b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1a66bc:
    // 0x1a66bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a66bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a66c0:
    // 0x1a66c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1a66c4:
    // 0x1a66c4: 0x320f809  jalr        $t9
label_1a66c8:
    if (ctx->pc == 0x1A66C8u) {
        ctx->pc = 0x1A66C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66C4u;
        // 0x1a66c8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66CCu;
        goto label_1a66cc;
    }
    ctx->pc = 0x1A66C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A66CCu);
        ctx->pc = 0x1A66C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66C4u;
        // 0x1a66c8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A66C4u, 0x1A66CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A66CCu;
label_1a66cc:
    // 0x1a66cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a66ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a66d0:
    // 0x1a66d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a66d4:
    // 0x1a66d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a66d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a66d8:
    // 0x1a66d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a66dc:
    // 0x1a66dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a66dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a66e0:
    // 0x1a66e0: 0x3e00008  jr          $ra
label_1a66e4:
    if (ctx->pc == 0x1A66E4u) {
        ctx->pc = 0x1A66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66E0u;
        // 0x1a66e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66E8u;
        goto label_fallthrough_0x1a66e0;
    }
    ctx->pc = 0x1A66E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66E0u;
        // 0x1a66e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A66E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a66e0:
    ctx->pc = 0x1A66E8u;
}
