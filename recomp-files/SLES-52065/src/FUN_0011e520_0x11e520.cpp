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

// Function: FUN_0011e520
// Address: 0x11e520 - 0x11e618
void FUN_0011e520_0x11e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e520_0x11e520");
#endif

    switch (ctx->pc) {
        case 0x11e550u: goto label_11e550;
        case 0x11e558u: goto label_11e558;
        case 0x11e5b8u: goto label_11e5b8;
        case 0x11e5ecu: goto label_11e5ec;
        default: break;
    }

    ctx->pc = 0x11e520u;

    // 0x11e520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11e524: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11e528: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11e52c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11e52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11e530: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11e530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e534: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11e534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11e538: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11e538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11e540: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11e540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11e548: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11e548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11e550:
    // 0x11e550: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11e550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11e554: 0x0  nop
    ctx->pc = 0x11e554u;
    // NOP
label_11e558:
    // 0x11e558: 0x8f8283f0  lw          $v0, -0x7C10($gp)
    ctx->pc = 0x11e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x11e55c: 0x0  nop
    ctx->pc = 0x11e55cu;
    // NOP
    // 0x11e560: 0x0  nop
    ctx->pc = 0x11e560u;
    // NOP
    // 0x11e564: 0x0  nop
    ctx->pc = 0x11e564u;
    // NOP
    // 0x11e568: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11E568u;
    {
        const bool branch_taken_0x11e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e568) {
            ctx->pc = 0x11E558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e558;
        }
    }
    ctx->pc = 0x11E570u;
    // 0x11e570: 0x8f8283e0  lw          $v0, -0x7C20($gp)
    ctx->pc = 0x11e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935520)));
    // 0x11e574: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E574u;
    {
        const bool branch_taken_0x11e574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E574u;
        // 0x11e578: 0xaf8083f0  sw          $zero, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e574) {
            ctx->pc = 0x11E594u;
            goto label_11e594;
        }
    }
    ctx->pc = 0x11E57Cu;
    // 0x11e57c: 0xdf8383e8  ld          $v1, -0x7C18($gp)
    ctx->pc = 0x11e57cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935528)));
    // 0x11e580: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x11e580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x11e584: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e588: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x11e588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x11e58c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E58Cu;
    {
        const bool branch_taken_0x11e58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e58c) {
            ctx->pc = 0x11E5D0u;
            goto label_11e5d0;
        }
    }
    ctx->pc = 0x11E594u;
label_11e594:
    // 0x11e594: 0x0  nop
    ctx->pc = 0x11e594u;
    // NOP
    // 0x11e598: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x11e598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x11e59c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e59cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5a4: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x11e5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x11e5a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5ac: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x11e5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e5b0: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11E5B0u;
    SET_GPR_U32(ctx, 31, 0x11E5B8u);
    ctx->pc = 0x11E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5B0u;
    // 0x11e5b4: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11E5B0u, 0x11E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5B8u;
label_11e5b8:
    // 0x11e5b8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x11e5b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e5bc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x11e5bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x11e5c0: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E5C0u;
    {
        const bool branch_taken_0x11e5c0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x11e5c0) {
            ctx->pc = 0x11E5D0u;
            goto label_11e5d0;
        }
    }
    ctx->pc = 0x11E5C8u;
    // 0x11e5c8: 0xaf9183e0  sw          $s1, -0x7C20($gp)
    ctx->pc = 0x11e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935520), GPR_U32(ctx, 17));
    // 0x11e5cc: 0xff9083e8  sd          $s0, -0x7C18($gp)
    ctx->pc = 0x11e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 16));
label_11e5d0:
    // 0x11e5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e5d4: 0x600ffde  bltz        $s0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11E5D4u;
    {
        const bool branch_taken_0x11e5d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D4u;
        // 0x11e5d8: 0xaf8283f0  sw          $v0, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d4) {
            ctx->pc = 0x11E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e550;
        }
    }
    ctx->pc = 0x11E5DCu;
    // 0x11e5dc: 0x8ea40530  lw          $a0, 0x530($s5)
    ctx->pc = 0x11e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11e5e0: 0x1232c0  sll         $a2, $s2, 11
    ctx->pc = 0x11e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x11e5e4: 0xc046804  jal         func_11A010
    ctx->pc = 0x11E5E4u;
    SET_GPR_U32(ctx, 31, 0x11E5ECu);
    ctx->pc = 0x11E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5E4u;
    // 0x11e5e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A010u, 0x11E5E4u, 0x11E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5ECu;
label_11e5ec:
    // 0x11e5ec: 0x440ffd8  bltz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x11E5ECu;
    {
        const bool branch_taken_0x11e5ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11e5ec) {
            ctx->pc = 0x11E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e550;
        }
    }
    ctx->pc = 0x11E5F4u;
    // 0x11e5f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11e5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e5f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11e5f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e5fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11e5fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11e600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e610: 0x3e00008  jr          $ra
    ctx->pc = 0x11E610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E610u;
        // 0x11e614: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E618u;
}
