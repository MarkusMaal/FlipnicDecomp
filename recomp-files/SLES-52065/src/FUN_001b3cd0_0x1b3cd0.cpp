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

// Function: FUN_001b3cd0
// Address: 0x1b3cd0 - 0x1b3e2c
void FUN_001b3cd0_0x1b3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3cd0_0x1b3cd0");
#endif

    switch (ctx->pc) {
        case 0x1b3d14u: goto label_1b3d14;
        case 0x1b3d34u: goto label_1b3d34;
        case 0x1b3d98u: goto label_1b3d98;
        case 0x1b3dccu: goto label_1b3dcc;
        default: break;
    }

    ctx->pc = 0x1b3cd0u;

    // 0x1b3cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b3cd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b3cd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b3cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b3cdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b3cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b3ce0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3ce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cf4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b3cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cf8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b3cf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cfc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b3cfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3d04: 0x84510008  lh          $s1, 0x8($v0)
    ctx->pc = 0x1b3d04u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3d08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b3d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B3D0Cu;
    {
        const bool branch_taken_0x1b3d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d0c) {
            ctx->pc = 0x1B3D48u;
            goto label_1b3d48;
        }
    }
    ctx->pc = 0x1B3D14u;
label_1b3d14:
    // 0x1b3d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3d18: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b3d1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3d20: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b3d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3d2c: 0xc080796  jal         func_201E58
    ctx->pc = 0x1B3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D34u);
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x1B3D2Cu, 0x1B3D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D34u;
label_1b3d34:
    // 0x1b3d34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D34u;
    {
        const bool branch_taken_0x1b3d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d34) {
            ctx->pc = 0x1B3D44u;
            goto label_1b3d44;
        }
    }
    ctx->pc = 0x1B3D3Cu;
    // 0x1b3d3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3D3Cu;
    {
        const bool branch_taken_0x1b3d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d3c) {
            ctx->pc = 0x1B3D58u;
            goto label_1b3d58;
        }
    }
    ctx->pc = 0x1B3D44u;
label_1b3d44:
    // 0x1b3d44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b3d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b3d48:
    // 0x1b3d48: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1b3d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b3d4c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B3D4Cu;
    {
        const bool branch_taken_0x1b3d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d4c) {
            ctx->pc = 0x1B3D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d14;
        }
    }
    ctx->pc = 0x1B3D54u;
    // 0x1b3d54: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b3d54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b3d58:
    // 0x1b3d58: 0x1a600029  blez        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3D58u;
    {
        const bool branch_taken_0x1b3d58 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1b3d58) {
            ctx->pc = 0x1B3E00u;
            goto label_1b3e00;
        }
    }
    ctx->pc = 0x1B3D60u;
    // 0x1b3d60: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3D60u;
    {
        const bool branch_taken_0x1b3d60 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1b3d60) {
            ctx->pc = 0x1B3D74u;
            goto label_1b3d74;
        }
    }
    ctx->pc = 0x1B3D68u;
    // 0x1b3d68: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1b3d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3D6Cu;
    {
        const bool branch_taken_0x1b3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d6c) {
            ctx->pc = 0x1B3D8Cu;
            goto label_1b3d8c;
        }
    }
    ctx->pc = 0x1B3D74u;
label_1b3d74:
    // 0x1b3d74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3d78: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1b3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b3d7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3d80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3d84: 0x84520008  lh          $s2, 0x8($v0)
    ctx->pc = 0x1b3d84u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3d88: 0x0  nop
    ctx->pc = 0x1b3d88u;
    // NOP
label_1b3d8c:
    // 0x1b3d8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3D90u;
    {
        const bool branch_taken_0x1b3d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d90) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3D98u;
label_1b3d98:
    // 0x1b3d98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3d9c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b3da0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3da4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1b3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3da8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b3dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3db0: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1b3db4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b3db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b3db8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3dbc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x1b3dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1b3dc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b3dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dc4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1B3DC4u;
    SET_GPR_U32(ctx, 31, 0x1B3DCCu);
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1B3DC4u, 0x1B3DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DCCu;
label_1b3dcc:
    // 0x1b3dcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3DCCu;
    {
        const bool branch_taken_0x1b3dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dcc) {
            ctx->pc = 0x1B3DE0u;
            goto label_1b3de0;
        }
    }
    ctx->pc = 0x1B3DD4u;
    // 0x1b3dd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b3dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B3DD8u;
    {
        const bool branch_taken_0x1b3dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dd8) {
            ctx->pc = 0x1B3E04u;
            goto label_1b3e04;
        }
    }
    ctx->pc = 0x1B3DE0u;
label_1b3de0:
    // 0x1b3de0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b3de4:
    // 0x1b3de4: 0x0  nop
    ctx->pc = 0x1b3de4u;
    // NOP
    // 0x1b3de8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1b3de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b3dec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B3DECu;
    {
        const bool branch_taken_0x1b3dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dec) {
            ctx->pc = 0x1B3D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d98;
        }
    }
    ctx->pc = 0x1B3DF4u;
    // 0x1b3df4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3df8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3DF8u;
    {
        const bool branch_taken_0x1b3df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3df8) {
            ctx->pc = 0x1B3E04u;
            goto label_1b3e04;
        }
    }
    ctx->pc = 0x1B3E00u;
label_1b3e00:
    // 0x1b3e00: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b3e04:
    // 0x1b3e04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3e08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b3e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3e0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b3e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3e10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3e14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3e20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E2Cu;
}
