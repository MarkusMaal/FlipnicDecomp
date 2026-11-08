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

// Function: FUN_001bd250
// Address: 0x1bd250 - 0x1bd3f4
void FUN_001bd250_0x1bd250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bd250_0x1bd250");
#endif

    switch (ctx->pc) {
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd29cu: goto label_1bd29c;
        case 0x1bd2acu: goto label_1bd2ac;
        case 0x1bd2e0u: goto label_1bd2e0;
        case 0x1bd304u: goto label_1bd304;
        case 0x1bd38cu: goto label_1bd38c;
        case 0x1bd398u: goto label_1bd398;
        case 0x1bd3a8u: goto label_1bd3a8;
        case 0x1bd3b0u: goto label_1bd3b0;
        default: break;
    }

    ctx->pc = 0x1bd250u;

    // 0x1bd250: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1bd254: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bd254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bd258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bd258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bd25c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd268: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bd268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd26c: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1BD26Cu;
    {
        const bool branch_taken_0x1bd26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD26Cu;
        // 0x1bd270: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd26c) {
            ctx->pc = 0x1BD3D8u;
            goto label_1bd3d8;
        }
    }
    ctx->pc = 0x1BD274u;
    // 0x1bd274: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1bd274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd278: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bd278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bd27c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1bd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bd280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd284: 0xc06f75c  jal         func_1BDD70
    ctx->pc = 0x1BD284u;
    SET_GPR_U32(ctx, 31, 0x1BD28Cu);
    ctx->pc = 0x1BD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD284u;
    // 0x1bd288: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD70u, 0x1BD284u, 0x1BD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD28Cu;
label_1bd28c:
    // 0x1bd28c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1bd28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd290: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bd294: 0xc06f75c  jal         func_1BDD70
    ctx->pc = 0x1BD294u;
    SET_GPR_U32(ctx, 31, 0x1BD29Cu);
    ctx->pc = 0x1BD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD294u;
    // 0x1bd298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD70u, 0x1BD294u, 0x1BD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD29Cu;
label_1bd29c:
    // 0x1bd29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bd2a4: 0xc06f7a0  jal         func_1BDE80
    ctx->pc = 0x1BD2A4u;
    SET_GPR_U32(ctx, 31, 0x1BD2ACu);
    ctx->pc = 0x1BD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2A4u;
    // 0x1bd2a8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE80u, 0x1BD2A4u, 0x1BD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2ACu;
label_1bd2ac:
    // 0x1bd2ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1bd2acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd2b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bd2b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bd2b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1bd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bd2bc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1bd2bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd2c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD2C0u;
    {
        const bool branch_taken_0x1bd2c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd2c0) {
            ctx->pc = 0x1BD2E8u;
            goto label_1bd2e8;
        }
    }
    ctx->pc = 0x1BD2C8u;
    // 0x1bd2c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd2cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bd2d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1bd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bd2d4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1bd2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bd2d8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BD2D8u;
    SET_GPR_U32(ctx, 31, 0x1BD2E0u);
    ctx->pc = 0x1BD2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2D8u;
    // 0x1bd2dc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BD2D8u, 0x1BD2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2E0u;
label_1bd2e0:
    // 0x1bd2e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD2E0u;
    {
        const bool branch_taken_0x1bd2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD2E0u;
        // 0x1bd2e4: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2e0) {
            ctx->pc = 0x1BD308u;
            goto label_1bd308;
        }
    }
    ctx->pc = 0x1BD2E8u;
label_1bd2e8:
    // 0x1bd2e8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1bd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd2ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bd2f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bd2f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd2f8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1bd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bd2fc: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BD2FCu;
    SET_GPR_U32(ctx, 31, 0x1BD304u);
    ctx->pc = 0x1BD300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2FCu;
    // 0x1bd300: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BD2FCu, 0x1BD304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD304u;
label_1bd304:
    // 0x1bd304: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1bd308:
    // 0x1bd308: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1bd30c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1bd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1bd310: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1bd314: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1bd314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x1bd318: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bd318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1bd31c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1bd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1bd320: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1bd320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1bd324: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd328: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd32c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bd32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1bd330: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd334: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd338: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd33c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD33Cu;
    {
        const bool branch_taken_0x1bd33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD33Cu;
        // 0x1bd340: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd33c) {
            ctx->pc = 0x1BD35Cu;
            goto label_1bd35c;
        }
    }
    ctx->pc = 0x1BD344u;
    // 0x1bd344: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1bd344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bd348: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd34c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd358: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1bd358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_1bd35c:
    // 0x1bd35c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1bd35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bd360: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bd364: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1bd364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bd368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd36c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1bd370: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1bd370u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1bd374: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1bd374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bd378: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1bd37c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1bd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bd380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd384: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BD384u;
    SET_GPR_U32(ctx, 31, 0x1BD38Cu);
    ctx->pc = 0x1BD388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD384u;
    // 0x1bd388: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BD384u, 0x1BD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD38Cu;
label_1bd38c:
    // 0x1bd38c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bd390: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BD390u;
    SET_GPR_U32(ctx, 31, 0x1BD398u);
    ctx->pc = 0x1BD394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD390u;
    // 0x1bd394: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BD390u, 0x1BD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD398u;
label_1bd398:
    // 0x1bd398: 0x8fb200a4  lw          $s2, 0xA4($sp)
    ctx->pc = 0x1bd398u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1bd39c: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x1bd39cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1bd3a0: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD3A0u;
    {
        const bool branch_taken_0x1bd3a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3A0u;
        // 0x1bd3a4: 0x8fb100a0  lw          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3a0) {
            ctx->pc = 0x1BD3D8u;
            goto label_1bd3d8;
        }
    }
    ctx->pc = 0x1BD3A8u;
label_1bd3a8:
    // 0x1bd3a8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD3A8u;
    SET_GPR_U32(ctx, 31, 0x1BD3B0u);
    ctx->pc = 0x1BD3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3A8u;
    // 0x1bd3ac: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD3A8u, 0x1BD3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3B0u;
label_1bd3b0:
    // 0x1bd3b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd3b4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1bd3b8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bd3bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd3c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bd3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bd3c4: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD3C4u;
    {
        const bool branch_taken_0x1bd3c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3C4u;
        // 0x1bd3c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3c4) {
            ctx->pc = 0x1BD3D0u;
            goto label_1bd3d0;
        }
    }
    ctx->pc = 0x1BD3CCu;
    // 0x1bd3cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bd3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd3d0:
    // 0x1bd3d0: 0x1650fff5  bne         $s2, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BD3D0u;
    {
        const bool branch_taken_0x1bd3d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x1bd3d0) {
            ctx->pc = 0x1BD3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd3a8;
        }
    }
    ctx->pc = 0x1BD3D8u;
label_1bd3d8:
    // 0x1bd3d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bd3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd3dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bd3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd3e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3ECu;
        // 0x1bd3f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD3F4u;
}
