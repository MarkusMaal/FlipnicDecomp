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

// Function: FUN_00199ef0
// Address: 0x199ef0 - 0x199f80
void FUN_00199ef0_0x199ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199ef0_0x199ef0");
#endif

    switch (ctx->pc) {
        case 0x199f14u: goto label_199f14;
        case 0x199f2cu: goto label_199f2c;
        case 0x199f38u: goto label_199f38;
        case 0x199f6cu: goto label_199f6c;
        default: break;
    }

    ctx->pc = 0x199ef0u;

    // 0x199ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199f00: 0x8c820664  lw          $v0, 0x664($a0)
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
    // 0x199f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f08: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x199f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x199f0c: 0xc064918  jal         func_192460
    ctx->pc = 0x199F0Cu;
    SET_GPR_U32(ctx, 31, 0x199F14u);
    ctx->pc = 0x199F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F0Cu;
    // 0x199f10: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x199F0Cu, 0x199F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F14u;
label_199f14:
    // 0x199f14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199F14u;
    {
        const bool branch_taken_0x199f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F14u;
        // 0x199f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f14) {
            ctx->pc = 0x199F24u;
            goto label_199f24;
        }
    }
    ctx->pc = 0x199F1Cu;
    // 0x199f1c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x199F1Cu;
    {
        const bool branch_taken_0x199f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F1Cu;
        // 0x199f20: 0xae000320  sw          $zero, 0x320($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f1c) {
            ctx->pc = 0x199F6Cu;
            goto label_199f6c;
        }
    }
    ctx->pc = 0x199F24u;
label_199f24:
    // 0x199f24: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x199F24u;
    SET_GPR_U32(ctx, 31, 0x199F2Cu);
    ctx->pc = 0x199F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F24u;
    // 0x199f28: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x199F24u, 0x199F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F2Cu;
label_199f2c:
    // 0x199f2c: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x199f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x199f30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x199f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199f38:
    // 0x199f38: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x199f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x199f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x199f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199f40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199F40u;
    {
        const bool branch_taken_0x199f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F40u;
        // 0x199f44: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f40) {
            ctx->pc = 0x199F60u;
            goto label_199f60;
        }
    }
    ctx->pc = 0x199F48u;
    // 0x199f48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199f4c: 0xacc20510  sw          $v0, 0x510($a2)
    ctx->pc = 0x199f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1296), GPR_U32(ctx, 2));
    // 0x199f50: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x199f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x199f54: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x199f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x199f58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x199F58u;
    {
        const bool branch_taken_0x199f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F58u;
        // 0x199f5c: 0xacc004d0  sw          $zero, 0x4D0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f58) {
            ctx->pc = 0x199F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199f38;
        }
    }
    ctx->pc = 0x199F60u;
label_199f60:
    // 0x199f60: 0xae030340  sw          $v1, 0x340($s0)
    ctx->pc = 0x199f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 3));
    // 0x199f64: 0xc06682c  jal         func_19A0B0
    ctx->pc = 0x199F64u;
    SET_GPR_U32(ctx, 31, 0x199F6Cu);
    ctx->pc = 0x199F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F64u;
    // 0x199f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A0B0u, 0x199F64u, 0x199F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F6Cu;
label_199f6c:
    // 0x199f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199f78: 0x3e00008  jr          $ra
    ctx->pc = 0x199F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F78u;
        // 0x199f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199F80u;
}
