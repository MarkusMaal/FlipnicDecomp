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

// Function: entry_0011574c
// Address: 0x11574c - 0x1157f0
void entry_0011574c_0x11574c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011574c_0x11574c");
#endif

    switch (ctx->pc) {
        case 0x115778u: goto label_115778;
        case 0x115798u: goto label_115798;
        case 0x1157c0u: goto label_1157c0;
        case 0x1157e0u: goto label_1157e0;
        default: break;
    }

    ctx->pc = 0x11574cu;

label_11574c:
    // 0x11574c: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
label_115750:
    if (ctx->pc == 0x115750u) {
        ctx->pc = 0x115754u;
        goto label_115754;
    }
    ctx->pc = 0x11574Cu;
    {
        const bool branch_taken_0x11574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11574c) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x115754u;
label_115754:
    // 0x115754: 0x938282f8  lbu         $v0, -0x7D08($gp)
    ctx->pc = 0x115754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935288)));
label_115758:
    // 0x115758: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x115758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_11575c:
    // 0x11575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115760:
    // 0x115760: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x115760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_115764:
    // 0x115764: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115768:
    // 0x115768: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11576c:
    // 0x11576c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11576cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115770:
    // 0x115770: 0x320f809  jalr        $t9
label_115774:
    if (ctx->pc == 0x115774u) {
        ctx->pc = 0x115774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115770u;
        // 0x115774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115778u;
        goto label_115778;
    }
    ctx->pc = 0x115770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115778u);
        ctx->pc = 0x115774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115770u;
        // 0x115774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115770u, 0x115778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115778u;
label_115778:
    // 0x115778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11577c:
    // 0x11577c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11577cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115780:
    // 0x115780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x115780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115784:
    // 0x115784: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_115788:
    // 0x115788: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x115788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11578c:
    // 0x11578c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11578cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115790:
    // 0x115790: 0xc045700  jal         func_115C00
label_115794:
    if (ctx->pc == 0x115794u) {
        ctx->pc = 0x115794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115790u;
        // 0x115794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115798u;
        goto label_115798;
    }
    ctx->pc = 0x115790u;
    SET_GPR_U32(ctx, 31, 0x115798u);
    ctx->pc = 0x115794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115790u;
    // 0x115794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x115790u, 0x115798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115798u;
label_115798:
    // 0x115798: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x115798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_11579c:
    // 0x11579c: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x11579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_1157a0:
    // 0x1157a0: 0x8e450278  lw          $a1, 0x278($s2)
    ctx->pc = 0x1157a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1157a4:
    // 0x1157a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1157a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1157a8:
    // 0x1157a8: 0x938282fc  lbu         $v0, -0x7D04($gp)
    ctx->pc = 0x1157a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935292)));
label_1157ac:
    // 0x1157ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1157acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1157b0:
    // 0x1157b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1157b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1157b4:
    // 0x1157b4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1157b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1157b8:
    // 0x1157b8: 0x320f809  jalr        $t9
label_1157bc:
    if (ctx->pc == 0x1157BCu) {
        ctx->pc = 0x1157BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157B8u;
        // 0x1157bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157C0u;
        goto label_1157c0;
    }
    ctx->pc = 0x1157B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1157C0u);
        ctx->pc = 0x1157BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157B8u;
        // 0x1157bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1157B8u, 0x1157C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1157C0u;
label_1157c0:
    // 0x1157c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1157c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1157c4:
    // 0x1157c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1157c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1157c8:
    // 0x1157c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1157c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1157cc:
    // 0x1157cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1157ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1157d0:
    // 0x1157d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1157d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1157d4:
    // 0x1157d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1157d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1157d8:
    // 0x1157d8: 0xc045700  jal         func_115C00
label_1157dc:
    if (ctx->pc == 0x1157DCu) {
        ctx->pc = 0x1157DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157D8u;
        // 0x1157dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157E0u;
        goto label_1157e0;
    }
    ctx->pc = 0x1157D8u;
    SET_GPR_U32(ctx, 31, 0x1157E0u);
    ctx->pc = 0x1157DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157D8u;
    // 0x1157dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1157D8u, 0x1157E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157E0u;
label_1157e0:
    // 0x1157e0: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1157e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1157e4:
    // 0x1157e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1157e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1157e8:
    // 0x1157e8: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_1157ec:
    if (ctx->pc == 0x1157ECu) {
        ctx->pc = 0x1157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E8u;
        // 0x1157ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157F0u;
        goto label_fallthrough_0x1157e8;
    }
    ctx->pc = 0x1157E8u;
    {
        const bool branch_taken_0x1157e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E8u;
        // 0x1157ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e8) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x1157e8:
    ctx->pc = 0x1157F0u;
}
