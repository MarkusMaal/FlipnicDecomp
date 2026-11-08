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

// Function: FUN_00189ef0
// Address: 0x189ef0 - 0x189f80
void FUN_00189ef0_0x189ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00189ef0_0x189ef0");
#endif

    switch (ctx->pc) {
        case 0x189f58u: goto label_189f58;
        case 0x189f68u: goto label_189f68;
        default: break;
    }

    ctx->pc = 0x189ef0u;

    // 0x189ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x189ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x189ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189efc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x189efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x189f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189f04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189f08: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x189f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x189f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f10: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x189f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x189f14: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x189f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x189f18: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x189f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x189f1c: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x189f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x189f20: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x189f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x189f24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189F24u;
    {
        const bool branch_taken_0x189f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F24u;
        // 0x189f28: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f24) {
            ctx->pc = 0x189F34u;
            goto label_189f34;
        }
    }
    ctx->pc = 0x189F2Cu;
    // 0x189f2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189F2Cu;
    {
        const bool branch_taken_0x189f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F2Cu;
        // 0x189f30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f2c) {
            ctx->pc = 0x189F40u;
            goto label_189f40;
        }
    }
    ctx->pc = 0x189F34u;
label_189f34:
    // 0x189f34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x189f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189f38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x189f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189f3c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_189f40:
    // 0x189f40: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x189f44: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x189f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x189f48: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x189f48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189f4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x189f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f50: 0xc061ea0  jal         func_187A80
    ctx->pc = 0x189F50u;
    SET_GPR_U32(ctx, 31, 0x189F58u);
    ctx->pc = 0x189F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F50u;
    // 0x189f54: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187A80u, 0x189F50u, 0x189F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F58u;
label_189f58:
    // 0x189f58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f60: 0xc0623bc  jal         func_188EF0
    ctx->pc = 0x189F60u;
    SET_GPR_U32(ctx, 31, 0x189F68u);
    ctx->pc = 0x189F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F60u;
    // 0x189f64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188EF0u, 0x189F60u, 0x189F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F68u;
label_189f68:
    // 0x189f68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x189f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x189f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f78: 0x3e00008  jr          $ra
    ctx->pc = 0x189F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F78u;
        // 0x189f7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189F80u;
}
