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

// Function: FUN_0014de70
// Address: 0x14de70 - 0x14defc
void FUN_0014de70_0x14de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014de70_0x14de70");
#endif

    switch (ctx->pc) {
        case 0x14deacu: goto label_14deac;
        case 0x14deccu: goto label_14decc;
        default: break;
    }

    ctx->pc = 0x14de70u;

    // 0x14de70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14de74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14de74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14de78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14de7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14de80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14de80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14de88: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x14de88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14de8c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x14de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14de90: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14de90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14de94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14de98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14de98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14de9c: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x14de9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14dea0: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14dea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14dea4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DEA4u;
    {
        const bool branch_taken_0x14dea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dea4) {
            ctx->pc = 0x14DEDCu;
            goto label_14dedc;
        }
    }
    ctx->pc = 0x14DEACu;
label_14deac:
    // 0x14deac: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x14deacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x14deb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14deb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14deb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DEB4u;
    {
        const bool branch_taken_0x14deb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14deb4) {
            ctx->pc = 0x14DECCu;
            goto label_14decc;
        }
    }
    ctx->pc = 0x14DEBCu;
    // 0x14debc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DEBCu;
    {
        const bool branch_taken_0x14debc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEBCu;
        // 0x14dec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14debc) {
            ctx->pc = 0x14DECCu;
            goto label_14decc;
        }
    }
    ctx->pc = 0x14DEC4u;
    // 0x14dec4: 0xc048414  jal         func_121050
    ctx->pc = 0x14DEC4u;
    SET_GPR_U32(ctx, 31, 0x14DECCu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14DEC4u, 0x14DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DECCu;
label_14decc:
    // 0x14decc: 0x0  nop
    ctx->pc = 0x14deccu;
    // NOP
    // 0x14ded0: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14ded0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14ded4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DED4u;
    {
        const bool branch_taken_0x14ded4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ded4) {
            ctx->pc = 0x14DEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14deac;
        }
    }
    ctx->pc = 0x14DEDCu;
label_14dedc:
    // 0x14dedc: 0x0  nop
    ctx->pc = 0x14dedcu;
    // NOP
    // 0x14dee0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x14dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x14dee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14dee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14deec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14deecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14def0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14def0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14def4: 0x3e00008  jr          $ra
    ctx->pc = 0x14DEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEF4u;
        // 0x14def8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DEFCu;
}
