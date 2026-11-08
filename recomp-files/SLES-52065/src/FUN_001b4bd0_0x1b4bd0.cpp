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

// Function: FUN_001b4bd0
// Address: 0x1b4bd0 - 0x1b4c68
void FUN_001b4bd0_0x1b4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4bd0_0x1b4bd0");
#endif

    switch (ctx->pc) {
        case 0x1b4bf8u: goto label_1b4bf8;
        case 0x1b4c00u: goto label_1b4c00;
        case 0x1b4c14u: goto label_1b4c14;
        case 0x1b4c40u: goto label_1b4c40;
        default: break;
    }

    ctx->pc = 0x1b4bd0u;

    // 0x1b4bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4bd4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4be0: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1b4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1b4be4: 0x9042282b  lbu         $v0, 0x282B($v0)
    ctx->pc = 0x1b4be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10283)));
    // 0x1b4be8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4BE8u;
    {
        const bool branch_taken_0x1b4be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BE8u;
        // 0x1b4bec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4be8) {
            ctx->pc = 0x1B4C38u;
            goto label_1b4c38;
        }
    }
    ctx->pc = 0x1B4BF0u;
    // 0x1b4bf0: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1B4BF0u;
    SET_GPR_U32(ctx, 31, 0x1B4BF8u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1B4BF0u, 0x1B4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BF8u;
label_1b4bf8:
    // 0x1b4bf8: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1B4BF8u;
    SET_GPR_U32(ctx, 31, 0x1B4C00u);
    ctx->pc = 0x1B4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BF8u;
    // 0x1b4bfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1B4BF8u, 0x1B4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C00u;
label_1b4c00:
    // 0x1b4c00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4c04: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4C04u;
    {
        const bool branch_taken_0x1b4c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b4c04) {
            ctx->pc = 0x1B4C34u;
            goto label_1b4c34;
        }
    }
    ctx->pc = 0x1B4C0Cu;
    // 0x1b4c0c: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1B4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B4C14u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1B4C0Cu, 0x1B4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C14u;
label_1b4c14:
    // 0x1b4c14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4c1c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1b4c1cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b4c20: 0x0  nop
    ctx->pc = 0x1b4c20u;
    // NOP
    // 0x1b4c24: 0x0  nop
    ctx->pc = 0x1b4c24u;
    // NOP
    // 0x1b4c28: 0x1010  mfhi        $v0
    ctx->pc = 0x1b4c28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b4c2c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4C2Cu;
    {
        const bool branch_taken_0x1b4c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b4c2c) {
            ctx->pc = 0x1B4C38u;
            goto label_1b4c38;
        }
    }
    ctx->pc = 0x1B4C34u;
label_1b4c34:
    // 0x1b4c34: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1b4c34u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1b4c38:
    // 0x1b4c38: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1B4C38u;
    SET_GPR_U32(ctx, 31, 0x1B4C40u);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1B4C38u, 0x1B4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C40u;
label_1b4c40:
    // 0x1b4c40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4c44: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4C44u;
    {
        const bool branch_taken_0x1b4c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b4c44) {
            ctx->pc = 0x1B4C54u;
            goto label_1b4c54;
        }
    }
    ctx->pc = 0x1B4C4Cu;
    // 0x1b4c4c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4C4Cu;
    {
        const bool branch_taken_0x1b4c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C4Cu;
        // 0x1b4c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c4c) {
            ctx->pc = 0x1B4C58u;
            goto label_1b4c58;
        }
    }
    ctx->pc = 0x1B4C54u;
label_1b4c54:
    // 0x1b4c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4c58:
    // 0x1b4c58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C60u;
        // 0x1b4c64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C68u;
}
