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

// Function: FUN_00111e40
// Address: 0x111e40 - 0x112358
void FUN_00111e40_0x111e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111e40_0x111e40");
#endif

    switch (ctx->pc) {
        case 0x111ea8u: goto label_111ea8;
        case 0x111ee8u: goto label_111ee8;
        case 0x111f10u: goto label_111f10;
        case 0x111f18u: goto label_111f18;
        case 0x111f30u: goto label_111f30;
        case 0x111fa8u: goto label_111fa8;
        case 0x111fc0u: goto label_111fc0;
        case 0x112014u: goto label_112014;
        case 0x11201cu: goto label_11201c;
        case 0x112048u: goto label_112048;
        case 0x112070u: goto label_112070;
        case 0x1120acu: goto label_1120ac;
        case 0x1120f0u: goto label_1120f0;
        case 0x11210cu: goto label_11210c;
        case 0x112134u: goto label_112134;
        case 0x11216cu: goto label_11216c;
        case 0x112194u: goto label_112194;
        case 0x1121d4u: goto label_1121d4;
        case 0x112218u: goto label_112218;
        case 0x112234u: goto label_112234;
        case 0x11225cu: goto label_11225c;
        case 0x112284u: goto label_112284;
        case 0x1122f4u: goto label_1122f4;
        case 0x11231cu: goto label_11231c;
        default: break;
    }

    ctx->pc = 0x111e40u;

    // 0x111e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x111e44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x111e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x111e48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x111e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x111e4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x111e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x111e50: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x111e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x111e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x111e60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x111e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e64: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x111e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x111e68: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x111e68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x111e6c: 0x10200131  beqz        $at, . + 4 + (0x131 << 2)
    ctx->pc = 0x111E6Cu;
    {
        const bool branch_taken_0x111e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E6Cu;
        // 0x111e70: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e6c) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x111E74u;
    // 0x111e74: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x111e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x111e78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111e7c: 0x2463e450  addiu       $v1, $v1, -0x1BB0
    ctx->pc = 0x111e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960208));
    // 0x111e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111e84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x111e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111e88: 0x400008  jr          $v0
    ctx->pc = 0x111E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111E90u: goto label_111e90;
            case 0x11203Cu: goto label_11203c;
            case 0x112090u: goto label_112090;
            case 0x112160u: goto label_112160;
            case 0x1121B8u: goto label_1121b8;
            case 0x1122E8u: goto label_1122e8;
            case 0x112334u: goto label_112334;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111E88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x111E90u;
label_111e90:
    // 0x111e90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x111e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea0: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x111EA0u;
    SET_GPR_U32(ctx, 31, 0x111EA8u);
    ctx->pc = 0x111EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EA0u;
    // 0x111ea4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x111EA0u, 0x111EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EA8u;
label_111ea8:
    // 0x111ea8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x111ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111eac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x111eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x111eb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x111eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111eb4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x111eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x111eb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111ec0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x111ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x111ec4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111ec8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x111ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x111ecc: 0x0  nop
    ctx->pc = 0x111eccu;
    // NOP
    // 0x111ed0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x111ed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111ed4: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x111ED4u;
    {
        const bool branch_taken_0x111ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ED4u;
        // 0x111ed8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ed4) {
            ctx->pc = 0x111FA8u;
            goto label_111fa8;
        }
    }
    ctx->pc = 0x111EDCu;
    // 0x111edc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x111edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ee0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111EE0u;
    {
        const bool branch_taken_0x111ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EE0u;
        // 0x111ee4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ee0) {
            ctx->pc = 0x111F18u;
            goto label_111f18;
        }
    }
    ctx->pc = 0x111EE8u;
label_111ee8:
    // 0x111ee8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x111ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111eec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111ef0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111ef4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x111ef8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111efc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111f04: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111f08: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x111F08u;
    SET_GPR_U32(ctx, 31, 0x111F10u);
    ctx->pc = 0x111F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F08u;
    // 0x111f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x111F08u, 0x111F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F10u;
label_111f10:
    // 0x111f10: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x111f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x111f14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_111f18:
    // 0x111f18: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x111f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x111f1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x111f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111f20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x111F20u;
    {
        const bool branch_taken_0x111f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F20u;
        // 0x111f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f20) {
            ctx->pc = 0x111EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111ee8;
        }
    }
    ctx->pc = 0x111F28u;
    // 0x111f28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x111F28u;
    {
        const bool branch_taken_0x111f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F28u;
        // 0x111f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f28) {
            ctx->pc = 0x111F88u;
            goto label_111f88;
        }
    }
    ctx->pc = 0x111F30u;
label_111f30:
    // 0x111f30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x111f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111f34: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111f38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111f3c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111f40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111f48: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x111f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111f4c: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x111f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111f50: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x111f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x111f54: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111f58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111F58u;
    {
        const bool branch_taken_0x111f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f58) {
            ctx->pc = 0x111F7Cu;
            goto label_111f7c;
        }
    }
    ctx->pc = 0x111F60u;
    // 0x111f60: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111f64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x111f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111f68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111f6c: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x111f70: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111f74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x111f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x111f78: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
label_111f7c:
    // 0x111f7c: 0x0  nop
    ctx->pc = 0x111f7cu;
    // NOP
    // 0x111f80: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x111f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x111f84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x111f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_111f88:
    // 0x111f88: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x111f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x111f8c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x111f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111f90: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x111F90u;
    {
        const bool branch_taken_0x111f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f90) {
            ctx->pc = 0x111F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111f30;
        }
    }
    ctx->pc = 0x111F98u;
    // 0x111f98: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x111f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x111f9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111fa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111fa4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_111fa8:
    // 0x111fa8: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x111fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fb0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x111fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x111fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x111FB8u;
    {
        const bool branch_taken_0x111fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FB8u;
        // 0x111fbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fb8) {
            ctx->pc = 0x111FF8u;
            goto label_111ff8;
        }
    }
    ctx->pc = 0x111FC0u;
label_111fc0:
    // 0x111fc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x111fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111fc4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x111fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x111fc8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111fd0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111fd4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111fd8: 0x90420224  lbu         $v0, 0x224($v0)
    ctx->pc = 0x111fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x111fdc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x111fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x111fe0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111FE0u;
    {
        const bool branch_taken_0x111fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x111FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FE0u;
        // 0x111fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fe0) {
            ctx->pc = 0x111FF0u;
            goto label_111ff0;
        }
    }
    ctx->pc = 0x111FE8u;
    // 0x111fe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111FE8u;
    {
        const bool branch_taken_0x111fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111fe8) {
            ctx->pc = 0x112004u;
            goto label_112004;
        }
    }
    ctx->pc = 0x111FF0u;
label_111ff0:
    // 0x111ff0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x111ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x111ff4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_111ff8:
    // 0x111ff8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x111ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111ffc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111FFCu;
    {
        const bool branch_taken_0x111ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FFCu;
        // 0x112000: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ffc) {
            ctx->pc = 0x111FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111fc0;
        }
    }
    ctx->pc = 0x112004u;
label_112004:
    // 0x112004: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x112004u;
    {
        const bool branch_taken_0x112004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112004u;
        // 0x112008: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112004) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x11200Cu;
    // 0x11200c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11200Cu;
    {
        const bool branch_taken_0x11200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11200c) {
            ctx->pc = 0x112020u;
            goto label_112020;
        }
    }
    ctx->pc = 0x112014u;
label_112014:
    // 0x112014: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x112014u;
    SET_GPR_U32(ctx, 31, 0x11201Cu);
    ctx->pc = 0x112018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112014u;
    // 0x112018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x112014u, 0x11201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11201Cu;
label_11201c:
    // 0x11201c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11201cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_112020:
    // 0x112020: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112024: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x112024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112028: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x112028u;
    {
        const bool branch_taken_0x112028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112028u;
        // 0x11202c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112028) {
            ctx->pc = 0x112014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112014;
        }
    }
    ctx->pc = 0x112030u;
    // 0x112030: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x112030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x112034: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x112034u;
    {
        const bool branch_taken_0x112034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112034u;
        // 0x112038: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112034) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x11203Cu;
label_11203c:
    // 0x11203c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11203cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112040: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112040u;
    {
        const bool branch_taken_0x112040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112040u;
        // 0x112044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112040) {
            ctx->pc = 0x112070u;
            goto label_112070;
        }
    }
    ctx->pc = 0x112048u;
label_112048:
    // 0x112048: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11204c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x112050: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112054: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112058: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11205c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x112060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112068: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11206c: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x11206cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_112070:
    // 0x112070: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112074: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112078: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x112078u;
    {
        const bool branch_taken_0x112078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112078) {
            ctx->pc = 0x112048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112048;
        }
    }
    ctx->pc = 0x112080u;
    // 0x112080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112088: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x112088u;
    {
        const bool branch_taken_0x112088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112088u;
        // 0x11208c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112088) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x112090u;
label_112090:
    // 0x112090: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x112090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112098: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11209c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11209cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1120a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1120A4u;
    {
        const bool branch_taken_0x1120a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120A4u;
        // 0x1120a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120a4) {
            ctx->pc = 0x1120F0u;
            goto label_1120f0;
        }
    }
    ctx->pc = 0x1120ACu;
label_1120ac:
    // 0x1120ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1120acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1120b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1120b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1120b4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1120b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1120b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1120b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1120bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1120bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1120c0: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x1120c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1120c4: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x1120c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x1120c8: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1120c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1120cc: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1120ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1120d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1120D0u;
    {
        const bool branch_taken_0x1120d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1120d0) {
            ctx->pc = 0x1120E8u;
            goto label_1120e8;
        }
    }
    ctx->pc = 0x1120D8u;
    // 0x1120d8: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x1120d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x1120dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1120DCu;
    {
        const bool branch_taken_0x1120dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120DCu;
        // 0x1120e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120dc) {
            ctx->pc = 0x1120E8u;
            goto label_1120e8;
        }
    }
    ctx->pc = 0x1120E4u;
    // 0x1120e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1120e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1120e8:
    // 0x1120e8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1120e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1120ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1120ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1120f0:
    // 0x1120f0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1120f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1120f4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1120F4u;
    {
        const bool branch_taken_0x1120f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1120f4) {
            ctx->pc = 0x1120ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1120ac;
        }
    }
    ctx->pc = 0x1120FCu;
    // 0x1120fc: 0x14e6008d  bne         $a3, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x1120FCu;
    {
        const bool branch_taken_0x1120fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x112100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120FCu;
        // 0x112100: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120fc) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x112104u;
    // 0x112104: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x112104u;
    {
        const bool branch_taken_0x112104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112104u;
        // 0x112108: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112104) {
            ctx->pc = 0x11213Cu;
            goto label_11213c;
        }
    }
    ctx->pc = 0x11210Cu;
label_11210c:
    // 0x11210c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112110: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x112110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x112114: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112118: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11211c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11211cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112128: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11212c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11212Cu;
    SET_GPR_U32(ctx, 31, 0x112134u);
    ctx->pc = 0x112130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11212Cu;
    // 0x112130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11212Cu, 0x112134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112134u;
label_112134:
    // 0x112134: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x112138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11213c:
    // 0x11213c: 0x0  nop
    ctx->pc = 0x11213cu;
    // NOP
    // 0x112140: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112144: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x112144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112148: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112148u;
    {
        const bool branch_taken_0x112148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112148) {
            ctx->pc = 0x11210Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11210c;
        }
    }
    ctx->pc = 0x112150u;
    // 0x112150: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112158: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x112158u;
    {
        const bool branch_taken_0x112158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112158u;
        // 0x11215c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112158) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x112160u;
label_112160:
    // 0x112160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112164: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112164u;
    {
        const bool branch_taken_0x112164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112164u;
        // 0x112168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112164) {
            ctx->pc = 0x112194u;
            goto label_112194;
        }
    }
    ctx->pc = 0x11216Cu;
label_11216c:
    // 0x11216c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112170: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x112174: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112178: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11217c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11217cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112180: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x112180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x112184: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11218c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x11218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112190: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x112190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_112194:
    // 0x112194: 0x0  nop
    ctx->pc = 0x112194u;
    // NOP
    // 0x112198: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11219c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11219cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1121a0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1121A0u;
    {
        const bool branch_taken_0x1121a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1121a0) {
            ctx->pc = 0x11216Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11216c;
        }
    }
    ctx->pc = 0x1121A8u;
    // 0x1121a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1121a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1121ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1121acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1121b0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1121B0u;
    {
        const bool branch_taken_0x1121b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121B0u;
        // 0x1121b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121b0) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x1121B8u;
label_1121b8:
    // 0x1121b8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1121b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1121bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1121bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121c0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1121c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1121c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1121c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1121c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1121CCu;
    {
        const bool branch_taken_0x1121cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121CCu;
        // 0x1121d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121cc) {
            ctx->pc = 0x112218u;
            goto label_112218;
        }
    }
    ctx->pc = 0x1121D4u;
label_1121d4:
    // 0x1121d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1121d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1121d8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1121d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1121dc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1121dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1121e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1121e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1121e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1121e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1121e8: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x1121e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1121ec: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x1121ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x1121f0: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1121f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1121f4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1121f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1121f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1121F8u;
    {
        const bool branch_taken_0x1121f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1121f8) {
            ctx->pc = 0x112210u;
            goto label_112210;
        }
    }
    ctx->pc = 0x112200u;
    // 0x112200: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x112200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x112204: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x112204u;
    {
        const bool branch_taken_0x112204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112204u;
        // 0x112208: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112204) {
            ctx->pc = 0x112210u;
            goto label_112210;
        }
    }
    ctx->pc = 0x11220Cu;
    // 0x11220c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11220cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_112210:
    // 0x112210: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x112214: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_112218:
    // 0x112218: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x112218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11221c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11221Cu;
    {
        const bool branch_taken_0x11221c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11221c) {
            ctx->pc = 0x1121D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1121d4;
        }
    }
    ctx->pc = 0x112224u;
    // 0x112224: 0x14e60043  bne         $a3, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x112224u;
    {
        const bool branch_taken_0x112224 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x112228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112224u;
        // 0x112228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112224) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x11222Cu;
    // 0x11222c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11222Cu;
    {
        const bool branch_taken_0x11222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11222Cu;
        // 0x112230: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11222c) {
            ctx->pc = 0x112264u;
            goto label_112264;
        }
    }
    ctx->pc = 0x112234u;
label_112234:
    // 0x112234: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11223c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112240: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x112244: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112248: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11224c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112250: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112254: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x112254u;
    SET_GPR_U32(ctx, 31, 0x11225Cu);
    ctx->pc = 0x112258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112254u;
    // 0x112258: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x112254u, 0x11225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11225Cu;
label_11225c:
    // 0x11225c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x11225cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112260: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x112260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_112264:
    // 0x112264: 0x0  nop
    ctx->pc = 0x112264u;
    // NOP
    // 0x112268: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11226c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x11226cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112270: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112270u;
    {
        const bool branch_taken_0x112270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112270u;
        // 0x112274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112270) {
            ctx->pc = 0x112234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112234;
        }
    }
    ctx->pc = 0x112278u;
    // 0x112278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11227c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11227Cu;
    {
        const bool branch_taken_0x11227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11227Cu;
        // 0x112280: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11227c) {
            ctx->pc = 0x1122C8u;
            goto label_1122c8;
        }
    }
    ctx->pc = 0x112284u;
label_112284:
    // 0x112284: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x112284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112288: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11228c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112290: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112294: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112298: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11229c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1122a0: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x1122a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1122a4: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1122a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1122a8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1122a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1122ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122ACu;
    {
        const bool branch_taken_0x1122ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1122ac) {
            ctx->pc = 0x1122C0u;
            goto label_1122c0;
        }
    }
    ctx->pc = 0x1122B4u;
    // 0x1122b4: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x1122b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1122b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1122b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1122bc: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x1122bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
label_1122c0:
    // 0x1122c0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1122c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1122c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1122c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1122c8:
    // 0x1122c8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1122c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1122cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1122ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1122d0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1122D0u;
    {
        const bool branch_taken_0x1122d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1122d0) {
            ctx->pc = 0x112284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112284;
        }
    }
    ctx->pc = 0x1122D8u;
    // 0x1122d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1122dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1122e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1122E0u;
    {
        const bool branch_taken_0x1122e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122E0u;
        // 0x1122e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122e0) {
            ctx->pc = 0x112334u;
            goto label_112334;
        }
    }
    ctx->pc = 0x1122E8u;
label_1122e8:
    // 0x1122e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1122e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1122ECu;
    {
        const bool branch_taken_0x1122ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122ECu;
        // 0x1122f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122ec) {
            ctx->pc = 0x11231Cu;
            goto label_11231c;
        }
    }
    ctx->pc = 0x1122F4u;
label_1122f4:
    // 0x1122f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1122f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1122f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1122f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1122fc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1122fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112300: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112304: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112304u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112308: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x112308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11230c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11230cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112314: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112318: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x112318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_11231c:
    // 0x11231c: 0x0  nop
    ctx->pc = 0x11231cu;
    // NOP
    // 0x112320: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112324: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112328: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x112328u;
    {
        const bool branch_taken_0x112328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112328) {
            ctx->pc = 0x1122F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1122f4;
        }
    }
    ctx->pc = 0x112330u;
    // 0x112330: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x112330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_112334:
    // 0x112334: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x112334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11233c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11233cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x112340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x112344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x112348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11234c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11234cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112350: 0x3e00008  jr          $ra
    ctx->pc = 0x112350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112350u;
        // 0x112354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112358u;
}
