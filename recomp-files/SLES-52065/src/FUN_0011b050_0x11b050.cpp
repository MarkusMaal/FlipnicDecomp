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

// Function: FUN_0011b050
// Address: 0x11b050 - 0x11b1b0
void FUN_0011b050_0x11b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b050_0x11b050");
#endif

    switch (ctx->pc) {
        case 0x11b078u: goto label_11b078;
        case 0x11b098u: goto label_11b098;
        case 0x11b0b0u: goto label_11b0b0;
        case 0x11b0d8u: goto label_11b0d8;
        case 0x11b0e4u: goto label_11b0e4;
        case 0x11b0f4u: goto label_11b0f4;
        case 0x11b118u: goto label_11b118;
        case 0x11b138u: goto label_11b138;
        case 0x11b140u: goto label_11b140;
        case 0x11b158u: goto label_11b158;
        case 0x11b194u: goto label_11b194;
        default: break;
    }

    ctx->pc = 0x11b050u;

    // 0x11b050: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x11b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x11b054: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11b054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b05c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11b05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11b060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11b060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11b064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b06c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b070: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11B070u;
    SET_GPR_U32(ctx, 31, 0x11B078u);
    ctx->pc = 0x11B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B070u;
    // 0x11b074: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11B070u, 0x11B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B078u;
label_11b078:
    // 0x11b078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B078u;
    {
        const bool branch_taken_0x11b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B078u;
        // 0x11b07c: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b078) {
            ctx->pc = 0x11B088u;
            goto label_11b088;
        }
    }
    ctx->pc = 0x11B080u;
    // 0x11b080: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x11B080u;
    {
        const bool branch_taken_0x11b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B080u;
        // 0x11b084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b080) {
            ctx->pc = 0x11B198u;
            goto label_11b198;
        }
    }
    ctx->pc = 0x11B088u;
label_11b088:
    // 0x11b088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b08c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b090: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B090u;
    SET_GPR_U32(ctx, 31, 0x11B098u);
    ctx->pc = 0x11B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B090u;
    // 0x11b094: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11B090u, 0x11B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B098u;
label_11b098:
    // 0x11b098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b09c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11b09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11b0a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0a8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B0A8u;
    SET_GPR_U32(ctx, 31, 0x11B0B0u);
    ctx->pc = 0x11B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0A8u;
    // 0x11b0ac: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11B0A8u, 0x11B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0B0u;
label_11b0b0:
    // 0x11b0b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b0b4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B0B4u;
    {
        const bool branch_taken_0x11b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0B4u;
        // 0x11b0b8: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0b4) {
            ctx->pc = 0x11B0C4u;
            goto label_11b0c4;
        }
    }
    ctx->pc = 0x11B0BCu;
    // 0x11b0bc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B0BCu;
    {
        const bool branch_taken_0x11b0bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b0bc) {
            ctx->pc = 0x11B100u;
            goto label_11b100;
        }
    }
    ctx->pc = 0x11B0C4u;
label_11b0c4:
    // 0x11b0c4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B0C4u;
    {
        const bool branch_taken_0x11b0c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0C4u;
        // 0x11b0c8: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0c4) {
            ctx->pc = 0x11B0ECu;
            goto label_11b0ec;
        }
    }
    ctx->pc = 0x11B0CCu;
    // 0x11b0cc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b0d0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B0D0u;
    SET_GPR_U32(ctx, 31, 0x11B0D8u);
    ctx->pc = 0x11B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0D0u;
    // 0x11b0d4: 0x262503c4  addiu       $a1, $s1, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B0D0u, 0x11B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0D8u;
label_11b0d8:
    // 0x11b0d8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b0dc: 0xc080664  jal         func_201990
    ctx->pc = 0x11B0DCu;
    SET_GPR_U32(ctx, 31, 0x11B0E4u);
    ctx->pc = 0x11B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0DCu;
    // 0x11b0e0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11B0DCu, 0x11B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0E4u;
label_11b0e4:
    // 0x11b0e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B0E4u;
    {
        const bool branch_taken_0x11b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0E4u;
        // 0x11b0e8: 0x263200f8  addiu       $s2, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e4) {
            ctx->pc = 0x11B0F8u;
            goto label_11b0f8;
        }
    }
    ctx->pc = 0x11B0ECu;
label_11b0ec:
    // 0x11b0ec: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B0ECu;
    SET_GPR_U32(ctx, 31, 0x11B0F4u);
    ctx->pc = 0x11B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0ECu;
    // 0x11b0f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B0ECu, 0x11B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0F4u;
label_11b0f4:
    // 0x11b0f4: 0x263200f8  addiu       $s2, $s1, 0xF8
    ctx->pc = 0x11b0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
label_11b0f8:
    // 0x11b0f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11B0F8u;
    {
        const bool branch_taken_0x11b0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0F8u;
        // 0x11b0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0f8) {
            ctx->pc = 0x11B12Cu;
            goto label_11b12c;
        }
    }
    ctx->pc = 0x11B100u;
label_11b100:
    // 0x11b100: 0x8e220538  lw          $v0, 0x538($s1)
    ctx->pc = 0x11b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1336)));
    // 0x11b104: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B104u;
    {
        const bool branch_taken_0x11b104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B104u;
        // 0x11b108: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b104) {
            ctx->pc = 0x11B120u;
            goto label_11b120;
        }
    }
    ctx->pc = 0x11B10Cu;
    // 0x11b10c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b110: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B110u;
    SET_GPR_U32(ctx, 31, 0x11B118u);
    ctx->pc = 0x11B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B110u;
    // 0x11b114: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B110u, 0x11B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B118u;
label_11b118:
    // 0x11b118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B118u;
    {
        const bool branch_taken_0x11b118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B118u;
        // 0x11b11c: 0x263200f4  addiu       $s2, $s1, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b118) {
            ctx->pc = 0x11B128u;
            goto label_11b128;
        }
    }
    ctx->pc = 0x11B120u;
label_11b120:
    // 0x11b120: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11B120u;
    {
        const bool branch_taken_0x11b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B120u;
        // 0x11b124: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b120) {
            ctx->pc = 0x11B19Cu;
            goto label_11b19c;
        }
    }
    ctx->pc = 0x11B128u;
label_11b128:
    // 0x11b128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b12c:
    // 0x11b12c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b130: 0xc046dd4  jal         func_11B750
    ctx->pc = 0x11B130u;
    SET_GPR_U32(ctx, 31, 0x11B138u);
    ctx->pc = 0x11B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B130u;
    // 0x11b134: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x11B130u, 0x11B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B138u;
label_11b138:
    // 0x11b138: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x11b138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11b13c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11b13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b140:
    // 0x11b140: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B140u;
    {
        const bool branch_taken_0x11b140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B140u;
        // 0x11b144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b140) {
            ctx->pc = 0x11B150u;
            goto label_11b150;
        }
    }
    ctx->pc = 0x11B148u;
    // 0x11b148: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11B148u;
    {
        const bool branch_taken_0x11b148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B148u;
        // 0x11b14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b148) {
            ctx->pc = 0x11B198u;
            goto label_11b198;
        }
    }
    ctx->pc = 0x11B150u;
label_11b150:
    // 0x11b150: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B150u;
    SET_GPR_U32(ctx, 31, 0x11B158u);
    ctx->pc = 0x11B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B150u;
    // 0x11b154: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B150u, 0x11B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B158u;
label_11b158:
    // 0x11b158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B158u;
    {
        const bool branch_taken_0x11b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b158) {
            ctx->pc = 0x11B16Cu;
            goto label_11b16c;
        }
    }
    ctx->pc = 0x11B160u;
    // 0x11b160: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11b160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b164: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11B164u;
    {
        const bool branch_taken_0x11b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B164u;
        // 0x11b168: 0x8e10003c  lw          $s0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b164) {
            ctx->pc = 0x11B140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b140;
        }
    }
    ctx->pc = 0x11B16Cu;
label_11b16c:
    // 0x11b16c: 0x0  nop
    ctx->pc = 0x11b16cu;
    // NOP
    // 0x11b170: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B170u;
    {
        const bool branch_taken_0x11b170 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b170) {
            ctx->pc = 0x11B184u;
            goto label_11b184;
        }
    }
    ctx->pc = 0x11B178u;
    // 0x11b178: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11b17c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B17Cu;
    {
        const bool branch_taken_0x11b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B17Cu;
        // 0x11b180: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b17c) {
            ctx->pc = 0x11B18Cu;
            goto label_11b18c;
        }
    }
    ctx->pc = 0x11B184u;
label_11b184:
    // 0x11b184: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11b188: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x11b188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_11b18c:
    // 0x11b18c: 0xc040150  jal         func_100540
    ctx->pc = 0x11B18Cu;
    SET_GPR_U32(ctx, 31, 0x11B194u);
    ctx->pc = 0x11B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B18Cu;
    // 0x11b190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11B18Cu, 0x11B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B194u;
label_11b194:
    // 0x11b194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b198:
    // 0x11b198: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11b19c:
    // 0x11b19c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11b19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b1a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11b1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1A8u;
        // 0x11b1ac: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B1B0u;
}
