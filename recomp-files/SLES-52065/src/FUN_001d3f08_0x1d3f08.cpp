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

// Function: FUN_001d3f08
// Address: 0x1d3f08 - 0x1d3fc0
void FUN_001d3f08_0x1d3f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3f08_0x1d3f08");
#endif

    switch (ctx->pc) {
        case 0x1d3f30u: goto label_1d3f30;
        case 0x1d3f68u: goto label_1d3f68;
        case 0x1d3f94u: goto label_1d3f94;
        default: break;
    }

    ctx->pc = 0x1d3f08u;

    // 0x1d3f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3f10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3f18: 0x2623024c  addiu       $v1, $s1, 0x24C
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 588));
    // 0x1d3f1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d3f20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d3f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3f2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f30:
    // 0x1d3f30: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1d3f30u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x1d3f34: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1d3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1d3f38: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x1d3f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d3f3c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d3f40: 0x0  nop
    ctx->pc = 0x1d3f40u;
    // NOP
    // 0x1d3f44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3F44u;
    {
        const bool branch_taken_0x1d3f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F44u;
        // 0x1d3f48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f44) {
            ctx->pc = 0x1D3F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3f30;
        }
    }
    ctx->pc = 0x1D3F4Cu;
    // 0x1d3f4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3f50: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1d3f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d3f54: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3F54u;
    {
        const bool branch_taken_0x1d3f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F54u;
        // 0x1d3f58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f54) {
            ctx->pc = 0x1D3FA4u;
            goto label_1d3fa4;
        }
    }
    ctx->pc = 0x1D3F5Cu;
    // 0x1d3f5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3f68:
    // 0x1d3f68: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1d3f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d3f6c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d3f6cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d3f70: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d3f70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1d3f74: 0xb31814  dsllv       $v1, $s3, $a1
    ctx->pc = 0x1d3f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1d3f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d3f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d3f7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3F7Cu;
    {
        const bool branch_taken_0x1d3f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F7Cu;
        // 0x1d3f80: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f7c) {
            ctx->pc = 0x1D3F98u;
            goto label_1d3f98;
        }
    }
    ctx->pc = 0x1D3F84u;
    // 0x1d3f84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d3f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d3f8c: 0xc074f80  jal         func_1D3E00
    ctx->pc = 0x1D3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F94u);
    ctx->pc = 0x1D3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F8Cu;
    // 0x1d3f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3E00u, 0x1D3F8Cu, 0x1D3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F94u;
label_1d3f94:
    // 0x1d3f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f98:
    // 0x1d3f98: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x1d3f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d3f9c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D3F9Cu;
    {
        const bool branch_taken_0x1d3f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F9Cu;
        // 0x1d3fa0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f9c) {
            ctx->pc = 0x1D3F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3FA4u;
label_1d3fa4:
    // 0x1d3fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3fb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3fb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB8u;
        // 0x1d3fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3FC0u;
}
