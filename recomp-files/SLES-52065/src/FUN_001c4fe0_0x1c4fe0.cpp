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

// Function: FUN_001c4fe0
// Address: 0x1c4fe0 - 0x1c5040
void FUN_001c4fe0_0x1c4fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4fe0_0x1c4fe0");
#endif

    switch (ctx->pc) {
        case 0x1c5000u: goto label_1c5000;
        case 0x1c501cu: goto label_1c501c;
        case 0x1c5030u: goto label_1c5030;
        default: break;
    }

    ctx->pc = 0x1c4fe0u;

    // 0x1c4fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4fe4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4fec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4ff4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1c4ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c4ff8: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C4FF8u;
    SET_GPR_U32(ctx, 31, 0x1C5000u);
    ctx->pc = 0x1C4FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FF8u;
    // 0x1c4ffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C4FF8u, 0x1C5000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5000u;
label_1c5000:
    // 0x1c5000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5004: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c5008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c500c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1c500cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1c5010: 0x24a556e0  addiu       $a1, $a1, 0x56E0
    ctx->pc = 0x1c5010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22240));
    // 0x1c5014: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C5014u;
    SET_GPR_U32(ctx, 31, 0x1C501Cu);
    ctx->pc = 0x1C5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5014u;
    // 0x1c5018: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C5014u, 0x1C501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C501Cu;
label_1c501c:
    // 0x1c501c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c501cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c5020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5024: 0x24a558c0  addiu       $a1, $a1, 0x58C0
    ctx->pc = 0x1c5024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22720));
    // 0x1c5028: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C5028u;
    SET_GPR_U32(ctx, 31, 0x1C5030u);
    ctx->pc = 0x1C502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5028u;
    // 0x1c502c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C5028u, 0x1C5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5030u;
label_1c5030:
    // 0x1c5030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5038: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5038u;
        // 0x1c503c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5040u;
}
