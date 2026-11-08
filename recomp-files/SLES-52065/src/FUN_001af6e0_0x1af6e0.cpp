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

// Function: FUN_001af6e0
// Address: 0x1af6e0 - 0x1af93c
void FUN_001af6e0_0x1af6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af6e0_0x1af6e0");
#endif

    switch (ctx->pc) {
        case 0x1af6e0u: goto label_1af6e0;
        case 0x1af6e4u: goto label_1af6e4;
        case 0x1af6e8u: goto label_1af6e8;
        case 0x1af6ecu: goto label_1af6ec;
        case 0x1af6f0u: goto label_1af6f0;
        case 0x1af6f4u: goto label_1af6f4;
        case 0x1af6f8u: goto label_1af6f8;
        case 0x1af6fcu: goto label_1af6fc;
        case 0x1af700u: goto label_1af700;
        case 0x1af704u: goto label_1af704;
        case 0x1af708u: goto label_1af708;
        case 0x1af70cu: goto label_1af70c;
        case 0x1af710u: goto label_1af710;
        case 0x1af714u: goto label_1af714;
        case 0x1af718u: goto label_1af718;
        case 0x1af71cu: goto label_1af71c;
        case 0x1af720u: goto label_1af720;
        case 0x1af724u: goto label_1af724;
        case 0x1af728u: goto label_1af728;
        case 0x1af72cu: goto label_1af72c;
        case 0x1af730u: goto label_1af730;
        case 0x1af734u: goto label_1af734;
        case 0x1af738u: goto label_1af738;
        case 0x1af73cu: goto label_1af73c;
        case 0x1af740u: goto label_1af740;
        case 0x1af744u: goto label_1af744;
        case 0x1af748u: goto label_1af748;
        case 0x1af74cu: goto label_1af74c;
        case 0x1af750u: goto label_1af750;
        case 0x1af754u: goto label_1af754;
        case 0x1af758u: goto label_1af758;
        case 0x1af75cu: goto label_1af75c;
        case 0x1af760u: goto label_1af760;
        case 0x1af764u: goto label_1af764;
        case 0x1af768u: goto label_1af768;
        case 0x1af76cu: goto label_1af76c;
        case 0x1af770u: goto label_1af770;
        case 0x1af774u: goto label_1af774;
        case 0x1af778u: goto label_1af778;
        case 0x1af77cu: goto label_1af77c;
        case 0x1af780u: goto label_1af780;
        case 0x1af784u: goto label_1af784;
        case 0x1af788u: goto label_1af788;
        case 0x1af78cu: goto label_1af78c;
        case 0x1af790u: goto label_1af790;
        case 0x1af794u: goto label_1af794;
        case 0x1af798u: goto label_1af798;
        case 0x1af79cu: goto label_1af79c;
        case 0x1af7a0u: goto label_1af7a0;
        case 0x1af7a4u: goto label_1af7a4;
        case 0x1af7a8u: goto label_1af7a8;
        case 0x1af7acu: goto label_1af7ac;
        case 0x1af7b0u: goto label_1af7b0;
        case 0x1af7b4u: goto label_1af7b4;
        case 0x1af7b8u: goto label_1af7b8;
        case 0x1af7bcu: goto label_1af7bc;
        case 0x1af7c0u: goto label_1af7c0;
        case 0x1af7c4u: goto label_1af7c4;
        case 0x1af7c8u: goto label_1af7c8;
        case 0x1af7ccu: goto label_1af7cc;
        case 0x1af7d0u: goto label_1af7d0;
        case 0x1af7d4u: goto label_1af7d4;
        case 0x1af7d8u: goto label_1af7d8;
        case 0x1af7dcu: goto label_1af7dc;
        case 0x1af7e0u: goto label_1af7e0;
        case 0x1af7e4u: goto label_1af7e4;
        case 0x1af7e8u: goto label_1af7e8;
        case 0x1af7ecu: goto label_1af7ec;
        case 0x1af7f0u: goto label_1af7f0;
        case 0x1af7f4u: goto label_1af7f4;
        case 0x1af7f8u: goto label_1af7f8;
        case 0x1af7fcu: goto label_1af7fc;
        case 0x1af800u: goto label_1af800;
        case 0x1af804u: goto label_1af804;
        case 0x1af808u: goto label_1af808;
        case 0x1af80cu: goto label_1af80c;
        case 0x1af810u: goto label_1af810;
        case 0x1af814u: goto label_1af814;
        case 0x1af818u: goto label_1af818;
        case 0x1af81cu: goto label_1af81c;
        case 0x1af820u: goto label_1af820;
        case 0x1af824u: goto label_1af824;
        case 0x1af828u: goto label_1af828;
        case 0x1af82cu: goto label_1af82c;
        case 0x1af830u: goto label_1af830;
        case 0x1af834u: goto label_1af834;
        case 0x1af838u: goto label_1af838;
        case 0x1af83cu: goto label_1af83c;
        case 0x1af840u: goto label_1af840;
        case 0x1af844u: goto label_1af844;
        case 0x1af848u: goto label_1af848;
        case 0x1af84cu: goto label_1af84c;
        case 0x1af850u: goto label_1af850;
        case 0x1af854u: goto label_1af854;
        case 0x1af858u: goto label_1af858;
        case 0x1af85cu: goto label_1af85c;
        case 0x1af860u: goto label_1af860;
        case 0x1af864u: goto label_1af864;
        case 0x1af868u: goto label_1af868;
        case 0x1af86cu: goto label_1af86c;
        case 0x1af870u: goto label_1af870;
        case 0x1af874u: goto label_1af874;
        case 0x1af878u: goto label_1af878;
        case 0x1af87cu: goto label_1af87c;
        case 0x1af880u: goto label_1af880;
        case 0x1af884u: goto label_1af884;
        case 0x1af888u: goto label_1af888;
        case 0x1af88cu: goto label_1af88c;
        case 0x1af890u: goto label_1af890;
        case 0x1af894u: goto label_1af894;
        case 0x1af898u: goto label_1af898;
        case 0x1af89cu: goto label_1af89c;
        case 0x1af8a0u: goto label_1af8a0;
        case 0x1af8a4u: goto label_1af8a4;
        case 0x1af8a8u: goto label_1af8a8;
        case 0x1af8acu: goto label_1af8ac;
        case 0x1af8b0u: goto label_1af8b0;
        case 0x1af8b4u: goto label_1af8b4;
        case 0x1af8b8u: goto label_1af8b8;
        case 0x1af8bcu: goto label_1af8bc;
        case 0x1af8c0u: goto label_1af8c0;
        case 0x1af8c4u: goto label_1af8c4;
        case 0x1af8c8u: goto label_1af8c8;
        case 0x1af8ccu: goto label_1af8cc;
        case 0x1af8d0u: goto label_1af8d0;
        case 0x1af8d4u: goto label_1af8d4;
        case 0x1af8d8u: goto label_1af8d8;
        case 0x1af8dcu: goto label_1af8dc;
        case 0x1af8e0u: goto label_1af8e0;
        case 0x1af8e4u: goto label_1af8e4;
        case 0x1af8e8u: goto label_1af8e8;
        case 0x1af8ecu: goto label_1af8ec;
        case 0x1af8f0u: goto label_1af8f0;
        case 0x1af8f4u: goto label_1af8f4;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af8fcu: goto label_1af8fc;
        case 0x1af900u: goto label_1af900;
        case 0x1af904u: goto label_1af904;
        case 0x1af908u: goto label_1af908;
        case 0x1af90cu: goto label_1af90c;
        case 0x1af910u: goto label_1af910;
        case 0x1af914u: goto label_1af914;
        case 0x1af918u: goto label_1af918;
        case 0x1af91cu: goto label_1af91c;
        case 0x1af920u: goto label_1af920;
        case 0x1af924u: goto label_1af924;
        case 0x1af928u: goto label_1af928;
        case 0x1af92cu: goto label_1af92c;
        case 0x1af930u: goto label_1af930;
        case 0x1af934u: goto label_1af934;
        case 0x1af938u: goto label_1af938;
        default: break;
    }

    ctx->pc = 0x1af6e0u;

label_1af6e0:
    // 0x1af6e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1af6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1af6e4:
    // 0x1af6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af6e8:
    // 0x1af6e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1af6ec:
    // 0x1af6ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1af6f0:
    // 0x1af6f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1af6f4:
    // 0x1af6f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af6f8:
    // 0x1af6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1af6fc:
    // 0x1af6fc: 0xa08202ec  sb          $v0, 0x2EC($a0)
    ctx->pc = 0x1af6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 2));
label_1af700:
    // 0x1af700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af704:
    // 0x1af704: 0xa08202ed  sb          $v0, 0x2ED($a0)
    ctx->pc = 0x1af704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 749), (uint8_t)GPR_U32(ctx, 2));
label_1af708:
    // 0x1af708: 0xa08002ee  sb          $zero, 0x2EE($a0)
    ctx->pc = 0x1af708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 750), (uint8_t)GPR_U32(ctx, 0));
label_1af70c:
    // 0x1af70c: 0xa08202ef  sb          $v0, 0x2EF($a0)
    ctx->pc = 0x1af70cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 751), (uint8_t)GPR_U32(ctx, 2));
label_1af710:
    // 0x1af710: 0xa08002f0  sb          $zero, 0x2F0($a0)
    ctx->pc = 0x1af710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 752), (uint8_t)GPR_U32(ctx, 0));
label_1af714:
    // 0x1af714: 0xa08002f2  sb          $zero, 0x2F2($a0)
    ctx->pc = 0x1af714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 754), (uint8_t)GPR_U32(ctx, 0));
label_1af718:
    // 0x1af718: 0xac8002e8  sw          $zero, 0x2E8($a0)
    ctx->pc = 0x1af718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 744), GPR_U32(ctx, 0));
label_1af71c:
    // 0x1af71c: 0xac8002e4  sw          $zero, 0x2E4($a0)
    ctx->pc = 0x1af71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 0));
label_1af720:
    // 0x1af720: 0xac8002e0  sw          $zero, 0x2E0($a0)
    ctx->pc = 0x1af720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 0));
label_1af724:
    // 0x1af724: 0xc04b7b4  jal         func_12DED0
label_1af728:
    if (ctx->pc == 0x1AF728u) {
        ctx->pc = 0x1AF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF724u;
        // 0x1af728: 0xac8002dc  sw          $zero, 0x2DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF72Cu;
        goto label_1af72c;
    }
    ctx->pc = 0x1AF724u;
    SET_GPR_U32(ctx, 31, 0x1AF72Cu);
    ctx->pc = 0x1AF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF724u;
    // 0x1af728: 0xac8002dc  sw          $zero, 0x2DC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1AF724u, 0x1AF72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF72Cu;
label_1af72c:
    // 0x1af72c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af730:
    // 0x1af730: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x1af730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
label_1af734:
    // 0x1af734: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af738:
    // 0x1af738: 0x26470030  addiu       $a3, $s2, 0x30
    ctx->pc = 0x1af738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1af73c:
    // 0x1af73c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1af73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1af740:
    // 0x1af740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af744:
    // 0x1af744: 0xc04b7dc  jal         func_12DF70
label_1af748:
    if (ctx->pc == 0x1AF748u) {
        ctx->pc = 0x1AF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF744u;
        // 0x1af748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF74Cu;
        goto label_1af74c;
    }
    ctx->pc = 0x1AF744u;
    SET_GPR_U32(ctx, 31, 0x1AF74Cu);
    ctx->pc = 0x1AF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF744u;
    // 0x1af748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1AF744u, 0x1AF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF74Cu;
label_1af74c:
    // 0x1af74c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1af74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1af750:
    // 0x1af750: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1af750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1af754:
    // 0x1af754: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1af754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af758:
    // 0x1af758: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1af758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af75c:
    // 0x1af75c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1af75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af760:
    // 0x1af760: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1af760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af764:
    // 0x1af764: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1af764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1af768:
    // 0x1af768: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1af768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1af76c:
    // 0x1af76c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1af76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1af770:
    // 0x1af770: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1af770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1af774:
    // 0x1af774: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1af774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af778:
    // 0x1af778: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1af778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af77c:
    // 0x1af77c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1af77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af780:
    // 0x1af780: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1af780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af784:
    // 0x1af784: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1af784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1af788:
    // 0x1af788: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1af788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1af78c:
    // 0x1af78c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1af78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1af790:
    // 0x1af790: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1af790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1af794:
    // 0x1af794: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1af794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af798:
    // 0x1af798: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1af798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1af79c:
    // 0x1af79c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af79cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1af7a0:
    // 0x1af7a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1af7a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1af7a4:
    // 0x1af7a4: 0x0  nop
    ctx->pc = 0x1af7a4u;
    // NOP
label_1af7a8:
    // 0x1af7a8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1af7a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1af7ac:
    // 0x1af7ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1af7b0:
    if (ctx->pc == 0x1AF7B0u) {
        ctx->pc = 0x1AF7B4u;
        goto label_1af7b4;
    }
    ctx->pc = 0x1AF7ACu;
    {
        const bool branch_taken_0x1af7ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af7ac) {
            ctx->pc = 0x1AF7B8u;
            goto label_1af7b8;
        }
    }
    ctx->pc = 0x1AF7B4u;
label_1af7b4:
    // 0x1af7b4: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1af7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
label_1af7b8:
    // 0x1af7b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1af7bc:
    // 0x1af7bc: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x1af7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_1af7c0:
    // 0x1af7c0: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_1af7c4:
    if (ctx->pc == 0x1AF7C4u) {
        ctx->pc = 0x1AF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C0u;
        // 0x1af7c4: 0x26470030  addiu       $a3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7C8u;
        goto label_1af7c8;
    }
    ctx->pc = 0x1AF7C0u;
    {
        const bool branch_taken_0x1af7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C0u;
        // 0x1af7c4: 0x26470030  addiu       $a3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7c0) {
            ctx->pc = 0x1AF73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af73c;
        }
    }
    ctx->pc = 0x1AF7C8u;
label_1af7c8:
    // 0x1af7c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af7cc:
    // 0x1af7cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1af7ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af7d0:
    // 0x1af7d0: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x1af7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1af7d4:
    // 0x1af7d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1af7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1af7d8:
    // 0x1af7d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af7dc:
    // 0x1af7dc: 0xc04b7dc  jal         func_12DF70
label_1af7e0:
    if (ctx->pc == 0x1AF7E0u) {
        ctx->pc = 0x1AF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7DCu;
        // 0x1af7e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7E4u;
        goto label_1af7e4;
    }
    ctx->pc = 0x1AF7DCu;
    SET_GPR_U32(ctx, 31, 0x1AF7E4u);
    ctx->pc = 0x1AF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7DCu;
    // 0x1af7e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1AF7DCu, 0x1AF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7E4u;
label_1af7e4:
    // 0x1af7e4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1af7e8:
    // 0x1af7e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1af7ec:
    // 0x1af7ec: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1af7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af7f0:
    // 0x1af7f0: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1af7f4:
    // 0x1af7f4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1af7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af7f8:
    // 0x1af7f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1af7fc:
    // 0x1af7fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1af7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af800:
    // 0x1af800: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x1af800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
label_1af804:
    // 0x1af804: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1af804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af808:
    // 0x1af808: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1af80c:
    // 0x1af80c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1af80cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1af810:
    // 0x1af810: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1af810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1af814:
    // 0x1af814: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1af814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1af818:
    // 0x1af818: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1af818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1af81c:
    // 0x1af81c: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x1af81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af820:
    // 0x1af820: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x1af820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af824:
    // 0x1af824: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1af824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af828:
    // 0x1af828: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1af828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af82c:
    // 0x1af82c: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1af82cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1af830:
    // 0x1af830: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1af830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1af834:
    // 0x1af834: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1af834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1af838:
    // 0x1af838: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1af838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_1af83c:
    // 0x1af83c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1af83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1af840:
    // 0x1af840: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1af844:
    if (ctx->pc == 0x1AF844u) {
        ctx->pc = 0x1AF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF840u;
        // 0x1af844: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF848u;
        goto label_1af848;
    }
    ctx->pc = 0x1AF840u;
    {
        const bool branch_taken_0x1af840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF840u;
        // 0x1af844: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af840) {
            ctx->pc = 0x1AF7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af7d0;
        }
    }
    ctx->pc = 0x1AF848u;
label_1af848:
    // 0x1af848: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af84c:
    // 0x1af84c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af850:
    // 0x1af850: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1af854:
    // 0x1af854: 0x24422d00  addiu       $v0, $v0, 0x2D00
    ctx->pc = 0x1af854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11520));
label_1af858:
    // 0x1af858: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1af858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1af85c:
    // 0x1af85c: 0xc04c0e0  jal         func_130380
label_1af860:
    if (ctx->pc == 0x1AF860u) {
        ctx->pc = 0x1AF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF85Cu;
        // 0x1af860: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF864u;
        goto label_1af864;
    }
    ctx->pc = 0x1AF85Cu;
    SET_GPR_U32(ctx, 31, 0x1AF864u);
    ctx->pc = 0x1AF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF85Cu;
    // 0x1af860: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1AF85Cu, 0x1AF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF864u;
label_1af864:
    // 0x1af864: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1af868:
    // 0x1af868: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x1af868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
label_1af86c:
    // 0x1af86c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x1af86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_1af870:
    // 0x1af870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1af870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af874:
    // 0x1af874: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1af874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1af878:
    // 0x1af878: 0x320f809  jalr        $t9
label_1af87c:
    if (ctx->pc == 0x1AF87Cu) {
        ctx->pc = 0x1AF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF878u;
        // 0x1af87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF880u;
        goto label_1af880;
    }
    ctx->pc = 0x1AF878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AF880u);
        ctx->pc = 0x1AF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF878u;
        // 0x1af87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF878u, 0x1AF880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF880u;
label_1af880:
    // 0x1af880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1af884:
    // 0x1af884: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x1af884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1af888:
    // 0x1af888: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1af88c:
    if (ctx->pc == 0x1AF88Cu) {
        ctx->pc = 0x1AF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF888u;
        // 0x1af88c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF890u;
        goto label_1af890;
    }
    ctx->pc = 0x1AF888u;
    {
        const bool branch_taken_0x1af888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF888u;
        // 0x1af88c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af888) {
            ctx->pc = 0x1AF850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af850;
        }
    }
    ctx->pc = 0x1AF890u;
label_1af890:
    // 0x1af890: 0x8f8a8350  lw          $t2, -0x7CB0($gp)
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935376)));
label_1af894:
    // 0x1af894: 0x260903b0  addiu       $t1, $s0, 0x3B0
    ctx->pc = 0x1af894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_1af898:
    // 0x1af898: 0x26080570  addiu       $t0, $s0, 0x570
    ctx->pc = 0x1af898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
label_1af89c:
    // 0x1af89c: 0x26070730  addiu       $a3, $s0, 0x730
    ctx->pc = 0x1af89cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1840));
label_1af8a0:
    // 0x1af8a0: 0x26060740  addiu       $a2, $s0, 0x740
    ctx->pc = 0x1af8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
label_1af8a4:
    // 0x1af8a4: 0x26050758  addiu       $a1, $s0, 0x758
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1880));
label_1af8a8:
    // 0x1af8a8: 0x26040774  addiu       $a0, $s0, 0x774
    ctx->pc = 0x1af8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1908));
label_1af8ac:
    // 0x1af8ac: 0x260307b0  addiu       $v1, $s0, 0x7B0
    ctx->pc = 0x1af8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
label_1af8b0:
    // 0x1af8b0: 0xae0a0118  sw          $t2, 0x118($s0)
    ctx->pc = 0x1af8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 10));
label_1af8b4:
    // 0x1af8b4: 0x8f8a8354  lw          $t2, -0x7CAC($gp)
    ctx->pc = 0x1af8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935380)));
label_1af8b8:
    // 0x1af8b8: 0xae0a011c  sw          $t2, 0x11C($s0)
    ctx->pc = 0x1af8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 10));
label_1af8bc:
    // 0x1af8bc: 0x8f8a8358  lw          $t2, -0x7CA8($gp)
    ctx->pc = 0x1af8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
label_1af8c0:
    // 0x1af8c0: 0xae0a0120  sw          $t2, 0x120($s0)
    ctx->pc = 0x1af8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 10));
label_1af8c4:
    // 0x1af8c4: 0x8f8a835c  lw          $t2, -0x7CA4($gp)
    ctx->pc = 0x1af8c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935388)));
label_1af8c8:
    // 0x1af8c8: 0xae0a0124  sw          $t2, 0x124($s0)
    ctx->pc = 0x1af8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 10));
label_1af8cc:
    // 0x1af8cc: 0xae0902f4  sw          $t1, 0x2F4($s0)
    ctx->pc = 0x1af8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 9));
label_1af8d0:
    // 0x1af8d0: 0xae0802f8  sw          $t0, 0x2F8($s0)
    ctx->pc = 0x1af8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 8));
label_1af8d4:
    // 0x1af8d4: 0xae0702fc  sw          $a3, 0x2FC($s0)
    ctx->pc = 0x1af8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 7));
label_1af8d8:
    // 0x1af8d8: 0xae060300  sw          $a2, 0x300($s0)
    ctx->pc = 0x1af8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 6));
label_1af8dc:
    // 0x1af8dc: 0xae050304  sw          $a1, 0x304($s0)
    ctx->pc = 0x1af8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 5));
label_1af8e0:
    // 0x1af8e0: 0xae040308  sw          $a0, 0x308($s0)
    ctx->pc = 0x1af8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 4));
label_1af8e4:
    // 0x1af8e4: 0xae03030c  sw          $v1, 0x30C($s0)
    ctx->pc = 0x1af8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 3));
label_1af8e8:
    // 0x1af8e8: 0x8e0302f4  lw          $v1, 0x2F4($s0)
    ctx->pc = 0x1af8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
label_1af8ec:
    // 0x1af8ec: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af8f0:
    // 0x1af8f0: 0x8e0302f8  lw          $v1, 0x2F8($s0)
    ctx->pc = 0x1af8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_1af8f4:
    // 0x1af8f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af8f8:
    // 0x1af8f8: 0x8e0302fc  lw          $v1, 0x2FC($s0)
    ctx->pc = 0x1af8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
label_1af8fc:
    // 0x1af8fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af900:
    // 0x1af900: 0x8e030300  lw          $v1, 0x300($s0)
    ctx->pc = 0x1af900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_1af904:
    // 0x1af904: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af908:
    // 0x1af908: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x1af908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_1af90c:
    // 0x1af90c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af90cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af910:
    // 0x1af910: 0x8e030308  lw          $v1, 0x308($s0)
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_1af914:
    // 0x1af914: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af918:
    // 0x1af918: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1af918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
label_1af91c:
    // 0x1af91c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1af91cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1af920:
    // 0x1af920: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af924:
    // 0x1af924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1af928:
    // 0x1af928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af92c:
    // 0x1af92c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af930:
    // 0x1af930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af934:
    // 0x1af934: 0x3e00008  jr          $ra
label_1af938:
    if (ctx->pc == 0x1AF938u) {
        ctx->pc = 0x1AF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF934u;
        // 0x1af938: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF93Cu;
        goto label_fallthrough_0x1af934;
    }
    ctx->pc = 0x1AF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF934u;
        // 0x1af938: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af934:
    ctx->pc = 0x1AF93Cu;
}
