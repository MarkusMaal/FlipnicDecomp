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

// Function: FUN_001e4e60
// Address: 0x1e4e60 - 0x1e4f2c
void FUN_001e4e60_0x1e4e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4e60_0x1e4e60");
#endif

    switch (ctx->pc) {
        case 0x1e4eb4u: goto label_1e4eb4;
        default: break;
    }

    ctx->pc = 0x1e4e60u;

    // 0x1e4e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e4e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4e6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e70: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1e4e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e4e74: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4E74u;
    {
        const bool branch_taken_0x1e4e74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E74u;
        // 0x1e4e78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e74) {
            ctx->pc = 0x1E4E84u;
            goto label_1e4e84;
        }
    }
    ctx->pc = 0x1E4E7Cu;
    // 0x1e4e7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E4E7Cu;
    {
        const bool branch_taken_0x1e4e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E7Cu;
        // 0x1e4e80: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e7c) {
            ctx->pc = 0x1E4F20u;
            goto label_1e4f20;
        }
    }
    ctx->pc = 0x1E4E84u;
label_1e4e84:
    // 0x1e4e84: 0x90820052  lbu         $v0, 0x52($a0)
    ctx->pc = 0x1e4e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x1e4e88: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E4E88u;
    {
        const bool branch_taken_0x1e4e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e88) {
            ctx->pc = 0x1E4EC8u;
            goto label_1e4ec8;
        }
    }
    ctx->pc = 0x1E4E90u;
    // 0x1e4e90: 0x90820051  lbu         $v0, 0x51($a0)
    ctx->pc = 0x1e4e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x1e4e94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E4E94u;
    {
        const bool branch_taken_0x1e4e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E94u;
        // 0x1e4e98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e94) {
            ctx->pc = 0x1E4EC8u;
            goto label_1e4ec8;
        }
    }
    ctx->pc = 0x1E4E9Cu;
    // 0x1e4e9c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4E9Cu;
    {
        const bool branch_taken_0x1e4e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E9Cu;
        // 0x1e4ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e9c) {
            ctx->pc = 0x1E4EACu;
            goto label_1e4eac;
        }
    }
    ctx->pc = 0x1E4EA4u;
    // 0x1e4ea4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E4EA4u;
    {
        const bool branch_taken_0x1e4ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ea4) {
            ctx->pc = 0x1E4F1Cu;
            goto label_1e4f1c;
        }
    }
    ctx->pc = 0x1E4EACu;
label_1e4eac:
    // 0x1e4eac: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E4EACu;
    SET_GPR_U32(ctx, 31, 0x1E4EB4u);
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E4EACu, 0x1E4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EB4u;
label_1e4eb4:
    // 0x1e4eb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4eb8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E4EB8u;
    {
        const bool branch_taken_0x1e4eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4eb8) {
            ctx->pc = 0x1E4F08u;
            goto label_1e4f08;
        }
    }
    ctx->pc = 0x1E4EC0u;
    // 0x1e4ec0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E4EC0u;
    {
        const bool branch_taken_0x1e4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EC0u;
        // 0x1e4ec4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ec0) {
            ctx->pc = 0x1E4F1Cu;
            goto label_1e4f1c;
        }
    }
    ctx->pc = 0x1E4EC8u;
label_1e4ec8:
    // 0x1e4ec8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e4ecc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4ed0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e4ed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e4ed4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4ED4u;
    {
        const bool branch_taken_0x1e4ed4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ED4u;
        // 0x1e4ed8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ed4) {
            ctx->pc = 0x1E4EE4u;
            goto label_1e4ee4;
        }
    }
    ctx->pc = 0x1E4EDCu;
    // 0x1e4edc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E4EDCu;
    {
        const bool branch_taken_0x1e4edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4edc) {
            ctx->pc = 0x1E4F1Cu;
            goto label_1e4f1c;
        }
    }
    ctx->pc = 0x1E4EE4u;
label_1e4ee4:
    // 0x1e4ee4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e4ee8: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e4ee8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e4eec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e4ef0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e4ef4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1e4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1e4ef8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4EF8u;
    {
        const bool branch_taken_0x1e4ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EF8u;
        // 0x1e4efc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ef8) {
            ctx->pc = 0x1E4F08u;
            goto label_1e4f08;
        }
    }
    ctx->pc = 0x1E4F00u;
    // 0x1e4f00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e4f04: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x1e4f04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_1e4f08:
    // 0x1e4f08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4f0c: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4F0Cu;
    {
        const bool branch_taken_0x1e4f0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4f0c) {
            ctx->pc = 0x1E4F18u;
            goto label_1e4f18;
        }
    }
    ctx->pc = 0x1E4F14u;
    // 0x1e4f14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f18:
    // 0x1e4f18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e4f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f1c:
    // 0x1e4f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4f20:
    // 0x1e4f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F24u;
        // 0x1e4f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4F2Cu;
}
