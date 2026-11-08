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

// Function: entry_001af850
// Address: 0x1af850 - 0x1af93c
void entry_001af850_0x1af850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af850_0x1af850");
#endif

    switch (ctx->pc) {
        case 0x1af864u: goto label_1af864;
        case 0x1af880u: goto label_1af880;
        default: break;
    }

    ctx->pc = 0x1af850u;

label_1af850:
    // 0x1af850: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1af854:
    // 0x1af854: 0x24422d00  addiu       $v0, $v0, 0x2D00
    ctx->pc = 0x1af854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11520));
label_1af858:
    // 0x1af858: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1af858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1af85c:
    // 0x1af85c: 0xc04c0e0  jal         func_130380
label_1af860:
    if (ctx->pc == 0x1AF860u) {
        ctx->pc = 0x1AF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF85Cu;
        // 0x1af860: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF864u;
        goto label_1af864;
    }
    ctx->pc = 0x1AF85Cu;
    SET_GPR_U32(ctx, 31, 0x1AF864u);
    ctx->pc = 0x1AF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF85Cu;
    // 0x1af860: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1AF85Cu, 0x1AF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF864u;
label_1af864:
    // 0x1af864: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1af868:
    // 0x1af868: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x1af868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
label_1af86c:
    // 0x1af86c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x1af86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_1af870:
    // 0x1af870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1af870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af874:
    // 0x1af874: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1af874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1af878:
    // 0x1af878: 0x320f809  jalr        $t9
label_1af87c:
    if (ctx->pc == 0x1AF87Cu) {
        ctx->pc = 0x1AF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF878u;
        // 0x1af87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF880u;
        goto label_1af880;
    }
    ctx->pc = 0x1AF878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AF880u);
        ctx->pc = 0x1AF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF878u;
        // 0x1af87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF878u, 0x1AF880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF880u;
label_1af880:
    // 0x1af880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1af884:
    // 0x1af884: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x1af884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1af888:
    // 0x1af888: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1af88c:
    if (ctx->pc == 0x1AF88Cu) {
        ctx->pc = 0x1AF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF888u;
        // 0x1af88c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF890u;
        goto label_1af890;
    }
    ctx->pc = 0x1AF888u;
    {
        const bool branch_taken_0x1af888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF888u;
        // 0x1af88c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af888) {
            ctx->pc = 0x1AF850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af850;
        }
    }
    ctx->pc = 0x1AF890u;
label_1af890:
    // 0x1af890: 0x8f8a8350  lw          $t2, -0x7CB0($gp)
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935376)));
label_1af894:
    // 0x1af894: 0x260903b0  addiu       $t1, $s0, 0x3B0
    ctx->pc = 0x1af894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_1af898:
    // 0x1af898: 0x26080570  addiu       $t0, $s0, 0x570
    ctx->pc = 0x1af898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
label_1af89c:
    // 0x1af89c: 0x26070730  addiu       $a3, $s0, 0x730
    ctx->pc = 0x1af89cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1840));
label_1af8a0:
    // 0x1af8a0: 0x26060740  addiu       $a2, $s0, 0x740
    ctx->pc = 0x1af8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
label_1af8a4:
    // 0x1af8a4: 0x26050758  addiu       $a1, $s0, 0x758
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1880));
label_1af8a8:
    // 0x1af8a8: 0x26040774  addiu       $a0, $s0, 0x774
    ctx->pc = 0x1af8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1908));
label_1af8ac:
    // 0x1af8ac: 0x260307b0  addiu       $v1, $s0, 0x7B0
    ctx->pc = 0x1af8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
label_1af8b0:
    // 0x1af8b0: 0xae0a0118  sw          $t2, 0x118($s0)
    ctx->pc = 0x1af8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 10));
label_1af8b4:
    // 0x1af8b4: 0x8f8a8354  lw          $t2, -0x7CAC($gp)
    ctx->pc = 0x1af8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935380)));
label_1af8b8:
    // 0x1af8b8: 0xae0a011c  sw          $t2, 0x11C($s0)
    ctx->pc = 0x1af8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 10));
label_1af8bc:
    // 0x1af8bc: 0x8f8a8358  lw          $t2, -0x7CA8($gp)
    ctx->pc = 0x1af8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
label_1af8c0:
    // 0x1af8c0: 0xae0a0120  sw          $t2, 0x120($s0)
    ctx->pc = 0x1af8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 10));
label_1af8c4:
    // 0x1af8c4: 0x8f8a835c  lw          $t2, -0x7CA4($gp)
    ctx->pc = 0x1af8c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935388)));
label_1af8c8:
    // 0x1af8c8: 0xae0a0124  sw          $t2, 0x124($s0)
    ctx->pc = 0x1af8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 10));
label_1af8cc:
    // 0x1af8cc: 0xae0902f4  sw          $t1, 0x2F4($s0)
    ctx->pc = 0x1af8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 9));
label_1af8d0:
    // 0x1af8d0: 0xae0802f8  sw          $t0, 0x2F8($s0)
    ctx->pc = 0x1af8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 8));
label_1af8d4:
    // 0x1af8d4: 0xae0702fc  sw          $a3, 0x2FC($s0)
    ctx->pc = 0x1af8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 7));
label_1af8d8:
    // 0x1af8d8: 0xae060300  sw          $a2, 0x300($s0)
    ctx->pc = 0x1af8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 6));
label_1af8dc:
    // 0x1af8dc: 0xae050304  sw          $a1, 0x304($s0)
    ctx->pc = 0x1af8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 5));
label_1af8e0:
    // 0x1af8e0: 0xae040308  sw          $a0, 0x308($s0)
    ctx->pc = 0x1af8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 4));
label_1af8e4:
    // 0x1af8e4: 0xae03030c  sw          $v1, 0x30C($s0)
    ctx->pc = 0x1af8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 3));
label_1af8e8:
    // 0x1af8e8: 0x8e0302f4  lw          $v1, 0x2F4($s0)
    ctx->pc = 0x1af8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
label_1af8ec:
    // 0x1af8ec: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af8f0:
    // 0x1af8f0: 0x8e0302f8  lw          $v1, 0x2F8($s0)
    ctx->pc = 0x1af8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_1af8f4:
    // 0x1af8f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af8f8:
    // 0x1af8f8: 0x8e0302fc  lw          $v1, 0x2FC($s0)
    ctx->pc = 0x1af8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
label_1af8fc:
    // 0x1af8fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af900:
    // 0x1af900: 0x8e030300  lw          $v1, 0x300($s0)
    ctx->pc = 0x1af900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_1af904:
    // 0x1af904: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af908:
    // 0x1af908: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x1af908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_1af90c:
    // 0x1af90c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af90cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af910:
    // 0x1af910: 0x8e030308  lw          $v1, 0x308($s0)
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_1af914:
    // 0x1af914: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af918:
    // 0x1af918: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1af918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
label_1af91c:
    // 0x1af91c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af91cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af920:
    // 0x1af920: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af924:
    // 0x1af924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1af928:
    // 0x1af928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af92c:
    // 0x1af92c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af930:
    // 0x1af930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af934:
    // 0x1af934: 0x3e00008  jr          $ra
label_1af938:
    if (ctx->pc == 0x1AF938u) {
        ctx->pc = 0x1AF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF934u;
        // 0x1af938: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF93Cu;
        goto label_fallthrough_0x1af934;
    }
    ctx->pc = 0x1AF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF934u;
        // 0x1af938: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af934:
    ctx->pc = 0x1AF93Cu;
}
