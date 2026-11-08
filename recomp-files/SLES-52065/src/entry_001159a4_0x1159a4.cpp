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

// Function: entry_001159a4
// Address: 0x1159a4 - 0x115a38
void entry_001159a4_0x1159a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001159a4_0x1159a4");
#endif

    switch (ctx->pc) {
        case 0x1159c8u: goto label_1159c8;
        case 0x1159dcu: goto label_1159dc;
        default: break;
    }

    ctx->pc = 0x1159a4u;

label_1159a4:
    // 0x1159a4: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1159a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1159a8:
    // 0x1159a8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1159a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1159ac:
    // 0x1159ac: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1159acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1159b0:
    // 0x1159b0: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1159b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1159b4:
    // 0x1159b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1159b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1159b8:
    // 0x1159b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1159b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1159bc:
    // 0x1159bc: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1159bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1159c0:
    // 0x1159c0: 0x320f809  jalr        $t9
label_1159c4:
    if (ctx->pc == 0x1159C4u) {
        ctx->pc = 0x1159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159C0u;
        // 0x1159c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1159C8u;
        goto label_1159c8;
    }
    ctx->pc = 0x1159C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1159C8u);
        ctx->pc = 0x1159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159C0u;
        // 0x1159c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159C0u, 0x1159C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1159C8u;
label_1159c8:
    // 0x1159c8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1159c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1159cc:
    // 0x1159cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1159ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1159d0:
    // 0x1159d0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x1159d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_1159d4:
    // 0x1159d4: 0x320f809  jalr        $t9
label_1159d8:
    if (ctx->pc == 0x1159D8u) {
        ctx->pc = 0x1159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159D4u;
        // 0x1159d8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1159DCu;
        goto label_1159dc;
    }
    ctx->pc = 0x1159D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1159DCu);
        ctx->pc = 0x1159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159D4u;
        // 0x1159d8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159D4u, 0x1159DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1159DCu;
label_1159dc:
    // 0x1159dc: 0x8e470260  lw          $a3, 0x260($s2)
    ctx->pc = 0x1159dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1159e0:
    // 0x1159e0: 0x13bc  dsll32      $v0, $zero, 14
    ctx->pc = 0x1159e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 14));
label_1159e4:
    // 0x1159e4: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1159e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_1159e8:
    // 0x1159e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1159e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1159ec:
    // 0x1159ec: 0x23380  sll         $a2, $v0, 14
    ctx->pc = 0x1159ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_1159f0:
    // 0x1159f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1159f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1159f4:
    // 0x1159f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1159f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1159f8:
    // 0x1159f8: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x1159f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_1159fc:
    // 0x1159fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1159fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_115a00:
    // 0x115a00: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x115a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115a04:
    // 0x115a04: 0xae470260  sw          $a3, 0x260($s2)
    ctx->pc = 0x115a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 7));
label_115a08:
    // 0x115a08: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x115a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_115a0c:
    // 0x115a0c: 0x8e470254  lw          $a3, 0x254($s2)
    ctx->pc = 0x115a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_115a10:
    // 0x115a10: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x115a10u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_115a14:
    // 0x115a14: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x115a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_115a18:
    // 0x115a18: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x115a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_115a1c:
    // 0x115a1c: 0xae440254  sw          $a0, 0x254($s2)
    ctx->pc = 0x115a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 4));
label_115a20:
    // 0x115a20: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115a20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_115a24:
    // 0x115a24: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_115a28:
    // 0x115a28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_115a2c:
    // 0x115a2c: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x115a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_115a30:
    // 0x115a30: 0x10000053  b           . + 4 + (0x53 << 2)
label_115a34:
    if (ctx->pc == 0x115A34u) {
        ctx->pc = 0x115A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A30u;
        // 0x115a34: 0xae450270  sw          $a1, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A38u;
        goto label_fallthrough_0x115a30;
    }
    ctx->pc = 0x115A30u;
    {
        const bool branch_taken_0x115a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A30u;
        // 0x115a34: 0xae450270  sw          $a1, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a30) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x115a30:
    ctx->pc = 0x115A38u;
}
