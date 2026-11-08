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

// Function: FUN_001660a0
// Address: 0x1660a0 - 0x166134
void FUN_001660a0_0x1660a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001660a0_0x1660a0");
#endif

    switch (ctx->pc) {
        case 0x166118u: goto label_166118;
        case 0x166124u: goto label_166124;
        default: break;
    }

    ctx->pc = 0x1660a0u;

    // 0x1660a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1660a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1660a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1660a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1660a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1660a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1660ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1660acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660b0: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1660b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x1660b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1660b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1660B8u;
    {
        const bool branch_taken_0x1660b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660B8u;
        // 0x1660bc: 0x8084006c  lb          $a0, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660b8) {
            ctx->pc = 0x1660D4u;
            goto label_1660d4;
        }
    }
    ctx->pc = 0x1660C0u;
    // 0x1660c0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1660c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1660c4: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1660c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1660c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1660c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1660cc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1660ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1660d0: 0x0  nop
    ctx->pc = 0x1660d0u;
    // NOP
label_1660d4:
    // 0x1660d4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1660D4u;
    {
        const bool branch_taken_0x1660d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1660D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660D4u;
        // 0x1660d8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660d4) {
            ctx->pc = 0x1660E4u;
            goto label_1660e4;
        }
    }
    ctx->pc = 0x1660DCu;
    // 0x1660dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1660DCu;
    {
        const bool branch_taken_0x1660dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660DCu;
        // 0x1660e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660dc) {
            ctx->pc = 0x166104u;
            goto label_166104;
        }
    }
    ctx->pc = 0x1660E4u;
label_1660e4:
    // 0x1660e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1660e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1660e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1660e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1660ec: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1660ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1660f0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1660F0u;
    {
        const bool branch_taken_0x1660f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1660f0) {
            ctx->pc = 0x166100u;
            goto label_166100;
        }
    }
    ctx->pc = 0x1660F8u;
    // 0x1660f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1660F8u;
    {
        const bool branch_taken_0x1660f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1660f8) {
            ctx->pc = 0x166104u;
            goto label_166104;
        }
    }
    ctx->pc = 0x166100u;
label_166100:
    // 0x166100: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166104:
    // 0x166104: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x166104u;
    {
        const bool branch_taken_0x166104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166104) {
            ctx->pc = 0x166124u;
            goto label_166124;
        }
    }
    ctx->pc = 0x16610Cu;
    // 0x16610c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166110: 0xc042118  jal         func_108460
    ctx->pc = 0x166110u;
    SET_GPR_U32(ctx, 31, 0x166118u);
    ctx->pc = 0x166114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166110u;
    // 0x166114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166110u, 0x166118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166118u;
label_166118:
    // 0x166118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16611c: 0xc0597d8  jal         func_165F60
    ctx->pc = 0x16611Cu;
    SET_GPR_U32(ctx, 31, 0x166124u);
    ctx->pc = 0x166120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16611Cu;
    // 0x166120: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F60u, 0x16611Cu, 0x166124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166124u;
label_166124:
    // 0x166124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16612c: 0x3e00008  jr          $ra
    ctx->pc = 0x16612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16612Cu;
        // 0x166130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166134u;
}
