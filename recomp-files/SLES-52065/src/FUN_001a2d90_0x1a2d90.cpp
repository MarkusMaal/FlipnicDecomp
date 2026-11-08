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

// Function: FUN_001a2d90
// Address: 0x1a2d90 - 0x1a2fa0
void FUN_001a2d90_0x1a2d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2d90_0x1a2d90");
#endif

    switch (ctx->pc) {
        case 0x1a2d90u: goto label_1a2d90;
        case 0x1a2d94u: goto label_1a2d94;
        case 0x1a2d98u: goto label_1a2d98;
        case 0x1a2d9cu: goto label_1a2d9c;
        case 0x1a2da0u: goto label_1a2da0;
        case 0x1a2da4u: goto label_1a2da4;
        case 0x1a2da8u: goto label_1a2da8;
        case 0x1a2dacu: goto label_1a2dac;
        case 0x1a2db0u: goto label_1a2db0;
        case 0x1a2db4u: goto label_1a2db4;
        case 0x1a2db8u: goto label_1a2db8;
        case 0x1a2dbcu: goto label_1a2dbc;
        case 0x1a2dc0u: goto label_1a2dc0;
        case 0x1a2dc4u: goto label_1a2dc4;
        case 0x1a2dc8u: goto label_1a2dc8;
        case 0x1a2dccu: goto label_1a2dcc;
        case 0x1a2dd0u: goto label_1a2dd0;
        case 0x1a2dd4u: goto label_1a2dd4;
        case 0x1a2dd8u: goto label_1a2dd8;
        case 0x1a2ddcu: goto label_1a2ddc;
        case 0x1a2de0u: goto label_1a2de0;
        case 0x1a2de4u: goto label_1a2de4;
        case 0x1a2de8u: goto label_1a2de8;
        case 0x1a2decu: goto label_1a2dec;
        case 0x1a2df0u: goto label_1a2df0;
        case 0x1a2df4u: goto label_1a2df4;
        case 0x1a2df8u: goto label_1a2df8;
        case 0x1a2dfcu: goto label_1a2dfc;
        case 0x1a2e00u: goto label_1a2e00;
        case 0x1a2e04u: goto label_1a2e04;
        case 0x1a2e08u: goto label_1a2e08;
        case 0x1a2e0cu: goto label_1a2e0c;
        case 0x1a2e10u: goto label_1a2e10;
        case 0x1a2e14u: goto label_1a2e14;
        case 0x1a2e18u: goto label_1a2e18;
        case 0x1a2e1cu: goto label_1a2e1c;
        case 0x1a2e20u: goto label_1a2e20;
        case 0x1a2e24u: goto label_1a2e24;
        case 0x1a2e28u: goto label_1a2e28;
        case 0x1a2e2cu: goto label_1a2e2c;
        case 0x1a2e30u: goto label_1a2e30;
        case 0x1a2e34u: goto label_1a2e34;
        case 0x1a2e38u: goto label_1a2e38;
        case 0x1a2e3cu: goto label_1a2e3c;
        case 0x1a2e40u: goto label_1a2e40;
        case 0x1a2e44u: goto label_1a2e44;
        case 0x1a2e48u: goto label_1a2e48;
        case 0x1a2e4cu: goto label_1a2e4c;
        case 0x1a2e50u: goto label_1a2e50;
        case 0x1a2e54u: goto label_1a2e54;
        case 0x1a2e58u: goto label_1a2e58;
        case 0x1a2e5cu: goto label_1a2e5c;
        case 0x1a2e60u: goto label_1a2e60;
        case 0x1a2e64u: goto label_1a2e64;
        case 0x1a2e68u: goto label_1a2e68;
        case 0x1a2e6cu: goto label_1a2e6c;
        case 0x1a2e70u: goto label_1a2e70;
        case 0x1a2e74u: goto label_1a2e74;
        case 0x1a2e78u: goto label_1a2e78;
        case 0x1a2e7cu: goto label_1a2e7c;
        case 0x1a2e80u: goto label_1a2e80;
        case 0x1a2e84u: goto label_1a2e84;
        case 0x1a2e88u: goto label_1a2e88;
        case 0x1a2e8cu: goto label_1a2e8c;
        case 0x1a2e90u: goto label_1a2e90;
        case 0x1a2e94u: goto label_1a2e94;
        case 0x1a2e98u: goto label_1a2e98;
        case 0x1a2e9cu: goto label_1a2e9c;
        case 0x1a2ea0u: goto label_1a2ea0;
        case 0x1a2ea4u: goto label_1a2ea4;
        case 0x1a2ea8u: goto label_1a2ea8;
        case 0x1a2eacu: goto label_1a2eac;
        case 0x1a2eb0u: goto label_1a2eb0;
        case 0x1a2eb4u: goto label_1a2eb4;
        case 0x1a2eb8u: goto label_1a2eb8;
        case 0x1a2ebcu: goto label_1a2ebc;
        case 0x1a2ec0u: goto label_1a2ec0;
        case 0x1a2ec4u: goto label_1a2ec4;
        case 0x1a2ec8u: goto label_1a2ec8;
        case 0x1a2eccu: goto label_1a2ecc;
        case 0x1a2ed0u: goto label_1a2ed0;
        case 0x1a2ed4u: goto label_1a2ed4;
        case 0x1a2ed8u: goto label_1a2ed8;
        case 0x1a2edcu: goto label_1a2edc;
        case 0x1a2ee0u: goto label_1a2ee0;
        case 0x1a2ee4u: goto label_1a2ee4;
        case 0x1a2ee8u: goto label_1a2ee8;
        case 0x1a2eecu: goto label_1a2eec;
        case 0x1a2ef0u: goto label_1a2ef0;
        case 0x1a2ef4u: goto label_1a2ef4;
        case 0x1a2ef8u: goto label_1a2ef8;
        case 0x1a2efcu: goto label_1a2efc;
        case 0x1a2f00u: goto label_1a2f00;
        case 0x1a2f04u: goto label_1a2f04;
        case 0x1a2f08u: goto label_1a2f08;
        case 0x1a2f0cu: goto label_1a2f0c;
        case 0x1a2f10u: goto label_1a2f10;
        case 0x1a2f14u: goto label_1a2f14;
        case 0x1a2f18u: goto label_1a2f18;
        case 0x1a2f1cu: goto label_1a2f1c;
        case 0x1a2f20u: goto label_1a2f20;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f28u: goto label_1a2f28;
        case 0x1a2f2cu: goto label_1a2f2c;
        case 0x1a2f30u: goto label_1a2f30;
        case 0x1a2f34u: goto label_1a2f34;
        case 0x1a2f38u: goto label_1a2f38;
        case 0x1a2f3cu: goto label_1a2f3c;
        case 0x1a2f40u: goto label_1a2f40;
        case 0x1a2f44u: goto label_1a2f44;
        case 0x1a2f48u: goto label_1a2f48;
        case 0x1a2f4cu: goto label_1a2f4c;
        case 0x1a2f50u: goto label_1a2f50;
        case 0x1a2f54u: goto label_1a2f54;
        case 0x1a2f58u: goto label_1a2f58;
        case 0x1a2f5cu: goto label_1a2f5c;
        case 0x1a2f60u: goto label_1a2f60;
        case 0x1a2f64u: goto label_1a2f64;
        case 0x1a2f68u: goto label_1a2f68;
        case 0x1a2f6cu: goto label_1a2f6c;
        case 0x1a2f70u: goto label_1a2f70;
        case 0x1a2f74u: goto label_1a2f74;
        case 0x1a2f78u: goto label_1a2f78;
        case 0x1a2f7cu: goto label_1a2f7c;
        case 0x1a2f80u: goto label_1a2f80;
        case 0x1a2f84u: goto label_1a2f84;
        case 0x1a2f88u: goto label_1a2f88;
        case 0x1a2f8cu: goto label_1a2f8c;
        case 0x1a2f90u: goto label_1a2f90;
        case 0x1a2f94u: goto label_1a2f94;
        case 0x1a2f98u: goto label_1a2f98;
        case 0x1a2f9cu: goto label_1a2f9c;
        default: break;
    }

    ctx->pc = 0x1a2d90u;

label_1a2d90:
    // 0x1a2d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a2d94:
    // 0x1a2d94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a2d98:
    // 0x1a2d98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a2d9c:
    // 0x1a2d9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a2da0:
    // 0x1a2da0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a2da4:
    // 0x1a2da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a2da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a2da8:
    // 0x1a2da8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a2da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2dac:
    // 0x1a2dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a2db0:
    // 0x1a2db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a2db4:
    // 0x1a2db4: 0x8c860664  lw          $a2, 0x664($a0)
    ctx->pc = 0x1a2db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
label_1a2db8:
    // 0x1a2db8: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x1a2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_1a2dbc:
    // 0x1a2dbc: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
label_1a2dc0:
    if (ctx->pc == 0x1A2DC0u) {
        ctx->pc = 0x1A2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DBCu;
        // 0x1a2dc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DC4u;
        goto label_1a2dc4;
    }
    ctx->pc = 0x1A2DBCu;
    {
        const bool branch_taken_0x1a2dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DBCu;
        // 0x1a2dc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2dbc) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2DC4u;
label_1a2dc4:
    // 0x1a2dc4: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
label_1a2dc8:
    if (ctx->pc == 0x1A2DC8u) {
        ctx->pc = 0x1A2DCCu;
        goto label_1a2dcc;
    }
    ctx->pc = 0x1A2DC4u;
    {
        const bool branch_taken_0x1a2dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2dc4) {
            ctx->pc = 0x1A2F48u;
            goto label_1a2f48;
        }
    }
    ctx->pc = 0x1A2DCCu;
label_1a2dcc:
    // 0x1a2dcc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1a2dd0:
    if (ctx->pc == 0x1A2DD0u) {
        ctx->pc = 0x1A2DD4u;
        goto label_1a2dd4;
    }
    ctx->pc = 0x1A2DCCu;
    {
        const bool branch_taken_0x1a2dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2dcc) {
            ctx->pc = 0x1A2DDCu;
            goto label_1a2ddc;
        }
    }
    ctx->pc = 0x1A2DD4u;
label_1a2dd4:
    // 0x1a2dd4: 0x10000063  b           . + 4 + (0x63 << 2)
label_1a2dd8:
    if (ctx->pc == 0x1A2DD8u) {
        ctx->pc = 0x1A2DDCu;
        goto label_1a2ddc;
    }
    ctx->pc = 0x1A2DD4u;
    {
        const bool branch_taken_0x1a2dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2dd4) {
            ctx->pc = 0x1A2F64u;
            goto label_1a2f64;
        }
    }
    ctx->pc = 0x1A2DDCu;
label_1a2ddc:
    // 0x1a2ddc: 0x8cc5003c  lw          $a1, 0x3C($a2)
    ctx->pc = 0x1a2ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_1a2de0:
    // 0x1a2de0: 0x8cc6002c  lw          $a2, 0x2C($a2)
    ctx->pc = 0x1a2de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_1a2de4:
    // 0x1a2de4: 0xc057040  jal         func_15C100
label_1a2de8:
    if (ctx->pc == 0x1A2DE8u) {
        ctx->pc = 0x1A2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DE4u;
        // 0x1a2de8: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DECu;
        goto label_1a2dec;
    }
    ctx->pc = 0x1A2DE4u;
    SET_GPR_U32(ctx, 31, 0x1A2DECu);
    ctx->pc = 0x1A2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DE4u;
    // 0x1a2de8: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2DE4u, 0x1A2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DECu;
label_1a2dec:
    // 0x1a2dec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a2decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2df0:
    // 0x1a2df0: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2df4:
    // 0x1a2df4: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1a2df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1a2df8:
    // 0x1a2df8: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a2dfc:
    // 0x1a2dfc: 0xc057040  jal         func_15C100
label_1a2e00:
    if (ctx->pc == 0x1A2E00u) {
        ctx->pc = 0x1A2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DFCu;
        // 0x1a2e00: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E04u;
        goto label_1a2e04;
    }
    ctx->pc = 0x1A2DFCu;
    SET_GPR_U32(ctx, 31, 0x1A2E04u);
    ctx->pc = 0x1A2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DFCu;
    // 0x1a2e00: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2DFCu, 0x1A2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E04u;
label_1a2e04:
    // 0x1a2e04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e08:
    // 0x1a2e08: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2e0c:
    // 0x1a2e0c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a2e10:
    // 0x1a2e10: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a2e14:
    // 0x1a2e14: 0xc057040  jal         func_15C100
label_1a2e18:
    if (ctx->pc == 0x1A2E18u) {
        ctx->pc = 0x1A2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E14u;
        // 0x1a2e18: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E1Cu;
        goto label_1a2e1c;
    }
    ctx->pc = 0x1A2E14u;
    SET_GPR_U32(ctx, 31, 0x1A2E1Cu);
    ctx->pc = 0x1A2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E14u;
    // 0x1a2e18: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E14u, 0x1A2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E1Cu;
label_1a2e1c:
    // 0x1a2e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e20:
    // 0x1a2e20: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2e24:
    // 0x1a2e24: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a2e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a2e28:
    // 0x1a2e28: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a2e2c:
    // 0x1a2e2c: 0xc057040  jal         func_15C100
label_1a2e30:
    if (ctx->pc == 0x1A2E30u) {
        ctx->pc = 0x1A2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E2Cu;
        // 0x1a2e30: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E34u;
        goto label_1a2e34;
    }
    ctx->pc = 0x1A2E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E34u);
    ctx->pc = 0x1A2E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E2Cu;
    // 0x1a2e30: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E2Cu, 0x1A2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E34u;
label_1a2e34:
    // 0x1a2e34: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1a2e38:
    // 0x1a2e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a2e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e3c:
    // 0x1a2e3c: 0xac3076c4  sw          $s0, 0x76C4($at)
    ctx->pc = 0x1a2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30404), GPR_U32(ctx, 16));
label_1a2e40:
    // 0x1a2e40: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1a2e44:
    // 0x1a2e44: 0xac3276c8  sw          $s2, 0x76C8($at)
    ctx->pc = 0x1a2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30408), GPR_U32(ctx, 18));
label_1a2e48:
    // 0x1a2e48: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1a2e4c:
    // 0x1a2e4c: 0xac3476cc  sw          $s4, 0x76CC($at)
    ctx->pc = 0x1a2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30412), GPR_U32(ctx, 20));
label_1a2e50:
    // 0x1a2e50: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1a2e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1a2e54:
    // 0x1a2e54: 0xac2276c0  sw          $v0, 0x76C0($at)
    ctx->pc = 0x1a2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30400), GPR_U32(ctx, 2));
label_1a2e58:
    // 0x1a2e58: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2e5c:
    // 0x1a2e5c: 0x10000034  b           . + 4 + (0x34 << 2)
label_1a2e60:
    if (ctx->pc == 0x1A2E60u) {
        ctx->pc = 0x1A2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E5Cu;
        // 0x1a2e60: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E64u;
        goto label_1a2e64;
    }
    ctx->pc = 0x1A2E5Cu;
    {
        const bool branch_taken_0x1a2e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E5Cu;
        // 0x1a2e60: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e5c) {
            ctx->pc = 0x1A2F30u;
            goto label_1a2f30;
        }
    }
    ctx->pc = 0x1A2E64u;
label_1a2e64:
    // 0x1a2e64: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2e68:
    // 0x1a2e68: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a2e6c:
    // 0x1a2e6c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a2e70:
    // 0x1a2e70: 0xc057040  jal         func_15C100
label_1a2e74:
    if (ctx->pc == 0x1A2E74u) {
        ctx->pc = 0x1A2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E70u;
        // 0x1a2e74: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E78u;
        goto label_1a2e78;
    }
    ctx->pc = 0x1A2E70u;
    SET_GPR_U32(ctx, 31, 0x1A2E78u);
    ctx->pc = 0x1A2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E70u;
    // 0x1a2e74: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E70u, 0x1A2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E78u;
label_1a2e78:
    // 0x1a2e78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e7c:
    // 0x1a2e7c: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2e80:
    // 0x1a2e80: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1a2e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a2e84:
    // 0x1a2e84: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a2e88:
    // 0x1a2e88: 0xc057040  jal         func_15C100
label_1a2e8c:
    if (ctx->pc == 0x1A2E8Cu) {
        ctx->pc = 0x1A2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E88u;
        // 0x1a2e8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E90u;
        goto label_1a2e90;
    }
    ctx->pc = 0x1A2E88u;
    SET_GPR_U32(ctx, 31, 0x1A2E90u);
    ctx->pc = 0x1A2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E88u;
    // 0x1a2e8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A2E88u, 0x1A2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E90u;
label_1a2e90:
    // 0x1a2e90: 0xaf92861c  sw          $s2, -0x79E4($gp)
    ctx->pc = 0x1a2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936092), GPR_U32(ctx, 18));
label_1a2e94:
    // 0x1a2e94: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2e98:
    // 0x1a2e98: 0xaf828620  sw          $v0, -0x79E0($gp)
    ctx->pc = 0x1a2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 2));
label_1a2e9c:
    // 0x1a2e9c: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1a2e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1a2ea0:
    // 0x1a2ea0: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2ea4:
    // 0x1a2ea4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a2ea8:
    // 0x1a2ea8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1a2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a2eac:
    // 0x1a2eac: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a2eb0:
    // 0x1a2eb0: 0xc05704c  jal         func_15C130
label_1a2eb4:
    if (ctx->pc == 0x1A2EB4u) {
        ctx->pc = 0x1A2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB0u;
        // 0x1a2eb4: 0x24080042  addiu       $t0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EB8u;
        goto label_1a2eb8;
    }
    ctx->pc = 0x1A2EB0u;
    SET_GPR_U32(ctx, 31, 0x1A2EB8u);
    ctx->pc = 0x1A2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EB0u;
    // 0x1a2eb4: 0x24080042  addiu       $t0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1A2EB0u, 0x1A2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2EB8u;
label_1a2eb8:
    // 0x1a2eb8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_1a2ebc:
    if (ctx->pc == 0x1A2EBCu) {
        ctx->pc = 0x1A2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB8u;
        // 0x1a2ebc: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EC0u;
        goto label_1a2ec0;
    }
    ctx->pc = 0x1A2EB8u;
    {
        const bool branch_taken_0x1a2eb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB8u;
        // 0x1a2ebc: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2eb8) {
            ctx->pc = 0x1A2EDCu;
            goto label_1a2edc;
        }
    }
    ctx->pc = 0x1A2EC0u;
label_1a2ec0:
    // 0x1a2ec0: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1a2ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a2ec4:
    // 0x1a2ec4: 0x246376d0  addiu       $v1, $v1, 0x76D0
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30416));
label_1a2ec8:
    // 0x1a2ec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a2ecc:
    // 0x1a2ecc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a2ed0:
    // 0x1a2ed0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a2ed4:
    // 0x1a2ed4: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_1a2ed8:
    if (ctx->pc == 0x1A2ED8u) {
        ctx->pc = 0x1A2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ED4u;
        // 0x1a2ed8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EDCu;
        goto label_1a2edc;
    }
    ctx->pc = 0x1A2ED4u;
    {
        const bool branch_taken_0x1a2ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ED4u;
        // 0x1a2ed8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ed4) {
            ctx->pc = 0x1A2EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2ea0;
        }
    }
    ctx->pc = 0x1A2EDCu;
label_1a2edc:
    // 0x1a2edc: 0x0  nop
    ctx->pc = 0x1a2edcu;
    // NOP
label_1a2ee0:
    // 0x1a2ee0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2ee4:
    // 0x1a2ee4: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1a2ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1a2ee8:
    // 0x1a2ee8: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a2eec:
    // 0x1a2eec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a2eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a2ef0:
    // 0x1a2ef0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1a2ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a2ef4:
    // 0x1a2ef4: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a2ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a2ef8:
    // 0x1a2ef8: 0xc05704c  jal         func_15C130
label_1a2efc:
    if (ctx->pc == 0x1A2EFCu) {
        ctx->pc = 0x1A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EF8u;
        // 0x1a2efc: 0x24080045  addiu       $t0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F00u;
        goto label_1a2f00;
    }
    ctx->pc = 0x1A2EF8u;
    SET_GPR_U32(ctx, 31, 0x1A2F00u);
    ctx->pc = 0x1A2EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EF8u;
    // 0x1a2efc: 0x24080045  addiu       $t0, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1A2EF8u, 0x1A2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F00u;
label_1a2f00:
    // 0x1a2f00: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_1a2f04:
    if (ctx->pc == 0x1A2F04u) {
        ctx->pc = 0x1A2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F00u;
        // 0x1a2f04: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F08u;
        goto label_1a2f08;
    }
    ctx->pc = 0x1A2F00u;
    {
        const bool branch_taken_0x1a2f00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F00u;
        // 0x1a2f04: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f00) {
            ctx->pc = 0x1A2F24u;
            goto label_1a2f24;
        }
    }
    ctx->pc = 0x1A2F08u;
label_1a2f08:
    // 0x1a2f08: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a2f0c:
    // 0x1a2f0c: 0x246376d0  addiu       $v1, $v1, 0x76D0
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30416));
label_1a2f10:
    // 0x1a2f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a2f14:
    // 0x1a2f14: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a2f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a2f18:
    // 0x1a2f18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a2f1c:
    // 0x1a2f1c: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_1a2f20:
    if (ctx->pc == 0x1A2F20u) {
        ctx->pc = 0x1A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F1Cu;
        // 0x1a2f20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F24u;
        goto label_1a2f24;
    }
    ctx->pc = 0x1A2F1Cu;
    {
        const bool branch_taken_0x1a2f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F1Cu;
        // 0x1a2f20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f1c) {
            ctx->pc = 0x1A2EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2ee8;
        }
    }
    ctx->pc = 0x1A2F24u;
label_1a2f24:
    // 0x1a2f24: 0x0  nop
    ctx->pc = 0x1a2f24u;
    // NOP
label_1a2f28:
    // 0x1a2f28: 0xaf918624  sw          $s1, -0x79DC($gp)
    ctx->pc = 0x1a2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936100), GPR_U32(ctx, 17));
label_1a2f2c:
    // 0x1a2f2c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a2f30:
    // 0x1a2f30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a2f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2f34:
    // 0x1a2f34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a2f38:
    // 0x1a2f38: 0x1083ffca  beq         $a0, $v1, . + 4 + (-0x36 << 2)
label_1a2f3c:
    if (ctx->pc == 0x1A2F3Cu) {
        ctx->pc = 0x1A2F40u;
        goto label_1a2f40;
    }
    ctx->pc = 0x1A2F38u;
    {
        const bool branch_taken_0x1a2f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2f38) {
            ctx->pc = 0x1A2E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e64;
        }
    }
    ctx->pc = 0x1A2F40u;
label_1a2f40:
    // 0x1a2f40: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a2f44:
    if (ctx->pc == 0x1A2F44u) {
        ctx->pc = 0x1A2F48u;
        goto label_1a2f48;
    }
    ctx->pc = 0x1A2F40u;
    {
        const bool branch_taken_0x1a2f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f40) {
            ctx->pc = 0x1A2F64u;
            goto label_1a2f64;
        }
    }
    ctx->pc = 0x1A2F48u;
label_1a2f48:
    // 0x1a2f48: 0xc05e84c  jal         func_17A130
label_1a2f4c:
    if (ctx->pc == 0x1A2F4Cu) {
        ctx->pc = 0x1A2F50u;
        goto label_1a2f50;
    }
    ctx->pc = 0x1A2F48u;
    SET_GPR_U32(ctx, 31, 0x1A2F50u);
    ctx->pc = 0x17A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A130u, 0x1A2F48u, 0x1A2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F50u;
label_1a2f50:
    // 0x1a2f50: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a2f54:
    if (ctx->pc == 0x1A2F54u) {
        ctx->pc = 0x1A2F58u;
        goto label_1a2f58;
    }
    ctx->pc = 0x1A2F50u;
    {
        const bool branch_taken_0x1a2f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f50) {
            ctx->pc = 0x1A2F64u;
            goto label_1a2f64;
        }
    }
    ctx->pc = 0x1A2F58u;
label_1a2f58:
    // 0x1a2f58: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_1a2f5c:
    // 0x1a2f5c: 0xc05e8e8  jal         func_17A3A0
label_1a2f60:
    if (ctx->pc == 0x1A2F60u) {
        ctx->pc = 0x1A2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F5Cu;
        // 0x1a2f60: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F64u;
        goto label_1a2f64;
    }
    ctx->pc = 0x1A2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F64u);
    ctx->pc = 0x1A2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F5Cu;
    // 0x1a2f60: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3A0u, 0x1A2F5Cu, 0x1A2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F64u;
label_1a2f64:
    // 0x1a2f64: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1a2f68:
    if (ctx->pc == 0x1A2F68u) {
        ctx->pc = 0x1A2F6Cu;
        goto label_1a2f6c;
    }
    ctx->pc = 0x1A2F64u;
    {
        const bool branch_taken_0x1a2f64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f64) {
            ctx->pc = 0x1A2F80u;
            goto label_1a2f80;
        }
    }
    ctx->pc = 0x1A2F6Cu;
label_1a2f6c:
    // 0x1a2f6c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a2f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a2f70:
    // 0x1a2f70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f74:
    // 0x1a2f74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a2f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a2f78:
    // 0x1a2f78: 0x320f809  jalr        $t9
label_1a2f7c:
    if (ctx->pc == 0x1A2F7Cu) {
        ctx->pc = 0x1A2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F78u;
        // 0x1a2f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F80u;
        goto label_1a2f80;
    }
    ctx->pc = 0x1A2F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2F80u);
        ctx->pc = 0x1A2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F78u;
        // 0x1a2f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F78u, 0x1A2F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2F80u;
label_1a2f80:
    // 0x1a2f80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a2f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a2f84:
    // 0x1a2f84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a2f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a2f88:
    // 0x1a2f88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a2f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2f8c:
    // 0x1a2f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2f90:
    // 0x1a2f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2f94:
    // 0x1a2f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2f98:
    // 0x1a2f98: 0x3e00008  jr          $ra
label_1a2f9c:
    if (ctx->pc == 0x1A2F9Cu) {
        ctx->pc = 0x1A2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F98u;
        // 0x1a2f9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FA0u;
        goto label_fallthrough_0x1a2f98;
    }
    ctx->pc = 0x1A2F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F98u;
        // 0x1a2f9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2f98:
    ctx->pc = 0x1A2FA0u;
}
