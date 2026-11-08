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

// Function: FUN_001d8ee8
// Address: 0x1d8ee8 - 0x1d8fb8
void FUN_001d8ee8_0x1d8ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8ee8_0x1d8ee8");
#endif

    switch (ctx->pc) {
        case 0x1d8f10u: goto label_1d8f10;
        case 0x1d8f2cu: goto label_1d8f2c;
        case 0x1d8f40u: goto label_1d8f40;
        case 0x1d8f54u: goto label_1d8f54;
        case 0x1d8f6cu: goto label_1d8f6c;
        case 0x1d8fa0u: goto label_1d8fa0;
        default: break;
    }

    ctx->pc = 0x1d8ee8u;

    // 0x1d8ee8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d8ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d8eec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ef4: 0x24844240  addiu       $a0, $a0, 0x4240
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
    // 0x1d8ef8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1d8efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8f08: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1D8F08u;
    SET_GPR_U32(ctx, 31, 0x1D8F10u);
    ctx->pc = 0x1D8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F08u;
    // 0x1d8f0c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1D8F08u, 0x1D8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F10u;
label_1d8f10:
    // 0x1d8f10: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d8f14: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d8f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f1c: 0x24846440  addiu       $a0, $a0, 0x6440
    ctx->pc = 0x1d8f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25664));
    // 0x1d8f20: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1d8f24: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1D8F24u;
    SET_GPR_U32(ctx, 31, 0x1D8F2Cu);
    ctx->pc = 0x1D8F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F24u;
    // 0x1d8f28: 0xac604200  sw          $zero, 0x4200($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16896), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1D8F24u, 0x1D8F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F2Cu;
label_1d8f2c:
    // 0x1d8f2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d8f30: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d8f34: 0xac606428  sw          $zero, 0x6428($v1)
    ctx->pc = 0x1d8f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x386428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386428u, _value); } while (0);
    // 0x1d8f38: 0xac40642c  sw          $zero, 0x642C($v0)
    ctx->pc = 0x1d8f38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38642Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38642Cu, _value); } while (0);
    // 0x1d8f3c: 0x26116400  addiu       $s1, $s0, 0x6400
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25600));
label_1d8f40:
    // 0x1d8f40: 0x3c051122  lui         $a1, 0x1122
    ctx->pc = 0x1d8f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4386 << 16));
    // 0x1d8f44: 0x26046400  addiu       $a0, $s0, 0x6400
    ctx->pc = 0x1d8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25600));
    // 0x1d8f48: 0x34a53344  ori         $a1, $a1, 0x3344
    ctx->pc = 0x1d8f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13124);
    // 0x1d8f4c: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1D8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F54u);
    ctx->pc = 0x1D8F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F4Cu;
    // 0x1d8f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1D8F4Cu, 0x1D8F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F54u;
label_1d8f54:
    // 0x1d8f54: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8F54u;
    {
        const bool branch_taken_0x1d8f54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F54u;
        // 0x1d8f58: 0x24032710  addiu       $v1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f54) {
            ctx->pc = 0x1D8F68u;
            goto label_1d8f68;
        }
    }
    ctx->pc = 0x1D8F5Cu;
    // 0x1d8f5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8F5Cu;
    {
        const bool branch_taken_0x1d8f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F5Cu;
        // 0x1d8f60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f5c) {
            ctx->pc = 0x1D8FA4u;
            goto label_1d8fa4;
        }
    }
    ctx->pc = 0x1D8F64u;
    // 0x1d8f64: 0x0  nop
    ctx->pc = 0x1d8f64u;
    // NOP
label_1d8f68:
    // 0x1d8f68: 0x2463fd8f  addiu       $v1, $v1, -0x271
    ctx->pc = 0x1d8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966671));
label_1d8f6c:
    // 0x1d8f6c: 0x0  nop
    ctx->pc = 0x1d8f6cu;
    // NOP
    // 0x1d8f70: 0x0  nop
    ctx->pc = 0x1d8f70u;
    // NOP
    // 0x1d8f74: 0x0  nop
    ctx->pc = 0x1d8f74u;
    // NOP
    // 0x1d8f78: 0x0  nop
    ctx->pc = 0x1d8f78u;
    // NOP
    // 0x1d8f7c: 0x0  nop
    ctx->pc = 0x1d8f7cu;
    // NOP
    // 0x1d8f80: 0x5c60fffa  bgtzl       $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8F80u;
    {
        const bool branch_taken_0x1d8f80 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d8f80) {
            ctx->pc = 0x1D8F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8F80u;
            // 0x1d8f84: 0x2463fd8f  addiu       $v1, $v1, -0x271 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966671));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8f6c;
        }
    }
    ctx->pc = 0x1D8F88u;
    // 0x1d8f88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d8f8c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D8F8Cu;
    {
        const bool branch_taken_0x1d8f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F8Cu;
        // 0x1d8f90: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f8c) {
            ctx->pc = 0x1D8F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8f40;
        }
    }
    ctx->pc = 0x1D8F94u;
    // 0x1d8f94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8f98: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1D8F98u;
    SET_GPR_U32(ctx, 31, 0x1D8FA0u);
    ctx->pc = 0x1D8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F98u;
    // 0x1d8f9c: 0x24a58d98  addiu       $a1, $a1, -0x7268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1D8F98u, 0x1D8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FA0u;
label_1d8fa0:
    // 0x1d8fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fa4:
    // 0x1d8fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FB0u;
        // 0x1d8fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8FB8u;
}
