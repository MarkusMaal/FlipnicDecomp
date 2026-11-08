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

// Function: FUN_00186040
// Address: 0x186040 - 0x186194
void FUN_00186040_0x186040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186040_0x186040");
#endif

    switch (ctx->pc) {
        case 0x18605cu: goto label_18605c;
        case 0x186070u: goto label_186070;
        case 0x18607cu: goto label_18607c;
        case 0x186084u: goto label_186084;
        case 0x18608cu: goto label_18608c;
        case 0x1860b8u: goto label_1860b8;
        case 0x1860c8u: goto label_1860c8;
        case 0x1860d8u: goto label_1860d8;
        case 0x1860ecu: goto label_1860ec;
        case 0x186108u: goto label_186108;
        case 0x186124u: goto label_186124;
        default: break;
    }

    ctx->pc = 0x186040u;

    // 0x186040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x186044: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x186044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x186048: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x186048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18604c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186054: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x186054u;
    SET_GPR_U32(ctx, 31, 0x18605Cu);
    ctx->pc = 0x186058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186054u;
    // 0x186058: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x186054u, 0x18605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18605Cu;
label_18605c:
    // 0x18605c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18605cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186060: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186064: 0x24a5f988  addiu       $a1, $a1, -0x678
    ctx->pc = 0x186064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965640));
    // 0x186068: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x186068u;
    SET_GPR_U32(ctx, 31, 0x186070u);
    ctx->pc = 0x18606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186068u;
    // 0x18606c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x186068u, 0x186070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186070u;
label_186070:
    // 0x186070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186074: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x186074u;
    SET_GPR_U32(ctx, 31, 0x18607Cu);
    ctx->pc = 0x186078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186074u;
    // 0x186078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x186074u, 0x18607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18607Cu;
label_18607c:
    // 0x18607c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18607Cu;
    {
        const bool branch_taken_0x18607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18607c) {
            ctx->pc = 0x1860A0u;
            goto label_1860a0;
        }
    }
    ctx->pc = 0x186084u;
label_186084:
    // 0x186084: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x186084u;
    SET_GPR_U32(ctx, 31, 0x18608Cu);
    ctx->pc = 0x186088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186084u;
    // 0x186088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x186084u, 0x18608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18608Cu;
label_18608c:
    // 0x18608c: 0x0  nop
    ctx->pc = 0x18608cu;
    // NOP
    // 0x186090: 0x0  nop
    ctx->pc = 0x186090u;
    // NOP
    // 0x186094: 0x0  nop
    ctx->pc = 0x186094u;
    // NOP
    // 0x186098: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186098u;
    {
        const bool branch_taken_0x186098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186098) {
            ctx->pc = 0x186084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186084;
        }
    }
    ctx->pc = 0x1860A0u;
label_1860a0:
    // 0x1860a0: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0x278486d0  addiu       $a0, $gp, -0x7930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x186178u;
            goto label_186178;
        }
    }
    ctx->pc = 0x1860A8u;
    // 0x1860a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1860a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1860acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1860b0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1860B0u;
    SET_GPR_U32(ctx, 31, 0x1860B8u);
    ctx->pc = 0x1860B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860B0u;
    // 0x1860b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1860B0u, 0x1860B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860B8u;
label_1860b8:
    // 0x1860b8: 0x8f8286d0  lw          $v0, -0x7930($gp)
    ctx->pc = 0x1860b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1860bc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1860bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1860c0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1860C0u;
    SET_GPR_U32(ctx, 31, 0x1860C8u);
    ctx->pc = 0x1860C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860C0u;
    // 0x1860c4: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1860C0u, 0x1860C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860C8u;
label_1860c8:
    // 0x1860c8: 0xaf8286d4  sw          $v0, -0x792C($gp)
    ctx->pc = 0x1860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936276), GPR_U32(ctx, 2));
    // 0x1860cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1860ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x186168u;
            goto label_186168;
        }
    }
    ctx->pc = 0x1860D8u;
label_1860d8:
    // 0x1860d8: 0x8f8286d4  lw          $v0, -0x792C($gp)
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x1860dc: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1860dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1860e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1860e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1860e4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1860E4u;
    SET_GPR_U32(ctx, 31, 0x1860ECu);
    ctx->pc = 0x1860E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860E4u;
    // 0x1860e8: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1860E4u, 0x1860ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860ECu;
label_1860ec:
    // 0x1860ec: 0x8f8386d4  lw          $v1, -0x792C($gp)
    ctx->pc = 0x1860ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x1860f0: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x1860f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1860f4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1860f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1860f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1860f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1860fc: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1860fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x186100: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x186100u;
    SET_GPR_U32(ctx, 31, 0x186108u);
    ctx->pc = 0x186104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186100u;
    // 0x186104: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x186100u, 0x186108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186108u;
label_186108:
    // 0x186108: 0x8f8386d4  lw          $v1, -0x792C($gp)
    ctx->pc = 0x186108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x18610c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x18610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x186110: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x186110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186114: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x186114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186118: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18611c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x18611Cu;
    SET_GPR_U32(ctx, 31, 0x186124u);
    ctx->pc = 0x186120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18611Cu;
    // 0x186120: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x18611Cu, 0x186124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186124u;
label_186124:
    // 0x186124: 0x8f8486d4  lw          $a0, -0x792C($gp)
    ctx->pc = 0x186124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x186128: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x186128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18612c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x18612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x186130: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x186130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x186134: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x186134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x186138: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x186138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18613c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x18613cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x186140: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x186144: 0x8f8486d4  lw          $a0, -0x792C($gp)
    ctx->pc = 0x186144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936276)));
    // 0x186148: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x186148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18614c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x18614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x186150: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x186150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x186154: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x186154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x186158: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x186158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x18615c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x18615cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x186160: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x186164: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_186168:
    // 0x186168: 0x8f8386d0  lw          $v1, -0x7930($gp)
    ctx->pc = 0x186168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x18616c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x18616cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x186170: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x186170u;
    {
        const bool branch_taken_0x186170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186170) {
            ctx->pc = 0x1860D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1860d8;
        }
    }
    ctx->pc = 0x186178u;
label_186178:
    // 0x186178: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18617c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18617cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186180: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18618c: 0x3e00008  jr          $ra
    ctx->pc = 0x18618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18618Cu;
        // 0x186190: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18618Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186194u;
}
