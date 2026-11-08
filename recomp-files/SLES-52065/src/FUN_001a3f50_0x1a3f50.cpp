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

// Function: FUN_001a3f50
// Address: 0x1a3f50 - 0x1a3fd0
void FUN_001a3f50_0x1a3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3f50_0x1a3f50");
#endif

    switch (ctx->pc) {
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        case 0x1a3fc8u: goto label_1a3fc8;
        case 0x1a3fccu: goto label_1a3fcc;
        default: break;
    }

    ctx->pc = 0x1a3f50u;

label_1a3f50:
    // 0x1a3f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3f54:
    // 0x1a3f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a3f58:
    // 0x1a3f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3f5c:
    // 0x1a3f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3f60:
    // 0x1a3f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f64:
    // 0x1a3f64: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1a3f68:
    if (ctx->pc == 0x1A3F68u) {
        ctx->pc = 0x1A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F64u;
        // 0x1a3f68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F6Cu;
        goto label_1a3f6c;
    }
    ctx->pc = 0x1A3F64u;
    {
        const bool branch_taken_0x1a3f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F64u;
        // 0x1a3f68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f64) {
            ctx->pc = 0x1A3FB8u;
            goto label_1a3fb8;
        }
    }
    ctx->pc = 0x1A3F6Cu;
label_1a3f6c:
    // 0x1a3f6c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1a3f70:
    // 0x1a3f70: 0x2442b3e0  addiu       $v0, $v0, -0x4C20
    ctx->pc = 0x1a3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947808));
label_1a3f74:
    // 0x1a3f74: 0xae22031c  sw          $v0, 0x31C($s1)
    ctx->pc = 0x1a3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
label_1a3f78:
    // 0x1a3f78: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a3f7c:
    // 0x1a3f7c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a3f80:
    if (ctx->pc == 0x1A3F80u) {
        ctx->pc = 0x1A3F84u;
        goto label_1a3f84;
    }
    ctx->pc = 0x1A3F7Cu;
    {
        const bool branch_taken_0x1a3f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f7c) {
            ctx->pc = 0x1A3F94u;
            goto label_1a3f94;
        }
    }
    ctx->pc = 0x1A3F84u;
label_1a3f84:
    // 0x1a3f84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a3f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3f88:
    // 0x1a3f88: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a3f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a3f8c:
    // 0x1a3f8c: 0x320f809  jalr        $t9
label_1a3f90:
    if (ctx->pc == 0x1A3F90u) {
        ctx->pc = 0x1A3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F8Cu;
        // 0x1a3f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F94u;
        goto label_1a3f94;
    }
    ctx->pc = 0x1A3F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3F94u);
        ctx->pc = 0x1A3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F8Cu;
        // 0x1a3f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F8Cu, 0x1A3F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3F94u;
label_1a3f94:
    // 0x1a3f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f98:
    // 0x1a3f98: 0xc064324  jal         func_190C90
label_1a3f9c:
    if (ctx->pc == 0x1A3F9Cu) {
        ctx->pc = 0x1A3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F98u;
        // 0x1a3f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FA0u;
        goto label_1a3fa0;
    }
    ctx->pc = 0x1A3F98u;
    SET_GPR_U32(ctx, 31, 0x1A3FA0u);
    ctx->pc = 0x1A3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F98u;
    // 0x1a3f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A3F98u, 0x1A3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FA0u;
label_1a3fa0:
    // 0x1a3fa0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a3fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1a3fa4:
    // 0x1a3fa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a3fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1a3fa8:
    // 0x1a3fa8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1a3fac:
    if (ctx->pc == 0x1A3FACu) {
        ctx->pc = 0x1A3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FA8u;
        // 0x1a3fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FB0u;
        goto label_1a3fb0;
    }
    ctx->pc = 0x1A3FA8u;
    {
        const bool branch_taken_0x1a3fa8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FA8u;
        // 0x1a3fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fa8) {
            ctx->pc = 0x1A3FBCu;
            goto label_1a3fbc;
        }
    }
    ctx->pc = 0x1A3FB0u;
label_1a3fb0:
    // 0x1a3fb0: 0xc0401a4  jal         func_100690
label_1a3fb4:
    if (ctx->pc == 0x1A3FB4u) {
        ctx->pc = 0x1A3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FB0u;
        // 0x1a3fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FB8u;
        goto label_1a3fb8;
    }
    ctx->pc = 0x1A3FB0u;
    SET_GPR_U32(ctx, 31, 0x1A3FB8u);
    ctx->pc = 0x1A3FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FB0u;
    // 0x1a3fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A3FB0u, 0x1A3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FB8u;
label_1a3fb8:
    // 0x1a3fb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a3fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3fbc:
    // 0x1a3fbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3fc0:
    // 0x1a3fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3fc4:
    // 0x1a3fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3fc8:
    // 0x1a3fc8: 0x3e00008  jr          $ra
label_1a3fcc:
    if (ctx->pc == 0x1A3FCCu) {
        ctx->pc = 0x1A3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC8u;
        // 0x1a3fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FD0u;
        goto label_fallthrough_0x1a3fc8;
    }
    ctx->pc = 0x1A3FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC8u;
        // 0x1a3fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3fc8:
    ctx->pc = 0x1A3FD0u;
}
