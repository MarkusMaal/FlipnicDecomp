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

// Function: FUN_00209f10
// Address: 0x209f10 - 0x209fb0
void FUN_00209f10_0x209f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209f10_0x209f10");
#endif

    switch (ctx->pc) {
        case 0x209f34u: goto label_209f34;
        case 0x209f50u: goto label_209f50;
        case 0x209f6cu: goto label_209f6c;
        case 0x209f80u: goto label_209f80;
        case 0x209f8cu: goto label_209f8c;
        default: break;
    }

    ctx->pc = 0x209f10u;

    // 0x209f10: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x209f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x209f14: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x209f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x209f18: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x209f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x209f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209f20: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x209f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x209f24: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x209f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x209f28: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x209f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x209f2c: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x209F2Cu;
    SET_GPR_U32(ctx, 31, 0x209F34u);
    ctx->pc = 0x209F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F2Cu;
    // 0x209f30: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x209F2Cu, 0x209F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F34u;
label_209f34:
    // 0x209f34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x209f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f38: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x209F38u;
    {
        const bool branch_taken_0x209f38 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x209F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F38u;
        // 0x209f3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f38) {
            ctx->pc = 0x209F48u;
            goto label_209f48;
        }
    }
    ctx->pc = 0x209F40u;
    // 0x209f40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x209F40u;
    {
        const bool branch_taken_0x209f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F40u;
        // 0x209f44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f40) {
            ctx->pc = 0x209F98u;
            goto label_209f98;
        }
    }
    ctx->pc = 0x209F48u;
label_209f48:
    // 0x209f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209F48u;
    {
        const bool branch_taken_0x209f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F48u;
        // 0x209f4c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f48) {
            ctx->pc = 0x209F54u;
            goto label_209f54;
        }
    }
    ctx->pc = 0x209F50u;
label_209f50:
    // 0x209f50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_209f54:
    // 0x209f54: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x209f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x209f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209F58u;
    {
        const bool branch_taken_0x209f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F58u;
        // 0x209f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f58) {
            ctx->pc = 0x209F78u;
            goto label_209f78;
        }
    }
    ctx->pc = 0x209F60u;
    // 0x209f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f64: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x209F64u;
    SET_GPR_U32(ctx, 31, 0x209F6Cu);
    ctx->pc = 0x209F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F64u;
    // 0x209f68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x209F64u, 0x209F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F6Cu;
label_209f6c:
    // 0x209f6c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x209f6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209f70: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x209F70u;
    {
        const bool branch_taken_0x209f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F70u;
        // 0x209f74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f70) {
            ctx->pc = 0x209F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209f50;
        }
    }
    ctx->pc = 0x209F78u;
label_209f78:
    // 0x209f78: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x209F78u;
    SET_GPR_U32(ctx, 31, 0x209F80u);
    ctx->pc = 0x209F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F78u;
    // 0x209f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x209F78u, 0x209F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F80u;
label_209f80:
    // 0x209f80: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x209f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x209f84: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x209F84u;
    SET_GPR_U32(ctx, 31, 0x209F8Cu);
    ctx->pc = 0x209F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F84u;
    // 0x209f88: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x209F84u, 0x209F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F8Cu;
label_209f8c:
    // 0x209f8c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x209f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x209f90: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x209f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x209f94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x209f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_209f98:
    // 0x209f98: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x209f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x209f9c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x209f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x209fa0: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x209fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x209fa4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x209fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x209fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x209FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA8u;
        // 0x209fac: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209FB0u;
}
