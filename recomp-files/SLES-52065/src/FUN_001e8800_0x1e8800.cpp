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

// Function: FUN_001e8800
// Address: 0x1e8800 - 0x1e88a8
void FUN_001e8800_0x1e8800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8800_0x1e8800");
#endif

    switch (ctx->pc) {
        case 0x1e8830u: goto label_1e8830;
        default: break;
    }

    ctx->pc = 0x1e8800u;

    // 0x1e8800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e880c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8814: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e8814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8818: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e8818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e881c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1e881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e8820: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8824: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e8828: 0xc07a230  jal         func_1E88C0
    ctx->pc = 0x1E8828u;
    SET_GPR_U32(ctx, 31, 0x1E8830u);
    ctx->pc = 0x1E882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8828u;
    // 0x1e882c: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E88C0u, 0x1E8828u, 0x1E8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8830u;
label_1e8830:
    // 0x1e8830: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e8830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8834: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e8834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e8838: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1e8838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e883c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e883cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e8840: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8840u;
    {
        const bool branch_taken_0x1e8840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8840) {
            ctx->pc = 0x1E8878u;
            goto label_1e8878;
        }
    }
    ctx->pc = 0x1E8848u;
    // 0x1e8848: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x1e8848u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e884c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1e884cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8850: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1e8850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e8854: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e8854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e8858: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8858u;
    {
        const bool branch_taken_0x1e8858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8858) {
            ctx->pc = 0x1E886Cu;
            goto label_1e886c;
        }
    }
    ctx->pc = 0x1E8860u;
    // 0x1e8860: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x1e8860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e8864: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e8864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e8868: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e8868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e886c:
    // 0x1e886c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e8870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8870u;
    {
        const bool branch_taken_0x1e8870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8870) {
            ctx->pc = 0x1E8880u;
            goto label_1e8880;
        }
    }
    ctx->pc = 0x1E8878u;
label_1e8878:
    // 0x1e8878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8878u;
    {
        const bool branch_taken_0x1e8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8878u;
        // 0x1e887c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8878) {
            ctx->pc = 0x1E8894u;
            goto label_1e8894;
        }
    }
    ctx->pc = 0x1E8880u;
label_1e8880:
    // 0x1e8880: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e8884: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1e8884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8888: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1e8888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e888c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8890: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1e8894:
    // 0x1e8894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e889c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e889cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e88a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E88A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88A0u;
        // 0x1e88a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E88A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E88A8u;
}
