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

// Function: FUN_00140660
// Address: 0x140660 - 0x140870
void FUN_00140660_0x140660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00140660_0x140660");
#endif

    switch (ctx->pc) {
        case 0x1406e0u: goto label_1406e0;
        case 0x140718u: goto label_140718;
        case 0x140720u: goto label_140720;
        case 0x140754u: goto label_140754;
        case 0x14075cu: goto label_14075c;
        case 0x14076cu: goto label_14076c;
        case 0x14077cu: goto label_14077c;
        case 0x1407a8u: goto label_1407a8;
        case 0x1407c8u: goto label_1407c8;
        case 0x1407d0u: goto label_1407d0;
        case 0x1407fcu: goto label_1407fc;
        case 0x140804u: goto label_140804;
        case 0x140814u: goto label_140814;
        case 0x140824u: goto label_140824;
        case 0x140848u: goto label_140848;
        default: break;
    }

    ctx->pc = 0x140660u;

    // 0x140660: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x140660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x140664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x140664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x140668: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x140668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14066c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x140670: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x140670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140678: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x140678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14067c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140680: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x140680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x140684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140688: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x140688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14068c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x14068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140690: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x140690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140694: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x140694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140698: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x140698u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14069c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x14069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1406a0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1406a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1406a4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1406a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1406a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1406a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1406ac: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1406acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1406b0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1406b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1406b4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1406b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1406b8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1406b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1406bc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1406bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1406c0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1406c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1406c4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1406c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1406c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1406c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1406cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1406ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1406d0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1406d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1406d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1406d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1406d8: 0xc050238  jal         func_1408E0
    ctx->pc = 0x1406D8u;
    SET_GPR_U32(ctx, 31, 0x1406E0u);
    ctx->pc = 0x1406DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406D8u;
    // 0x1406dc: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408E0u, 0x1406D8u, 0x1406E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406E0u;
label_1406e0:
    // 0x1406e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1406e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406e4: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x1406e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1406e8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x1406e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x1406ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1406ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1406f0: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1406f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1406f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1406f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1406f8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1406f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1406fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1406FCu;
    {
        const bool branch_taken_0x1406fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406FCu;
        // 0x140700: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406fc) {
            ctx->pc = 0x140720u;
            goto label_140720;
        }
    }
    ctx->pc = 0x140704u;
    // 0x140704: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x140704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x140708: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x140708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14070c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14070cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x140710: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x140710u;
    SET_GPR_U32(ctx, 31, 0x140718u);
    ctx->pc = 0x140714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140710u;
    // 0x140714: 0x24a5f0e0  addiu       $a1, $a1, -0xF20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x140710u, 0x140718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140718u;
label_140718:
    // 0x140718: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x140718u;
    SET_GPR_U32(ctx, 31, 0x140720u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x140718u, 0x140720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140720u;
label_140720:
    // 0x140720: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x140720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x140724: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x140724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x140728: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x140728u;
    {
        const bool branch_taken_0x140728 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140728u;
        // 0x14072c: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140728) {
            ctx->pc = 0x14079Cu;
            goto label_14079c;
        }
    }
    ctx->pc = 0x140730u;
    // 0x140730: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x140730u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x140734: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x140734u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140738: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x140738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14073c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x14073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x140740: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x140740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140744: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x140744u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x140748: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x140748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14074c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14074Cu;
    {
        const bool branch_taken_0x14074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14074Cu;
        // 0x140750: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14074c) {
            ctx->pc = 0x140770u;
            goto label_140770;
        }
    }
    ctx->pc = 0x140754u;
label_140754:
    // 0x140754: 0xc050234  jal         func_1408D0
    ctx->pc = 0x140754u;
    SET_GPR_U32(ctx, 31, 0x14075Cu);
    ctx->pc = 0x140758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140754u;
    // 0x140758: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x140754u, 0x14075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14075Cu;
label_14075c:
    // 0x14075c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140760: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x140760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140764: 0xc050224  jal         func_140890
    ctx->pc = 0x140764u;
    SET_GPR_U32(ctx, 31, 0x14076Cu);
    ctx->pc = 0x140768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140764u;
    // 0x140768: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x140764u, 0x14076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14076Cu;
label_14076c:
    // 0x14076c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_140770:
    // 0x140770: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x140770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140774: 0xc05021c  jal         func_140870
    ctx->pc = 0x140774u;
    SET_GPR_U32(ctx, 31, 0x14077Cu);
    ctx->pc = 0x140778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140774u;
    // 0x140778: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x140774u, 0x14077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14077Cu;
label_14077c:
    // 0x14077c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140780: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x140780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x140784: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x140784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x140788: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x140788u;
    {
        const bool branch_taken_0x140788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140788) {
            ctx->pc = 0x140754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140754;
        }
    }
    ctx->pc = 0x140790u;
    // 0x140790: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x140790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x140794: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x140794u;
    {
        const bool branch_taken_0x140794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140794u;
        // 0x140798: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140794) {
            ctx->pc = 0x140854u;
            goto label_140854;
        }
    }
    ctx->pc = 0x14079Cu;
label_14079c:
    // 0x14079c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x14079cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1407a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1407A0u;
    SET_GPR_U32(ctx, 31, 0x1407A8u);
    ctx->pc = 0x1407A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407A0u;
    // 0x1407a4: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1407A0u, 0x1407A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407A8u;
label_1407a8:
    // 0x1407a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1407a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407ac: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1407ACu;
    {
        const bool branch_taken_0x1407ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1407B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407ACu;
        // 0x1407b0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407ac) {
            ctx->pc = 0x1407D0u;
            goto label_1407d0;
        }
    }
    ctx->pc = 0x1407B4u;
    // 0x1407b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1407b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1407b8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1407b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1407bc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1407bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1407c0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1407C0u;
    SET_GPR_U32(ctx, 31, 0x1407C8u);
    ctx->pc = 0x1407C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407C0u;
    // 0x1407c4: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1407C0u, 0x1407C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C8u;
label_1407c8:
    // 0x1407c8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1407C8u;
    SET_GPR_U32(ctx, 31, 0x1407D0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1407C8u, 0x1407D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407D0u;
label_1407d0:
    // 0x1407d0: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x1407d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x1407d4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1407d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1407d8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1407d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1407dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1407dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1407e0: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x1407e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1407e4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1407e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1407e8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1407e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1407ec: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1407ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1407f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1407f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1407f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1407F4u;
    {
        const bool branch_taken_0x1407f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407F4u;
        // 0x1407f8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407f4) {
            ctx->pc = 0x140818u;
            goto label_140818;
        }
    }
    ctx->pc = 0x1407FCu;
label_1407fc:
    // 0x1407fc: 0xc050234  jal         func_1408D0
    ctx->pc = 0x1407FCu;
    SET_GPR_U32(ctx, 31, 0x140804u);
    ctx->pc = 0x140800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407FCu;
    // 0x140800: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x1407FCu, 0x140804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140804u;
label_140804:
    // 0x140804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140808: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x140808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14080c: 0xc050224  jal         func_140890
    ctx->pc = 0x14080Cu;
    SET_GPR_U32(ctx, 31, 0x140814u);
    ctx->pc = 0x140810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14080Cu;
    // 0x140810: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14080Cu, 0x140814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140814u;
label_140814:
    // 0x140814: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_140818:
    // 0x140818: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x140818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14081c: 0xc05021c  jal         func_140870
    ctx->pc = 0x14081Cu;
    SET_GPR_U32(ctx, 31, 0x140824u);
    ctx->pc = 0x140820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14081Cu;
    // 0x140820: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x14081Cu, 0x140824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140824u;
label_140824:
    // 0x140824: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x140824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140828: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x140828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14082c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x140830: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x140830u;
    {
        const bool branch_taken_0x140830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140830) {
            ctx->pc = 0x1407FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1407fc;
        }
    }
    ctx->pc = 0x140838u;
    // 0x140838: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140838u;
    {
        const bool branch_taken_0x140838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140838u;
        // 0x14083c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140838) {
            ctx->pc = 0x140848u;
            goto label_140848;
        }
    }
    ctx->pc = 0x140840u;
    // 0x140840: 0xc0401a4  jal         func_100690
    ctx->pc = 0x140840u;
    SET_GPR_U32(ctx, 31, 0x140848u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x140840u, 0x140848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140848u;
label_140848:
    // 0x140848: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x140848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x14084c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x14084cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x140850: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x140850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_140854:
    // 0x140854: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x140854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14085c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14085cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140868: 0x3e00008  jr          $ra
    ctx->pc = 0x140868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140868u;
        // 0x14086c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140870u;
}
