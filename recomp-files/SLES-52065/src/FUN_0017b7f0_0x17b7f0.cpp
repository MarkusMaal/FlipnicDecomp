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

// Function: FUN_0017b7f0
// Address: 0x17b7f0 - 0x17b864
void FUN_0017b7f0_0x17b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b7f0_0x17b7f0");
#endif

    switch (ctx->pc) {
        case 0x17b7f0u: goto label_17b7f0;
        case 0x17b7f4u: goto label_17b7f4;
        case 0x17b7f8u: goto label_17b7f8;
        case 0x17b7fcu: goto label_17b7fc;
        case 0x17b800u: goto label_17b800;
        case 0x17b804u: goto label_17b804;
        case 0x17b808u: goto label_17b808;
        case 0x17b80cu: goto label_17b80c;
        case 0x17b810u: goto label_17b810;
        case 0x17b814u: goto label_17b814;
        case 0x17b818u: goto label_17b818;
        case 0x17b81cu: goto label_17b81c;
        case 0x17b820u: goto label_17b820;
        case 0x17b824u: goto label_17b824;
        case 0x17b828u: goto label_17b828;
        case 0x17b82cu: goto label_17b82c;
        case 0x17b830u: goto label_17b830;
        case 0x17b834u: goto label_17b834;
        case 0x17b838u: goto label_17b838;
        case 0x17b83cu: goto label_17b83c;
        case 0x17b840u: goto label_17b840;
        case 0x17b844u: goto label_17b844;
        case 0x17b848u: goto label_17b848;
        case 0x17b84cu: goto label_17b84c;
        case 0x17b850u: goto label_17b850;
        case 0x17b854u: goto label_17b854;
        case 0x17b858u: goto label_17b858;
        case 0x17b85cu: goto label_17b85c;
        case 0x17b860u: goto label_17b860;
        default: break;
    }

    ctx->pc = 0x17b7f0u;

label_17b7f0:
    // 0x17b7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17b7f4:
    // 0x17b7f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17b7f8:
    // 0x17b7f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17b7fc:
    // 0x17b7fc: 0x90830221  lbu         $v1, 0x221($a0)
    ctx->pc = 0x17b7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 545)));
label_17b800:
    // 0x17b800: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_17b804:
    if (ctx->pc == 0x17B804u) {
        ctx->pc = 0x17B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B800u;
        // 0x17b804: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B808u;
        goto label_17b808;
    }
    ctx->pc = 0x17B800u;
    {
        const bool branch_taken_0x17b800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B800u;
        // 0x17b804: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b800) {
            ctx->pc = 0x17B854u;
            goto label_17b854;
        }
    }
    ctx->pc = 0x17B808u;
label_17b808:
    // 0x17b808: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17b808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17b80c:
    // 0x17b80c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17b80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b810:
    // 0x17b810: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17b814:
    // 0x17b814: 0x320f809  jalr        $t9
label_17b818:
    if (ctx->pc == 0x17B818u) {
        ctx->pc = 0x17B81Cu;
        goto label_17b81c;
    }
    ctx->pc = 0x17B814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B81Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B814u, 0x17B81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B81Cu;
label_17b81c:
    // 0x17b81c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_17b820:
    if (ctx->pc == 0x17B820u) {
        ctx->pc = 0x17B824u;
        goto label_17b824;
    }
    ctx->pc = 0x17B81Cu;
    {
        const bool branch_taken_0x17b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b81c) {
            ctx->pc = 0x17B854u;
            goto label_17b854;
        }
    }
    ctx->pc = 0x17B824u;
label_17b824:
    // 0x17b824: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b828:
    // 0x17b828: 0x80450024  lb          $a1, 0x24($v0)
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
label_17b82c:
    // 0x17b82c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_17b830:
    if (ctx->pc == 0x17B830u) {
        ctx->pc = 0x17B834u;
        goto label_17b834;
    }
    ctx->pc = 0x17B82Cu;
    {
        const bool branch_taken_0x17b82c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b82c) {
            ctx->pc = 0x17B838u;
            goto label_17b838;
        }
    }
    ctx->pc = 0x17B834u;
label_17b834:
    // 0x17b834: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17b834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b838:
    // 0x17b838: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_17b83c:
    // 0x17b83c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_17b840:
    // 0x17b840: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b844:
    // 0x17b844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b848:
    // 0x17b848: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17b84c:
    // 0x17b84c: 0xc0425a4  jal         func_109690
label_17b850:
    if (ctx->pc == 0x17B850u) {
        ctx->pc = 0x17B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B84Cu;
        // 0x17b850: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B854u;
        goto label_17b854;
    }
    ctx->pc = 0x17B84Cu;
    SET_GPR_U32(ctx, 31, 0x17B854u);
    ctx->pc = 0x17B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B84Cu;
    // 0x17b850: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B84Cu, 0x17B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B854u;
label_17b854:
    // 0x17b854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b858:
    // 0x17b858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b85c:
    // 0x17b85c: 0x3e00008  jr          $ra
label_17b860:
    if (ctx->pc == 0x17B860u) {
        ctx->pc = 0x17B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B85Cu;
        // 0x17b860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B864u;
        goto label_fallthrough_0x17b85c;
    }
    ctx->pc = 0x17B85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B85Cu;
        // 0x17b860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b85c:
    ctx->pc = 0x17B864u;
}
