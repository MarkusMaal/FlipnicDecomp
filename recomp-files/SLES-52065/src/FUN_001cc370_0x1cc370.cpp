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

// Function: FUN_001cc370
// Address: 0x1cc370 - 0x1cc47c
void FUN_001cc370_0x1cc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc370_0x1cc370");
#endif

    switch (ctx->pc) {
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc460u: goto label_1cc460;
        default: break;
    }

    ctx->pc = 0x1cc370u;

    // 0x1cc370: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1cc370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1cc374: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1cc374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1cc378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cc378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cc37c: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1cc37cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1cc380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cc384: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cc38c: 0x24e780a0  addiu       $a3, $a3, -0x7F60
    ctx->pc = 0x1cc38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934688));
    // 0x1cc390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc394: 0x25082960  addiu       $t0, $t0, 0x2960
    ctx->pc = 0x1cc394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10592));
    // 0x1cc398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc39c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1cc39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cc3a0: 0x8c2aca84  lw          $t2, -0x357C($at)
    ctx->pc = 0x1cc3a0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc3a4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x1cc3a4u;
    { uint32_t bits = FAST_READ32(0x2180C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3a8: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x1cc3a8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2180A0u));
    // 0x1cc3ac: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1cc3acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2180B0u));
    // 0x1cc3b0: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1cc3b0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2180C0u));
    // 0x1cc3b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc3b8: 0x254a10c8  addiu       $t2, $t2, 0x10C8
    ctx->pc = 0x1cc3b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4296));
    // 0x1cc3bc: 0x8c29f950  lw          $t1, -0x6B0($at)
    ctx->pc = 0x1cc3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x36F950u));
    // 0x1cc3c0: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x1cc3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1cc3c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc3c8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cc3cc: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x1cc3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cc3d0: 0x103940  sll         $a3, $s0, 5
    ctx->pc = 0x1cc3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1cc3d4: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1cc3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1cc3d8: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1cc3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cc3dc: 0x90f10c84  lbu         $s1, 0xC84($a3)
    ctx->pc = 0x1cc3dcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3204)));
    // 0x1cc3e0: 0x90f20e84  lbu         $s2, 0xE84($a3)
    ctx->pc = 0x1cc3e0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3716)));
    // 0x1cc3e4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1cc3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1cc3e8: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1cc3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x1cc3ec: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x1cc3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x1cc3f0: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x1cc3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x1cc3f4: 0xac24fa30  sw          $a0, -0x5D0($at)
    ctx->pc = 0x1cc3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965808), GPR_U32(ctx, 4));
    // 0x1cc3f8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1cc3f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cc3fc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CC3FCu;
    {
        const bool branch_taken_0x1cc3fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3FCu;
        // 0x1cc400: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3fc) {
            ctx->pc = 0x1CC458u;
            goto label_1cc458;
        }
    }
    ctx->pc = 0x1CC404u;
    // 0x1cc404: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1cc404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1cc408:
    // 0x1cc408: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc40c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1cc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cc410: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cc414: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cc418: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cc418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cc41c: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x1cc41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x1cc420: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CC420u;
    SET_GPR_U32(ctx, 31, 0x1CC428u);
    ctx->pc = 0x1CC424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC420u;
    // 0x1cc424: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CC420u, 0x1CC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC428u;
label_1cc428:
    // 0x1cc428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cc428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42c: 0xc0714e8  jal         func_1C53A0
    ctx->pc = 0x1CC42Cu;
    SET_GPR_U32(ctx, 31, 0x1CC434u);
    ctx->pc = 0x1CC430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC42Cu;
    // 0x1cc430: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53A0u, 0x1CC42Cu, 0x1CC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC434u;
label_1cc434:
    // 0x1cc434: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1CC434u;
    SET_GPR_U32(ctx, 31, 0x1CC43Cu);
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1CC434u, 0x1CC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC43Cu;
label_1cc43c:
    // 0x1cc43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc440: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1CC440u;
    SET_GPR_U32(ctx, 31, 0x1CC448u);
    ctx->pc = 0x1CC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC440u;
    // 0x1cc444: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1CC440u, 0x1CC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC448u;
label_1cc448:
    // 0x1cc448: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cc448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cc44c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1cc44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cc450: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CC450u;
    {
        const bool branch_taken_0x1cc450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC450u;
        // 0x1cc454: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc450) {
            ctx->pc = 0x1CC408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc408;
        }
    }
    ctx->pc = 0x1CC458u;
label_1cc458:
    // 0x1cc458: 0xc0714f0  jal         func_1C53C0
    ctx->pc = 0x1CC458u;
    SET_GPR_U32(ctx, 31, 0x1CC460u);
    ctx->pc = 0x1CC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC458u;
    // 0x1cc45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53C0u, 0x1CC458u, 0x1CC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC460u;
label_1cc460:
    // 0x1cc460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc464: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc474: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC474u;
        // 0x1cc478: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC47Cu;
}
