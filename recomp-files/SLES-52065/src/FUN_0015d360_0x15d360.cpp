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

// Function: FUN_0015d360
// Address: 0x15d360 - 0x15d514
void FUN_0015d360_0x15d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d360_0x15d360");
#endif

    switch (ctx->pc) {
        case 0x15d360u: goto label_15d360;
        case 0x15d364u: goto label_15d364;
        case 0x15d368u: goto label_15d368;
        case 0x15d36cu: goto label_15d36c;
        case 0x15d370u: goto label_15d370;
        case 0x15d374u: goto label_15d374;
        case 0x15d378u: goto label_15d378;
        case 0x15d37cu: goto label_15d37c;
        case 0x15d380u: goto label_15d380;
        case 0x15d384u: goto label_15d384;
        case 0x15d388u: goto label_15d388;
        case 0x15d38cu: goto label_15d38c;
        case 0x15d390u: goto label_15d390;
        case 0x15d394u: goto label_15d394;
        case 0x15d398u: goto label_15d398;
        case 0x15d39cu: goto label_15d39c;
        case 0x15d3a0u: goto label_15d3a0;
        case 0x15d3a4u: goto label_15d3a4;
        case 0x15d3a8u: goto label_15d3a8;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d3b0u: goto label_15d3b0;
        case 0x15d3b4u: goto label_15d3b4;
        case 0x15d3b8u: goto label_15d3b8;
        case 0x15d3bcu: goto label_15d3bc;
        case 0x15d3c0u: goto label_15d3c0;
        case 0x15d3c4u: goto label_15d3c4;
        case 0x15d3c8u: goto label_15d3c8;
        case 0x15d3ccu: goto label_15d3cc;
        case 0x15d3d0u: goto label_15d3d0;
        case 0x15d3d4u: goto label_15d3d4;
        case 0x15d3d8u: goto label_15d3d8;
        case 0x15d3dcu: goto label_15d3dc;
        case 0x15d3e0u: goto label_15d3e0;
        case 0x15d3e4u: goto label_15d3e4;
        case 0x15d3e8u: goto label_15d3e8;
        case 0x15d3ecu: goto label_15d3ec;
        case 0x15d3f0u: goto label_15d3f0;
        case 0x15d3f4u: goto label_15d3f4;
        case 0x15d3f8u: goto label_15d3f8;
        case 0x15d3fcu: goto label_15d3fc;
        case 0x15d400u: goto label_15d400;
        case 0x15d404u: goto label_15d404;
        case 0x15d408u: goto label_15d408;
        case 0x15d40cu: goto label_15d40c;
        case 0x15d410u: goto label_15d410;
        case 0x15d414u: goto label_15d414;
        case 0x15d418u: goto label_15d418;
        case 0x15d41cu: goto label_15d41c;
        case 0x15d420u: goto label_15d420;
        case 0x15d424u: goto label_15d424;
        case 0x15d428u: goto label_15d428;
        case 0x15d42cu: goto label_15d42c;
        case 0x15d430u: goto label_15d430;
        case 0x15d434u: goto label_15d434;
        case 0x15d438u: goto label_15d438;
        case 0x15d43cu: goto label_15d43c;
        case 0x15d440u: goto label_15d440;
        case 0x15d444u: goto label_15d444;
        case 0x15d448u: goto label_15d448;
        case 0x15d44cu: goto label_15d44c;
        case 0x15d450u: goto label_15d450;
        case 0x15d454u: goto label_15d454;
        case 0x15d458u: goto label_15d458;
        case 0x15d45cu: goto label_15d45c;
        case 0x15d460u: goto label_15d460;
        case 0x15d464u: goto label_15d464;
        case 0x15d468u: goto label_15d468;
        case 0x15d46cu: goto label_15d46c;
        case 0x15d470u: goto label_15d470;
        case 0x15d474u: goto label_15d474;
        case 0x15d478u: goto label_15d478;
        case 0x15d47cu: goto label_15d47c;
        case 0x15d480u: goto label_15d480;
        case 0x15d484u: goto label_15d484;
        case 0x15d488u: goto label_15d488;
        case 0x15d48cu: goto label_15d48c;
        case 0x15d490u: goto label_15d490;
        case 0x15d494u: goto label_15d494;
        case 0x15d498u: goto label_15d498;
        case 0x15d49cu: goto label_15d49c;
        case 0x15d4a0u: goto label_15d4a0;
        case 0x15d4a4u: goto label_15d4a4;
        case 0x15d4a8u: goto label_15d4a8;
        case 0x15d4acu: goto label_15d4ac;
        case 0x15d4b0u: goto label_15d4b0;
        case 0x15d4b4u: goto label_15d4b4;
        case 0x15d4b8u: goto label_15d4b8;
        case 0x15d4bcu: goto label_15d4bc;
        case 0x15d4c0u: goto label_15d4c0;
        case 0x15d4c4u: goto label_15d4c4;
        case 0x15d4c8u: goto label_15d4c8;
        case 0x15d4ccu: goto label_15d4cc;
        case 0x15d4d0u: goto label_15d4d0;
        case 0x15d4d4u: goto label_15d4d4;
        case 0x15d4d8u: goto label_15d4d8;
        case 0x15d4dcu: goto label_15d4dc;
        case 0x15d4e0u: goto label_15d4e0;
        case 0x15d4e4u: goto label_15d4e4;
        case 0x15d4e8u: goto label_15d4e8;
        case 0x15d4ecu: goto label_15d4ec;
        case 0x15d4f0u: goto label_15d4f0;
        case 0x15d4f4u: goto label_15d4f4;
        case 0x15d4f8u: goto label_15d4f8;
        case 0x15d4fcu: goto label_15d4fc;
        case 0x15d500u: goto label_15d500;
        case 0x15d504u: goto label_15d504;
        case 0x15d508u: goto label_15d508;
        case 0x15d50cu: goto label_15d50c;
        case 0x15d510u: goto label_15d510;
        default: break;
    }

    ctx->pc = 0x15d360u;

label_15d360:
    // 0x15d360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15d364:
    // 0x15d364: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_15d368:
    // 0x15d368: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15d36c:
    // 0x15d36c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15d370:
    // 0x15d370: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15d374:
    // 0x15d374: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15d378:
    // 0x15d378: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15d37c:
    // 0x15d37c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d380:
    // 0x15d380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15d384:
    // 0x15d384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15d388:
    // 0x15d388: 0x8c922c0c  lw          $s2, 0x2C0C($a0)
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11276)));
label_15d38c:
    // 0x15d38c: 0x6400056  bltz        $s2, . + 4 + (0x56 << 2)
label_15d390:
    if (ctx->pc == 0x15D390u) {
        ctx->pc = 0x15D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D38Cu;
        // 0x15d390: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D394u;
        goto label_15d394;
    }
    ctx->pc = 0x15D38Cu;
    {
        const bool branch_taken_0x15d38c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x15D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D38Cu;
        // 0x15d390: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d38c) {
            ctx->pc = 0x15D4E8u;
            goto label_15d4e8;
        }
    }
    ctx->pc = 0x15D394u;
label_15d394:
    // 0x15d394: 0x8ed72c20  lw          $s7, 0x2C20($s6)
    ctx->pc = 0x15d394u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11296)));
label_15d398:
    // 0x15d398: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x15d398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_15d39c:
    // 0x15d39c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_15d3a0:
    if (ctx->pc == 0x15D3A0u) {
        ctx->pc = 0x15D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D39Cu;
        // 0x15d3a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3A4u;
        goto label_15d3a4;
    }
    ctx->pc = 0x15D39Cu;
    {
        const bool branch_taken_0x15d39c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D39Cu;
        // 0x15d3a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d39c) {
            ctx->pc = 0x15D440u;
            goto label_15d440;
        }
    }
    ctx->pc = 0x15D3A4u;
label_15d3a4:
    // 0x15d3a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15d3a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d3a8:
    // 0x15d3a8: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x15d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
label_15d3ac:
    // 0x15d3ac: 0x753021  addu        $a2, $v1, $s5
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15d3b0:
    // 0x15d3b0: 0x90c3003f  lbu         $v1, 0x3F($a2)
    ctx->pc = 0x15d3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 63)));
label_15d3b4:
    // 0x15d3b4: 0x1643001d  bne         $s2, $v1, . + 4 + (0x1D << 2)
label_15d3b8:
    if (ctx->pc == 0x15D3B8u) {
        ctx->pc = 0x15D3BCu;
        goto label_15d3bc;
    }
    ctx->pc = 0x15D3B4u;
    {
        const bool branch_taken_0x15d3b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d3b4) {
            ctx->pc = 0x15D42Cu;
            goto label_15d42c;
        }
    }
    ctx->pc = 0x15D3BCu;
label_15d3bc:
    // 0x15d3bc: 0x84c5000a  lh          $a1, 0xA($a2)
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_15d3c0:
    // 0x15d3c0: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_15d3c4:
    // 0x15d3c4: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x15d3c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_15d3c8:
    // 0x15d3c8: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x15d3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_15d3cc:
    // 0x15d3cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15d3d0:
    // 0x15d3d0: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d3d4:
    // 0x15d3d4: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_15d3d8:
    // 0x15d3d8: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x15d3d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15d3dc:
    // 0x15d3dc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_15d3e0:
    if (ctx->pc == 0x15D3E0u) {
        ctx->pc = 0x15D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3DCu;
        // 0x15d3e0: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3E4u;
        goto label_15d3e4;
    }
    ctx->pc = 0x15D3DCu;
    {
        const bool branch_taken_0x15d3dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3DCu;
        // 0x15d3e0: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3dc) {
            ctx->pc = 0x15D420u;
            goto label_15d420;
        }
    }
    ctx->pc = 0x15D3E4u;
label_15d3e4:
    // 0x15d3e4: 0x0  nop
    ctx->pc = 0x15d3e4u;
    // NOP
label_15d3e8:
    // 0x15d3e8: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_15d3ec:
    // 0x15d3ec: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d3f0:
    // 0x15d3f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d3f4:
    // 0x15d3f4: 0x80420028  lb          $v0, 0x28($v0)
    ctx->pc = 0x15d3f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_15d3f8:
    // 0x15d3f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15d3fc:
    if (ctx->pc == 0x15D3FCu) {
        ctx->pc = 0x15D400u;
        goto label_15d400;
    }
    ctx->pc = 0x15D3F8u;
    {
        const bool branch_taken_0x15d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d3f8) {
            ctx->pc = 0x15D410u;
            goto label_15d410;
        }
    }
    ctx->pc = 0x15D400u;
label_15d400:
    // 0x15d400: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d404:
    // 0x15d404: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d408:
    // 0x15d408: 0x320f809  jalr        $t9
label_15d40c:
    if (ctx->pc == 0x15D40Cu) {
        ctx->pc = 0x15D410u;
        goto label_15d410;
    }
    ctx->pc = 0x15D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D410u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D408u, 0x15D410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D410u;
label_15d410:
    // 0x15d410: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15d414:
    // 0x15d414: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x15d414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15d418:
    // 0x15d418: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_15d41c:
    if (ctx->pc == 0x15D41Cu) {
        ctx->pc = 0x15D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D418u;
        // 0x15d41c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D420u;
        goto label_15d420;
    }
    ctx->pc = 0x15D418u;
    {
        const bool branch_taken_0x15d418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D418u;
        // 0x15d41c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d418) {
            ctx->pc = 0x15D3E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d3e4;
        }
    }
    ctx->pc = 0x15D420u;
label_15d420:
    // 0x15d420: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15d424:
    // 0x15d424: 0xc057620  jal         func_15D880
label_15d428:
    if (ctx->pc == 0x15D428u) {
        ctx->pc = 0x15D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D424u;
        // 0x15d428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D42Cu;
        goto label_15d42c;
    }
    ctx->pc = 0x15D424u;
    SET_GPR_U32(ctx, 31, 0x15D42Cu);
    ctx->pc = 0x15D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D424u;
    // 0x15d428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D880u, 0x15D424u, 0x15D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D42Cu;
label_15d42c:
    // 0x15d42c: 0x0  nop
    ctx->pc = 0x15d42cu;
    // NOP
label_15d430:
    // 0x15d430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d434:
    // 0x15d434: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x15d434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_15d438:
    // 0x15d438: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_15d43c:
    if (ctx->pc == 0x15D43Cu) {
        ctx->pc = 0x15D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D438u;
        // 0x15d43c: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D440u;
        goto label_15d440;
    }
    ctx->pc = 0x15D438u;
    {
        const bool branch_taken_0x15d438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D438u;
        // 0x15d43c: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d438) {
            ctx->pc = 0x15D3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d3a8;
        }
    }
    ctx->pc = 0x15D440u;
label_15d440:
    // 0x15d440: 0x8ed13dd8  lw          $s1, 0x3DD8($s6)
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15832)));
label_15d444:
    // 0x15d444: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15d444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15d448:
    // 0x15d448: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_15d44c:
    if (ctx->pc == 0x15D44Cu) {
        ctx->pc = 0x15D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D448u;
        // 0x15d44c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D450u;
        goto label_15d450;
    }
    ctx->pc = 0x15D448u;
    {
        const bool branch_taken_0x15d448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D448u;
        // 0x15d44c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d448) {
            ctx->pc = 0x15D4E8u;
            goto label_15d4e8;
        }
    }
    ctx->pc = 0x15D450u;
label_15d450:
    // 0x15d450: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15d450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d454:
    // 0x15d454: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_15d458:
    // 0x15d458: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15d45c:
    // 0x15d45c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d460:
    // 0x15d460: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_15d464:
    if (ctx->pc == 0x15D464u) {
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D468u;
        goto label_15d468;
    }
    ctx->pc = 0x15D460u;
    {
        const bool branch_taken_0x15d460 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d460) {
            ctx->pc = 0x15D470u;
            goto label_15d470;
        }
    }
    ctx->pc = 0x15D468u;
label_15d468:
    // 0x15d468: 0x10000003  b           . + 4 + (0x3 << 2)
label_15d46c:
    if (ctx->pc == 0x15D46Cu) {
        ctx->pc = 0x15D470u;
        goto label_15d470;
    }
    ctx->pc = 0x15D468u;
    {
        const bool branch_taken_0x15d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d468) {
            ctx->pc = 0x15D478u;
            goto label_15d478;
        }
    }
    ctx->pc = 0x15D470u;
label_15d470:
    // 0x15d470: 0x84e60004  lh          $a2, 0x4($a3)
    ctx->pc = 0x15d470u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_15d474:
    // 0x15d474: 0x0  nop
    ctx->pc = 0x15d474u;
    // NOP
label_15d478:
    // 0x15d478: 0x18c00016  blez        $a2, . + 4 + (0x16 << 2)
label_15d47c:
    if (ctx->pc == 0x15D47Cu) {
        ctx->pc = 0x15D480u;
        goto label_15d480;
    }
    ctx->pc = 0x15D478u;
    {
        const bool branch_taken_0x15d478 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x15d478) {
            ctx->pc = 0x15D4D4u;
            goto label_15d4d4;
        }
    }
    ctx->pc = 0x15D480u;
label_15d480:
    // 0x15d480: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
label_15d484:
    // 0x15d484: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x15d484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15d488:
    // 0x15d488: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15d48c:
    // 0x15d48c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15d490:
    // 0x15d490: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d494:
    // 0x15d494: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x15d494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
label_15d498:
    // 0x15d498: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
label_15d49c:
    if (ctx->pc == 0x15D49Cu) {
        ctx->pc = 0x15D4A0u;
        goto label_15d4a0;
    }
    ctx->pc = 0x15D498u;
    {
        const bool branch_taken_0x15d498 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d498) {
            ctx->pc = 0x15D4D4u;
            goto label_15d4d4;
        }
    }
    ctx->pc = 0x15D4A0u;
label_15d4a0:
    // 0x15d4a0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_15d4a4:
    if (ctx->pc == 0x15D4A4u) {
        ctx->pc = 0x15D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A0u;
        // 0x15d4a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4A8u;
        goto label_15d4a8;
    }
    ctx->pc = 0x15D4A0u;
    {
        const bool branch_taken_0x15d4a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A0u;
        // 0x15d4a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4a0) {
            ctx->pc = 0x15D4B0u;
            goto label_15d4b0;
        }
    }
    ctx->pc = 0x15D4A8u;
label_15d4a8:
    // 0x15d4a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_15d4ac:
    if (ctx->pc == 0x15D4ACu) {
        ctx->pc = 0x15D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A8u;
        // 0x15d4ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4B0u;
        goto label_15d4b0;
    }
    ctx->pc = 0x15D4A8u;
    {
        const bool branch_taken_0x15d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A8u;
        // 0x15d4ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4a8) {
            ctx->pc = 0x15D4BCu;
            goto label_15d4bc;
        }
    }
    ctx->pc = 0x15D4B0u;
label_15d4b0:
    // 0x15d4b0: 0x84e50006  lh          $a1, 0x6($a3)
    ctx->pc = 0x15d4b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_15d4b4:
    // 0x15d4b4: 0x0  nop
    ctx->pc = 0x15d4b4u;
    // NOP
label_15d4b8:
    // 0x15d4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d4bc:
    // 0x15d4bc: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_15d4c0:
    if (ctx->pc == 0x15D4C0u) {
        ctx->pc = 0x15D4C4u;
        goto label_15d4c4;
    }
    ctx->pc = 0x15D4BCu;
    {
        const bool branch_taken_0x15d4bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d4bc) {
            ctx->pc = 0x15D4D4u;
            goto label_15d4d4;
        }
    }
    ctx->pc = 0x15D4C4u;
label_15d4c4:
    // 0x15d4c4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d4c8:
    // 0x15d4c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d4cc:
    // 0x15d4cc: 0x320f809  jalr        $t9
label_15d4d0:
    if (ctx->pc == 0x15D4D0u) {
        ctx->pc = 0x15D4D4u;
        goto label_15d4d4;
    }
    ctx->pc = 0x15D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D4D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4CCu, 0x15D4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D4D4u;
label_15d4d4:
    // 0x15d4d4: 0x0  nop
    ctx->pc = 0x15d4d4u;
    // NOP
label_15d4d8:
    // 0x15d4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d4dc:
    // 0x15d4dc: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15d4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15d4e0:
    // 0x15d4e0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_15d4e4:
    if (ctx->pc == 0x15D4E4u) {
        ctx->pc = 0x15D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4E0u;
        // 0x15d4e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4E8u;
        goto label_15d4e8;
    }
    ctx->pc = 0x15D4E0u;
    {
        const bool branch_taken_0x15d4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4E0u;
        // 0x15d4e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4e0) {
            ctx->pc = 0x15D454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d454;
        }
    }
    ctx->pc = 0x15D4E8u;
label_15d4e8:
    // 0x15d4e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15d4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15d4ec:
    // 0x15d4ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15d4ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15d4f0:
    // 0x15d4f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d4f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15d4f4:
    // 0x15d4f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d4f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15d4f8:
    // 0x15d4f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d4f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d4fc:
    // 0x15d4fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d4fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d500:
    // 0x15d500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d504:
    // 0x15d504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d508:
    // 0x15d508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d50c:
    // 0x15d50c: 0x3e00008  jr          $ra
label_15d510:
    if (ctx->pc == 0x15D510u) {
        ctx->pc = 0x15D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D50Cu;
        // 0x15d510: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D514u;
        goto label_fallthrough_0x15d50c;
    }
    ctx->pc = 0x15D50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D50Cu;
        // 0x15d510: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d50c:
    ctx->pc = 0x15D514u;
}
