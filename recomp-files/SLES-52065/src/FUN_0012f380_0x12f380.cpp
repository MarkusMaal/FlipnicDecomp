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

// Function: FUN_0012f380
// Address: 0x12f380 - 0x12f794
void FUN_0012f380_0x12f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f380_0x12f380");
#endif

    switch (ctx->pc) {
        case 0x12f380u: goto label_12f380;
        case 0x12f384u: goto label_12f384;
        case 0x12f388u: goto label_12f388;
        case 0x12f38cu: goto label_12f38c;
        case 0x12f390u: goto label_12f390;
        case 0x12f394u: goto label_12f394;
        case 0x12f398u: goto label_12f398;
        case 0x12f39cu: goto label_12f39c;
        case 0x12f3a0u: goto label_12f3a0;
        case 0x12f3a4u: goto label_12f3a4;
        case 0x12f3a8u: goto label_12f3a8;
        case 0x12f3acu: goto label_12f3ac;
        case 0x12f3b0u: goto label_12f3b0;
        case 0x12f3b4u: goto label_12f3b4;
        case 0x12f3b8u: goto label_12f3b8;
        case 0x12f3bcu: goto label_12f3bc;
        case 0x12f3c0u: goto label_12f3c0;
        case 0x12f3c4u: goto label_12f3c4;
        case 0x12f3c8u: goto label_12f3c8;
        case 0x12f3ccu: goto label_12f3cc;
        case 0x12f3d0u: goto label_12f3d0;
        case 0x12f3d4u: goto label_12f3d4;
        case 0x12f3d8u: goto label_12f3d8;
        case 0x12f3dcu: goto label_12f3dc;
        case 0x12f3e0u: goto label_12f3e0;
        case 0x12f3e4u: goto label_12f3e4;
        case 0x12f3e8u: goto label_12f3e8;
        case 0x12f3ecu: goto label_12f3ec;
        case 0x12f3f0u: goto label_12f3f0;
        case 0x12f3f4u: goto label_12f3f4;
        case 0x12f3f8u: goto label_12f3f8;
        case 0x12f3fcu: goto label_12f3fc;
        case 0x12f400u: goto label_12f400;
        case 0x12f404u: goto label_12f404;
        case 0x12f408u: goto label_12f408;
        case 0x12f40cu: goto label_12f40c;
        case 0x12f410u: goto label_12f410;
        case 0x12f414u: goto label_12f414;
        case 0x12f418u: goto label_12f418;
        case 0x12f41cu: goto label_12f41c;
        case 0x12f420u: goto label_12f420;
        case 0x12f424u: goto label_12f424;
        case 0x12f428u: goto label_12f428;
        case 0x12f42cu: goto label_12f42c;
        case 0x12f430u: goto label_12f430;
        case 0x12f434u: goto label_12f434;
        case 0x12f438u: goto label_12f438;
        case 0x12f43cu: goto label_12f43c;
        case 0x12f440u: goto label_12f440;
        case 0x12f444u: goto label_12f444;
        case 0x12f448u: goto label_12f448;
        case 0x12f44cu: goto label_12f44c;
        case 0x12f450u: goto label_12f450;
        case 0x12f454u: goto label_12f454;
        case 0x12f458u: goto label_12f458;
        case 0x12f45cu: goto label_12f45c;
        case 0x12f460u: goto label_12f460;
        case 0x12f464u: goto label_12f464;
        case 0x12f468u: goto label_12f468;
        case 0x12f46cu: goto label_12f46c;
        case 0x12f470u: goto label_12f470;
        case 0x12f474u: goto label_12f474;
        case 0x12f478u: goto label_12f478;
        case 0x12f47cu: goto label_12f47c;
        case 0x12f480u: goto label_12f480;
        case 0x12f484u: goto label_12f484;
        case 0x12f488u: goto label_12f488;
        case 0x12f48cu: goto label_12f48c;
        case 0x12f490u: goto label_12f490;
        case 0x12f494u: goto label_12f494;
        case 0x12f498u: goto label_12f498;
        case 0x12f49cu: goto label_12f49c;
        case 0x12f4a0u: goto label_12f4a0;
        case 0x12f4a4u: goto label_12f4a4;
        case 0x12f4a8u: goto label_12f4a8;
        case 0x12f4acu: goto label_12f4ac;
        case 0x12f4b0u: goto label_12f4b0;
        case 0x12f4b4u: goto label_12f4b4;
        case 0x12f4b8u: goto label_12f4b8;
        case 0x12f4bcu: goto label_12f4bc;
        case 0x12f4c0u: goto label_12f4c0;
        case 0x12f4c4u: goto label_12f4c4;
        case 0x12f4c8u: goto label_12f4c8;
        case 0x12f4ccu: goto label_12f4cc;
        case 0x12f4d0u: goto label_12f4d0;
        case 0x12f4d4u: goto label_12f4d4;
        case 0x12f4d8u: goto label_12f4d8;
        case 0x12f4dcu: goto label_12f4dc;
        case 0x12f4e0u: goto label_12f4e0;
        case 0x12f4e4u: goto label_12f4e4;
        case 0x12f4e8u: goto label_12f4e8;
        case 0x12f4ecu: goto label_12f4ec;
        case 0x12f4f0u: goto label_12f4f0;
        case 0x12f4f4u: goto label_12f4f4;
        case 0x12f4f8u: goto label_12f4f8;
        case 0x12f4fcu: goto label_12f4fc;
        case 0x12f500u: goto label_12f500;
        case 0x12f504u: goto label_12f504;
        case 0x12f508u: goto label_12f508;
        case 0x12f50cu: goto label_12f50c;
        case 0x12f510u: goto label_12f510;
        case 0x12f514u: goto label_12f514;
        case 0x12f518u: goto label_12f518;
        case 0x12f51cu: goto label_12f51c;
        case 0x12f520u: goto label_12f520;
        case 0x12f524u: goto label_12f524;
        case 0x12f528u: goto label_12f528;
        case 0x12f52cu: goto label_12f52c;
        case 0x12f530u: goto label_12f530;
        case 0x12f534u: goto label_12f534;
        case 0x12f538u: goto label_12f538;
        case 0x12f53cu: goto label_12f53c;
        case 0x12f540u: goto label_12f540;
        case 0x12f544u: goto label_12f544;
        case 0x12f548u: goto label_12f548;
        case 0x12f54cu: goto label_12f54c;
        case 0x12f550u: goto label_12f550;
        case 0x12f554u: goto label_12f554;
        case 0x12f558u: goto label_12f558;
        case 0x12f55cu: goto label_12f55c;
        case 0x12f560u: goto label_12f560;
        case 0x12f564u: goto label_12f564;
        case 0x12f568u: goto label_12f568;
        case 0x12f56cu: goto label_12f56c;
        case 0x12f570u: goto label_12f570;
        case 0x12f574u: goto label_12f574;
        case 0x12f578u: goto label_12f578;
        case 0x12f57cu: goto label_12f57c;
        case 0x12f580u: goto label_12f580;
        case 0x12f584u: goto label_12f584;
        case 0x12f588u: goto label_12f588;
        case 0x12f58cu: goto label_12f58c;
        case 0x12f590u: goto label_12f590;
        case 0x12f594u: goto label_12f594;
        case 0x12f598u: goto label_12f598;
        case 0x12f59cu: goto label_12f59c;
        case 0x12f5a0u: goto label_12f5a0;
        case 0x12f5a4u: goto label_12f5a4;
        case 0x12f5a8u: goto label_12f5a8;
        case 0x12f5acu: goto label_12f5ac;
        case 0x12f5b0u: goto label_12f5b0;
        case 0x12f5b4u: goto label_12f5b4;
        case 0x12f5b8u: goto label_12f5b8;
        case 0x12f5bcu: goto label_12f5bc;
        case 0x12f5c0u: goto label_12f5c0;
        case 0x12f5c4u: goto label_12f5c4;
        case 0x12f5c8u: goto label_12f5c8;
        case 0x12f5ccu: goto label_12f5cc;
        case 0x12f5d0u: goto label_12f5d0;
        case 0x12f5d4u: goto label_12f5d4;
        case 0x12f5d8u: goto label_12f5d8;
        case 0x12f5dcu: goto label_12f5dc;
        case 0x12f5e0u: goto label_12f5e0;
        case 0x12f5e4u: goto label_12f5e4;
        case 0x12f5e8u: goto label_12f5e8;
        case 0x12f5ecu: goto label_12f5ec;
        case 0x12f5f0u: goto label_12f5f0;
        case 0x12f5f4u: goto label_12f5f4;
        case 0x12f5f8u: goto label_12f5f8;
        case 0x12f5fcu: goto label_12f5fc;
        case 0x12f600u: goto label_12f600;
        case 0x12f604u: goto label_12f604;
        case 0x12f608u: goto label_12f608;
        case 0x12f60cu: goto label_12f60c;
        case 0x12f610u: goto label_12f610;
        case 0x12f614u: goto label_12f614;
        case 0x12f618u: goto label_12f618;
        case 0x12f61cu: goto label_12f61c;
        case 0x12f620u: goto label_12f620;
        case 0x12f624u: goto label_12f624;
        case 0x12f628u: goto label_12f628;
        case 0x12f62cu: goto label_12f62c;
        case 0x12f630u: goto label_12f630;
        case 0x12f634u: goto label_12f634;
        case 0x12f638u: goto label_12f638;
        case 0x12f63cu: goto label_12f63c;
        case 0x12f640u: goto label_12f640;
        case 0x12f644u: goto label_12f644;
        case 0x12f648u: goto label_12f648;
        case 0x12f64cu: goto label_12f64c;
        case 0x12f650u: goto label_12f650;
        case 0x12f654u: goto label_12f654;
        case 0x12f658u: goto label_12f658;
        case 0x12f65cu: goto label_12f65c;
        case 0x12f660u: goto label_12f660;
        case 0x12f664u: goto label_12f664;
        case 0x12f668u: goto label_12f668;
        case 0x12f66cu: goto label_12f66c;
        case 0x12f670u: goto label_12f670;
        case 0x12f674u: goto label_12f674;
        case 0x12f678u: goto label_12f678;
        case 0x12f67cu: goto label_12f67c;
        case 0x12f680u: goto label_12f680;
        case 0x12f684u: goto label_12f684;
        case 0x12f688u: goto label_12f688;
        case 0x12f68cu: goto label_12f68c;
        case 0x12f690u: goto label_12f690;
        case 0x12f694u: goto label_12f694;
        case 0x12f698u: goto label_12f698;
        case 0x12f69cu: goto label_12f69c;
        case 0x12f6a0u: goto label_12f6a0;
        case 0x12f6a4u: goto label_12f6a4;
        case 0x12f6a8u: goto label_12f6a8;
        case 0x12f6acu: goto label_12f6ac;
        case 0x12f6b0u: goto label_12f6b0;
        case 0x12f6b4u: goto label_12f6b4;
        case 0x12f6b8u: goto label_12f6b8;
        case 0x12f6bcu: goto label_12f6bc;
        case 0x12f6c0u: goto label_12f6c0;
        case 0x12f6c4u: goto label_12f6c4;
        case 0x12f6c8u: goto label_12f6c8;
        case 0x12f6ccu: goto label_12f6cc;
        case 0x12f6d0u: goto label_12f6d0;
        case 0x12f6d4u: goto label_12f6d4;
        case 0x12f6d8u: goto label_12f6d8;
        case 0x12f6dcu: goto label_12f6dc;
        case 0x12f6e0u: goto label_12f6e0;
        case 0x12f6e4u: goto label_12f6e4;
        case 0x12f6e8u: goto label_12f6e8;
        case 0x12f6ecu: goto label_12f6ec;
        case 0x12f6f0u: goto label_12f6f0;
        case 0x12f6f4u: goto label_12f6f4;
        case 0x12f6f8u: goto label_12f6f8;
        case 0x12f6fcu: goto label_12f6fc;
        case 0x12f700u: goto label_12f700;
        case 0x12f704u: goto label_12f704;
        case 0x12f708u: goto label_12f708;
        case 0x12f70cu: goto label_12f70c;
        case 0x12f710u: goto label_12f710;
        case 0x12f714u: goto label_12f714;
        case 0x12f718u: goto label_12f718;
        case 0x12f71cu: goto label_12f71c;
        case 0x12f720u: goto label_12f720;
        case 0x12f724u: goto label_12f724;
        case 0x12f728u: goto label_12f728;
        case 0x12f72cu: goto label_12f72c;
        case 0x12f730u: goto label_12f730;
        case 0x12f734u: goto label_12f734;
        case 0x12f738u: goto label_12f738;
        case 0x12f73cu: goto label_12f73c;
        case 0x12f740u: goto label_12f740;
        case 0x12f744u: goto label_12f744;
        case 0x12f748u: goto label_12f748;
        case 0x12f74cu: goto label_12f74c;
        case 0x12f750u: goto label_12f750;
        case 0x12f754u: goto label_12f754;
        case 0x12f758u: goto label_12f758;
        case 0x12f75cu: goto label_12f75c;
        case 0x12f760u: goto label_12f760;
        case 0x12f764u: goto label_12f764;
        case 0x12f768u: goto label_12f768;
        case 0x12f76cu: goto label_12f76c;
        case 0x12f770u: goto label_12f770;
        case 0x12f774u: goto label_12f774;
        case 0x12f778u: goto label_12f778;
        case 0x12f77cu: goto label_12f77c;
        case 0x12f780u: goto label_12f780;
        case 0x12f784u: goto label_12f784;
        case 0x12f788u: goto label_12f788;
        case 0x12f78cu: goto label_12f78c;
        case 0x12f790u: goto label_12f790;
        default: break;
    }

    ctx->pc = 0x12f380u;

label_12f380:
    // 0x12f380: 0x27bde560  addiu       $sp, $sp, -0x1AA0
    ctx->pc = 0x12f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294960480));
label_12f384:
    // 0x12f384: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12f384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_12f388:
    // 0x12f388: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_12f38c:
    // 0x12f38c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x12f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_12f390:
    // 0x12f390: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x12f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_12f394:
    // 0x12f394: 0x24423670  addiu       $v0, $v0, 0x3670
    ctx->pc = 0x12f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13936));
label_12f398:
    // 0x12f398: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x12f398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_12f39c:
    // 0x12f39c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x12f39cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12f3a0:
    // 0x12f3a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_12f3a4:
    // 0x12f3a4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x12f3a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12f3a8:
    // 0x12f3a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_12f3ac:
    // 0x12f3ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12f3b0:
    // 0x12f3b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_12f3b4:
    // 0x12f3b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12f3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12f3b8:
    // 0x12f3b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_12f3bc:
    // 0x12f3bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_12f3c0:
    // 0x12f3c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_12f3c4:
    // 0x12f3c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12f3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12f3c8:
    // 0x12f3c8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x12f3c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12f3cc:
    // 0x12f3cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x12f3ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12f3d0:
    // 0x12f3d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x12f3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12f3d4:
    // 0x12f3d4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x12f3d4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_12f3d8:
    // 0x12f3d8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x12f3d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_12f3dc:
    // 0x12f3dc: 0xc04bca4  jal         func_12F290
label_12f3e0:
    if (ctx->pc == 0x12F3E0u) {
        ctx->pc = 0x12F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3DCu;
        // 0x12f3e0: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F3E4u;
        goto label_12f3e4;
    }
    ctx->pc = 0x12F3DCu;
    SET_GPR_U32(ctx, 31, 0x12F3E4u);
    ctx->pc = 0x12F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3DCu;
    // 0x12f3e0: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F290u, 0x12F3DCu, 0x12F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3E4u;
label_12f3e4:
    // 0x12f3e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f3e8:
    // 0x12f3e8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_12f3ec:
    if (ctx->pc == 0x12F3ECu) {
        ctx->pc = 0x12F3F0u;
        goto label_12f3f0;
    }
    ctx->pc = 0x12F3E8u;
    {
        const bool branch_taken_0x12f3e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f3e8) {
            ctx->pc = 0x12F3F8u;
            goto label_12f3f8;
        }
    }
    ctx->pc = 0x12F3F0u;
label_12f3f0:
    // 0x12f3f0: 0x100000da  b           . + 4 + (0xDA << 2)
label_12f3f4:
    if (ctx->pc == 0x12F3F4u) {
        ctx->pc = 0x12F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3F0u;
        // 0x12f3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F3F8u;
        goto label_12f3f8;
    }
    ctx->pc = 0x12F3F0u;
    {
        const bool branch_taken_0x12f3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3F0u;
        // 0x12f3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3f0) {
            ctx->pc = 0x12F75Cu;
            goto label_12f75c;
        }
    }
    ctx->pc = 0x12F3F8u;
label_12f3f8:
    // 0x12f3f8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_12f3fc:
    if (ctx->pc == 0x12F3FCu) {
        ctx->pc = 0x12F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3F8u;
        // 0x12f3fc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F400u;
        goto label_12f400;
    }
    ctx->pc = 0x12F3F8u;
    {
        const bool branch_taken_0x12f3f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3F8u;
        // 0x12f3fc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3f8) {
            ctx->pc = 0x12F44Cu;
            goto label_12f44c;
        }
    }
    ctx->pc = 0x12F400u;
label_12f400:
    // 0x12f400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f404:
    // 0x12f404: 0xc04c6dc  jal         func_131B70
label_12f408:
    if (ctx->pc == 0x12F408u) {
        ctx->pc = 0x12F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F404u;
        // 0x12f408: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F40Cu;
        goto label_12f40c;
    }
    ctx->pc = 0x12F404u;
    SET_GPR_U32(ctx, 31, 0x12F40Cu);
    ctx->pc = 0x12F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F404u;
    // 0x12f408: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x12F404u, 0x12F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F40Cu;
label_12f40c:
    // 0x12f40c: 0xc07d3ac  jal         func_1F4EB0
label_12f410:
    if (ctx->pc == 0x12F410u) {
        ctx->pc = 0x12F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F40Cu;
        // 0x12f410: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F414u;
        goto label_12f414;
    }
    ctx->pc = 0x12F40Cu;
    SET_GPR_U32(ctx, 31, 0x12F414u);
    ctx->pc = 0x12F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F40Cu;
    // 0x12f410: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x12F40Cu, 0x12F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F414u;
label_12f414:
    // 0x12f414: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x12f414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12f418:
    // 0x12f418: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12f418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12f41c:
    // 0x12f41c: 0xc07d38e  jal         func_1F4E38
label_12f420:
    if (ctx->pc == 0x12F420u) {
        ctx->pc = 0x12F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F41Cu;
        // 0x12f420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F424u;
        goto label_12f424;
    }
    ctx->pc = 0x12F41Cu;
    SET_GPR_U32(ctx, 31, 0x12F424u);
    ctx->pc = 0x12F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F41Cu;
    // 0x12f420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x12F41Cu, 0x12F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F424u;
label_12f424:
    // 0x12f424: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f428:
    // 0x12f428: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x12f428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_12f42c:
    // 0x12f42c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12f42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_12f430:
    // 0x12f430: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x12f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f434:
    // 0x12f434: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x12f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f438:
    // 0x12f438: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x12f438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_12f43c:
    // 0x12f43c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x12f43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_12f440:
    // 0x12f440: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x12f440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_12f444:
    // 0x12f444: 0x10000006  b           . + 4 + (0x6 << 2)
label_12f448:
    if (ctx->pc == 0x12F448u) {
        ctx->pc = 0x12F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F444u;
        // 0x12f448: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F44Cu;
        goto label_12f44c;
    }
    ctx->pc = 0x12F444u;
    {
        const bool branch_taken_0x12f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F444u;
        // 0x12f448: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f444) {
            ctx->pc = 0x12F460u;
            goto label_12f460;
        }
    }
    ctx->pc = 0x12F44Cu;
label_12f44c:
    // 0x12f44c: 0xc07d3ac  jal         func_1F4EB0
label_12f450:
    if (ctx->pc == 0x12F450u) {
        ctx->pc = 0x12F454u;
        goto label_12f454;
    }
    ctx->pc = 0x12F44Cu;
    SET_GPR_U32(ctx, 31, 0x12F454u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x12F44Cu, 0x12F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F454u;
label_12f454:
    // 0x12f454: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x12f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f458:
    // 0x12f458: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x12f458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_12f45c:
    // 0x12f45c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x12f45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_12f460:
    // 0x12f460: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f464:
    // 0x12f464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f468:
    // 0x12f468: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x12f468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_12f46c:
    // 0x12f46c: 0x320f809  jalr        $t9
label_12f470:
    if (ctx->pc == 0x12F470u) {
        ctx->pc = 0x12F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F46Cu;
        // 0x12f470: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F474u;
        goto label_12f474;
    }
    ctx->pc = 0x12F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F474u);
        ctx->pc = 0x12F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F46Cu;
        // 0x12f470: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F46Cu, 0x12F474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F474u;
label_12f474:
    // 0x12f474: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f478:
    // 0x12f478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f47c:
    // 0x12f47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f480:
    // 0x12f480: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x12f480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_12f484:
    // 0x12f484: 0x320f809  jalr        $t9
label_12f488:
    if (ctx->pc == 0x12F488u) {
        ctx->pc = 0x12F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F484u;
        // 0x12f488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F48Cu;
        goto label_12f48c;
    }
    ctx->pc = 0x12F484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F48Cu);
        ctx->pc = 0x12F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F484u;
        // 0x12f488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F484u, 0x12F48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F48Cu;
label_12f48c:
    // 0x12f48c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f490:
    // 0x12f490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12f490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f494:
    // 0x12f494: 0x12c0004c  beqz        $s6, . + 4 + (0x4C << 2)
label_12f498:
    if (ctx->pc == 0x12F498u) {
        ctx->pc = 0x12F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F494u;
        // 0x12f498: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F49Cu;
        goto label_12f49c;
    }
    ctx->pc = 0x12F494u;
    {
        const bool branch_taken_0x12f494 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F494u;
        // 0x12f498: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f494) {
            ctx->pc = 0x12F5C8u;
            goto label_12f5c8;
        }
    }
    ctx->pc = 0x12F49Cu;
label_12f49c:
    // 0x12f49c: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
label_12f4a0:
    if (ctx->pc == 0x12F4A0u) {
        ctx->pc = 0x12F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F49Cu;
        // 0x12f4a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4A4u;
        goto label_12f4a4;
    }
    ctx->pc = 0x12F49Cu;
    {
        const bool branch_taken_0x12f49c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F49Cu;
        // 0x12f4a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f49c) {
            ctx->pc = 0x12F538u;
            goto label_12f538;
        }
    }
    ctx->pc = 0x12F4A4u;
label_12f4a4:
    // 0x12f4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f4a8:
    // 0x12f4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f4ac:
    // 0x12f4ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12f4b0:
    // 0x12f4b0: 0x10000015  b           . + 4 + (0x15 << 2)
label_12f4b4:
    if (ctx->pc == 0x12F4B4u) {
        ctx->pc = 0x12F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4B0u;
        // 0x12f4b4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4B8u;
        goto label_12f4b8;
    }
    ctx->pc = 0x12F4B0u;
    {
        const bool branch_taken_0x12f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4B0u;
        // 0x12f4b4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4b0) {
            ctx->pc = 0x12F508u;
            goto label_12f508;
        }
    }
    ctx->pc = 0x12F4B8u;
label_12f4b8:
    // 0x12f4b8: 0x13d1821  addu        $v1, $t1, $sp
    ctx->pc = 0x12f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
label_12f4bc:
    // 0x12f4bc: 0x24681920  addiu       $t0, $v1, 0x1920
    ctx->pc = 0x12f4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
label_12f4c0:
    // 0x12f4c0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_12f4c4:
    if (ctx->pc == 0x12F4C4u) {
        ctx->pc = 0x12F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4C0u;
        // 0x12f4c4: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4C8u;
        goto label_12f4c8;
    }
    ctx->pc = 0x12F4C0u;
    {
        const bool branch_taken_0x12f4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x12F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4C0u;
        // 0x12f4c4: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4c0) {
            ctx->pc = 0x12F4D0u;
            goto label_12f4d0;
        }
    }
    ctx->pc = 0x12F4C8u;
label_12f4c8:
    // 0x12f4c8: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_12f4cc:
    if (ctx->pc == 0x12F4CCu) {
        ctx->pc = 0x12F4D0u;
        goto label_12f4d0;
    }
    ctx->pc = 0x12F4C8u;
    {
        const bool branch_taken_0x12f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x12f4c8) {
            ctx->pc = 0x12F4ECu;
            goto label_12f4ec;
        }
    }
    ctx->pc = 0x12F4D0u;
label_12f4d0:
    // 0x12f4d0: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x12f4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
label_12f4d4:
    // 0x12f4d4: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x12f4d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_12f4d8:
    // 0x12f4d8: 0x13d1021  addu        $v0, $t1, $sp
    ctx->pc = 0x12f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
label_12f4dc:
    // 0x12f4dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f4e0:
    // 0x12f4e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12f4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12f4e4:
    // 0x12f4e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_12f4e8:
    if (ctx->pc == 0x12F4E8u) {
        ctx->pc = 0x12F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4E4u;
        // 0x12f4e8: 0xa4430920  sh          $v1, 0x920($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2336), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4ECu;
        goto label_12f4ec;
    }
    ctx->pc = 0x12F4E4u;
    {
        const bool branch_taken_0x12f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4E4u;
        // 0x12f4e8: 0xa4430920  sh          $v1, 0x920($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2336), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4e4) {
            ctx->pc = 0x12F500u;
            goto label_12f500;
        }
    }
    ctx->pc = 0x12F4ECu;
label_12f4ec:
    // 0x12f4ec: 0x0  nop
    ctx->pc = 0x12f4ecu;
    // NOP
label_12f4f0:
    // 0x12f4f0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x12f4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_12f4f4:
    // 0x12f4f4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x12f4f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_12f4f8:
    // 0x12f4f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12f4fc:
    // 0x12f4fc: 0xa4620920  sh          $v0, 0x920($v1)
    ctx->pc = 0x12f4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2336), (uint16_t)GPR_U32(ctx, 2));
label_12f500:
    // 0x12f500: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x12f500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_12f504:
    // 0x12f504: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12f504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12f508:
    // 0x12f508: 0x2c71021  addu        $v0, $s6, $a3
    ctx->pc = 0x12f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
label_12f50c:
    // 0x12f50c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x12f50cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12f510:
    // 0x12f510: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_12f514:
    if (ctx->pc == 0x12F514u) {
        ctx->pc = 0x12F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F510u;
        // 0x12f514: 0x114840  sll         $t1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F518u;
        goto label_12f518;
    }
    ctx->pc = 0x12F510u;
    {
        const bool branch_taken_0x12f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F510u;
        // 0x12f514: 0x114840  sll         $t1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f510) {
            ctx->pc = 0x12F4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f4b8;
        }
    }
    ctx->pc = 0x12F518u;
label_12f518:
    // 0x12f518: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x12f518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_12f51c:
    // 0x12f51c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12f51cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12f520:
    // 0x12f520: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x12f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_12f524:
    // 0x12f524: 0x24621920  addiu       $v0, $v1, 0x1920
    ctx->pc = 0x12f524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
label_12f528:
    // 0x12f528: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x12f528u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_12f52c:
    // 0x12f52c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x12f52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12f530:
    // 0x12f530: 0x10000025  b           . + 4 + (0x25 << 2)
label_12f534:
    if (ctx->pc == 0x12F534u) {
        ctx->pc = 0x12F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F530u;
        // 0x12f534: 0xa4620920  sh          $v0, 0x920($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F538u;
        goto label_12f538;
    }
    ctx->pc = 0x12F530u;
    {
        const bool branch_taken_0x12f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F530u;
        // 0x12f534: 0xa4620920  sh          $v0, 0x920($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f530) {
            ctx->pc = 0x12F5C8u;
            goto label_12f5c8;
        }
    }
    ctx->pc = 0x12F538u;
label_12f538:
    // 0x12f538: 0x10000016  b           . + 4 + (0x16 << 2)
label_12f53c:
    if (ctx->pc == 0x12F53Cu) {
        ctx->pc = 0x12F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F538u;
        // 0x12f53c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F540u;
        goto label_12f540;
    }
    ctx->pc = 0x12F538u;
    {
        const bool branch_taken_0x12f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F538u;
        // 0x12f53c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f538) {
            ctx->pc = 0x12F594u;
            goto label_12f594;
        }
    }
    ctx->pc = 0x12F540u;
label_12f540:
    // 0x12f540: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12f544:
    // 0x12f544: 0x24661a20  addiu       $a2, $v1, 0x1A20
    ctx->pc = 0x12f544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
label_12f548:
    // 0x12f548: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x12f548u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_12f54c:
    // 0x12f54c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x12f54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12f550:
    // 0x12f550: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_12f554:
    if (ctx->pc == 0x12F554u) {
        ctx->pc = 0x12F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F550u;
        // 0x12f554: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F558u;
        goto label_12f558;
    }
    ctx->pc = 0x12F550u;
    {
        const bool branch_taken_0x12f550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F550u;
        // 0x12f554: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f550) {
            ctx->pc = 0x12F560u;
            goto label_12f560;
        }
    }
    ctx->pc = 0x12F558u;
label_12f558:
    // 0x12f558: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_12f55c:
    if (ctx->pc == 0x12F55Cu) {
        ctx->pc = 0x12F560u;
        goto label_12f560;
    }
    ctx->pc = 0x12F558u;
    {
        const bool branch_taken_0x12f558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f558) {
            ctx->pc = 0x12F584u;
            goto label_12f584;
        }
    }
    ctx->pc = 0x12F560u;
label_12f560:
    // 0x12f560: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x12f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_12f564:
    // 0x12f564: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x12f564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_12f568:
    // 0x12f568: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12f56c:
    // 0x12f56c: 0x27a51a20  addiu       $a1, $sp, 0x1A20
    ctx->pc = 0x12f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6688));
label_12f570:
    // 0x12f570: 0xc080702  jal         func_201C08
label_12f574:
    if (ctx->pc == 0x12F574u) {
        ctx->pc = 0x12F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F570u;
        // 0x12f574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F578u;
        goto label_12f578;
    }
    ctx->pc = 0x12F570u;
    SET_GPR_U32(ctx, 31, 0x12F578u);
    ctx->pc = 0x12F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F570u;
    // 0x12f574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12F570u, 0x12F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F578u;
label_12f578:
    // 0x12f578: 0x26940100  addiu       $s4, $s4, 0x100
    ctx->pc = 0x12f578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_12f57c:
    // 0x12f57c: 0x10000004  b           . + 4 + (0x4 << 2)
label_12f580:
    if (ctx->pc == 0x12F580u) {
        ctx->pc = 0x12F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F57Cu;
        // 0x12f580: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F584u;
        goto label_12f584;
    }
    ctx->pc = 0x12F57Cu;
    {
        const bool branch_taken_0x12f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F57Cu;
        // 0x12f580: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f57c) {
            ctx->pc = 0x12F590u;
            goto label_12f590;
        }
    }
    ctx->pc = 0x12F584u;
label_12f584:
    // 0x12f584: 0x0  nop
    ctx->pc = 0x12f584u;
    // NOP
label_12f588:
    // 0x12f588: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x12f588u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_12f58c:
    // 0x12f58c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12f590:
    // 0x12f590: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12f594:
    // 0x12f594: 0x0  nop
    ctx->pc = 0x12f594u;
    // NOP
label_12f598:
    // 0x12f598: 0x2d52821  addu        $a1, $s6, $s5
    ctx->pc = 0x12f598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_12f59c:
    // 0x12f59c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x12f59cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12f5a0:
    // 0x12f5a0: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
label_12f5a4:
    if (ctx->pc == 0x12F5A4u) {
        ctx->pc = 0x12F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5A0u;
        // 0x12f5a4: 0x23d1821  addu        $v1, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5A8u;
        goto label_12f5a8;
    }
    ctx->pc = 0x12F5A0u;
    {
        const bool branch_taken_0x12f5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5A0u;
        // 0x12f5a4: 0x23d1821  addu        $v1, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5a0) {
            ctx->pc = 0x12F540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f540;
        }
    }
    ctx->pc = 0x12F5A8u;
label_12f5a8:
    // 0x12f5a8: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x12f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_12f5ac:
    // 0x12f5ac: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x12f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_12f5b0:
    // 0x12f5b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_12f5b4:
    // 0x12f5b4: 0xa0601a20  sb          $zero, 0x1A20($v1)
    ctx->pc = 0x12f5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6688), (uint8_t)GPR_U32(ctx, 0));
label_12f5b8:
    // 0x12f5b8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12f5bc:
    // 0x12f5bc: 0xc080702  jal         func_201C08
label_12f5c0:
    if (ctx->pc == 0x12F5C0u) {
        ctx->pc = 0x12F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5BCu;
        // 0x12f5c0: 0x27a51a20  addiu       $a1, $sp, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5C4u;
        goto label_12f5c4;
    }
    ctx->pc = 0x12F5BCu;
    SET_GPR_U32(ctx, 31, 0x12F5C4u);
    ctx->pc = 0x12F5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5BCu;
    // 0x12f5c0: 0x27a51a20  addiu       $a1, $sp, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12F5BCu, 0x12F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5C4u;
label_12f5c4:
    // 0x12f5c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12f5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12f5c8:
    // 0x12f5c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f5cc:
    // 0x12f5cc: 0x8f3900dc  lw          $t9, 0xDC($t9)
    ctx->pc = 0x12f5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 220)));
label_12f5d0:
    // 0x12f5d0: 0x320f809  jalr        $t9
label_12f5d4:
    if (ctx->pc == 0x12F5D4u) {
        ctx->pc = 0x12F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5D0u;
        // 0x12f5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5D8u;
        goto label_12f5d8;
    }
    ctx->pc = 0x12F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F5D8u);
        ctx->pc = 0x12F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5D0u;
        // 0x12f5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F5D0u, 0x12F5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F5D8u;
label_12f5d8:
    // 0x12f5d8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x12f5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_12f5dc:
    // 0x12f5dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12f5dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f5e0:
    // 0x12f5e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12f5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f5e4:
    // 0x12f5e4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_12f5e8:
    if (ctx->pc == 0x12F5E8u) {
        ctx->pc = 0x12F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5E4u;
        // 0x12f5e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5ECu;
        goto label_12f5ec;
    }
    ctx->pc = 0x12F5E4u;
    {
        const bool branch_taken_0x12f5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5E4u;
        // 0x12f5e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5e4) {
            ctx->pc = 0x12F644u;
            goto label_12f644;
        }
    }
    ctx->pc = 0x12F5ECu;
label_12f5ec:
    // 0x12f5ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f5f0:
    // 0x12f5f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f5f4:
    // 0x12f5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f5f8:
    // 0x12f5f8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x12f5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_12f5fc:
    // 0x12f5fc: 0x320f809  jalr        $t9
label_12f600:
    if (ctx->pc == 0x12F600u) {
        ctx->pc = 0x12F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5FCu;
        // 0x12f600: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F604u;
        goto label_12f604;
    }
    ctx->pc = 0x12F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F604u);
        ctx->pc = 0x12F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5FCu;
        // 0x12f600: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F5FCu, 0x12F604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F604u;
label_12f604:
    // 0x12f604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12f608:
    if (ctx->pc == 0x12F608u) {
        ctx->pc = 0x12F60Cu;
        goto label_12f60c;
    }
    ctx->pc = 0x12F604u;
    {
        const bool branch_taken_0x12f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f604) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F60Cu;
label_12f60c:
    // 0x12f60c: 0x10000053  b           . + 4 + (0x53 << 2)
label_12f610:
    if (ctx->pc == 0x12F610u) {
        ctx->pc = 0x12F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F60Cu;
        // 0x12f610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F614u;
        goto label_12f614;
    }
    ctx->pc = 0x12F60Cu;
    {
        const bool branch_taken_0x12f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F60Cu;
        // 0x12f610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f60c) {
            ctx->pc = 0x12F75Cu;
            goto label_12f75c;
        }
    }
    ctx->pc = 0x12F614u;
label_12f614:
    // 0x12f614: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12f614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12f618:
    // 0x12f618: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x12f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_12f61c:
    // 0x12f61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f620:
    // 0x12f620: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x12f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_12f624:
    // 0x12f624: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_12f628:
    // 0x12f628: 0x320f809  jalr        $t9
label_12f62c:
    if (ctx->pc == 0x12F62Cu) {
        ctx->pc = 0x12F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F628u;
        // 0x12f62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F630u;
        goto label_12f630;
    }
    ctx->pc = 0x12F628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F630u);
        ctx->pc = 0x12F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F628u;
        // 0x12f62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F628u, 0x12F630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F630u;
label_12f630:
    // 0x12f630: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f630u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12f634:
    // 0x12f634: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12f638:
    // 0x12f638: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x12f638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_12f63c:
    // 0x12f63c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_12f640:
    if (ctx->pc == 0x12F640u) {
        ctx->pc = 0x12F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F63Cu;
        // 0x12f640: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F644u;
        goto label_12f644;
    }
    ctx->pc = 0x12F63Cu;
    {
        const bool branch_taken_0x12f63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F63Cu;
        // 0x12f640: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f63c) {
            ctx->pc = 0x12F5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f5f0;
        }
    }
    ctx->pc = 0x12F644u;
label_12f644:
    // 0x12f644: 0x0  nop
    ctx->pc = 0x12f644u;
    // NOP
label_12f648:
    // 0x12f648: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x12f648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_12f64c:
    // 0x12f64c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_12f650:
    if (ctx->pc == 0x12F650u) {
        ctx->pc = 0x12F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F64Cu;
        // 0x12f650: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F654u;
        goto label_12f654;
    }
    ctx->pc = 0x12F64Cu;
    {
        const bool branch_taken_0x12f64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F64Cu;
        // 0x12f650: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f64c) {
            ctx->pc = 0x12F6ACu;
            goto label_12f6ac;
        }
    }
    ctx->pc = 0x12F654u;
label_12f654:
    // 0x12f654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f658:
    // 0x12f658: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f65c:
    // 0x12f65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f660:
    // 0x12f660: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_12f664:
    // 0x12f664: 0x320f809  jalr        $t9
label_12f668:
    if (ctx->pc == 0x12F668u) {
        ctx->pc = 0x12F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F664u;
        // 0x12f668: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F66Cu;
        goto label_12f66c;
    }
    ctx->pc = 0x12F664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F66Cu);
        ctx->pc = 0x12F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F664u;
        // 0x12f668: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F664u, 0x12F66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F66Cu;
label_12f66c:
    // 0x12f66c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12f670:
    if (ctx->pc == 0x12F670u) {
        ctx->pc = 0x12F674u;
        goto label_12f674;
    }
    ctx->pc = 0x12F66Cu;
    {
        const bool branch_taken_0x12f66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f66c) {
            ctx->pc = 0x12F67Cu;
            goto label_12f67c;
        }
    }
    ctx->pc = 0x12F674u;
label_12f674:
    // 0x12f674: 0x10000039  b           . + 4 + (0x39 << 2)
label_12f678:
    if (ctx->pc == 0x12F678u) {
        ctx->pc = 0x12F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F674u;
        // 0x12f678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F67Cu;
        goto label_12f67c;
    }
    ctx->pc = 0x12F674u;
    {
        const bool branch_taken_0x12f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F674u;
        // 0x12f678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f674) {
            ctx->pc = 0x12F75Cu;
            goto label_12f75c;
        }
    }
    ctx->pc = 0x12F67Cu;
label_12f67c:
    // 0x12f67c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12f67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12f680:
    // 0x12f680: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x12f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_12f684:
    // 0x12f684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f688:
    // 0x12f688: 0x24650920  addiu       $a1, $v1, 0x920
    ctx->pc = 0x12f688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
label_12f68c:
    // 0x12f68c: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x12f68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_12f690:
    // 0x12f690: 0x320f809  jalr        $t9
label_12f694:
    if (ctx->pc == 0x12F694u) {
        ctx->pc = 0x12F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F690u;
        // 0x12f694: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F698u;
        goto label_12f698;
    }
    ctx->pc = 0x12F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F698u);
        ctx->pc = 0x12F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F690u;
        // 0x12f694: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F690u, 0x12F698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F698u;
label_12f698:
    // 0x12f698: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12f698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12f69c:
    // 0x12f69c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12f69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12f6a0:
    // 0x12f6a0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x12f6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_12f6a4:
    // 0x12f6a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_12f6a8:
    if (ctx->pc == 0x12F6A8u) {
        ctx->pc = 0x12F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6A4u;
        // 0x12f6a8: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6ACu;
        goto label_12f6ac;
    }
    ctx->pc = 0x12F6A4u;
    {
        const bool branch_taken_0x12f6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6A4u;
        // 0x12f6a8: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6a4) {
            ctx->pc = 0x12F658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f658;
        }
    }
    ctx->pc = 0x12F6ACu;
label_12f6ac:
    // 0x12f6ac: 0x0  nop
    ctx->pc = 0x12f6acu;
    // NOP
label_12f6b0:
    // 0x12f6b0: 0x296082a  slt         $at, $s4, $s6
    ctx->pc = 0x12f6b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_12f6b4:
    // 0x12f6b4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_12f6b8:
    if (ctx->pc == 0x12F6B8u) {
        ctx->pc = 0x12F6BCu;
        goto label_12f6bc;
    }
    ctx->pc = 0x12F6B4u;
    {
        const bool branch_taken_0x12f6b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f6b4) {
            ctx->pc = 0x12F6FCu;
            goto label_12f6fc;
        }
    }
    ctx->pc = 0x12F6BCu;
label_12f6bc:
    // 0x12f6bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f6c0:
    // 0x12f6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f6c4:
    // 0x12f6c4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x12f6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_12f6c8:
    // 0x12f6c8: 0x320f809  jalr        $t9
label_12f6cc:
    if (ctx->pc == 0x12F6CCu) {
        ctx->pc = 0x12F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6C8u;
        // 0x12f6cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6D0u;
        goto label_12f6d0;
    }
    ctx->pc = 0x12F6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F6D0u);
        ctx->pc = 0x12F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6C8u;
        // 0x12f6cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F6C8u, 0x12F6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F6D0u;
label_12f6d0:
    // 0x12f6d0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12f6d4:
    // 0x12f6d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_12f6d8:
    // 0x12f6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f6dc:
    // 0x12f6dc: 0x24a5ed50  addiu       $a1, $a1, -0x12B0
    ctx->pc = 0x12f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
label_12f6e0:
    // 0x12f6e0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x12f6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_12f6e4:
    // 0x12f6e4: 0x320f809  jalr        $t9
label_12f6e8:
    if (ctx->pc == 0x12F6E8u) {
        ctx->pc = 0x12F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6E4u;
        // 0x12f6e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6ECu;
        goto label_12f6ec;
    }
    ctx->pc = 0x12F6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F6ECu);
        ctx->pc = 0x12F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6E4u;
        // 0x12f6e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F6E4u, 0x12F6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F6ECu;
label_12f6ec:
    // 0x12f6ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12f6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12f6f0:
    // 0x12f6f0: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x12f6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_12f6f4:
    // 0x12f6f4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_12f6f8:
    if (ctx->pc == 0x12F6F8u) {
        ctx->pc = 0x12F6FCu;
        goto label_12f6fc;
    }
    ctx->pc = 0x12F6F4u;
    {
        const bool branch_taken_0x12f6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f6f4) {
            ctx->pc = 0x12F6BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f6bc;
        }
    }
    ctx->pc = 0x12F6FCu;
label_12f6fc:
    // 0x12f6fc: 0x0  nop
    ctx->pc = 0x12f6fcu;
    // NOP
label_12f700:
    // 0x12f700: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
label_12f704:
    if (ctx->pc == 0x12F704u) {
        ctx->pc = 0x12F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F700u;
        // 0x12f704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F708u;
        goto label_12f708;
    }
    ctx->pc = 0x12F700u;
    {
        const bool branch_taken_0x12f700 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F700u;
        // 0x12f704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f700) {
            ctx->pc = 0x12F754u;
            goto label_12f754;
        }
    }
    ctx->pc = 0x12F708u;
label_12f708:
    // 0x12f708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f70c:
    // 0x12f70c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_12f710:
    // 0x12f710: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x12f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
label_12f714:
    // 0x12f714: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x12f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12f718:
    // 0x12f718: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12f71c:
    // 0x12f71c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_12f720:
    if (ctx->pc == 0x12F720u) {
        ctx->pc = 0x12F724u;
        goto label_12f724;
    }
    ctx->pc = 0x12F71Cu;
    {
        const bool branch_taken_0x12f71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f71c) {
            ctx->pc = 0x12F744u;
            goto label_12f744;
        }
    }
    ctx->pc = 0x12F724u;
label_12f724:
    // 0x12f724: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x12f724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_12f728:
    // 0x12f728: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_12f72c:
    // 0x12f72c: 0x24423e74  addiu       $v0, $v0, 0x3E74
    ctx->pc = 0x12f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15988));
label_12f730:
    // 0x12f730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12f734:
    // 0x12f734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12f738:
    // 0x12f738: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x12f738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_12f73c:
    // 0x12f73c: 0x10000005  b           . + 4 + (0x5 << 2)
label_12f740:
    if (ctx->pc == 0x12F740u) {
        ctx->pc = 0x12F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F73Cu;
        // 0x12f740: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F744u;
        goto label_12f744;
    }
    ctx->pc = 0x12F73Cu;
    {
        const bool branch_taken_0x12f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F73Cu;
        // 0x12f740: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f73c) {
            ctx->pc = 0x12F754u;
            goto label_12f754;
        }
    }
    ctx->pc = 0x12F744u;
label_12f744:
    // 0x12f744: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12f748:
    // 0x12f748: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x12f748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_12f74c:
    // 0x12f74c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_12f750:
    if (ctx->pc == 0x12F750u) {
        ctx->pc = 0x12F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F74Cu;
        // 0x12f750: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F754u;
        goto label_12f754;
    }
    ctx->pc = 0x12F74Cu;
    {
        const bool branch_taken_0x12f74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F74Cu;
        // 0x12f750: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f74c) {
            ctx->pc = 0x12F714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f714;
        }
    }
    ctx->pc = 0x12F754u;
label_12f754:
    // 0x12f754: 0x0  nop
    ctx->pc = 0x12f754u;
    // NOP
label_12f758:
    // 0x12f758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12f758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f75c:
    // 0x12f75c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_12f760:
    // 0x12f760: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x12f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12f764:
    // 0x12f764: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x12f764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12f768:
    // 0x12f768: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x12f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12f76c:
    // 0x12f76c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12f76cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12f770:
    // 0x12f770: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12f774:
    // 0x12f774: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12f774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12f778:
    // 0x12f778: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12f778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12f77c:
    // 0x12f77c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12f77cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12f780:
    // 0x12f780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12f780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12f784:
    // 0x12f784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12f784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12f788:
    // 0x12f788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12f788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12f78c:
    // 0x12f78c: 0x3e00008  jr          $ra
label_12f790:
    if (ctx->pc == 0x12F790u) {
        ctx->pc = 0x12F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F78Cu;
        // 0x12f790: 0x27bd1aa0  addiu       $sp, $sp, 0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F794u;
        goto label_fallthrough_0x12f78c;
    }
    ctx->pc = 0x12F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F78Cu;
        // 0x12f790: 0x27bd1aa0  addiu       $sp, $sp, 0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12f78c:
    ctx->pc = 0x12F794u;
}
