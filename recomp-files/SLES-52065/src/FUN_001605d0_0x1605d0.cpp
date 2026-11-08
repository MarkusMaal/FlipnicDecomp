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

// Function: FUN_001605d0
// Address: 0x1605d0 - 0x1606cc
void FUN_001605d0_0x1605d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001605d0_0x1605d0");
#endif

    switch (ctx->pc) {
        case 0x1605f8u: goto label_1605f8;
        case 0x1606b8u: goto label_1606b8;
        default: break;
    }

    ctx->pc = 0x1605d0u;

    // 0x1605d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1605d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1605d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1605d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1605d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1605d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1605dc: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1605DCu;
    {
        const bool branch_taken_0x1605dc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1605E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605DCu;
        // 0x1605e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605dc) {
            ctx->pc = 0x1605ECu;
            goto label_1605ec;
        }
    }
    ctx->pc = 0x1605E4u;
    // 0x1605e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1605E4u;
    {
        const bool branch_taken_0x1605e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605E4u;
        // 0x1605e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605e4) {
            ctx->pc = 0x160600u;
            goto label_160600;
        }
    }
    ctx->pc = 0x1605ECu;
label_1605ec:
    // 0x1605ec: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x1605ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1605f0: 0xc05835c  jal         func_160D70
    ctx->pc = 0x1605F0u;
    SET_GPR_U32(ctx, 31, 0x1605F8u);
    ctx->pc = 0x1605F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605F0u;
    // 0x1605f4: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D70u, 0x1605F0u, 0x1605F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605F8u;
label_1605f8:
    // 0x1605f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1605f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160600:
    // 0x160600: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x160600u;
    {
        const bool branch_taken_0x160600 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x160600) {
            ctx->pc = 0x16060Cu;
            goto label_16060c;
        }
    }
    ctx->pc = 0x160608u;
    // 0x160608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16060c:
    // 0x16060c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x16060Cu;
    {
        const bool branch_taken_0x16060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16060c) {
            ctx->pc = 0x1606B8u;
            goto label_1606b8;
        }
    }
    ctx->pc = 0x160614u;
    // 0x160614: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x160614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160618: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16061c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x160620: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x160620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x160624: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x160624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160628: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x160628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16062c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160630: 0x2464003f  addiu       $a0, $v1, 0x3F
    ctx->pc = 0x160630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x160634: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x160634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160638: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16063c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160640: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x160640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160644: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x160644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160648: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160648u;
    {
        const bool branch_taken_0x160648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160648) {
            ctx->pc = 0x160660u;
            goto label_160660;
        }
    }
    ctx->pc = 0x160650u;
    // 0x160650: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x160650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x160654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160658u;
    {
        const bool branch_taken_0x160658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160658u;
        // 0x16065c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160658) {
            ctx->pc = 0x160664u;
            goto label_160664;
        }
    }
    ctx->pc = 0x160660u;
label_160660:
    // 0x160660: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_160664:
    // 0x160664: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x160664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160668: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x160668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16066c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16066cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x160670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x160670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160674: 0x2464003e  addiu       $a0, $v1, 0x3E
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x160678: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16067c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160680: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x160680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160684: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x160684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160688: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x160688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16068c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16068Cu;
    {
        const bool branch_taken_0x16068c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16068c) {
            ctx->pc = 0x1606A4u;
            goto label_1606a4;
        }
    }
    ctx->pc = 0x160694u;
    // 0x160694: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x160694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x160698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16069c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16069Cu;
    {
        const bool branch_taken_0x16069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16069Cu;
        // 0x1606a0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16069c) {
            ctx->pc = 0x1606A8u;
            goto label_1606a8;
        }
    }
    ctx->pc = 0x1606A4u;
label_1606a4:
    // 0x1606a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1606a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1606a8:
    // 0x1606a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1606a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1606acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606b0: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x1606B0u;
    SET_GPR_U32(ctx, 31, 0x1606B8u);
    ctx->pc = 0x1606B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606B0u;
    // 0x1606b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x1606B0u, 0x1606B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606B8u;
label_1606b8:
    // 0x1606b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1606b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1606bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1606bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1606c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1606c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1606C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1606C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606C4u;
        // 0x1606c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1606CCu;
}
