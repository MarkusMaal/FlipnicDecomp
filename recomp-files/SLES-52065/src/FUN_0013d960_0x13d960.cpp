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

// Function: FUN_0013d960
// Address: 0x13d960 - 0x13d9c0
void FUN_0013d960_0x13d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d960_0x13d960");
#endif

    switch (ctx->pc) {
        case 0x13d960u: goto label_13d960;
        case 0x13d964u: goto label_13d964;
        case 0x13d968u: goto label_13d968;
        case 0x13d96cu: goto label_13d96c;
        case 0x13d970u: goto label_13d970;
        case 0x13d974u: goto label_13d974;
        case 0x13d978u: goto label_13d978;
        case 0x13d97cu: goto label_13d97c;
        case 0x13d980u: goto label_13d980;
        case 0x13d984u: goto label_13d984;
        case 0x13d988u: goto label_13d988;
        case 0x13d98cu: goto label_13d98c;
        case 0x13d990u: goto label_13d990;
        case 0x13d994u: goto label_13d994;
        case 0x13d998u: goto label_13d998;
        case 0x13d99cu: goto label_13d99c;
        case 0x13d9a0u: goto label_13d9a0;
        case 0x13d9a4u: goto label_13d9a4;
        case 0x13d9a8u: goto label_13d9a8;
        case 0x13d9acu: goto label_13d9ac;
        case 0x13d9b0u: goto label_13d9b0;
        case 0x13d9b4u: goto label_13d9b4;
        case 0x13d9b8u: goto label_13d9b8;
        case 0x13d9bcu: goto label_13d9bc;
        default: break;
    }

    ctx->pc = 0x13d960u;

label_13d960:
    // 0x13d960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13d964:
    // 0x13d964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d968:
    // 0x13d968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13d96c:
    // 0x13d96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d970:
    // 0x13d970: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13d970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13d974:
    // 0x13d974: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_13d978:
    if (ctx->pc == 0x13D978u) {
        ctx->pc = 0x13D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D974u;
        // 0x13d978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D97Cu;
        goto label_13d97c;
    }
    ctx->pc = 0x13D974u;
    {
        const bool branch_taken_0x13d974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D974u;
        // 0x13d978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d974) {
            ctx->pc = 0x13D9A8u;
            goto label_13d9a8;
        }
    }
    ctx->pc = 0x13D97Cu;
label_13d97c:
    // 0x13d97c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d980:
    // 0x13d980: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13d984:
    // 0x13d984: 0x320f809  jalr        $t9
label_13d988:
    if (ctx->pc == 0x13D988u) {
        ctx->pc = 0x13D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D984u;
        // 0x13d988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D98Cu;
        goto label_13d98c;
    }
    ctx->pc = 0x13D984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D98Cu);
        ctx->pc = 0x13D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D984u;
        // 0x13d988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D984u, 0x13D98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D98Cu;
label_13d98c:
    // 0x13d98c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13d98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13d990:
    // 0x13d990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d994:
    // 0x13d994: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x13d994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_13d998:
    // 0x13d998: 0x320f809  jalr        $t9
label_13d99c:
    if (ctx->pc == 0x13D99Cu) {
        ctx->pc = 0x13D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D998u;
        // 0x13d99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9A0u;
        goto label_13d9a0;
    }
    ctx->pc = 0x13D998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D9A0u);
        ctx->pc = 0x13D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D998u;
        // 0x13d99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D998u, 0x13D9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D9A0u;
label_13d9a0:
    // 0x13d9a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_13d9a4:
    if (ctx->pc == 0x13D9A4u) {
        ctx->pc = 0x13D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9A0u;
        // 0x13d9a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9A8u;
        goto label_13d9a8;
    }
    ctx->pc = 0x13D9A0u;
    {
        const bool branch_taken_0x13d9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9A0u;
        // 0x13d9a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9a0) {
            ctx->pc = 0x13D9B4u;
            goto label_13d9b4;
        }
    }
    ctx->pc = 0x13D9A8u;
label_13d9a8:
    // 0x13d9a8: 0xc050c6c  jal         func_1431B0
label_13d9ac:
    if (ctx->pc == 0x13D9ACu) {
        ctx->pc = 0x13D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9A8u;
        // 0x13d9ac: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9B0u;
        goto label_13d9b0;
    }
    ctx->pc = 0x13D9A8u;
    SET_GPR_U32(ctx, 31, 0x13D9B0u);
    ctx->pc = 0x13D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D9A8u;
    // 0x13d9ac: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1431B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1431B0u, 0x13D9A8u, 0x13D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9B0u;
label_13d9b0:
    // 0x13d9b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d9b4:
    // 0x13d9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d9b8:
    // 0x13d9b8: 0x3e00008  jr          $ra
label_13d9bc:
    if (ctx->pc == 0x13D9BCu) {
        ctx->pc = 0x13D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9B8u;
        // 0x13d9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9C0u;
        goto label_fallthrough_0x13d9b8;
    }
    ctx->pc = 0x13D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9B8u;
        // 0x13d9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d9b8:
    ctx->pc = 0x13D9C0u;
}
