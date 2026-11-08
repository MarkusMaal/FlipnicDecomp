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

// Function: FUN_00138690
// Address: 0x138690 - 0x1396e4
void FUN_00138690_0x138690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138690_0x138690");
#endif

    switch (ctx->pc) {
        case 0x13877cu: goto label_13877c;
        case 0x1389d0u: goto label_1389d0;
        case 0x1389e8u: goto label_1389e8;
        case 0x138b40u: goto label_138b40;
        case 0x138d14u: goto label_138d14;
        case 0x138d44u: goto label_138d44;
        case 0x138df8u: goto label_138df8;
        case 0x138e4cu: goto label_138e4c;
        case 0x138fb4u: goto label_138fb4;
        case 0x139670u: goto label_139670;
        case 0x139688u: goto label_139688;
        case 0x139698u: goto label_139698;
        case 0x1396b4u: goto label_1396b4;
        default: break;
    }

    ctx->pc = 0x138690u;

    // 0x138690: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x138690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x138694: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x138694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138698: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x138698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x13869c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x13869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1386a0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1386a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1386a4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1386a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1386a8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1386a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386ac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1386acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1386b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1386b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1386b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1386b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1386b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1386bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1386bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1386c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1386c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1386c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1386c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1386c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1386cc: 0xafa5017c  sw          $a1, 0x17C($sp)
    ctx->pc = 0x1386ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 5));
    // 0x1386d0: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1386d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1386d4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1386D4u;
    {
        const bool branch_taken_0x1386d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1386D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386D4u;
        // 0x1386d8: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386d4) {
            ctx->pc = 0x1386E0u;
            goto label_1386e0;
        }
    }
    ctx->pc = 0x1386DCu;
    // 0x1386dc: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x1386dcu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1386e0:
    // 0x1386e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1386e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1386e4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1386E4u;
    {
        const bool branch_taken_0x1386e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1386e4) {
            ctx->pc = 0x1386F0u;
            goto label_1386f0;
        }
    }
    ctx->pc = 0x1386ECu;
    // 0x1386ec: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x1386ecu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1386f0:
    // 0x1386f0: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1386f4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1386f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1386f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1386f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1386fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1386FCu;
    {
        const bool branch_taken_0x1386fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386FCu;
        // 0x138700: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386fc) {
            ctx->pc = 0x138708u;
            goto label_138708;
        }
    }
    ctx->pc = 0x138704u;
    // 0x138704: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x138704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
label_138708:
    // 0x138708: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x138708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13870c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x138710: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138710u;
    {
        const bool branch_taken_0x138710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x138710) {
            ctx->pc = 0x138748u;
            goto label_138748;
        }
    }
    ctx->pc = 0x138718u;
    // 0x138718: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x138718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13871c: 0x38142  srl         $s0, $v1, 5
    ctx->pc = 0x13871cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x138720: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138720u;
    {
        const bool branch_taken_0x138720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x138724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138720u;
        // 0x138724: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138720) {
            ctx->pc = 0x138740u;
            goto label_138740;
        }
    }
    ctx->pc = 0x138728u;
    // 0x138728: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x138728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x13872c: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x13872cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x138730: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x138730u;
    {
        const bool branch_taken_0x138730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138730) {
            ctx->pc = 0x13873Cu;
            goto label_13873c;
        }
    }
    ctx->pc = 0x138738u;
    // 0x138738: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x138738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_13873c:
    // 0x13873c: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x13873cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_138740:
    // 0x138740: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x138740u;
    {
        const bool branch_taken_0x138740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138740u;
        // 0x138744: 0x62f023  subu        $fp, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138740) {
            ctx->pc = 0x138774u;
            goto label_138774;
        }
    }
    ctx->pc = 0x138748u;
label_138748:
    // 0x138748: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x138748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13874c: 0x38142  srl         $s0, $v1, 5
    ctx->pc = 0x13874cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x138750: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138750u;
    {
        const bool branch_taken_0x138750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x138754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138750u;
        // 0x138754: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138750) {
            ctx->pc = 0x138770u;
            goto label_138770;
        }
    }
    ctx->pc = 0x138758u;
    // 0x138758: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x138758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x13875c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x13875cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138760: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x138760u;
    {
        const bool branch_taken_0x138760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138760) {
            ctx->pc = 0x13876Cu;
            goto label_13876c;
        }
    }
    ctx->pc = 0x138768u;
    // 0x138768: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_13876c:
    // 0x13876c: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_138770:
    // 0x138770: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x138770u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_138774:
    // 0x138774: 0xc080748  jal         func_201D20
    ctx->pc = 0x138774u;
    SET_GPR_U32(ctx, 31, 0x13877Cu);
    ctx->pc = 0x138778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138774u;
    // 0x138778: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x138774u, 0x13877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13877Cu;
label_13877c:
    // 0x13877c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x13877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x138780: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138788: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x138788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x13878c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x13878Cu;
    {
        const bool branch_taken_0x13878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13878c) {
            ctx->pc = 0x13881Cu;
            goto label_13881c;
        }
    }
    ctx->pc = 0x138794u;
    // 0x138794: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x138794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x138798: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x138798u;
    {
        const bool branch_taken_0x138798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138798u;
        // 0x13879c: 0x3c025027  lui         $v0, 0x5027 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20519 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138798) {
            ctx->pc = 0x1387E0u;
            goto label_1387e0;
        }
    }
    ctx->pc = 0x1387A0u;
    // 0x1387a0: 0x3c02502f  lui         $v0, 0x502F
    ctx->pc = 0x1387a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20527 << 16));
    // 0x1387a4: 0x34038022  ori         $v1, $zero, 0x8022
    ctx->pc = 0x1387a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1387a8: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1387a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1387ac: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1387acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1387b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1387b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1387b4: 0x34452521  ori         $a1, $v0, 0x2521
    ctx->pc = 0x1387b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9505);
    // 0x1387b8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1387b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1387bc: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1387bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1387c0: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x1387c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1387c4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1387c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1387c8: 0xfe850008  sd          $a1, 0x8($s4)
    ctx->pc = 0x1387c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
    // 0x1387cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1387ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1387d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1387d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1387d4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1387d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x1387d8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1387D8u;
    {
        const bool branch_taken_0x1387d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D8u;
        // 0x1387dc: 0xfe850018  sd          $a1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387d8) {
            ctx->pc = 0x138924u;
            goto label_138924;
        }
    }
    ctx->pc = 0x1387E0u;
label_1387e0:
    // 0x1387e0: 0x34038022  ori         $v1, $zero, 0x8022
    ctx->pc = 0x1387e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1387e4: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1387e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1387e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1387ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1387ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1387f0: 0x34452521  ori         $a1, $v0, 0x2521
    ctx->pc = 0x1387f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9505);
    // 0x1387f4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1387f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1387f8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1387f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1387fc: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x1387fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138800: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x138804: 0xfe850008  sd          $a1, 0x8($s4)
    ctx->pc = 0x138804u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
    // 0x138808: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x138808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13880c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138810: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x138810u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x138814: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x138814u;
    {
        const bool branch_taken_0x138814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138814u;
        // 0x138818: 0xfe850018  sd          $a1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138814) {
            ctx->pc = 0x138924u;
            goto label_138924;
        }
    }
    ctx->pc = 0x13881Cu;
label_13881c:
    // 0x13881c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x138820: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x138820u;
    {
        const bool branch_taken_0x138820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x138820) {
            ctx->pc = 0x1388A8u;
            goto label_1388a8;
        }
    }
    ctx->pc = 0x138828u;
    // 0x138828: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x138828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13882c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13882Cu;
    {
        const bool branch_taken_0x13882c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13882Cu;
        // 0x138830: 0x3c033024  lui         $v1, 0x3024 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12324 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13882c) {
            ctx->pc = 0x138870u;
            goto label_138870;
        }
    }
    ctx->pc = 0x138834u;
    // 0x138834: 0x3c03302c  lui         $v1, 0x302C
    ctx->pc = 0x138834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12332 << 16));
    // 0x138838: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x138838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x13883c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x13883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x138840: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x138840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x138844: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x138844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138848: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x138848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13884c: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x13884cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138850: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x138854: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x138854u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x138858: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13885c: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x13885cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x138860: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138864: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x138864u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x138868: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x138868u;
    {
        const bool branch_taken_0x138868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138868u;
        // 0x13886c: 0xfe840018  sd          $a0, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138868) {
            ctx->pc = 0x138924u;
            goto label_138924;
        }
    }
    ctx->pc = 0x138870u;
label_138870:
    // 0x138870: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x138870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x138874: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x138874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x138878: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x138878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x13887c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x13887cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138880: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x138880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138884: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x138884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138888: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13888c: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x13888cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x138890: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138894: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x138894u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x138898: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13889c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13889cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x1388a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1388A0u;
    {
        const bool branch_taken_0x1388a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A0u;
        // 0x1388a4: 0xfe840018  sd          $a0, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a0) {
            ctx->pc = 0x138924u;
            goto label_138924;
        }
    }
    ctx->pc = 0x1388A8u;
label_1388a8:
    // 0x1388a8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1388a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1388ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1388ACu;
    {
        const bool branch_taken_0x1388ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388ACu;
        // 0x1388b0: 0x3c033026  lui         $v1, 0x3026 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12326 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388ac) {
            ctx->pc = 0x1388F0u;
            goto label_1388f0;
        }
    }
    ctx->pc = 0x1388B4u;
    // 0x1388b4: 0x3c03302e  lui         $v1, 0x302E
    ctx->pc = 0x1388b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12334 << 16));
    // 0x1388b8: 0x34028022  ori         $v0, $zero, 0x8022
    ctx->pc = 0x1388b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1388bc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1388bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1388c0: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1388c4: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1388c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1388c8: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x1388c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1388cc: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x1388ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1388d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1388d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1388d4: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x1388d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x1388d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1388d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1388dc: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x1388dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x1388e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1388e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1388e4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1388e4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x1388e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1388E8u;
    {
        const bool branch_taken_0x1388e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388E8u;
        // 0x1388ec: 0xfe840018  sd          $a0, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388e8) {
            ctx->pc = 0x138924u;
            goto label_138924;
        }
    }
    ctx->pc = 0x1388F0u;
label_1388f0:
    // 0x1388f0: 0x34028022  ori         $v0, $zero, 0x8022
    ctx->pc = 0x1388f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1388f4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1388f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1388f8: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1388f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1388fc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1388fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138900: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x138900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138904: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x138904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138908: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13890c: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x13890cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x138910: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138914: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x138914u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x138918: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13891c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13891cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x138920: 0xfe840018  sd          $a0, 0x18($s4)
    ctx->pc = 0x138920u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
label_138924:
    // 0x138924: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x138924u;
    {
        const bool branch_taken_0x138924 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x138928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138924u;
        // 0x138928: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138924) {
            ctx->pc = 0x13893Cu;
            goto label_13893c;
        }
    }
    ctx->pc = 0x13892Cu;
    // 0x13892c: 0x8f8284f8  lw          $v0, -0x7B08($gp)
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935800)));
    // 0x138930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x138934: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x138934u;
    {
        const bool branch_taken_0x138934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138934u;
        // 0x138938: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138934) {
            ctx->pc = 0x138950u;
            goto label_138950;
        }
    }
    ctx->pc = 0x13893Cu;
label_13893c:
    // 0x13893c: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x13893Cu;
    {
        const bool branch_taken_0x13893c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x13893c) {
            ctx->pc = 0x138950u;
            goto label_138950;
        }
    }
    ctx->pc = 0x138944u;
    // 0x138944: 0x8f8284fc  lw          $v0, -0x7B04($gp)
    ctx->pc = 0x138944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935804)));
    // 0x138948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x138948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13894c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x13894cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_138950:
    // 0x138950: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x138950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138954: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x138954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x138958: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x138958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13895c: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x13895Cu;
    {
        const bool branch_taken_0x13895c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x138960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13895Cu;
        // 0x138960: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13895c) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138964u;
    // 0x138964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138968: 0x2463ef50  addiu       $v1, $v1, -0x10B0
    ctx->pc = 0x138968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963024));
    // 0x13896c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138970: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x138970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138974: 0x400008  jr          $v0
    ctx->pc = 0x138974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13897Cu: goto label_13897c;
            case 0x138990u: goto label_138990;
            case 0x138A00u: goto label_138a00;
            case 0x138A14u: goto label_138a14;
            case 0x138A28u: goto label_138a28;
            case 0x138A3Cu: goto label_138a3c;
            case 0x138A50u: goto label_138a50;
            case 0x138A64u: goto label_138a64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138974u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13897Cu;
label_13897c:
    // 0x13897c: 0x8f8384bc  lw          $v1, -0x7B44($gp)
    ctx->pc = 0x13897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x138980: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138984: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138988: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x138988u;
    {
        const bool branch_taken_0x138988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138988u;
        // 0x13898c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138988) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138990u;
label_138990:
    // 0x138990: 0x8f8384cc  lw          $v1, -0x7B34($gp)
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x138994: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138998: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13899c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1389a0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1389a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1389a4: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1389a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1389a8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1389ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1389acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1389b0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1389B0u;
    {
        const bool branch_taken_0x1389b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389b0) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x1389B8u;
    // 0x1389b8: 0x8f8284d0  lw          $v0, -0x7B30($gp)
    ctx->pc = 0x1389b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x1389bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1389bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1389c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1389c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1389c4: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x1389c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1389c8: 0xc080874  jal         func_2021D0
    ctx->pc = 0x1389C8u;
    SET_GPR_U32(ctx, 31, 0x1389D0u);
    ctx->pc = 0x1389CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389C8u;
    // 0x1389cc: 0x24a5ef40  addiu       $a1, $a1, -0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1389C8u, 0x1389D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389D0u;
label_1389d0:
    // 0x1389d0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1389D0u;
    {
        const bool branch_taken_0x1389d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389D0u;
        // 0x1389d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389d0) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x1389D8u;
    // 0x1389d8: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1389dc: 0x24a5ef48  addiu       $a1, $a1, -0x10B8
    ctx->pc = 0x1389dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
    // 0x1389e0: 0xc0805e6  jal         func_201798
    ctx->pc = 0x1389E0u;
    SET_GPR_U32(ctx, 31, 0x1389E8u);
    ctx->pc = 0x1389E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389E0u;
    // 0x1389e4: 0x27a601d4  addiu       $a2, $sp, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x1389E0u, 0x1389E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389E8u;
label_1389e8:
    // 0x1389e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1389e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1389ec: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1389ECu;
    {
        const bool branch_taken_0x1389ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1389ec) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x1389F4u;
    // 0x1389f4: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1389f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1389f8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1389F8u;
    {
        const bool branch_taken_0x1389f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389F8u;
        // 0x1389fc: 0xaf8285c4  sw          $v0, -0x7A3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f8) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138A00u;
label_138a00:
    // 0x138a00: 0x8f8384b8  lw          $v1, -0x7B48($gp)
    ctx->pc = 0x138a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935736)));
    // 0x138a04: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a08: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a0c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x138A0Cu;
    {
        const bool branch_taken_0x138a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A0Cu;
        // 0x138a10: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a0c) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138A14u;
label_138a14:
    // 0x138a14: 0x8f8384c0  lw          $v1, -0x7B40($gp)
    ctx->pc = 0x138a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
    // 0x138a18: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a1c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138A20u;
    {
        const bool branch_taken_0x138a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A20u;
        // 0x138a24: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a20) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138A28u;
label_138a28:
    // 0x138a28: 0x8f8384c4  lw          $v1, -0x7B3C($gp)
    ctx->pc = 0x138a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935748)));
    // 0x138a2c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a30: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138A34u;
    {
        const bool branch_taken_0x138a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A34u;
        // 0x138a38: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a34) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138A3Cu;
label_138a3c:
    // 0x138a3c: 0x8f8384c8  lw          $v1, -0x7B38($gp)
    ctx->pc = 0x138a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935752)));
    // 0x138a40: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x138A48u;
    {
        const bool branch_taken_0x138a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A48u;
        // 0x138a4c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a48) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138A50u;
label_138a50:
    // 0x138a50: 0x8f8384d4  lw          $v1, -0x7B2C($gp)
    ctx->pc = 0x138a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935764)));
    // 0x138a54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a58: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x138A5Cu;
    {
        const bool branch_taken_0x138a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A5Cu;
        // 0x138a60: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a5c) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138A64u;
label_138a64:
    // 0x138a64: 0x8f8384d8  lw          $v1, -0x7B28($gp)
    ctx->pc = 0x138a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935768)));
    // 0x138a68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a70: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x138a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_138a74:
    // 0x138a74: 0x8f8784ec  lw          $a3, -0x7B14($gp)
    ctx->pc = 0x138a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935788)));
    // 0x138a78: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x138a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x138a7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x138a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138a80: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x138a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x138a84: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x138a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x138a88: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x138a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x138a8c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x138a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x138a90: 0x30067fff  andi        $a2, $zero, 0x7FFF
    ctx->pc = 0x138a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x138a94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x138a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x138a98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x138a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x138a9c: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x138a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x138aa0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x138aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x138aa4: 0xde880010  ld          $t0, 0x10($s4)
    ctx->pc = 0x138aa4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x138aa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x138aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x138aac: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x138aacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x138ab0: 0x64040080  daddiu      $a0, $zero, 0x80
    ctx->pc = 0x138ab0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x138ab4: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x138ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x138ab8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x138ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x138abc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x138abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138ac0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x138ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x138ac4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x138ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x138ac8: 0xfe880030  sd          $t0, 0x30($s4)
    ctx->pc = 0x138ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 8));
    // 0x138acc: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x138accu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x138ad0: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x138ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
    // 0x138ad4: 0xde880030  ld          $t0, 0x30($s4)
    ctx->pc = 0x138ad4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x138ad8: 0x1071024  and         $v0, $t0, $a3
    ctx->pc = 0x138ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x138adc: 0x839b8  dsll        $a3, $t0, 6
    ctx->pc = 0x138adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 6);
    // 0x138ae0: 0x73d7e  dsrl32      $a3, $a3, 21
    ctx->pc = 0x138ae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 21));
    // 0x138ae4: 0x30e707fc  andi        $a3, $a3, 0x7FC
    ctx->pc = 0x138ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2044);
    // 0x138ae8: 0x34e70005  ori         $a3, $a3, 0x5
    ctx->pc = 0x138ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5);
    // 0x138aec: 0x30e707ff  andi        $a3, $a3, 0x7FF
    ctx->pc = 0x138aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x138af0: 0x73bfc  dsll32      $a3, $a3, 15
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 15));
    // 0x138af4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x138af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x138af8: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x138af8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
    // 0x138afc: 0x96820030  lhu         $v0, 0x30($s4)
    ctx->pc = 0x138afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x138b00: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x138b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x138b04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138b08: 0xa6820030  sh          $v0, 0x30($s4)
    ctx->pc = 0x138b08u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x138b0c: 0x92820031  lbu         $v0, 0x31($s4)
    ctx->pc = 0x138b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x138b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x138b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x138b14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x138b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x138b18: 0xa2820031  sb          $v0, 0x31($s4)
    ctx->pc = 0x138b18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x138b1c: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x138b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138b20: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x138b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x138b24: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x138b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x138b28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B28u;
    {
        const bool branch_taken_0x138b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B28u;
        // 0x138b2c: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b28) {
            ctx->pc = 0x138B40u;
            goto label_138b40;
        }
    }
    ctx->pc = 0x138B30u;
    // 0x138b30: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x138b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138b38: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x138b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x138b3c: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x138b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_138b40:
    // 0x138b40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B40u;
    {
        const bool branch_taken_0x138b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b40) {
            ctx->pc = 0x138B54u;
            goto label_138b54;
        }
    }
    ctx->pc = 0x138B48u;
    // 0x138b48: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138b50: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_138b54:
    // 0x138b54: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B54u;
    {
        const bool branch_taken_0x138b54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b54) {
            ctx->pc = 0x138B68u;
            goto label_138b68;
        }
    }
    ctx->pc = 0x138B5Cu;
    // 0x138b5c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b60: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x138b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x138b64: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_138b68:
    // 0x138b68: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B68u;
    {
        const bool branch_taken_0x138b68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b68) {
            ctx->pc = 0x138B80u;
            goto label_138b80;
        }
    }
    ctx->pc = 0x138B70u;
    // 0x138b70: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138b78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x138B78u;
    {
        const bool branch_taken_0x138b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B78u;
        // 0x138b7c: 0xafa500e0  sw          $a1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b78) {
            ctx->pc = 0x138BA4u;
            goto label_138ba4;
        }
    }
    ctx->pc = 0x138B80u;
label_138b80:
    // 0x138b80: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138b88: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x138b8c: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x138b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x138b90: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B90u;
    {
        const bool branch_taken_0x138b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B90u;
        // 0x138b94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b90) {
            ctx->pc = 0x138BA8u;
            goto label_138ba8;
        }
    }
    ctx->pc = 0x138B98u;
    // 0x138b98: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138ba0: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_138ba4:
    // 0x138ba4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x138ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_138ba8:
    // 0x138ba8: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x138ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x138bac: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x138bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x138bb0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x138bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138bb4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x138bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x138bb8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x138BB8u;
    {
        const bool branch_taken_0x138bb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BB8u;
        // 0x138bbc: 0xafa500f0  sw          $a1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bb8) {
            ctx->pc = 0x138BD8u;
            goto label_138bd8;
        }
    }
    ctx->pc = 0x138BC0u;
    // 0x138bc0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x138bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138bc4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x138bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x138bc8: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x138bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x138bcc: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138bd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138bd4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_138bd8:
    // 0x138bd8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138bdc: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x138bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x138be0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x138be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x138be4: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x138be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x138be8: 0xd03818  mult        $a3, $a2, $s0
    ctx->pc = 0x138be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x138bec: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x138becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x138bf0: 0x2e060002  sltiu       $a2, $s0, 0x2
    ctx->pc = 0x138bf0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138bf4: 0x17280a  movz        $a1, $zero, $s7
    ctx->pc = 0x138bf4u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x138bf8: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x138bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x138bfc: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x138bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x138c00: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x138C00u;
    {
        const bool branch_taken_0x138c00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C00u;
        // 0x138c04: 0xafa50100  sw          $a1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c00) {
            ctx->pc = 0x138C14u;
            goto label_138c14;
        }
    }
    ctx->pc = 0x138C08u;
    // 0x138c08: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x138c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c0c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x138c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x138c10: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x138c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_138c14:
    // 0x138c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138c18: 0x16050004  bne         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138C18u;
    {
        const bool branch_taken_0x138c18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x138c18) {
            ctx->pc = 0x138C2Cu;
            goto label_138c2c;
        }
    }
    ctx->pc = 0x138C20u;
    // 0x138c20: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x138c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138c28: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x138c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_138c2c:
    // 0x138c2c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x138C2Cu;
    {
        const bool branch_taken_0x138c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C2Cu;
        // 0x138c30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c2c) {
            ctx->pc = 0x138C5Cu;
            goto label_138c5c;
        }
    }
    ctx->pc = 0x138C34u;
    // 0x138c34: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138C34u;
    {
        const bool branch_taken_0x138c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x138c34) {
            ctx->pc = 0x138C4Cu;
            goto label_138c4c;
        }
    }
    ctx->pc = 0x138C3Cu;
    // 0x138c3c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x138c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138c44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138C44u;
    {
        const bool branch_taken_0x138c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C44u;
        // 0x138c48: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c44) {
            ctx->pc = 0x138C58u;
            goto label_138c58;
        }
    }
    ctx->pc = 0x138C4Cu;
label_138c4c:
    // 0x138c4c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x138c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c50: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x138c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x138c54: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x138c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_138c58:
    // 0x138c58: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x138c58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138c5c:
    // 0x138c5c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x138C5Cu;
    {
        const bool branch_taken_0x138c5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c5c) {
            ctx->pc = 0x138C74u;
            goto label_138c74;
        }
    }
    ctx->pc = 0x138C64u;
    // 0x138c64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x138c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x138c68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138C68u;
    {
        const bool branch_taken_0x138c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C68u;
        // 0x138c6c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c68) {
            ctx->pc = 0x138C74u;
            goto label_138c74;
        }
    }
    ctx->pc = 0x138C70u;
    // 0x138c70: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_138c74:
    // 0x138c74: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x138c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x138c78: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x138c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138c7c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x138c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x138c80: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x138c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x138c84: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x138c84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138c88: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x138c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x138c8c: 0x8c8600a4  lw          $a2, 0xA4($a0)
    ctx->pc = 0x138c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x138c90: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x138c94: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x138c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x138c98: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x138c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x138c9c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x138ca0: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x138ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x138ca4: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x138ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x138ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138cac: 0xafa50184  sw          $a1, 0x184($sp)
    ctx->pc = 0x138cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
    // 0x138cb0: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x138cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x138cb4: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x138cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x138cb8: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x138cbc: 0x8c8600ac  lw          $a2, 0xAC($a0)
    ctx->pc = 0x138cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x138cc0: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x138cc4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x138cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x138cc8: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x138cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x138ccc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x138cd0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x138cd4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x138cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x138cd8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x138cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x138cdc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x138cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138ce0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x138CE0u;
    {
        const bool branch_taken_0x138ce0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x138CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CE0u;
        // 0x138ce4: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ce0) {
            ctx->pc = 0x138CF0u;
            goto label_138cf0;
        }
    }
    ctx->pc = 0x138CE8u;
    // 0x138ce8: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x138CE8u;
    {
        const bool branch_taken_0x138ce8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CE8u;
        // 0x138cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ce8) {
            ctx->pc = 0x138CFCu;
            goto label_138cfc;
        }
    }
    ctx->pc = 0x138CF0u;
label_138cf0:
    // 0x138cf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x138cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138cf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138CF4u;
    {
        const bool branch_taken_0x138cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CF4u;
        // 0x138cf8: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cf4) {
            ctx->pc = 0x138D00u;
            goto label_138d00;
        }
    }
    ctx->pc = 0x138CFCu;
label_138cfc:
    // 0x138cfc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x138cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_138d00:
    // 0x138d00: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x138d04: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x138d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138d08: 0x1020024e  beqz        $at, . + 4 + (0x24E << 2)
    ctx->pc = 0x138D08u;
    {
        const bool branch_taken_0x138d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D08u;
        // 0x138d0c: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d08) {
            ctx->pc = 0x139644u;
            goto label_139644;
        }
    }
    ctx->pc = 0x138D10u;
    // 0x138d10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x138d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138d14:
    // 0x138d14: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x138d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138d18: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x138d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138d1c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x138d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138d24: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x138d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138d28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d2c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x138d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x138d30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d34: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x138d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x138d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d3c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x138D3Cu;
    SET_GPR_U32(ctx, 31, 0x138D44u);
    ctx->pc = 0x138D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D3Cu;
    // 0x138d40: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x138D3Cu, 0x138D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D44u;
label_138d44:
    // 0x138d44: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x138d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x138d48: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x138d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x138d4c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x138d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x138d50: 0x248901b0  addiu       $t1, $a0, 0x1B0
    ctx->pc = 0x138d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x138d54: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x138d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138d58: 0x248a01c0  addiu       $t2, $a0, 0x1C0
    ctx->pc = 0x138d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x138d5c: 0x8c680080  lw          $t0, 0x80($v1)
    ctx->pc = 0x138d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x138d60: 0x248b01b8  addiu       $t3, $a0, 0x1B8
    ctx->pc = 0x138d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    // 0x138d64: 0x249301c8  addiu       $s3, $a0, 0x1C8
    ctx->pc = 0x138d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
    // 0x138d68: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x138d68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d6c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x138d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138d70: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x138d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d74: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x138d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138d78: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x138d78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x138d7c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x138d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d80: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x138d84: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x138d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x138d88: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x138d88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x138d8c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x138d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x138d90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x138d94: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x138d94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x138d98: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x138d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x138d9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x138d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x138da0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x138DA0u;
    {
        const bool branch_taken_0x138da0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x138DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DA0u;
        // 0x138da4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138da0) {
            ctx->pc = 0x138DB0u;
            goto label_138db0;
        }
    }
    ctx->pc = 0x138DA8u;
    // 0x138da8: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x138DA8u;
    {
        const bool branch_taken_0x138da8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x138da8) {
            ctx->pc = 0x138DB8u;
            goto label_138db8;
        }
    }
    ctx->pc = 0x138DB0u;
label_138db0:
    // 0x138db0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x138db4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x138db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_138db8:
    // 0x138db8: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x138db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x138dbc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x138dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138dc0: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x138dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
    // 0x138dc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x138dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138dc8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138dd0: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x138dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x138dd4: 0x3c096c00  lui         $t1, 0x6C00
    ctx->pc = 0x138dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27648 << 16));
    // 0x138dd8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x138dd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ddc: 0x27b101d8  addiu       $s1, $sp, 0x1D8
    ctx->pc = 0x138ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x138de0: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x138de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138de4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x138de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x138de8: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x138de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x138dec: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138df0: 0xc04e5bc  jal         func_1396F0
    ctx->pc = 0x138DF0u;
    SET_GPR_U32(ctx, 31, 0x138DF8u);
    ctx->pc = 0x138DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DF0u;
    // 0x138df4: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1396F0u, 0x138DF0u, 0x138DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DF8u;
label_138df8:
    // 0x138df8: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138dfc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x138dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138e00: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x138e00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x138e04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x138e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138e08: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e10: 0x24080214  addiu       $t0, $zero, 0x214
    ctx->pc = 0x138e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x138e14: 0x3c096c00  lui         $t1, 0x6C00
    ctx->pc = 0x138e14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27648 << 16));
    // 0x138e18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138e1c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138e20: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e24: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x138e24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x138e28: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e2c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138e30: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138e34: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x138e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x138e38: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x138e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x138e3c: 0xffa70010  sd          $a3, 0x10($sp)
    ctx->pc = 0x138e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    // 0x138e40: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x138e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e44: 0xc04e5bc  jal         func_1396F0
    ctx->pc = 0x138E44u;
    SET_GPR_U32(ctx, 31, 0x138E4Cu);
    ctx->pc = 0x138E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E44u;
    // 0x138e48: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1396F0u, 0x138E44u, 0x138E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E4Cu;
label_138e4c:
    // 0x138e4c: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x138e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e50: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x138e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x138e54: 0x344d0404  ori         $t5, $v0, 0x404
    ctx->pc = 0x138e54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x138e58: 0x3c0e5000  lui         $t6, 0x5000
    ctx->pc = 0x138e58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)20480 << 16));
    // 0x138e5c: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x138e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x138e60: 0x7bac0190  lq          $t4, 0x190($sp)
    ctx->pc = 0x138e60u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x138e64: 0x34478017  ori         $a3, $v0, 0x8017
    ctx->pc = 0x138e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32791);
    // 0x138e68: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x138e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x138e6c: 0x26890020  addiu       $t1, $s4, 0x20
    ctx->pc = 0x138e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x138e70: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x138e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138e74: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x138e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x138e78: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138e7c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x138e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x138e80: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x138e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x138e84: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138e88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x138e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138e8c: 0x8fab01d8  lw          $t3, 0x1D8($sp)
    ctx->pc = 0x138e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138e90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x138e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x138e94: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x138e94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
    // 0x138e98: 0x7d6c0000  sq          $t4, 0x0($t3)
    ctx->pc = 0x138e98u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 12));
    // 0x138e9c: 0x8fab01d8  lw          $t3, 0x1D8($sp)
    ctx->pc = 0x138e9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138ea0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x138ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x138ea4: 0xafab01d8  sw          $t3, 0x1D8($sp)
    ctx->pc = 0x138ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 11));
    // 0x138ea8: 0x8fab01d8  lw          $t3, 0x1D8($sp)
    ctx->pc = 0x138ea8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138eac: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x138eacu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138eb0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x138eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138eb4: 0xad690004  sw          $t1, 0x4($t3)
    ctx->pc = 0x138eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 9));
    // 0x138eb8: 0xa5680000  sh          $t0, 0x0($t3)
    ctx->pc = 0x138eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x138ebc: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x138ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x138ec0: 0xad67000c  sw          $a3, 0xC($t3)
    ctx->pc = 0x138ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 7));
    // 0x138ec4: 0x8fa801d8  lw          $t0, 0x1D8($sp)
    ctx->pc = 0x138ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138ec8: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x138ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x138ecc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x138eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x138ed0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x138ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x138ed4: 0xafa801d8  sw          $t0, 0x1D8($sp)
    ctx->pc = 0x138ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 8));
    // 0x138ed8: 0x8fa701d8  lw          $a3, 0x1D8($sp)
    ctx->pc = 0x138ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138edc: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x138edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x138ee0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x138ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138ee4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x138ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x138ee8: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x138ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x138eec: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x138eecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x138ef0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x138ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x138ef4: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138ef8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x138ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x138efc: 0xafa501d8  sw          $a1, 0x1D8($sp)
    ctx->pc = 0x138efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 5));
    // 0x138f00: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x138f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138f04: 0xa0aa0003  sb          $t2, 0x3($a1)
    ctx->pc = 0x138f04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138f08: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x138f08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138f0c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x138f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x138f10: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x138f10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x138f14: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x138f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x138f18: 0xacae000c  sw          $t6, 0xC($a1)
    ctx->pc = 0x138f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 14));
    // 0x138f1c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x138f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x138f20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138f24: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x138f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x138f28: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x138f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138f2c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x138f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x138f30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x138f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x138f34: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x138F34u;
    {
        const bool branch_taken_0x138f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f34) {
            ctx->pc = 0x138FA4u;
            goto label_138fa4;
        }
    }
    ctx->pc = 0x138F3Cu;
    // 0x138f3c: 0x8f8585b0  lw          $a1, -0x7A50($gp)
    ctx->pc = 0x138f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x138f40: 0x3c026c41  lui         $v0, 0x6C41
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27713 << 16));
    // 0x138f44: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x138f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f48: 0x344380bf  ori         $v1, $v0, 0x80BF
    ctx->pc = 0x138f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32959);
    // 0x138f4c: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x138f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x138f50: 0x344282bf  ori         $v0, $v0, 0x82BF
    ctx->pc = 0x138f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33471);
    // 0x138f54: 0xa0ca0003  sb          $t2, 0x3($a2)
    ctx->pc = 0x138f54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138f58: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x138f58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138f5c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x138f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x138f60: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x138f60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x138f64: 0xaccd0008  sw          $t5, 0x8($a2)
    ctx->pc = 0x138f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x138f68: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x138f68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x138f6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x138f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f70: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x138f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x138f74: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x138f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x138f78: 0x8f8385b0  lw          $v1, -0x7A50($gp)
    ctx->pc = 0x138f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x138f7c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x138f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f80: 0xa0aa0003  sb          $t2, 0x3($a1)
    ctx->pc = 0x138f80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x138f84: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x138f84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138f88: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x138f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x138f8c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x138f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x138f90: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x138f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
    // 0x138f94: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x138f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x138f98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138f9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x138fa0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x138fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_138fa4:
    // 0x138fa4: 0x0  nop
    ctx->pc = 0x138fa4u;
    // NOP
    // 0x138fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x138fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fac: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x138FACu;
    {
        const bool branch_taken_0x138fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FACu;
        // 0x138fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fac) {
            ctx->pc = 0x1395E8u;
            goto label_1395e8;
        }
    }
    ctx->pc = 0x138FB4u;
label_138fb4:
    // 0x138fb4: 0x0  nop
    ctx->pc = 0x138fb4u;
    // NOP
    // 0x138fb8: 0x15300002  bne         $t1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138FB8u;
    {
        const bool branch_taken_0x138fb8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 16));
        ctx->pc = 0x138FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FB8u;
        // 0x138fbc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fb8) {
            ctx->pc = 0x138FC4u;
            goto label_138fc4;
        }
    }
    ctx->pc = 0x138FC0u;
    // 0x138fc0: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_138fc4:
    // 0x138fc4: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x138fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138fc8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x138fcc: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x138fd0: 0x10830001  beq         $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x138FD0u;
    {
        const bool branch_taken_0x138fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138fd0) {
            ctx->pc = 0x138FD8u;
            goto label_138fd8;
        }
    }
    ctx->pc = 0x138FD8u;
label_138fd8:
    // 0x138fd8: 0x15300002  bne         $t1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138FD8u;
    {
        const bool branch_taken_0x138fd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 16));
        ctx->pc = 0x138FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FD8u;
        // 0x138fdc: 0x24070022  addiu       $a3, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fd8) {
            ctx->pc = 0x138FE4u;
            goto label_138fe4;
        }
    }
    ctx->pc = 0x138FE0u;
    // 0x138fe0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x138fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_138fe4:
    // 0x138fe4: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x138fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138fe8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138FE8u;
    {
        const bool branch_taken_0x138fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138fe8) {
            ctx->pc = 0x138FF8u;
            goto label_138ff8;
        }
    }
    ctx->pc = 0x138FF0u;
    // 0x138ff0: 0x15300011  bne         $t1, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x138FF0u;
    {
        const bool branch_taken_0x138ff0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 16));
        if (branch_taken_0x138ff0) {
            ctx->pc = 0x139038u;
            goto label_139038;
        }
    }
    ctx->pc = 0x138FF8u;
label_138ff8:
    // 0x138ff8: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x138ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138ffc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x138ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139000: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x139004: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x139004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x139008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13900c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x13900cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x139010: 0x3463801f  ori         $v1, $v1, 0x801F
    ctx->pc = 0x139010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32799);
    // 0x139014: 0xa1460003  sb          $a2, 0x3($t2)
    ctx->pc = 0x139014u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139018: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x139018u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13901c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x13901cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x139020: 0xa5450000  sh          $a1, 0x0($t2)
    ctx->pc = 0x139020u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x139024: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x139024u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x139028: 0xad43000c  sw          $v1, 0xC($t2)
    ctx->pc = 0x139028u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
    // 0x13902c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139030: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139034: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_139038:
    // 0x139038: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13903c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x13903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x139040: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x139040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x139044: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x139044u;
    {
        const bool branch_taken_0x139044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139044) {
            ctx->pc = 0x1390ACu;
            goto label_1390ac;
        }
    }
    ctx->pc = 0x13904Cu;
    // 0x13904c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x139050: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x139050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x139054: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139058: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x139058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13905c: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x13905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x139060: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139064: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x139064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x139068: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x139068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x13906c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x139070: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x139070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139074: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x139074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x139078: 0x65842  srl         $t3, $a2, 1
    ctx->pc = 0x139078u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x13907c: 0x34aa0104  ori         $t2, $a1, 0x104
    ctx->pc = 0x13907cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)260);
    // 0x139080: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x139080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x139084: 0x3c056d00  lui         $a1, 0x6D00
    ctx->pc = 0x139084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27904 << 16));
    // 0x139088: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x139088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x13908c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x13908cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x139090: 0x34a38020  ori         $v1, $a1, 0x8020
    ctx->pc = 0x139090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32800);
    // 0x139094: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x139094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x139098: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x139098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x13909c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x13909cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1390a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1390a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1390a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1390a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1390a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1390ac:
    // 0x1390ac: 0x0  nop
    ctx->pc = 0x1390acu;
    // NOP
    // 0x1390b0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1390b4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1390b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1390b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1390b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1390bc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1390BCu;
    {
        const bool branch_taken_0x1390bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1390bc) {
            ctx->pc = 0x139130u;
            goto label_139130;
        }
    }
    ctx->pc = 0x1390C4u;
    // 0x1390c4: 0x16a0001a  bnez        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x1390C4u;
    {
        const bool branch_taken_0x1390c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1390c4) {
            ctx->pc = 0x139130u;
            goto label_139130;
        }
    }
    ctx->pc = 0x1390CCu;
    // 0x1390cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1390ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1390d0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1390d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1390d4: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1390d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1390d8: 0x24ea0001  addiu       $t2, $a3, 0x1
    ctx->pc = 0x1390d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1390dc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1390dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1390e0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1390e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1390e4: 0x1465024  and         $t2, $t2, $a2
    ctx->pc = 0x1390e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x1390e8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1390e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1390ec: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1390f0: 0x34cb0104  ori         $t3, $a2, 0x104
    ctx->pc = 0x1390f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)260);
    // 0x1390f4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1390f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1390f8: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1390f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1390fc: 0x3c066d00  lui         $a2, 0x6D00
    ctx->pc = 0x1390fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27904 << 16));
    // 0x139100: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x139100u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139104: 0x34c48021  ori         $a0, $a2, 0x8021
    ctx->pc = 0x139104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32801);
    // 0x139108: 0x8c6301a8  lw          $v1, 0x1A8($v1)
    ctx->pc = 0x139108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x13910c: 0x1442025  or          $a0, $t2, $a0
    ctx->pc = 0x13910cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x139110: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139114: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x139114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x139118: 0xa4ac0000  sh          $t4, 0x0($a1)
    ctx->pc = 0x139118u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x13911c: 0xacab0008  sw          $t3, 0x8($a1)
    ctx->pc = 0x13911cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 11));
    // 0x139120: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x139120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x139124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139128: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13912c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13912cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_139130:
    // 0x139130: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x139134: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x139134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x139138: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x139138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13913c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13913Cu;
    {
        const bool branch_taken_0x13913c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13913c) {
            ctx->pc = 0x1391A8u;
            goto label_1391a8;
        }
    }
    ctx->pc = 0x139144u;
    // 0x139144: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139148: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x139148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x13914c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x13914cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x139150: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x139150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x139154: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x139158: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x139158u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13915c: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x13915cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x139160: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x139160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x139164: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x139164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139168: 0xaa5821  addu        $t3, $a1, $t2
    ctx->pc = 0x139168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x13916c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x13916cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x139170: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x139170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139174: 0x34ca0104  ori         $t2, $a2, 0x104
    ctx->pc = 0x139174u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)260);
    // 0x139178: 0x3c056e00  lui         $a1, 0x6E00
    ctx->pc = 0x139178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28160 << 16));
    // 0x13917c: 0xac8b0004  sw          $t3, 0x4($a0)
    ctx->pc = 0x13917cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 11));
    // 0x139180: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x139180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x139184: 0x33480  sll         $a2, $v1, 18
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
    // 0x139188: 0x34a5c022  ori         $a1, $a1, 0xC022
    ctx->pc = 0x139188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49186);
    // 0x13918c: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x13918cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x139190: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x139190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x139194: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x139194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x139198: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13919c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1391a0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1391A0u;
    {
        const bool branch_taken_0x1391a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391A0u;
        // 0x1391a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391a0) {
            ctx->pc = 0x13927Cu;
            goto label_13927c;
        }
    }
    ctx->pc = 0x1391A8u;
label_1391a8:
    // 0x1391a8: 0x29210002  slti        $at, $t1, 0x2
    ctx->pc = 0x1391a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1391ac: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x1391ACu;
    {
        const bool branch_taken_0x1391ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1391ac) {
            ctx->pc = 0x13927Cu;
            goto label_13927c;
        }
    }
    ctx->pc = 0x1391B4u;
    // 0x1391b4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1391b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1391B8u;
    {
        const bool branch_taken_0x1391b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1391b8) {
            ctx->pc = 0x139220u;
            goto label_139220;
        }
    }
    ctx->pc = 0x1391C0u;
    // 0x1391c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1391c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1391c4: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x1391c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1391c8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1391cc: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x1391ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1391d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1391d4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1391d8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1391d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1391dc: 0x24426650  addiu       $v0, $v0, 0x6650
    ctx->pc = 0x1391dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26192));
    // 0x1391e0: 0x34860104  ori         $a2, $a0, 0x104
    ctx->pc = 0x1391e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x1391e4: 0x55082  srl         $t2, $a1, 2
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1391e8: 0x3c046e00  lui         $a0, 0x6E00
    ctx->pc = 0x1391e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28160 << 16));
    // 0x1391ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1391ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1391f0: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x1391f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x1391f4: 0x3484c022  ori         $a0, $a0, 0xC022
    ctx->pc = 0x1391f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49186);
    // 0x1391f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1391f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1391fc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1391fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x139200: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x139200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x139204: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x139204u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x139208: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x139208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x13920c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x13920cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x139210: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139214: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139218: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x139218u;
    {
        const bool branch_taken_0x139218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139218u;
        // 0x13921c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139218) {
            ctx->pc = 0x13927Cu;
            goto label_13927c;
        }
    }
    ctx->pc = 0x139220u;
label_139220:
    // 0x139220: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x139220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139224: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x139224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139228: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x139228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x13922c: 0x24e50003  addiu       $a1, $a3, 0x3
    ctx->pc = 0x13922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x139230: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x139230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x139234: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x139234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x139238: 0x244266e0  addiu       $v0, $v0, 0x66E0
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26336));
    // 0x13923c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x139240: 0x55082  srl         $t2, $a1, 2
    ctx->pc = 0x139240u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x139244: 0x34860104  ori         $a2, $a0, 0x104
    ctx->pc = 0x139244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x139248: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x139248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x13924c: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x13924cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x139250: 0x3c046e00  lui         $a0, 0x6E00
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28160 << 16));
    // 0x139254: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139258: 0x3484c022  ori         $a0, $a0, 0xC022
    ctx->pc = 0x139258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49186);
    // 0x13925c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13925cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x139260: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x139260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x139264: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x139264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x139268: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x139268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x13926c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x13926cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x139270: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139274: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139278: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_13927c:
    // 0x13927c: 0x0  nop
    ctx->pc = 0x13927cu;
    // NOP
    // 0x139280: 0x16a00017  bnez        $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x139280u;
    {
        const bool branch_taken_0x139280 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x139280) {
            ctx->pc = 0x1392E0u;
            goto label_1392e0;
        }
    }
    ctx->pc = 0x139288u;
    // 0x139288: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13928c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13928cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x139290: 0x34650104  ori         $a1, $v1, 0x104
    ctx->pc = 0x139290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)260);
    // 0x139294: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x139294u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139298: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x139298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x13929c: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x13929cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1392a0: 0x34638023  ori         $v1, $v1, 0x8023
    ctx->pc = 0x1392a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32803);
    // 0x1392a4: 0x25d5021  addu        $t2, $s2, $sp
    ctx->pc = 0x1392a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1392a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1392a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1392ac: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1392b0: 0xa04b0003  sb          $t3, 0x3($v0)
    ctx->pc = 0x1392b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x1392b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1392b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1392b8: 0x8d440180  lw          $a0, 0x180($t2)
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 384)));
    // 0x1392bc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1392bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1392c0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1392c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1392c4: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x1392c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1392c8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1392c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1392cc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1392ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1392d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1392d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1392d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1392d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1392D8u;
    {
        const bool branch_taken_0x1392d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392D8u;
        // 0x1392dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392d8) {
            ctx->pc = 0x13931Cu;
            goto label_13931c;
        }
    }
    ctx->pc = 0x1392E0u;
label_1392e0:
    // 0x1392e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1392e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1392e4: 0x2c91018  mult        $v0, $s6, $t1
    ctx->pc = 0x1392e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1392e8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1392ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1392ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1392f0: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1392f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1392f4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1392f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1392f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1392f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1392fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1392fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139300: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x139300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x139304: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x139304u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139308: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x139308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x13930c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x13930cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x139310: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139314: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139318: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_13931c:
    // 0x13931c: 0x0  nop
    ctx->pc = 0x13931cu;
    // NOP
    // 0x139320: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x139320u;
    {
        const bool branch_taken_0x139320 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x139320) {
            ctx->pc = 0x1393B8u;
            goto label_1393b8;
        }
    }
    ctx->pc = 0x139328u;
    // 0x139328: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x139328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13932c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x139330: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x139334: 0x34ac0404  ori         $t4, $a1, 0x404
    ctx->pc = 0x139334u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x139338: 0x3c066c00  lui         $a2, 0x6C00
    ctx->pc = 0x139338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27648 << 16));
    // 0x13933c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139340: 0x34ca81de  ori         $t2, $a2, 0x81DE
    ctx->pc = 0x139340u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33246);
    // 0x139344: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x139344u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x139348: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x139348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13934c: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x13934cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x139350: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x139354: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x139354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x139358: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x139358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13935c: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x13935cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x139360: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x139360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x139364: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x139364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139368: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13936c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139370: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x139370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x139374: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x139374u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x139378: 0xacac0008  sw          $t4, 0x8($a1)
    ctx->pc = 0x139378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 12));
    // 0x13937c: 0xacaa000c  sw          $t2, 0xC($a1)
    ctx->pc = 0x13937cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 10));
    // 0x139380: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139384: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139388: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13938c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139390: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139394: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x139394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139398: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x139398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13939c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13939cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1393a0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1393a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1393a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1393a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1393a8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1393a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1393ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1393acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1393b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1393b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1393b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1393b8:
    // 0x1393b8: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1393b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1393bc: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1393bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1393c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1393c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1393c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1393C4u;
    {
        const bool branch_taken_0x1393c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393c4) {
            ctx->pc = 0x139414u;
            goto label_139414;
        }
    }
    ctx->pc = 0x1393CCu;
    // 0x1393cc: 0x8f8685c0  lw          $a2, -0x7A40($gp)
    ctx->pc = 0x1393ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x1393d0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1393d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1393d4: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1393d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1393d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1393d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1393dc: 0x34440104  ori         $a0, $v0, 0x104
    ctx->pc = 0x1393dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)260);
    // 0x1393e0: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1393e4: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x1393e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x1393e8: 0x34428020  ori         $v0, $v0, 0x8020
    ctx->pc = 0x1393e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32800);
    // 0x1393ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1393ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1393f0: 0xa1450003  sb          $a1, 0x3($t2)
    ctx->pc = 0x1393f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1393f4: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1393f4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1393f8: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x1393f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
    // 0x1393fc: 0xa5470000  sh          $a3, 0x0($t2)
    ctx->pc = 0x1393fcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x139400: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x139400u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x139404: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x139404u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x139408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13940c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139410: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_139414:
    // 0x139414: 0x0  nop
    ctx->pc = 0x139414u;
    // NOP
    // 0x139418: 0x8f8384e4  lw          $v1, -0x7B1C($gp)
    ctx->pc = 0x139418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x13941c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139420: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139424: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x139424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x139428: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x139428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13942c: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x13942cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139430: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x139430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139434: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x139434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x139438: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x139438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13943c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x139440: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x139440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x139444: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139448: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13944c: 0x12a00064  beqz        $s5, . + 4 + (0x64 << 2)
    ctx->pc = 0x13944Cu;
    {
        const bool branch_taken_0x13944c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x139450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13944Cu;
        // 0x139450: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13944c) {
            ctx->pc = 0x1395E0u;
            goto label_1395e0;
        }
    }
    ctx->pc = 0x139454u;
    // 0x139454: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x139454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x139458: 0x2c92018  mult        $a0, $s6, $t1
    ctx->pc = 0x139458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13945c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x139460: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x139460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x139464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139468: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x139468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
    // 0x13946c: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x13946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x139470: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x139470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139474: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139478: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13947c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x13947cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139480: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x139480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x139484: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x139484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x139488: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x139488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13948c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139490: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x139490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x139494: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x139498: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x139498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x13949c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1394a0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1394A0u;
    {
        const bool branch_taken_0x1394a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1394A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394A0u;
        // 0x1394a4: 0x27a501dc  addiu       $a1, $sp, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394a0) {
            ctx->pc = 0x13952Cu;
            goto label_13952c;
        }
    }
    ctx->pc = 0x1394A8u;
    // 0x1394a8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1394a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1394ac: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1394acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1394b0: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x1394b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x1394b4: 0x3c0c6c00  lui         $t4, 0x6C00
    ctx->pc = 0x1394b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)27648 << 16));
    // 0x1394b8: 0x358d8021  ori         $t5, $t4, 0x8021
    ctx->pc = 0x1394b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32801);
    // 0x1394bc: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x1394bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1394c0: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1394c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1394c4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1394c8: 0x354a0104  ori         $t2, $t2, 0x104
    ctx->pc = 0x1394c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)260);
    // 0x1394cc: 0x16d6825  or          $t5, $t3, $t5
    ctx->pc = 0x1394ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x1394d0: 0x358c8121  ori         $t4, $t4, 0x8121
    ctx->pc = 0x1394d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)33057);
    // 0x1394d4: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x1394d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1394d8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1394d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1394dc: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1394dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1394e0: 0x8c6301a8  lw          $v1, 0x1A8($v1)
    ctx->pc = 0x1394e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x1394e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1394e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1394e8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1394e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1394ec: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x1394ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1394f0: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x1394f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
    // 0x1394f4: 0xaccd000c  sw          $t5, 0xC($a2)
    ctx->pc = 0x1394f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 13));
    // 0x1394f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1394f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1394fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139500: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x139500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x139504: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x139504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139508: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x139508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x13950c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x13950cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139510: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x139510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x139514: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x139514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x139518: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x139518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x13951c: 0xac4b000c  sw          $t3, 0xC($v0)
    ctx->pc = 0x13951cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 11));
    // 0x139520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x139520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139524: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139528: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x139528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_13952c:
    // 0x13952c: 0x0  nop
    ctx->pc = 0x13952cu;
    // NOP
    // 0x139530: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x139530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139534: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x139534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139538: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x13953c: 0x3c0d6c00  lui         $t5, 0x6C00
    ctx->pc = 0x13953cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)27648 << 16));
    // 0x139540: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x139544: 0x35ae8023  ori         $t6, $t5, 0x8023
    ctx->pc = 0x139544u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32803);
    // 0x139548: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x13954c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x139550: 0x354a0104  ori         $t2, $t2, 0x104
    ctx->pc = 0x139550u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)260);
    // 0x139554: 0x16e7025  or          $t6, $t3, $t6
    ctx->pc = 0x139554u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) | GPR_U64(ctx, 14));
    // 0x139558: 0x35ad8123  ori         $t5, $t5, 0x8123
    ctx->pc = 0x139558u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)33059);
    // 0x13955c: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x13955cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x139560: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x139560u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x139564: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x139564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139568: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x139568u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x13956c: 0x8c630180  lw          $v1, 0x180($v1)
    ctx->pc = 0x13956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x139570: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x139570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139574: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x139574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x139578: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x139578u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x13957c: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x13957cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
    // 0x139580: 0xacce000c  sw          $t6, 0xC($a2)
    ctx->pc = 0x139580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 14));
    // 0x139584: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139588: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x139588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13958c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13958cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x139590: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x139590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139594: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x139594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x139598: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13959c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13959cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1395a0: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x1395a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1395a4: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x1395a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x1395a8: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x1395a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x1395ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1395acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1395b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1395b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1395b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1395b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1395b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1395bc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1395bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1395c0: 0xa04c0003  sb          $t4, 0x3($v0)
    ctx->pc = 0x1395c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x1395c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1395c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1395c8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1395c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1395cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1395ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1395d0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1395d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1395d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1395d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1395dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1395dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1395e0:
    // 0x1395e0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1395e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1395e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1395e8:
    // 0x1395e8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1395e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1395ec: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1395ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1395f0: 0x1440fe70  bnez        $v0, . + 4 + (-0x190 << 2)
    ctx->pc = 0x1395F0u;
    {
        const bool branch_taken_0x1395f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1395f0) {
            ctx->pc = 0x138FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138fb4;
        }
    }
    ctx->pc = 0x1395F8u;
    // 0x1395f8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1395f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1395fc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x139600: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x139600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139604: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x139604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x139608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13960c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x13960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x139610: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x139610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x139614: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x139614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x139618: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x139618u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13961c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13961cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x139620: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x139620u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x139624: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x139624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x139628: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x139628u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13962c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x13962cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x139630: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x139630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x139634: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x139634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139638: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x139638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13963c: 0x1440fdb5  bnez        $v0, . + 4 + (-0x24B << 2)
    ctx->pc = 0x13963Cu;
    {
        const bool branch_taken_0x13963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13963Cu;
        // 0x139640: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13963c) {
            ctx->pc = 0x138D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138d14;
        }
    }
    ctx->pc = 0x139644u;
label_139644:
    // 0x139644: 0x0  nop
    ctx->pc = 0x139644u;
    // NOP
    // 0x139648: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x139648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13964c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139650: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139650u;
    {
        const bool branch_taken_0x139650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x139654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139650u;
        // 0x139654: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139650) {
            ctx->pc = 0x139668u;
            goto label_139668;
        }
    }
    ctx->pc = 0x139658u;
    // 0x139658: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x139658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x13965c: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x13965cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x139660: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x139664: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x139664u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_139668:
    // 0x139668: 0xc04e5d4  jal         func_139750
    ctx->pc = 0x139668u;
    SET_GPR_U32(ctx, 31, 0x139670u);
    ctx->pc = 0x139750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139750u, 0x139668u, 0x139670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139670u;
label_139670:
    // 0x139670: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x139674: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x139674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x139678: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x13967c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13967cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x139680: 0xc04e668  jal         func_1399A0
    ctx->pc = 0x139680u;
    SET_GPR_U32(ctx, 31, 0x139688u);
    ctx->pc = 0x139684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139680u;
    // 0x139684: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1399A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1399A0u, 0x139680u, 0x139688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139688u;
label_139688:
    // 0x139688: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13968c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x139690: 0xc04e5ec  jal         func_1397B0
    ctx->pc = 0x139690u;
    SET_GPR_U32(ctx, 31, 0x139698u);
    ctx->pc = 0x139694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139690u;
    // 0x139694: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1397B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1397B0u, 0x139690u, 0x139698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139698u;
label_139698:
    // 0x139698: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x13969c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x13969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1396a0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1396a4: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1396a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1396a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1396a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1396ac: 0xc04e678  jal         func_1399E0
    ctx->pc = 0x1396ACu;
    SET_GPR_U32(ctx, 31, 0x1396B4u);
    ctx->pc = 0x1396B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396ACu;
    // 0x1396b0: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1399E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1399E0u, 0x1396ACu, 0x1396B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396B4u;
label_1396b4:
    // 0x1396b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1396b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1396b8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1396b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1396bc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1396bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1396c0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1396c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1396c4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1396c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1396c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1396c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1396cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1396ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1396d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1396d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1396d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1396d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1396d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1396d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1396dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1396DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1396E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396DCu;
        // 0x1396e0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1396DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1396E4u;
}
