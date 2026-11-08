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

// Function: FUN_00122320
// Address: 0x122320 - 0x12241c
void FUN_00122320_0x122320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122320_0x122320");
#endif

    switch (ctx->pc) {
        case 0x122368u: goto label_122368;
        case 0x122388u: goto label_122388;
        case 0x122390u: goto label_122390;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223dcu: goto label_1223dc;
        case 0x1223f4u: goto label_1223f4;
        default: break;
    }

    ctx->pc = 0x122320u;

    // 0x122320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122324: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x122324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x122328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12232c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122338: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x122338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12233c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12233cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x122340: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x122340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122344: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x122344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x122348u;
    {
        const bool branch_taken_0x122348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122348u;
        // 0x12234c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122348) {
            ctx->pc = 0x122360u;
            goto label_122360;
        }
    }
    ctx->pc = 0x122350u;
    // 0x122350: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x122350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122358: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x122358u;
    {
        const bool branch_taken_0x122358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122358u;
        // 0x12235c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122358) {
            ctx->pc = 0x1223F8u;
            goto label_1223f8;
        }
    }
    ctx->pc = 0x122360u;
label_122360:
    // 0x122360: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122360u;
    SET_GPR_U32(ctx, 31, 0x122368u);
    ctx->pc = 0x122364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122360u;
    // 0x122364: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122360u, 0x122368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122368u;
label_122368:
    // 0x122368: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12236c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12236Cu;
    {
        const bool branch_taken_0x12236c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x122370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12236Cu;
        // 0x122370: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12236c) {
            ctx->pc = 0x122390u;
            goto label_122390;
        }
    }
    ctx->pc = 0x122374u;
    // 0x122374: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122378: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12237c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122380: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122380u;
    SET_GPR_U32(ctx, 31, 0x122388u);
    ctx->pc = 0x122384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122380u;
    // 0x122384: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122380u, 0x122388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122388u;
label_122388:
    // 0x122388: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122388u;
    SET_GPR_U32(ctx, 31, 0x122390u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122388u, 0x122390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122390u;
label_122390:
    // 0x122390: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x122390u;
    {
        const bool branch_taken_0x122390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x122390) {
            ctx->pc = 0x1223F4u;
            goto label_1223f4;
        }
    }
    ctx->pc = 0x122398u;
    // 0x122398: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x122398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12239c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x12239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1223a0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1223a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1223a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1223a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1223a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1223a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1223ac: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1223b0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1223b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1223b4: 0xc04891c  jal         func_122470
    ctx->pc = 0x1223B4u;
    SET_GPR_U32(ctx, 31, 0x1223BCu);
    ctx->pc = 0x1223B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223B4u;
    // 0x1223b8: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122470u, 0x1223B4u, 0x1223BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223BCu;
label_1223bc:
    // 0x1223bc: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1223bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1223c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1223c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1223c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1223c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1223c8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1223c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1223cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1223d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1223d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223d4: 0xc048908  jal         func_122420
    ctx->pc = 0x1223D4u;
    SET_GPR_U32(ctx, 31, 0x1223DCu);
    ctx->pc = 0x1223D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223D4u;
    // 0x1223d8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122420u, 0x1223D4u, 0x1223DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223DCu;
label_1223dc:
    // 0x1223dc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1223dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1223e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1223e4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1223e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1223e8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1223e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1223ec: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1223ECu;
    SET_GPR_U32(ctx, 31, 0x1223F4u);
    ctx->pc = 0x1223F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223ECu;
    // 0x1223f0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1223ECu, 0x1223F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223F4u;
label_1223f4:
    // 0x1223f4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1223f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1223f8:
    // 0x1223f8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1223f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x1223fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1223fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122400: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122404: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12240c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122414: 0x3e00008  jr          $ra
    ctx->pc = 0x122414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122414u;
        // 0x122418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12241Cu;
}
