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

// Function: FUN_00193ee0
// Address: 0x193ee0 - 0x193fa4
void FUN_00193ee0_0x193ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193ee0_0x193ee0");
#endif

    switch (ctx->pc) {
        case 0x193f08u: goto label_193f08;
        case 0x193f6cu: goto label_193f6c;
        case 0x193f74u: goto label_193f74;
        case 0x193f8cu: goto label_193f8c;
        default: break;
    }

    ctx->pc = 0x193ee0u;

    // 0x193ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193ee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193eec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193ef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ef4: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x193ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x193ef8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193efc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x193efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x193f00: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x193F00u;
    SET_GPR_U32(ctx, 31, 0x193F08u);
    ctx->pc = 0x193F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F00u;
    // 0x193f04: 0x24a5ff98  addiu       $a1, $a1, -0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x193F00u, 0x193F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F08u;
label_193f08:
    // 0x193f08: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x193F08u;
    {
        const bool branch_taken_0x193f08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193f08) {
            ctx->pc = 0x193F90u;
            goto label_193f90;
        }
    }
    ctx->pc = 0x193F10u;
    // 0x193f10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193F10u;
    {
        const bool branch_taken_0x193f10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x193F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F10u;
        // 0x193f14: 0x8f8586f4  lw          $a1, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f10) {
            ctx->pc = 0x193F20u;
            goto label_193f20;
        }
    }
    ctx->pc = 0x193F18u;
    // 0x193f18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x193F18u;
    {
        const bool branch_taken_0x193f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F18u;
        // 0x193f1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f18) {
            ctx->pc = 0x193F38u;
            goto label_193f38;
        }
    }
    ctx->pc = 0x193F20u;
label_193f20:
    // 0x193f20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x193f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193f24: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x193f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193f28: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x193f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x193f2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193f30: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193f34: 0x0  nop
    ctx->pc = 0x193f34u;
    // NOP
label_193f38:
    // 0x193f38: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x193F38u;
    {
        const bool branch_taken_0x193f38 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x193f38) {
            ctx->pc = 0x193F90u;
            goto label_193f90;
        }
    }
    ctx->pc = 0x193F40u;
    // 0x193f40: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193f44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193f48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x193f54: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x193f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x193f58: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x193f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x193f5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x193f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x193f60: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x193f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193f64: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x193F64u;
    SET_GPR_U32(ctx, 31, 0x193F6Cu);
    ctx->pc = 0x193F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F64u;
    // 0x193f68: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x193F64u, 0x193F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F6Cu;
label_193f6c:
    // 0x193f6c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x193F6Cu;
    SET_GPR_U32(ctx, 31, 0x193F74u);
    ctx->pc = 0x193F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F6Cu;
    // 0x193f70: 0xaf908700  sw          $s0, -0x7900($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x193F6Cu, 0x193F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F74u;
label_193f74:
    // 0x193f74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x193f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f84: 0xc047578  jal         func_11D5E0
    ctx->pc = 0x193F84u;
    SET_GPR_U32(ctx, 31, 0x193F8Cu);
    ctx->pc = 0x193F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F84u;
    // 0x193f88: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E0u, 0x193F84u, 0x193F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F8Cu;
label_193f8c:
    // 0x193f8c: 0xaf8286fc  sw          $v0, -0x7904($gp)
    ctx->pc = 0x193f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
label_193f90:
    // 0x193f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x193F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F9Cu;
        // 0x193fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193FA4u;
}
