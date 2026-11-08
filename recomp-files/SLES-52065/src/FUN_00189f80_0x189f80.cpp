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

// Function: FUN_00189f80
// Address: 0x189f80 - 0x18a010
void FUN_00189f80_0x189f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00189f80_0x189f80");
#endif

    switch (ctx->pc) {
        case 0x189fe8u: goto label_189fe8;
        case 0x189ff8u: goto label_189ff8;
        default: break;
    }

    ctx->pc = 0x189f80u;

    // 0x189f80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x189f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x189f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x189f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189f88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189f8c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x189f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x189f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189f98: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x189f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x189f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fa0: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x189fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x189fa4: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x189fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x189fa8: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x189fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x189fac: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x189facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x189fb0: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x189fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x189fb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189FB4u;
    {
        const bool branch_taken_0x189fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FB4u;
        // 0x189fb8: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fb4) {
            ctx->pc = 0x189FC4u;
            goto label_189fc4;
        }
    }
    ctx->pc = 0x189FBCu;
    // 0x189fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189FBCu;
    {
        const bool branch_taken_0x189fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FBCu;
        // 0x189fc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fbc) {
            ctx->pc = 0x189FD0u;
            goto label_189fd0;
        }
    }
    ctx->pc = 0x189FC4u;
label_189fc4:
    // 0x189fc4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189fc8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x189fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189fcc: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x189fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_189fd0:
    // 0x189fd0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x189fd4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x189fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x189fd8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x189fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189fdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189fe0: 0xc061fc0  jal         func_187F00
    ctx->pc = 0x189FE0u;
    SET_GPR_U32(ctx, 31, 0x189FE8u);
    ctx->pc = 0x189FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FE0u;
    // 0x189fe4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187F00u, 0x189FE0u, 0x189FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FE8u;
label_189fe8:
    // 0x189fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ff0: 0xc0623bc  jal         func_188EF0
    ctx->pc = 0x189FF0u;
    SET_GPR_U32(ctx, 31, 0x189FF8u);
    ctx->pc = 0x189FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FF0u;
    // 0x189ff4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188EF0u, 0x189FF0u, 0x189FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FF8u;
label_189ff8:
    // 0x189ff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x189ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x189ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a008: 0x3e00008  jr          $ra
    ctx->pc = 0x18A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A008u;
        // 0x18a00c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A010u;
}
