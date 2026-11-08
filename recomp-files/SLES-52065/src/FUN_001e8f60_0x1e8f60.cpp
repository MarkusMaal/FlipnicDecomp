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

// Function: FUN_001e8f60
// Address: 0x1e8f60 - 0x1e9084
void FUN_001e8f60_0x1e8f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8f60_0x1e8f60");
#endif

    switch (ctx->pc) {
        case 0x1e8f60u: goto label_1e8f60;
        case 0x1e8f64u: goto label_1e8f64;
        case 0x1e8f68u: goto label_1e8f68;
        case 0x1e8f6cu: goto label_1e8f6c;
        case 0x1e8f70u: goto label_1e8f70;
        case 0x1e8f74u: goto label_1e8f74;
        case 0x1e8f78u: goto label_1e8f78;
        case 0x1e8f7cu: goto label_1e8f7c;
        case 0x1e8f80u: goto label_1e8f80;
        case 0x1e8f84u: goto label_1e8f84;
        case 0x1e8f88u: goto label_1e8f88;
        case 0x1e8f8cu: goto label_1e8f8c;
        case 0x1e8f90u: goto label_1e8f90;
        case 0x1e8f94u: goto label_1e8f94;
        case 0x1e8f98u: goto label_1e8f98;
        case 0x1e8f9cu: goto label_1e8f9c;
        case 0x1e8fa0u: goto label_1e8fa0;
        case 0x1e8fa4u: goto label_1e8fa4;
        case 0x1e8fa8u: goto label_1e8fa8;
        case 0x1e8facu: goto label_1e8fac;
        case 0x1e8fb0u: goto label_1e8fb0;
        case 0x1e8fb4u: goto label_1e8fb4;
        case 0x1e8fb8u: goto label_1e8fb8;
        case 0x1e8fbcu: goto label_1e8fbc;
        case 0x1e8fc0u: goto label_1e8fc0;
        case 0x1e8fc4u: goto label_1e8fc4;
        case 0x1e8fc8u: goto label_1e8fc8;
        case 0x1e8fccu: goto label_1e8fcc;
        case 0x1e8fd0u: goto label_1e8fd0;
        case 0x1e8fd4u: goto label_1e8fd4;
        case 0x1e8fd8u: goto label_1e8fd8;
        case 0x1e8fdcu: goto label_1e8fdc;
        case 0x1e8fe0u: goto label_1e8fe0;
        case 0x1e8fe4u: goto label_1e8fe4;
        case 0x1e8fe8u: goto label_1e8fe8;
        case 0x1e8fecu: goto label_1e8fec;
        case 0x1e8ff0u: goto label_1e8ff0;
        case 0x1e8ff4u: goto label_1e8ff4;
        case 0x1e8ff8u: goto label_1e8ff8;
        case 0x1e8ffcu: goto label_1e8ffc;
        case 0x1e9000u: goto label_1e9000;
        case 0x1e9004u: goto label_1e9004;
        case 0x1e9008u: goto label_1e9008;
        case 0x1e900cu: goto label_1e900c;
        case 0x1e9010u: goto label_1e9010;
        case 0x1e9014u: goto label_1e9014;
        case 0x1e9018u: goto label_1e9018;
        case 0x1e901cu: goto label_1e901c;
        case 0x1e9020u: goto label_1e9020;
        case 0x1e9024u: goto label_1e9024;
        case 0x1e9028u: goto label_1e9028;
        case 0x1e902cu: goto label_1e902c;
        case 0x1e9030u: goto label_1e9030;
        case 0x1e9034u: goto label_1e9034;
        case 0x1e9038u: goto label_1e9038;
        case 0x1e903cu: goto label_1e903c;
        case 0x1e9040u: goto label_1e9040;
        case 0x1e9044u: goto label_1e9044;
        case 0x1e9048u: goto label_1e9048;
        case 0x1e904cu: goto label_1e904c;
        case 0x1e9050u: goto label_1e9050;
        case 0x1e9054u: goto label_1e9054;
        case 0x1e9058u: goto label_1e9058;
        case 0x1e905cu: goto label_1e905c;
        case 0x1e9060u: goto label_1e9060;
        case 0x1e9064u: goto label_1e9064;
        case 0x1e9068u: goto label_1e9068;
        case 0x1e906cu: goto label_1e906c;
        case 0x1e9070u: goto label_1e9070;
        case 0x1e9074u: goto label_1e9074;
        case 0x1e9078u: goto label_1e9078;
        case 0x1e907cu: goto label_1e907c;
        case 0x1e9080u: goto label_1e9080;
        default: break;
    }

    ctx->pc = 0x1e8f60u;

label_1e8f60:
    // 0x1e8f60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e8f64:
    // 0x1e8f64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e8f68:
    // 0x1e8f68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e8f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e8f6c:
    // 0x1e8f6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e8f70:
    // 0x1e8f70: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x1e8f70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1e8f74:
    // 0x1e8f74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e8f78:
    // 0x1e8f78: 0x27b6009c  addiu       $s6, $sp, 0x9C
    ctx->pc = 0x1e8f78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_1e8f7c:
    // 0x1e8f7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8f80:
    // 0x1e8f80: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e8f80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f84:
    // 0x1e8f84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8f88:
    // 0x1e8f88: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e8f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f8c:
    // 0x1e8f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8f90:
    // 0x1e8f90: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1e8f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f94:
    // 0x1e8f94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8f98:
    // 0x1e8f98: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x1e8f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_1e8f9c:
    // 0x1e8f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8fa0:
    // 0x1e8fa0: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x1e8fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e8fa4:
    // 0x1e8fa4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1e8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_1e8fa8:
    // 0x1e8fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8fac:
    // 0x1e8fac: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x1e8facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_1e8fb0:
    // 0x1e8fb0: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x1e8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_1e8fb4:
    // 0x1e8fb4: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x1e8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_1e8fb8:
    // 0x1e8fb8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1e8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e8fbc:
    // 0x1e8fbc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e8fc0:
    // 0x1e8fc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e8fc4:
    if (ctx->pc == 0x1E8FC4u) {
        ctx->pc = 0x1E8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC0u;
        // 0x1e8fc4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FC8u;
        goto label_1e8fc8;
    }
    ctx->pc = 0x1E8FC0u;
    {
        const bool branch_taken_0x1e8fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC0u;
        // 0x1e8fc4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fc0) {
            ctx->pc = 0x1E8FE0u;
            goto label_1e8fe0;
        }
    }
    ctx->pc = 0x1E8FC8u;
label_1e8fc8:
    // 0x1e8fc8: 0x2a0f809  jalr        $s5
label_1e8fcc:
    if (ctx->pc == 0x1E8FCCu) {
        ctx->pc = 0x1E8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC8u;
        // 0x1e8fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FD0u;
        goto label_1e8fd0;
    }
    ctx->pc = 0x1E8FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1E8FD0u);
        ctx->pc = 0x1E8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC8u;
        // 0x1e8fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8FC8u, 0x1E8FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8FD0u;
label_1e8fd0:
    // 0x1e8fd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8fd4:
    // 0x1e8fd4: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1e8fd8:
    // 0x1e8fd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e8fdc:
    // 0x1e8fdc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e8fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e8fe0:
    // 0x1e8fe0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e8fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8fe4:
    // 0x1e8fe4: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x1e8fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1e8fe8:
    // 0x1e8fe8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1e8fec:
    if (ctx->pc == 0x1E8FECu) {
        ctx->pc = 0x1E8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FE8u;
        // 0x1e8fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FF0u;
        goto label_1e8ff0;
    }
    ctx->pc = 0x1E8FE8u;
    {
        const bool branch_taken_0x1e8fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FE8u;
        // 0x1e8fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fe8) {
            ctx->pc = 0x1E8FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8fc8;
        }
    }
    ctx->pc = 0x1E8FF0u;
label_1e8ff0:
    // 0x1e8ff0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1e8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e8ff4:
    // 0x1e8ff4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8ff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e8ff8:
    // 0x1e8ff8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e8ffc:
    if (ctx->pc == 0x1E8FFCu) {
        ctx->pc = 0x1E9000u;
        goto label_1e9000;
    }
    ctx->pc = 0x1E8FF8u;
    {
        const bool branch_taken_0x1e8ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ff8) {
            ctx->pc = 0x1E9054u;
            goto label_1e9054;
        }
    }
    ctx->pc = 0x1E9000u;
label_1e9000:
    // 0x1e9000: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e9004:
    // 0x1e9004: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1e9008:
    if (ctx->pc == 0x1E9008u) {
        ctx->pc = 0x1E900Cu;
        goto label_1e900c;
    }
    ctx->pc = 0x1E9004u;
    {
        const bool branch_taken_0x1e9004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9004) {
            ctx->pc = 0x1E9054u;
            goto label_1e9054;
        }
    }
    ctx->pc = 0x1E900Cu;
label_1e900c:
    // 0x1e900c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9010:
    // 0x1e9010: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1e9014:
    // 0x1e9014: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1e9014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e9018:
    // 0x1e9018: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e901c:
    if (ctx->pc == 0x1E901Cu) {
        ctx->pc = 0x1E901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9018u;
        // 0x1e901c: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9020u;
        goto label_1e9020;
    }
    ctx->pc = 0x1E9018u;
    {
        const bool branch_taken_0x1e9018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9018u;
        // 0x1e901c: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9018) {
            ctx->pc = 0x1E9044u;
            goto label_1e9044;
        }
    }
    ctx->pc = 0x1E9020u;
label_1e9020:
    // 0x1e9020: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e9020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9024:
    // 0x1e9024: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9028:
    // 0x1e9028: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e902c:
    // 0x1e902c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1e902cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e9030:
    // 0x1e9030: 0x40f809  jalr        $v0
label_1e9034:
    if (ctx->pc == 0x1E9034u) {
        ctx->pc = 0x1E9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9030u;
        // 0x1e9034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9038u;
        goto label_1e9038;
    }
    ctx->pc = 0x1E9030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9038u);
        ctx->pc = 0x1E9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9030u;
        // 0x1e9034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9030u, 0x1E9038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9038u;
label_1e9038:
    // 0x1e9038: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e903c:
    // 0x1e903c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e9040:
    // 0x1e9040: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e9040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e9044:
    // 0x1e9044: 0x0  nop
    ctx->pc = 0x1e9044u;
    // NOP
label_1e9048:
    // 0x1e9048: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e9048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e904c:
    // 0x1e904c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1e9050:
    if (ctx->pc == 0x1E9050u) {
        ctx->pc = 0x1E9054u;
        goto label_1e9054;
    }
    ctx->pc = 0x1E904Cu;
    {
        const bool branch_taken_0x1e904c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e904c) {
            ctx->pc = 0x1E9020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9020;
        }
    }
    ctx->pc = 0x1E9054u;
label_1e9054:
    // 0x1e9054: 0x0  nop
    ctx->pc = 0x1e9054u;
    // NOP
label_1e9058:
    // 0x1e9058: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e9058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e905c:
    // 0x1e905c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e905cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e9060:
    // 0x1e9060: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e9060u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e9064:
    // 0x1e9064: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e9064u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e9068:
    // 0x1e9068: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e9068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e906c:
    // 0x1e906c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e906cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9070:
    // 0x1e9070: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9074:
    // 0x1e9074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9078:
    // 0x1e9078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e907c:
    // 0x1e907c: 0x3e00008  jr          $ra
label_1e9080:
    if (ctx->pc == 0x1E9080u) {
        ctx->pc = 0x1E9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E907Cu;
        // 0x1e9080: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9084u;
        goto label_fallthrough_0x1e907c;
    }
    ctx->pc = 0x1E907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E907Cu;
        // 0x1e9080: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e907c:
    ctx->pc = 0x1E9084u;
}
