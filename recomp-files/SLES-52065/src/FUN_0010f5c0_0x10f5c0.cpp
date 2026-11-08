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

// Function: FUN_0010f5c0
// Address: 0x10f5c0 - 0x10f680
void FUN_0010f5c0_0x10f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f5c0_0x10f5c0");
#endif

    switch (ctx->pc) {
        case 0x10f5fcu: goto label_10f5fc;
        case 0x10f63cu: goto label_10f63c;
        case 0x10f658u: goto label_10f658;
        case 0x10f664u: goto label_10f664;
        default: break;
    }

    ctx->pc = 0x10f5c0u;

    // 0x10f5c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10f5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10f5c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f5c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10f5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10f5d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10f5d8: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x10f5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x10f5dc: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x10f5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x10f5e0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f5e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F5E4u;
    {
        const bool branch_taken_0x10f5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5E4u;
        // 0x10f5e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5e4) {
            ctx->pc = 0x10F5F4u;
            goto label_10f5f4;
        }
    }
    ctx->pc = 0x10F5ECu;
    // 0x10f5ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10F5ECu;
    {
        const bool branch_taken_0x10f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5ECu;
        // 0x10f5f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5ec) {
            ctx->pc = 0x10F668u;
            goto label_10f668;
        }
    }
    ctx->pc = 0x10F5F4u;
label_10f5f4:
    // 0x10f5f4: 0xc059748  jal         func_165D20
    ctx->pc = 0x10F5F4u;
    SET_GPR_U32(ctx, 31, 0x10F5FCu);
    ctx->pc = 0x165D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D20u, 0x10F5F4u, 0x10F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5FCu;
label_10f5fc:
    // 0x10f5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f604: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10F604u;
    {
        const bool branch_taken_0x10f604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f604) {
            ctx->pc = 0x10F664u;
            goto label_10f664;
        }
    }
    ctx->pc = 0x10F60Cu;
    // 0x10f60c: 0x92420224  lbu         $v0, 0x224($s2)
    ctx->pc = 0x10f60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x10f610: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x10f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x10f614: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f618: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10F618u;
    {
        const bool branch_taken_0x10f618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F618u;
        // 0x10f61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f618) {
            ctx->pc = 0x10F65Cu;
            goto label_10f65c;
        }
    }
    ctx->pc = 0x10F620u;
    // 0x10f620: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x10f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x10f624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10f624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f628: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x10f62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f630: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10f630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f634: 0xc059a68  jal         func_1669A0
    ctx->pc = 0x10F634u;
    SET_GPR_U32(ctx, 31, 0x10F63Cu);
    ctx->pc = 0x10F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F634u;
    // 0x10f638: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1669A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1669A0u, 0x10F634u, 0x10F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F63Cu;
label_10f63c:
    // 0x10f63c: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x10f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
    // 0x10f640: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10f640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10f644: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10f648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f64c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10f650: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10F650u;
    SET_GPR_U32(ctx, 31, 0x10F658u);
    ctx->pc = 0x10F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F650u;
    // 0x10f654: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10F650u, 0x10F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F658u;
label_10f658:
    // 0x10f658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10f65c:
    // 0x10f65c: 0xc043d28  jal         func_10F4A0
    ctx->pc = 0x10F65Cu;
    SET_GPR_U32(ctx, 31, 0x10F664u);
    ctx->pc = 0x10F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F65Cu;
    // 0x10f660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F4A0u, 0x10F65Cu, 0x10F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F664u;
label_10f664:
    // 0x10f664: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f668:
    // 0x10f668: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f66c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10f66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f678: 0x3e00008  jr          $ra
    ctx->pc = 0x10F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F678u;
        // 0x10f67c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F680u;
}
