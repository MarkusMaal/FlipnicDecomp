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

// Function: FUN_001e9090
// Address: 0x1e9090 - 0x1e91dc
void FUN_001e9090_0x1e9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9090_0x1e9090");
#endif

    switch (ctx->pc) {
        case 0x1e9090u: goto label_1e9090;
        case 0x1e9094u: goto label_1e9094;
        case 0x1e9098u: goto label_1e9098;
        case 0x1e909cu: goto label_1e909c;
        case 0x1e90a0u: goto label_1e90a0;
        case 0x1e90a4u: goto label_1e90a4;
        case 0x1e90a8u: goto label_1e90a8;
        case 0x1e90acu: goto label_1e90ac;
        case 0x1e90b0u: goto label_1e90b0;
        case 0x1e90b4u: goto label_1e90b4;
        case 0x1e90b8u: goto label_1e90b8;
        case 0x1e90bcu: goto label_1e90bc;
        case 0x1e90c0u: goto label_1e90c0;
        case 0x1e90c4u: goto label_1e90c4;
        case 0x1e90c8u: goto label_1e90c8;
        case 0x1e90ccu: goto label_1e90cc;
        case 0x1e90d0u: goto label_1e90d0;
        case 0x1e90d4u: goto label_1e90d4;
        case 0x1e90d8u: goto label_1e90d8;
        case 0x1e90dcu: goto label_1e90dc;
        case 0x1e90e0u: goto label_1e90e0;
        case 0x1e90e4u: goto label_1e90e4;
        case 0x1e90e8u: goto label_1e90e8;
        case 0x1e90ecu: goto label_1e90ec;
        case 0x1e90f0u: goto label_1e90f0;
        case 0x1e90f4u: goto label_1e90f4;
        case 0x1e90f8u: goto label_1e90f8;
        case 0x1e90fcu: goto label_1e90fc;
        case 0x1e9100u: goto label_1e9100;
        case 0x1e9104u: goto label_1e9104;
        case 0x1e9108u: goto label_1e9108;
        case 0x1e910cu: goto label_1e910c;
        case 0x1e9110u: goto label_1e9110;
        case 0x1e9114u: goto label_1e9114;
        case 0x1e9118u: goto label_1e9118;
        case 0x1e911cu: goto label_1e911c;
        case 0x1e9120u: goto label_1e9120;
        case 0x1e9124u: goto label_1e9124;
        case 0x1e9128u: goto label_1e9128;
        case 0x1e912cu: goto label_1e912c;
        case 0x1e9130u: goto label_1e9130;
        case 0x1e9134u: goto label_1e9134;
        case 0x1e9138u: goto label_1e9138;
        case 0x1e913cu: goto label_1e913c;
        case 0x1e9140u: goto label_1e9140;
        case 0x1e9144u: goto label_1e9144;
        case 0x1e9148u: goto label_1e9148;
        case 0x1e914cu: goto label_1e914c;
        case 0x1e9150u: goto label_1e9150;
        case 0x1e9154u: goto label_1e9154;
        case 0x1e9158u: goto label_1e9158;
        case 0x1e915cu: goto label_1e915c;
        case 0x1e9160u: goto label_1e9160;
        case 0x1e9164u: goto label_1e9164;
        case 0x1e9168u: goto label_1e9168;
        case 0x1e916cu: goto label_1e916c;
        case 0x1e9170u: goto label_1e9170;
        case 0x1e9174u: goto label_1e9174;
        case 0x1e9178u: goto label_1e9178;
        case 0x1e917cu: goto label_1e917c;
        case 0x1e9180u: goto label_1e9180;
        case 0x1e9184u: goto label_1e9184;
        case 0x1e9188u: goto label_1e9188;
        case 0x1e918cu: goto label_1e918c;
        case 0x1e9190u: goto label_1e9190;
        case 0x1e9194u: goto label_1e9194;
        case 0x1e9198u: goto label_1e9198;
        case 0x1e919cu: goto label_1e919c;
        case 0x1e91a0u: goto label_1e91a0;
        case 0x1e91a4u: goto label_1e91a4;
        case 0x1e91a8u: goto label_1e91a8;
        case 0x1e91acu: goto label_1e91ac;
        case 0x1e91b0u: goto label_1e91b0;
        case 0x1e91b4u: goto label_1e91b4;
        case 0x1e91b8u: goto label_1e91b8;
        case 0x1e91bcu: goto label_1e91bc;
        case 0x1e91c0u: goto label_1e91c0;
        case 0x1e91c4u: goto label_1e91c4;
        case 0x1e91c8u: goto label_1e91c8;
        case 0x1e91ccu: goto label_1e91cc;
        case 0x1e91d0u: goto label_1e91d0;
        case 0x1e91d4u: goto label_1e91d4;
        case 0x1e91d8u: goto label_1e91d8;
        default: break;
    }

    ctx->pc = 0x1e9090u;

label_1e9090:
    // 0x1e9090: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e9094:
    // 0x1e9094: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e9098:
    // 0x1e9098: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e9098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e909c:
    // 0x1e909c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e90a0:
    // 0x1e90a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e90a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e90a4:
    // 0x1e90a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e90a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e90a8:
    // 0x1e90a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e90ac:
    // 0x1e90ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e90acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e90b0:
    // 0x1e90b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e90b4:
    // 0x1e90b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e90b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e90b8:
    // 0x1e90b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e90b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e90bc:
    // 0x1e90bc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1e90bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e90c0:
    // 0x1e90c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e90c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e90c4:
    // 0x1e90c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e90c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e90c8:
    // 0x1e90c8: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_1e90cc:
    if (ctx->pc == 0x1E90CCu) {
        ctx->pc = 0x1E90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90C8u;
        // 0x1e90cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E90D0u;
        goto label_1e90d0;
    }
    ctx->pc = 0x1E90C8u;
    {
        const bool branch_taken_0x1e90c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90C8u;
        // 0x1e90cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90c8) {
            ctx->pc = 0x1E91A4u;
            goto label_1e91a4;
        }
    }
    ctx->pc = 0x1E90D0u;
label_1e90d0:
    // 0x1e90d0: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1e90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_1e90d4:
    // 0x1e90d4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1e90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1e90d8:
    // 0x1e90d8: 0x12a00032  beqz        $s5, . + 4 + (0x32 << 2)
label_1e90dc:
    if (ctx->pc == 0x1E90DCu) {
        ctx->pc = 0x1E90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90D8u;
        // 0x1e90dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E90E0u;
        goto label_1e90e0;
    }
    ctx->pc = 0x1E90D8u;
    {
        const bool branch_taken_0x1e90d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90D8u;
        // 0x1e90dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90d8) {
            ctx->pc = 0x1E91A4u;
            goto label_1e91a4;
        }
    }
    ctx->pc = 0x1E90E0u;
label_1e90e0:
    // 0x1e90e0: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x1e90e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_1e90e4:
    // 0x1e90e4: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x1e90e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_1e90e8:
    // 0x1e90e8: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1e90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_1e90ec:
    // 0x1e90ec: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x1e90ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1e90f0:
    // 0x1e90f0: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x1e90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
label_1e90f4:
    // 0x1e90f4: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x1e90f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1e90f8:
    // 0x1e90f8: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x1e90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_1e90fc:
    // 0x1e90fc: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1e9100:
    // 0x1e9100: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1e9104:
    // 0x1e9104: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e9104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9108:
    // 0x1e9108: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e9108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e910c:
    // 0x1e910c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e9110:
    if (ctx->pc == 0x1E9110u) {
        ctx->pc = 0x1E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E910Cu;
        // 0x1e9110: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9114u;
        goto label_1e9114;
    }
    ctx->pc = 0x1E910Cu;
    {
        const bool branch_taken_0x1e910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E910Cu;
        // 0x1e9110: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e910c) {
            ctx->pc = 0x1E9130u;
            goto label_1e9130;
        }
    }
    ctx->pc = 0x1E9114u;
label_1e9114:
    // 0x1e9114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9118:
    // 0x1e9118: 0x2a0f809  jalr        $s5
label_1e911c:
    if (ctx->pc == 0x1E911Cu) {
        ctx->pc = 0x1E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9118u;
        // 0x1e911c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9120u;
        goto label_1e9120;
    }
    ctx->pc = 0x1E9118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1E9120u);
        ctx->pc = 0x1E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9118u;
        // 0x1e911c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9118u, 0x1E9120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9120u;
label_1e9120:
    // 0x1e9120: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9124:
    // 0x1e9124: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1e9124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1e9128:
    // 0x1e9128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e912c:
    // 0x1e912c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e912cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e9130:
    // 0x1e9130: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e9130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9134:
    // 0x1e9134: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x1e9134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1e9138:
    // 0x1e9138: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e913c:
    if (ctx->pc == 0x1E913Cu) {
        ctx->pc = 0x1E9140u;
        goto label_1e9140;
    }
    ctx->pc = 0x1E9138u;
    {
        const bool branch_taken_0x1e9138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9138) {
            ctx->pc = 0x1E9114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9114;
        }
    }
    ctx->pc = 0x1E9140u;
label_1e9140:
    // 0x1e9140: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1e9140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1e9144:
    // 0x1e9144: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x1e9144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e9148:
    // 0x1e9148: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e914c:
    if (ctx->pc == 0x1E914Cu) {
        ctx->pc = 0x1E9150u;
        goto label_1e9150;
    }
    ctx->pc = 0x1E9148u;
    {
        const bool branch_taken_0x1e9148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9148) {
            ctx->pc = 0x1E91A4u;
            goto label_1e91a4;
        }
    }
    ctx->pc = 0x1E9150u;
label_1e9150:
    // 0x1e9150: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e9150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e9154:
    // 0x1e9154: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e9158:
    if (ctx->pc == 0x1E9158u) {
        ctx->pc = 0x1E915Cu;
        goto label_1e915c;
    }
    ctx->pc = 0x1E9154u;
    {
        const bool branch_taken_0x1e9154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9154) {
            ctx->pc = 0x1E91A4u;
            goto label_1e91a4;
        }
    }
    ctx->pc = 0x1E915Cu;
label_1e915c:
    // 0x1e915c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e9160:
    // 0x1e9160: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1e9164:
    // 0x1e9164: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1e9164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1e9168:
    // 0x1e9168: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e916c:
    if (ctx->pc == 0x1E916Cu) {
        ctx->pc = 0x1E916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9168u;
        // 0x1e916c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9170u;
        goto label_1e9170;
    }
    ctx->pc = 0x1E9168u;
    {
        const bool branch_taken_0x1e9168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9168u;
        // 0x1e916c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9168) {
            ctx->pc = 0x1E9194u;
            goto label_1e9194;
        }
    }
    ctx->pc = 0x1E9170u;
label_1e9170:
    // 0x1e9170: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e9170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e9174:
    // 0x1e9174: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e9174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9178:
    // 0x1e9178: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e917c:
    // 0x1e917c: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1e917cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e9180:
    // 0x1e9180: 0x40f809  jalr        $v0
label_1e9184:
    if (ctx->pc == 0x1E9184u) {
        ctx->pc = 0x1E9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9180u;
        // 0x1e9184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9188u;
        goto label_1e9188;
    }
    ctx->pc = 0x1E9180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9188u);
        ctx->pc = 0x1E9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9180u;
        // 0x1e9184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9180u, 0x1E9188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9188u;
label_1e9188:
    // 0x1e9188: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e918c:
    // 0x1e918c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e9190:
    // 0x1e9190: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e9190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e9194:
    // 0x1e9194: 0x0  nop
    ctx->pc = 0x1e9194u;
    // NOP
label_1e9198:
    // 0x1e9198: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e919c:
    // 0x1e919c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1e91a0:
    if (ctx->pc == 0x1E91A0u) {
        ctx->pc = 0x1E91A4u;
        goto label_1e91a4;
    }
    ctx->pc = 0x1E919Cu;
    {
        const bool branch_taken_0x1e919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e919c) {
            ctx->pc = 0x1E9170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9170;
        }
    }
    ctx->pc = 0x1E91A4u;
label_1e91a4:
    // 0x1e91a4: 0x0  nop
    ctx->pc = 0x1e91a4u;
    // NOP
label_1e91a8:
    // 0x1e91a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e91a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e91ac:
    // 0x1e91ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e91acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e91b0:
    // 0x1e91b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e91b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e91b4:
    // 0x1e91b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e91b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e91b8:
    // 0x1e91b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e91b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e91bc:
    // 0x1e91bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e91bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e91c0:
    // 0x1e91c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e91c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e91c4:
    // 0x1e91c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e91c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e91c8:
    // 0x1e91c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e91c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e91cc:
    // 0x1e91cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e91ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e91d0:
    // 0x1e91d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e91d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e91d4:
    // 0x1e91d4: 0x3e00008  jr          $ra
label_1e91d8:
    if (ctx->pc == 0x1E91D8u) {
        ctx->pc = 0x1E91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91D4u;
        // 0x1e91d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E91DCu;
        goto label_fallthrough_0x1e91d4;
    }
    ctx->pc = 0x1E91D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91D4u;
        // 0x1e91d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E91D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e91d4:
    ctx->pc = 0x1E91DCu;
}
