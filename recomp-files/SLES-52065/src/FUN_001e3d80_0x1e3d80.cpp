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

// Function: FUN_001e3d80
// Address: 0x1e3d80 - 0x1e3e4c
void FUN_001e3d80_0x1e3d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3d80_0x1e3d80");
#endif

    switch (ctx->pc) {
        case 0x1e3dd4u: goto label_1e3dd4;
        default: break;
    }

    ctx->pc = 0x1e3d80u;

    // 0x1e3d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3d8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e3d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d90: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1e3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e3d94: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3D94u;
    {
        const bool branch_taken_0x1e3d94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D94u;
        // 0x1e3d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d94) {
            ctx->pc = 0x1E3DA4u;
            goto label_1e3da4;
        }
    }
    ctx->pc = 0x1E3D9Cu;
    // 0x1e3d9c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E3D9Cu;
    {
        const bool branch_taken_0x1e3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D9Cu;
        // 0x1e3da0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d9c) {
            ctx->pc = 0x1E3E40u;
            goto label_1e3e40;
        }
    }
    ctx->pc = 0x1E3DA4u;
label_1e3da4:
    // 0x1e3da4: 0x90820042  lbu         $v0, 0x42($a0)
    ctx->pc = 0x1e3da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x1e3da8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E3DA8u;
    {
        const bool branch_taken_0x1e3da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3da8) {
            ctx->pc = 0x1E3DE8u;
            goto label_1e3de8;
        }
    }
    ctx->pc = 0x1E3DB0u;
    // 0x1e3db0: 0x90820041  lbu         $v0, 0x41($a0)
    ctx->pc = 0x1e3db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 65)));
    // 0x1e3db4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E3DB4u;
    {
        const bool branch_taken_0x1e3db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DB4u;
        // 0x1e3db8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3db4) {
            ctx->pc = 0x1E3DE8u;
            goto label_1e3de8;
        }
    }
    ctx->pc = 0x1E3DBCu;
    // 0x1e3dbc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3DBCu;
    {
        const bool branch_taken_0x1e3dbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DBCu;
        // 0x1e3dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dbc) {
            ctx->pc = 0x1E3DCCu;
            goto label_1e3dcc;
        }
    }
    ctx->pc = 0x1E3DC4u;
    // 0x1e3dc4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E3DC4u;
    {
        const bool branch_taken_0x1e3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3dc4) {
            ctx->pc = 0x1E3E3Cu;
            goto label_1e3e3c;
        }
    }
    ctx->pc = 0x1E3DCCu;
label_1e3dcc:
    // 0x1e3dcc: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E3DCCu;
    SET_GPR_U32(ctx, 31, 0x1E3DD4u);
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E3DCCu, 0x1E3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DD4u;
label_1e3dd4:
    // 0x1e3dd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3dd8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E3DD8u;
    {
        const bool branch_taken_0x1e3dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3dd8) {
            ctx->pc = 0x1E3E28u;
            goto label_1e3e28;
        }
    }
    ctx->pc = 0x1E3DE0u;
    // 0x1e3de0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E3DE0u;
    {
        const bool branch_taken_0x1e3de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DE0u;
        // 0x1e3de4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3de0) {
            ctx->pc = 0x1E3E3Cu;
            goto label_1e3e3c;
        }
    }
    ctx->pc = 0x1E3DE8u;
label_1e3de8:
    // 0x1e3de8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e3de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e3dec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e3decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e3df0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e3df0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e3df4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3DF4u;
    {
        const bool branch_taken_0x1e3df4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DF4u;
        // 0x1e3df8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3df4) {
            ctx->pc = 0x1E3E04u;
            goto label_1e3e04;
        }
    }
    ctx->pc = 0x1E3DFCu;
    // 0x1e3dfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E3DFCu;
    {
        const bool branch_taken_0x1e3dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3dfc) {
            ctx->pc = 0x1E3E3Cu;
            goto label_1e3e3c;
        }
    }
    ctx->pc = 0x1E3E04u;
label_1e3e04:
    // 0x1e3e04: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e3e08: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e3e08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e3e0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e3e10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3e18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3E18u;
    {
        const bool branch_taken_0x1e3e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E18u;
        // 0x1e3e1c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e18) {
            ctx->pc = 0x1E3E28u;
            goto label_1e3e28;
        }
    }
    ctx->pc = 0x1E3E20u;
    // 0x1e3e20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e3e24: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1e3e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1e3e28:
    // 0x1e3e28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3e2c: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3E2Cu;
    {
        const bool branch_taken_0x1e3e2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3e2c) {
            ctx->pc = 0x1E3E38u;
            goto label_1e3e38;
        }
    }
    ctx->pc = 0x1E3E34u;
    // 0x1e3e34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e38:
    // 0x1e3e38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e3c:
    // 0x1e3e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3e40:
    // 0x1e3e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E44u;
        // 0x1e3e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3E4Cu;
}
