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

// Function: FUN_00133820
// Address: 0x133820 - 0x13395c
void FUN_00133820_0x133820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133820_0x133820");
#endif

    switch (ctx->pc) {
        case 0x133848u: goto label_133848;
        case 0x133864u: goto label_133864;
        case 0x133878u: goto label_133878;
        case 0x133884u: goto label_133884;
        case 0x1338a0u: goto label_1338a0;
        case 0x1338bcu: goto label_1338bc;
        case 0x1338d0u: goto label_1338d0;
        case 0x1338dcu: goto label_1338dc;
        case 0x1338fcu: goto label_1338fc;
        case 0x13390cu: goto label_13390c;
        default: break;
    }

    ctx->pc = 0x133820u;

    // 0x133820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13382c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133830: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x133830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x133834: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133834u;
    {
        const bool branch_taken_0x133834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133834u;
        // 0x133838: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133834) {
            ctx->pc = 0x13386Cu;
            goto label_13386c;
        }
    }
    ctx->pc = 0x13383Cu;
    // 0x13383c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x13383cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x133840: 0xc04ca54  jal         func_132950
    ctx->pc = 0x133840u;
    SET_GPR_U32(ctx, 31, 0x133848u);
    ctx->pc = 0x133844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133840u;
    // 0x133844: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x133840u, 0x133848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133848u;
label_133848:
    // 0x133848: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x133848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x13384c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x13384cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x133850: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x133850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x133854: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x133854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x133858: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x133858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x13385c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x13385Cu;
    SET_GPR_U32(ctx, 31, 0x133864u);
    ctx->pc = 0x133860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13385Cu;
    // 0x133860: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x13385Cu, 0x133864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133864u;
label_133864:
    // 0x133864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133868: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x133868u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
label_13386c:
    // 0x13386c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x13386cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x133870: 0xc04c554  jal         func_131550
    ctx->pc = 0x133870u;
    SET_GPR_U32(ctx, 31, 0x133878u);
    ctx->pc = 0x133874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133870u;
    // 0x133874: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x133870u, 0x133878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133878u;
label_133878:
    // 0x133878: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x133878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13387c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x13387Cu;
    SET_GPR_U32(ctx, 31, 0x133884u);
    ctx->pc = 0x133880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13387Cu;
    // 0x133880: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13387Cu, 0x133884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133884u;
label_133884:
    // 0x133884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133888: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x133888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x13388c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13388Cu;
    {
        const bool branch_taken_0x13388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13388Cu;
        // 0x133890: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13388c) {
            ctx->pc = 0x1338C4u;
            goto label_1338c4;
        }
    }
    ctx->pc = 0x133894u;
    // 0x133894: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x133894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x133898: 0xc04ca54  jal         func_132950
    ctx->pc = 0x133898u;
    SET_GPR_U32(ctx, 31, 0x1338A0u);
    ctx->pc = 0x13389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133898u;
    // 0x13389c: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x133898u, 0x1338A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338A0u;
label_1338a0:
    // 0x1338a0: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1338a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1338a4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1338a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x1338a8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1338a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1338ac: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x1338acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x1338b0: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x1338b4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1338B4u;
    SET_GPR_U32(ctx, 31, 0x1338BCu);
    ctx->pc = 0x1338B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338B4u;
    // 0x1338b8: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1338B4u, 0x1338BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338BCu;
label_1338bc:
    // 0x1338bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1338bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1338c0: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x1338c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
label_1338c4:
    // 0x1338c4: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1338c8: 0xc04c554  jal         func_131550
    ctx->pc = 0x1338C8u;
    SET_GPR_U32(ctx, 31, 0x1338D0u);
    ctx->pc = 0x1338CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338C8u;
    // 0x1338cc: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1338C8u, 0x1338D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338D0u;
label_1338d0:
    // 0x1338d0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1338d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1338d4: 0xc04c550  jal         func_131540
    ctx->pc = 0x1338D4u;
    SET_GPR_U32(ctx, 31, 0x1338DCu);
    ctx->pc = 0x1338D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338D4u;
    // 0x1338d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1338D4u, 0x1338DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338DCu;
label_1338dc:
    // 0x1338dc: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x1338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1338e0: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1338e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1338e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1338e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1338e8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1338e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1338ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1338ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1338f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1338f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1338f4: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1338F4u;
    {
        const bool branch_taken_0x1338f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x1338f4) {
            ctx->pc = 0x133924u;
            goto label_133924;
        }
    }
    ctx->pc = 0x1338FCu;
label_1338fc:
    // 0x1338fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133900: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x133900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x133904: 0xc04cb4c  jal         func_132D30
    ctx->pc = 0x133904u;
    SET_GPR_U32(ctx, 31, 0x13390Cu);
    ctx->pc = 0x133908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133904u;
    // 0x133908: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132D30u, 0x133904u, 0x13390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13390Cu;
label_13390c:
    // 0x13390c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133910: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x133910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x133914: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x133914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x133918: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x133918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13391c: 0x1470fff7  bne         $v1, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13391Cu;
    {
        const bool branch_taken_0x13391c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13391c) {
            ctx->pc = 0x1338FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1338fc;
        }
    }
    ctx->pc = 0x133924u;
label_133924:
    // 0x133924: 0x0  nop
    ctx->pc = 0x133924u;
    // NOP
    // 0x133928: 0x8f848528  lw          $a0, -0x7AD8($gp)
    ctx->pc = 0x133928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x13392c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133930: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x133934: 0xaf848528  sw          $a0, -0x7AD8($gp)
    ctx->pc = 0x133934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935848), GPR_U32(ctx, 4));
    // 0x133938: 0x8f848528  lw          $a0, -0x7AD8($gp)
    ctx->pc = 0x133938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x13393c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13393Cu;
    {
        const bool branch_taken_0x13393c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13393c) {
            ctx->pc = 0x133948u;
            goto label_133948;
        }
    }
    ctx->pc = 0x133944u;
    // 0x133944: 0xaf808528  sw          $zero, -0x7AD8($gp)
    ctx->pc = 0x133944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935848), GPR_U32(ctx, 0));
label_133948:
    // 0x133948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x133948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13394c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13394cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133954: 0x3e00008  jr          $ra
    ctx->pc = 0x133954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133954u;
        // 0x133958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13395Cu;
}
