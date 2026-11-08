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

// Function: FUN_001e91e0
// Address: 0x1e91e0 - 0x1e9444
void FUN_001e91e0_0x1e91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e91e0_0x1e91e0");
#endif

    switch (ctx->pc) {
        case 0x1e92b8u: goto label_1e92b8;
        case 0x1e92bcu: goto label_1e92bc;
        case 0x1e92e0u: goto label_1e92e0;
        case 0x1e9318u: goto label_1e9318;
        case 0x1e9338u: goto label_1e9338;
        case 0x1e9370u: goto label_1e9370;
        case 0x1e940cu: goto label_1e940c;
        default: break;
    }

    ctx->pc = 0x1e91e0u;

    // 0x1e91e0: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x1e91e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x1e91e4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E91E4u;
    {
        const bool branch_taken_0x1e91e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91E4u;
        // 0x1e91e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91e4) {
            ctx->pc = 0x1E91F4u;
            goto label_1e91f4;
        }
    }
    ctx->pc = 0x1E91ECu;
    // 0x1e91ec: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1E91ECu;
    {
        const bool branch_taken_0x1e91ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91ECu;
        // 0x1e91f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91ec) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E91F4u;
label_1e91f4:
    // 0x1e91f4: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e91f8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e91fc: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E91FCu;
    {
        const bool branch_taken_0x1e91fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e91fc) {
            ctx->pc = 0x1E926Cu;
            goto label_1e926c;
        }
    }
    ctx->pc = 0x1E9204u;
    // 0x1e9204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9208: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1e9208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1e920c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1e920cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9210: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9210u;
    {
        const bool branch_taken_0x1e9210 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9210) {
            ctx->pc = 0x1E921Cu;
            goto label_1e921c;
        }
    }
    ctx->pc = 0x1E9218u;
    // 0x1e9218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e921c:
    // 0x1e921c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1e921cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9220: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1e9220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1e9224: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9224u;
    {
        const bool branch_taken_0x1e9224 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9224) {
            ctx->pc = 0x1E9230u;
            goto label_1e9230;
        }
    }
    ctx->pc = 0x1E922Cu;
    // 0x1e922c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e9230:
    // 0x1e9230: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9234: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1e9238: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9238u;
    {
        const bool branch_taken_0x1e9238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9238) {
            ctx->pc = 0x1E9268u;
            goto label_1e9268;
        }
    }
    ctx->pc = 0x1E9240u;
    // 0x1e9240: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1e9240u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9244: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e9244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e9248: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9248u;
    {
        const bool branch_taken_0x1e9248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9248u;
        // 0x1e924c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9248) {
            ctx->pc = 0x1E9260u;
            goto label_1e9260;
        }
    }
    ctx->pc = 0x1E9250u;
    // 0x1e9250: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e9254: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9254u;
    {
        const bool branch_taken_0x1e9254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9254u;
        // 0x1e9258: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9254) {
            ctx->pc = 0x1E926Cu;
            goto label_1e926c;
        }
    }
    ctx->pc = 0x1E925Cu;
    // 0x1e925c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9260:
    // 0x1e9260: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1E9260u;
    {
        const bool branch_taken_0x1e9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9260) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E9268u;
label_1e9268:
    // 0x1e9268: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e9268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e926c:
    // 0x1e926c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x1e926cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9270: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1e9270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1e9274: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9274u;
    {
        const bool branch_taken_0x1e9274 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9274u;
        // 0x1e9278: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9274) {
            ctx->pc = 0x1E9298u;
            goto label_1e9298;
        }
    }
    ctx->pc = 0x1E927Cu;
    // 0x1e927c: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E927Cu;
    {
        const bool branch_taken_0x1e927c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e927c) {
            ctx->pc = 0x1E9298u;
            goto label_1e9298;
        }
    }
    ctx->pc = 0x1E9284u;
    // 0x1e9284: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1e9288: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1e928c: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1e9290: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1E9290u;
    {
        const bool branch_taken_0x1e9290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9290u;
        // 0x1e9294: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9290) {
            ctx->pc = 0x1E93E4u;
            goto label_1e93e4;
        }
    }
    ctx->pc = 0x1E9298u;
label_1e9298:
    // 0x1e9298: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e9298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e929c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e929cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e92a0: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1e92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e92a4: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e92a8: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E92A8u;
    {
        const bool branch_taken_0x1e92a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92A8u;
        // 0x1e92ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92a8) {
            ctx->pc = 0x1E92B8u;
            goto label_1e92b8;
        }
    }
    ctx->pc = 0x1E92B0u;
    // 0x1e92b0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1E92B0u;
    {
        const bool branch_taken_0x1e92b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92B0u;
        // 0x1e92b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92b0) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E92B8u;
label_1e92b8:
    // 0x1e92b8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e92b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e92bc:
    // 0x1e92bc: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1e92bcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e92c0: 0x15030015  bne         $t0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E92C0u;
    {
        const bool branch_taken_0x1e92c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92C0u;
        // 0x1e92c4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92c0) {
            ctx->pc = 0x1E9318u;
            goto label_1e9318;
        }
    }
    ctx->pc = 0x1E92C8u;
    // 0x1e92c8: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x1e92c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1e92cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e92d0: 0x1507fff9  bne         $t0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E92D0u;
    {
        const bool branch_taken_0x1e92d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e92d0) {
            ctx->pc = 0x1E92B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e92b8;
        }
    }
    ctx->pc = 0x1E92D8u;
    // 0x1e92d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E92D8u;
    {
        const bool branch_taken_0x1e92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92D8u;
        // 0x1e92dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92d8) {
            ctx->pc = 0x1E92FCu;
            goto label_1e92fc;
        }
    }
    ctx->pc = 0x1E92E0u;
label_1e92e0:
    // 0x1e92e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e92e4: 0x510b8  dsll        $v0, $a1, 2
    ctx->pc = 0x1e92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 2);
    // 0x1e92e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e92e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e92ec: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x1e92ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1e92f0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x1e92f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x1e92f4: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1e92f8: 0x6445ffd0  daddiu      $a1, $v0, -0x30
    ctx->pc = 0x1e92f8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_1e92fc:
    // 0x1e92fc: 0x0  nop
    ctx->pc = 0x1e92fcu;
    // NOP
    // 0x1e9300: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9304: 0x1447fff6  bne         $v0, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E9304u;
    {
        const bool branch_taken_0x1e9304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9304u;
        // 0x1e9308: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9304) {
            ctx->pc = 0x1E92E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e92e0;
        }
    }
    ctx->pc = 0x1E930Cu;
    // 0x1e930c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1e930cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1e9310: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1E9310u;
    {
        const bool branch_taken_0x1e9310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9310u;
        // 0x1e9314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9310) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E9318u;
label_1e9318:
    // 0x1e9318: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e9318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e931c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1e931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1e9320: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1e9320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9324: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e9324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9328: 0x0  nop
    ctx->pc = 0x1e9328u;
    // NOP
    // 0x1e932c: 0x0  nop
    ctx->pc = 0x1e932cu;
    // NOP
    // 0x1e9330: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E9330u;
    {
        const bool branch_taken_0x1e9330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9330) {
            ctx->pc = 0x1E9318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9318;
        }
    }
    ctx->pc = 0x1E9338u;
label_1e9338:
    // 0x1e9338: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e9338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e933c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1e933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9340: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e9340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9344: 0x0  nop
    ctx->pc = 0x1e9344u;
    // NOP
    // 0x1e9348: 0x0  nop
    ctx->pc = 0x1e9348u;
    // NOP
    // 0x1e934c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E934Cu;
    {
        const bool branch_taken_0x1e934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e934c) {
            ctx->pc = 0x1E9338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9338;
        }
    }
    ctx->pc = 0x1E9354u;
    // 0x1e9354: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1e9354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9358u;
    {
        const bool branch_taken_0x1e9358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9358u;
        // 0x1e935c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9358) {
            ctx->pc = 0x1E9368u;
            goto label_1e9368;
        }
    }
    ctx->pc = 0x1E9360u;
    // 0x1e9360: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E9360u;
    {
        const bool branch_taken_0x1e9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9360u;
        // 0x1e9364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9360) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E9368u;
label_1e9368:
    // 0x1e9368: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1E9368u;
    {
        const bool branch_taken_0x1e9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9368u;
        // 0x1e936c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9368) {
            ctx->pc = 0x1E92BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e92bc;
        }
    }
    ctx->pc = 0x1E9370u;
label_1e9370:
    // 0x1e9370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9374: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e9374u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9378: 0x14690006  bne         $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9378u;
    {
        const bool branch_taken_0x1e9378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x1E937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9378u;
        // 0x1e937c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9378) {
            ctx->pc = 0x1E9394u;
            goto label_1e9394;
        }
    }
    ctx->pc = 0x1E9380u;
    // 0x1e9380: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1e9380u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9384: 0x14690002  bne         $v1, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9384u;
    {
        const bool branch_taken_0x1e9384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1e9384) {
            ctx->pc = 0x1E9390u;
            goto label_1e9390;
        }
    }
    ctx->pc = 0x1E938Cu;
    // 0x1e938c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e9390:
    // 0x1e9390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e9394:
    // 0x1e9394: 0x0  nop
    ctx->pc = 0x1e9394u;
    // NOP
    // 0x1e9398: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1e9398u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e939c: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E939Cu;
    {
        const bool branch_taken_0x1e939c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x1e939c) {
            ctx->pc = 0x1E93ACu;
            goto label_1e93ac;
        }
    }
    ctx->pc = 0x1E93A4u;
    // 0x1e93a4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E93A4u;
    {
        const bool branch_taken_0x1e93a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93A4u;
        // 0x1e93a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93a4) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E93ACu;
label_1e93ac:
    // 0x1e93ac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e93acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e93b0: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E93B0u;
    {
        const bool branch_taken_0x1e93b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e93b0) {
            ctx->pc = 0x1E93CCu;
            goto label_1e93cc;
        }
    }
    ctx->pc = 0x1E93B8u;
    // 0x1e93b8: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E93B8u;
    {
        const bool branch_taken_0x1e93b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e93b8) {
            ctx->pc = 0x1E93C4u;
            goto label_1e93c4;
        }
    }
    ctx->pc = 0x1E93C0u;
    // 0x1e93c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e93c4:
    // 0x1e93c4: 0x0  nop
    ctx->pc = 0x1e93c4u;
    // NOP
    // 0x1e93c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e93cc:
    // 0x1e93cc: 0x0  nop
    ctx->pc = 0x1e93ccu;
    // NOP
    // 0x1e93d0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1e93d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e93d4: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E93D4u;
    {
        const bool branch_taken_0x1e93d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e93d4) {
            ctx->pc = 0x1E93E4u;
            goto label_1e93e4;
        }
    }
    ctx->pc = 0x1E93DCu;
    // 0x1e93dc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E93DCu;
    {
        const bool branch_taken_0x1e93dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93DCu;
        // 0x1e93e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93dc) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E93E4u;
label_1e93e4:
    // 0x1e93e4: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1e93e4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e93e8: 0x11060003  beq         $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E93E8u;
    {
        const bool branch_taken_0x1e93e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e93e8) {
            ctx->pc = 0x1E93F8u;
            goto label_1e93f8;
        }
    }
    ctx->pc = 0x1E93F0u;
    // 0x1e93f0: 0x1505000c  bne         $t0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E93F0u;
    {
        const bool branch_taken_0x1e93f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e93f0) {
            ctx->pc = 0x1E9424u;
            goto label_1e9424;
        }
    }
    ctx->pc = 0x1E93F8u;
label_1e93f8:
    // 0x1e93f8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e93f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e93fc: 0x1103ffdc  beq         $t0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1E93FCu;
    {
        const bool branch_taken_0x1e93fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e93fc) {
            ctx->pc = 0x1E9370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9370;
        }
    }
    ctx->pc = 0x1E9404u;
    // 0x1e9404: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9404u;
    {
        const bool branch_taken_0x1e9404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9404) {
            ctx->pc = 0x1E9424u;
            goto label_1e9424;
        }
    }
    ctx->pc = 0x1E940Cu;
label_1e940c:
    // 0x1e940c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E940Cu;
    {
        const bool branch_taken_0x1e940c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e940c) {
            ctx->pc = 0x1E941Cu;
            goto label_1e941c;
        }
    }
    ctx->pc = 0x1E9414u;
    // 0x1e9414: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9414u;
    {
        const bool branch_taken_0x1e9414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9414u;
        // 0x1e9418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9414) {
            ctx->pc = 0x1E943Cu;
            goto label_1e943c;
        }
    }
    ctx->pc = 0x1E941Cu;
label_1e941c:
    // 0x1e941c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e9420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e9424:
    // 0x1e9424: 0x0  nop
    ctx->pc = 0x1e9424u;
    // NOP
    // 0x1e9428: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e942c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e942cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9430: 0x10a3fff6  beq         $a1, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E9430u;
    {
        const bool branch_taken_0x1e9430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9430) {
            ctx->pc = 0x1E940Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e940c;
        }
    }
    ctx->pc = 0x1E9438u;
    // 0x1e9438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e943c:
    // 0x1e943c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E943Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9444u;
}
