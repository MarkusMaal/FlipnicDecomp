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

// Function: FUN_00166140
// Address: 0x166140 - 0x1661d8
void FUN_00166140_0x166140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166140_0x166140");
#endif

    switch (ctx->pc) {
        case 0x1661bcu: goto label_1661bc;
        case 0x1661c8u: goto label_1661c8;
        default: break;
    }

    ctx->pc = 0x166140u;

    // 0x166140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16614c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16614cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166150: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x166150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x166154: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x166154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166158: 0x8084006c  lb          $a0, 0x6C($a0)
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x16615c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16615Cu;
    {
        const bool branch_taken_0x16615c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16615Cu;
        // 0x166160: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16615c) {
            ctx->pc = 0x166178u;
            goto label_166178;
        }
    }
    ctx->pc = 0x166164u;
    // 0x166164: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x166164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x166168: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x166168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x16616c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x166170: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x166170u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166174: 0x0  nop
    ctx->pc = 0x166174u;
    // NOP
label_166178:
    // 0x166178: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166178u;
    {
        const bool branch_taken_0x166178 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166178u;
        // 0x16617c: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166178) {
            ctx->pc = 0x166188u;
            goto label_166188;
        }
    }
    ctx->pc = 0x166180u;
    // 0x166180: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x166180u;
    {
        const bool branch_taken_0x166180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166180u;
        // 0x166184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166180) {
            ctx->pc = 0x1661A8u;
            goto label_1661a8;
        }
    }
    ctx->pc = 0x166188u;
label_166188:
    // 0x166188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x166188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16618c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166190: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x166190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x166194: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166194u;
    {
        const bool branch_taken_0x166194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x166194) {
            ctx->pc = 0x1661A4u;
            goto label_1661a4;
        }
    }
    ctx->pc = 0x16619Cu;
    // 0x16619c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16619Cu;
    {
        const bool branch_taken_0x16619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16619c) {
            ctx->pc = 0x1661A8u;
            goto label_1661a8;
        }
    }
    ctx->pc = 0x1661A4u;
label_1661a4:
    // 0x1661a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1661a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1661a8:
    // 0x1661a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1661A8u;
    {
        const bool branch_taken_0x1661a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661a8) {
            ctx->pc = 0x1661C8u;
            goto label_1661c8;
        }
    }
    ctx->pc = 0x1661B0u;
    // 0x1661b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1661b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661b4: 0xc042118  jal         func_108460
    ctx->pc = 0x1661B4u;
    SET_GPR_U32(ctx, 31, 0x1661BCu);
    ctx->pc = 0x1661B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661B4u;
    // 0x1661b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1661B4u, 0x1661BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661BCu;
label_1661bc:
    // 0x1661bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1661bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661c0: 0xc0597d8  jal         func_165F60
    ctx->pc = 0x1661C0u;
    SET_GPR_U32(ctx, 31, 0x1661C8u);
    ctx->pc = 0x1661C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661C0u;
    // 0x1661c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F60u, 0x1661C0u, 0x1661C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661C8u;
label_1661c8:
    // 0x1661c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1661c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1661cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1661ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1661d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1661D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661D0u;
        // 0x1661d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1661D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1661D8u;
}
