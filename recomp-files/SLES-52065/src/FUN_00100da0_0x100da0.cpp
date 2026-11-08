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

// Function: FUN_00100da0
// Address: 0x100da0 - 0x1010ec
void FUN_00100da0_0x100da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100da0_0x100da0");
#endif

    switch (ctx->pc) {
        case 0x100dc0u: goto label_100dc0;
        case 0x100decu: goto label_100dec;
        case 0x100e1cu: goto label_100e1c;
        case 0x100e68u: goto label_100e68;
        case 0x100f10u: goto label_100f10;
        case 0x100f38u: goto label_100f38;
        case 0x100f40u: goto label_100f40;
        case 0x100f60u: goto label_100f60;
        case 0x100fa8u: goto label_100fa8;
        case 0x100fe4u: goto label_100fe4;
        case 0x101078u: goto label_101078;
        case 0x101080u: goto label_101080;
        case 0x101088u: goto label_101088;
        case 0x101090u: goto label_101090;
        case 0x101098u: goto label_101098;
        case 0x1010a0u: goto label_1010a0;
        case 0x1010a8u: goto label_1010a8;
        case 0x1010b0u: goto label_1010b0;
        case 0x1010b8u: goto label_1010b8;
        case 0x1010c0u: goto label_1010c0;
        case 0x1010c8u: goto label_1010c8;
        case 0x1010d0u: goto label_1010d0;
        default: break;
    }

    ctx->pc = 0x100da0u;

    // 0x100da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x100da4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100da8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x100dac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100db4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100db8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x100db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100dc0:
    // 0x100dc0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x100dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x100dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x100dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100dc8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x100dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x100dcc: 0x90632784  lbu         $v1, 0x2784($v1)
    ctx->pc = 0x100dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10116)));
    // 0x100dd0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x100DD0u;
    {
        const bool branch_taken_0x100dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100dd0) {
            ctx->pc = 0x100E2Cu;
            goto label_100e2c;
        }
    }
    ctx->pc = 0x100DD8u;
    // 0x100dd8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x100dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x100ddc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x100de0: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x100de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
    // 0x100de4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x100DE4u;
    SET_GPR_U32(ctx, 31, 0x100DECu);
    ctx->pc = 0x100DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DE4u;
    // 0x100de8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x100DE4u, 0x100DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DECu;
label_100dec:
    // 0x100dec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x100decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100df4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x100df8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x100df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100dfc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x100dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x100e00: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x100e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x100e04: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x100e08: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x100e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100e0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x100e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100e10: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x100e10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100e14: 0xc0426bc  jal         func_109AF0
    ctx->pc = 0x100E14u;
    SET_GPR_U32(ctx, 31, 0x100E1Cu);
    ctx->pc = 0x100E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E14u;
    // 0x100e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109AF0u, 0x100E14u, 0x100E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E1Cu;
label_100e1c:
    // 0x100e1c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x100e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x100e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100e24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x100e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x100e28: 0xa0432784  sb          $v1, 0x2784($v0)
    ctx->pc = 0x100e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10116), (uint8_t)GPR_U32(ctx, 3));
label_100e2c:
    // 0x100e2c: 0x0  nop
    ctx->pc = 0x100e2cu;
    // NOP
    // 0x100e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100e34: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x100e38: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x100E38u;
    {
        const bool branch_taken_0x100e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100e38) {
            ctx->pc = 0x100DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100dc0;
        }
    }
    ctx->pc = 0x100E40u;
    // 0x100e40: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x100e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e44: 0x8c512c20  lw          $s1, 0x2C20($v0)
    ctx->pc = 0x100e44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11296)));
    // 0x100e48: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x100e48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x100e4c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x100E4Cu;
    {
        const bool branch_taken_0x100e4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E4Cu;
        // 0x100e50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e4c) {
            ctx->pc = 0x100F30u;
            goto label_100f30;
        }
    }
    ctx->pc = 0x100E54u;
    // 0x100e54: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x100e54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x100e58: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x100E58u;
    {
        const bool branch_taken_0x100e58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x100E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E58u;
        // 0x100e5c: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e58) {
            ctx->pc = 0x100EF8u;
            goto label_100ef8;
        }
    }
    ctx->pc = 0x100E60u;
    // 0x100e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100e68:
    // 0x100e68: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e6c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x100e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x100e70: 0x64302a  slt         $a2, $v1, $a0
    ctx->pc = 0x100e70u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x100e74: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100e78: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100e7c: 0xa0e20042  sb          $v0, 0x42($a3)
    ctx->pc = 0x100e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x100e80: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e84: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100e88: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100e8c: 0xa0e20092  sb          $v0, 0x92($a3)
    ctx->pc = 0x100e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 146), (uint8_t)GPR_U32(ctx, 2));
    // 0x100e90: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e94: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100e98: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100e9c: 0xa0e200e2  sb          $v0, 0xE2($a3)
    ctx->pc = 0x100e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 226), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ea0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ea4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ea8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100eac: 0xa0e20132  sb          $v0, 0x132($a3)
    ctx->pc = 0x100eacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 306), (uint8_t)GPR_U32(ctx, 2));
    // 0x100eb0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100eb4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100eb8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100ebc: 0xa0e20182  sb          $v0, 0x182($a3)
    ctx->pc = 0x100ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 386), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ec0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ec4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ec8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100ecc: 0xa0e201d2  sb          $v0, 0x1D2($a3)
    ctx->pc = 0x100eccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 466), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ed0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ed4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ed8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100edc: 0xa0e20222  sb          $v0, 0x222($a3)
    ctx->pc = 0x100edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 546), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ee0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ee4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ee8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100eec: 0xa0e20272  sb          $v0, 0x272($a3)
    ctx->pc = 0x100eecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 626), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ef0: 0x14c0ffdd  bnez        $a2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x100EF0u;
    {
        const bool branch_taken_0x100ef0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x100EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF0u;
        // 0x100ef4: 0x24a50280  addiu       $a1, $a1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ef0) {
            ctx->pc = 0x100E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100e68;
        }
    }
    ctx->pc = 0x100EF8u;
label_100ef8:
    // 0x100ef8: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x100ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x100efc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x100EFCu;
    {
        const bool branch_taken_0x100efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EFCu;
        // 0x100f00: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100efc) {
            ctx->pc = 0x100F30u;
            goto label_100f30;
        }
    }
    ctx->pc = 0x100F04u;
    // 0x100f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100f08: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x100f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x100f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100f10:
    // 0x100f10: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x100f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x100f18: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x100f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x100f1c: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x100f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x100f20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x100f24: 0xa0850042  sb          $a1, 0x42($a0)
    ctx->pc = 0x100f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 5));
    // 0x100f28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100F28u;
    {
        const bool branch_taken_0x100f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F28u;
        // 0x100f2c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f28) {
            ctx->pc = 0x100F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100f10;
        }
    }
    ctx->pc = 0x100F30u;
label_100f30:
    // 0x100f30: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x100F30u;
    SET_GPR_U32(ctx, 31, 0x100F38u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x100F30u, 0x100F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F38u;
label_100f38:
    // 0x100f38: 0xc04a054  jal         func_128150
    ctx->pc = 0x100F38u;
    SET_GPR_U32(ctx, 31, 0x100F40u);
    ctx->pc = 0x100F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F38u;
    // 0x100f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128150u, 0x100F38u, 0x100F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F40u;
label_100f40:
    // 0x100f40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x100f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f44: 0x6400044  bltz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x100F44u;
    {
        const bool branch_taken_0x100f44 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x100f44) {
            ctx->pc = 0x101058u;
            goto label_101058;
        }
    }
    ctx->pc = 0x100F4Cu;
    // 0x100f4c: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x100f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x100f50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x100f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x100f54: 0x24a5dfb8  addiu       $a1, $a1, -0x2048
    ctx->pc = 0x100f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959032));
    // 0x100f58: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x100F58u;
    SET_GPR_U32(ctx, 31, 0x100F60u);
    ctx->pc = 0x100F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F58u;
    // 0x100f5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x100F58u, 0x100F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F60u;
label_100f60:
    // 0x100f60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100F60u;
    {
        const bool branch_taken_0x100f60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x100F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F60u;
        // 0x100f64: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f60) {
            ctx->pc = 0x100F70u;
            goto label_100f70;
        }
    }
    ctx->pc = 0x100F68u;
    // 0x100f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100F68u;
    {
        const bool branch_taken_0x100f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F68u;
        // 0x100f6c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f68) {
            ctx->pc = 0x100F88u;
            goto label_100f88;
        }
    }
    ctx->pc = 0x100F70u;
label_100f70:
    // 0x100f70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x100f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100f74: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x100f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100f78: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x100f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x100f7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100f80: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x100f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x100f84: 0x0  nop
    ctx->pc = 0x100f84u;
    // NOP
label_100f88:
    // 0x100f88: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x100F88u;
    {
        const bool branch_taken_0x100f88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100f88) {
            ctx->pc = 0x101058u;
            goto label_101058;
        }
    }
    ctx->pc = 0x100F90u;
    // 0x100f90: 0x18800031  blez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x100F90u;
    {
        const bool branch_taken_0x100f90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x100F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F90u;
        // 0x100f94: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f90) {
            ctx->pc = 0x101058u;
            goto label_101058;
        }
    }
    ctx->pc = 0x100F98u;
    // 0x100f98: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x100F98u;
    {
        const bool branch_taken_0x100f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F98u;
        // 0x100f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f98) {
            ctx->pc = 0x101030u;
            goto label_101030;
        }
    }
    ctx->pc = 0x100FA0u;
    // 0x100fa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100fa4: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x100fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_100fa8:
    // 0x100fa8: 0x8f828388  lw          $v0, -0x7C78($gp)
    ctx->pc = 0x100fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x100fac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x100facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100fb0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x100fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x100fb4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x100fb8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x100fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x100fbc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x100fc0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x100fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100fc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x100fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100fc8: 0x80a20008  lb          $v0, 0x8($a1)
    ctx->pc = 0x100fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x100fcc: 0x14520014  bne         $v0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x100FCCu;
    {
        const bool branch_taken_0x100fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x100FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FCCu;
        // 0x100fd0: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fcc) {
            ctx->pc = 0x101020u;
            goto label_101020;
        }
    }
    ctx->pc = 0x100FD4u;
    // 0x100fd4: 0x24a80009  addiu       $t0, $a1, 0x9
    ctx->pc = 0x100fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x100fd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x100fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100fdc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x100FDCu;
    {
        const bool branch_taken_0x100fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FDCu;
        // 0x100fe0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fdc) {
            ctx->pc = 0x101020u;
            goto label_101020;
        }
    }
    ctx->pc = 0x100FE4u;
label_100fe4:
    // 0x100fe4: 0x0  nop
    ctx->pc = 0x100fe4u;
    // NOP
    // 0x100fe8: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x100fe8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x100fec: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x100FECu;
    {
        const bool branch_taken_0x100fec = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x100fec) {
            ctx->pc = 0x101020u;
            goto label_101020;
        }
    }
    ctx->pc = 0x100FF4u;
    // 0x100ff4: 0x8f858218  lw          $a1, -0x7DE8($gp)
    ctx->pc = 0x100ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ff8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x100ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x100ffc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x100ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x101000: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x101000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101004: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x101004u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x101008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10100c: 0x131102a  slt         $v0, $t1, $s1
    ctx->pc = 0x10100cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x101010: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x101010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x101014: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x101014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x101018: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x101018u;
    {
        const bool branch_taken_0x101018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101018u;
        // 0x10101c: 0xa0a00042  sb          $zero, 0x42($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 66), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101018) {
            ctx->pc = 0x100FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100fe4;
        }
    }
    ctx->pc = 0x101020u;
label_101020:
    // 0x101020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x101020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x101024: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x101024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x101028: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x101028u;
    {
        const bool branch_taken_0x101028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101028) {
            ctx->pc = 0x100FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100fa8;
        }
    }
    ctx->pc = 0x101030u;
label_101030:
    // 0x101030: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x101030u;
    {
        const bool branch_taken_0x101030 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x101030) {
            ctx->pc = 0x101058u;
            goto label_101058;
        }
    }
    ctx->pc = 0x101038u;
    // 0x101038: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10103c: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x10103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x101040: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x101044: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x101044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101048: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10104c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101054: 0xa0400042  sb          $zero, 0x42($v0)
    ctx->pc = 0x101054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 0));
label_101058:
    // 0x101058: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x101058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10105c: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x10105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x101060: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x101064: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x101064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x101068: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x101068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10106c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10106cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x101070: 0xc057210  jal         func_15C840
    ctx->pc = 0x101070u;
    SET_GPR_U32(ctx, 31, 0x101078u);
    ctx->pc = 0x101074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101070u;
    // 0x101074: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C840u, 0x101070u, 0x101078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101078u;
label_101078:
    // 0x101078: 0xc040320  jal         func_100C80
    ctx->pc = 0x101078u;
    SET_GPR_U32(ctx, 31, 0x101080u);
    ctx->pc = 0x10107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101078u;
    // 0x10107c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C80u, 0x101078u, 0x101080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101080u;
label_101080:
    // 0x101080: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x101080u;
    SET_GPR_U32(ctx, 31, 0x101088u);
    ctx->pc = 0x101084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101080u;
    // 0x101084: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x101080u, 0x101088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101088u;
label_101088:
    // 0x101088: 0xc057ecc  jal         func_15FB30
    ctx->pc = 0x101088u;
    SET_GPR_U32(ctx, 31, 0x101090u);
    ctx->pc = 0x10108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101088u;
    // 0x10108c: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FB30u, 0x101088u, 0x101090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101090u;
label_101090:
    // 0x101090: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x101090u;
    SET_GPR_U32(ctx, 31, 0x101098u);
    ctx->pc = 0x101094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101090u;
    // 0x101094: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x101090u, 0x101098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101098u;
label_101098:
    // 0x101098: 0xc057ecc  jal         func_15FB30
    ctx->pc = 0x101098u;
    SET_GPR_U32(ctx, 31, 0x1010A0u);
    ctx->pc = 0x10109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101098u;
    // 0x10109c: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FB30u, 0x101098u, 0x1010A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010A0u;
label_1010a0:
    // 0x1010a0: 0xc057608  jal         func_15D820
    ctx->pc = 0x1010A0u;
    SET_GPR_U32(ctx, 31, 0x1010A8u);
    ctx->pc = 0x1010A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010A0u;
    // 0x1010a4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D820u, 0x1010A0u, 0x1010A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010A8u;
label_1010a8:
    // 0x1010a8: 0xc0573d4  jal         func_15CF50
    ctx->pc = 0x1010A8u;
    SET_GPR_U32(ctx, 31, 0x1010B0u);
    ctx->pc = 0x1010ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010A8u;
    // 0x1010ac: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF50u, 0x1010A8u, 0x1010B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010B0u;
label_1010b0:
    // 0x1010b0: 0xc0579f4  jal         func_15E7D0
    ctx->pc = 0x1010B0u;
    SET_GPR_U32(ctx, 31, 0x1010B8u);
    ctx->pc = 0x1010B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010B0u;
    // 0x1010b4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E7D0u, 0x1010B0u, 0x1010B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010B8u;
label_1010b8:
    // 0x1010b8: 0xc057920  jal         func_15E480
    ctx->pc = 0x1010B8u;
    SET_GPR_U32(ctx, 31, 0x1010C0u);
    ctx->pc = 0x1010BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010B8u;
    // 0x1010bc: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E480u, 0x1010B8u, 0x1010C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010C0u;
label_1010c0:
    // 0x1010c0: 0xc04647c  jal         func_1191F0
    ctx->pc = 0x1010C0u;
    SET_GPR_U32(ctx, 31, 0x1010C8u);
    ctx->pc = 0x1191F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191F0u, 0x1010C0u, 0x1010C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010C8u;
label_1010c8:
    // 0x1010c8: 0xc0421e0  jal         func_108780
    ctx->pc = 0x1010C8u;
    SET_GPR_U32(ctx, 31, 0x1010D0u);
    ctx->pc = 0x1010CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010C8u;
    // 0x1010cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x1010C8u, 0x1010D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010D0u;
label_1010d0:
    // 0x1010d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1010d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1010d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1010d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1010d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1010d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1010dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1010dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1010e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1010e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1010e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1010E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1010E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010E4u;
        // 0x1010e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1010E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1010ECu;
}
