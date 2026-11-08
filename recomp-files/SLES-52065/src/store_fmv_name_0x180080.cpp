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

// Function: store_fmv_name
// Address: 0x180080 - 0x180188
void store_fmv_name_0x180080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("store_fmv_name_0x180080");
#endif

    switch (ctx->pc) {
        case 0x1800b0u: goto label_1800b0;
        case 0x1800d0u: goto label_1800d0;
        case 0x1800e4u: goto label_1800e4;
        case 0x180128u: goto label_180128;
        case 0x180150u: goto label_180150;
        case 0x180158u: goto label_180158;
        default: break;
    }

    ctx->pc = 0x180080u;

    // 0x180080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x180084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x180084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x180088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18008c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x180090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180098: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x180098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18009c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1800a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1800a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1800a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1800A8u;
    SET_GPR_U32(ctx, 31, 0x1800B0u);
    ctx->pc = 0x1800ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800A8u;
    // 0x1800ac: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1800A8u, 0x1800B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800B0u;
label_1800b0:
    // 0x1800b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1800B0u;
    {
        const bool branch_taken_0x1800b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800B0u;
        // 0x1800b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800b0) {
            ctx->pc = 0x1800C4u;
            goto label_1800c4;
        }
    }
    ctx->pc = 0x1800B8u;
    // 0x1800b8: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1800b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1800bc: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x1800bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x1800c0: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1800c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_1800c4:
    // 0x1800c4: 0xaf828660  sw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 2));
    // 0x1800c8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1800C8u;
    SET_GPR_U32(ctx, 31, 0x1800D0u);
    ctx->pc = 0x1800CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800C8u;
    // 0x1800cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1800C8u, 0x1800D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800D0u;
label_1800d0:
    // 0x1800d0: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1800d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1800d8: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    // 0x1800dc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1800DCu;
    SET_GPR_U32(ctx, 31, 0x1800E4u);
    ctx->pc = 0x1800E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800DCu;
    // 0x1800e0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1800DCu, 0x1800E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800E4u;
label_1800e4:
    // 0x1800e4: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800e8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1800e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1800ec: 0xac520040  sw          $s2, 0x40($v0)
    ctx->pc = 0x1800ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 18));
    // 0x1800f0: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800f4: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1800f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1800f8: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x1800f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1800fc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1800fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x180100: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180104: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x180104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x180108: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x18010c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x18010cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x180110: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180114: 0xac510060  sw          $s1, 0x60($v0)
    ctx->pc = 0x180114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 17));
    // 0x180118: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x18011c: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x18011cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
    // 0x180120: 0xc060064  jal         func_180190
    ctx->pc = 0x180120u;
    SET_GPR_U32(ctx, 31, 0x180128u);
    ctx->pc = 0x180124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180120u;
    // 0x180124: 0x8f848660  lw          $a0, -0x79A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180190u, 0x180120u, 0x180128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180128u;
label_180128:
    // 0x180128: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x180128u;
    {
        const bool branch_taken_0x180128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180128) {
            ctx->pc = 0x180164u;
            goto label_180164;
        }
    }
    ctx->pc = 0x180130u;
    // 0x180130: 0x8f908660  lw          $s0, -0x79A0($gp)
    ctx->pc = 0x180130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180134: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180134u;
    {
        const bool branch_taken_0x180134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x180134) {
            ctx->pc = 0x180158u;
            goto label_180158;
        }
    }
    ctx->pc = 0x18013Cu;
    // 0x18013c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x18013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x180140: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180140u;
    {
        const bool branch_taken_0x180140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x180140) {
            ctx->pc = 0x180150u;
            goto label_180150;
        }
    }
    ctx->pc = 0x180148u;
    // 0x180148: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x180148u;
    SET_GPR_U32(ctx, 31, 0x180150u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x180148u, 0x180150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180150u;
label_180150:
    // 0x180150: 0xc0401a4  jal         func_100690
    ctx->pc = 0x180150u;
    SET_GPR_U32(ctx, 31, 0x180158u);
    ctx->pc = 0x180154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180150u;
    // 0x180154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x180150u, 0x180158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180158u;
label_180158:
    // 0x180158: 0xaf808660  sw          $zero, -0x79A0($gp)
    ctx->pc = 0x180158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 0));
    // 0x18015c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18015Cu;
    {
        const bool branch_taken_0x18015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18015Cu;
        // 0x180160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18015c) {
            ctx->pc = 0x18016Cu;
            goto label_18016c;
        }
    }
    ctx->pc = 0x180164u;
label_180164:
    // 0x180164: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x180164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180168: 0x0  nop
    ctx->pc = 0x180168u;
    // NOP
label_18016c:
    // 0x18016c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18016cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x180170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18017c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18017cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180180: 0x3e00008  jr          $ra
    ctx->pc = 0x180180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180180u;
        // 0x180184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180188u;
}
