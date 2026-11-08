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

// Function: FUN_0011c390
// Address: 0x11c390 - 0x11c560
void FUN_0011c390_0x11c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c390_0x11c390");
#endif

    switch (ctx->pc) {
        case 0x11c3ccu: goto label_11c3cc;
        case 0x11c3e8u: goto label_11c3e8;
        case 0x11c404u: goto label_11c404;
        case 0x11c468u: goto label_11c468;
        case 0x11c49cu: goto label_11c49c;
        case 0x11c4dcu: goto label_11c4dc;
        case 0x11c514u: goto label_11c514;
        case 0x11c530u: goto label_11c530;
        case 0x11c538u: goto label_11c538;
        default: break;
    }

    ctx->pc = 0x11c390u;

    // 0x11c390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11c398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11c39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11c3a0: 0x8f838038  lw          $v1, -0x7FC8($gp)
    ctx->pc = 0x11c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934584)));
    // 0x11c3a4: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x11C3A4u;
    {
        const bool branch_taken_0x11c3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3A4u;
        // 0x11c3a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3a4) {
            ctx->pc = 0x11C54Cu;
            goto label_11c54c;
        }
    }
    ctx->pc = 0x11C3ACu;
    // 0x11c3ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c3b0: 0xaf808038  sw          $zero, -0x7FC8($gp)
    ctx->pc = 0x11c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934584), GPR_U32(ctx, 0));
    // 0x11c3b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11c3b8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x11c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x11c3bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c4: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C3C4u;
    SET_GPR_U32(ctx, 31, 0x11C3CCu);
    ctx->pc = 0x11C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3C4u;
    // 0x11c3c8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C3C4u, 0x11C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3CCu;
label_11c3cc:
    // 0x11c3cc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3d4: 0x8c222000  lw          $v0, 0x2000($at)
    ctx->pc = 0x11c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002000u));
    // 0x11c3d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3dc: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x11c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x11c3e0: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C3E0u;
    SET_GPR_U32(ctx, 31, 0x11C3E8u);
    ctx->pc = 0x11C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3E0u;
    // 0x11c3e4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C3E0u, 0x11C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3E8u;
label_11c3e8:
    // 0x11c3e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x11c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x11c3ec: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c3f0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11c3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11c3f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3fc: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C3FCu;
    SET_GPR_U32(ctx, 31, 0x11C404u);
    ctx->pc = 0x11C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3FCu;
    // 0x11c400: 0xac222000  sw          $v0, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C3FCu, 0x11C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C404u;
label_11c404:
    // 0x11c404: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x11c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x11c408: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x11c408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x11c40c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x11c40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x11c410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11c410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11c414: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x11c414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x11c418: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c41c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11c420: 0xac242010  sw          $a0, 0x2010($at)
    ctx->pc = 0x11c420u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 4));
    // 0x11c424: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x11c424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x11c428: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c42c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11c42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11c430: 0xac232000  sw          $v1, 0x2000($at)
    ctx->pc = 0x11c430u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x11c434: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11c438: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x11c438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x11c43c: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x11c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x11c440: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x11c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x11c444: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C444u;
    {
        const bool branch_taken_0x11c444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C444u;
        // 0x11c448: 0xa48018  mult        $s0, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c444) {
            ctx->pc = 0x11C468u;
            goto label_11c468;
        }
    }
    ctx->pc = 0x11C44Cu;
    // 0x11c44c: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x11c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c450: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c454: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C454u;
    {
        const bool branch_taken_0x11c454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C454u;
        // 0x11c458: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c454) {
            ctx->pc = 0x11C468u;
            goto label_11c468;
        }
    }
    ctx->pc = 0x11C45Cu;
    // 0x11c45c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11c460: 0xc047ba0  jal         func_11EE80
    ctx->pc = 0x11C460u;
    SET_GPR_U32(ctx, 31, 0x11C468u);
    ctx->pc = 0x11C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C460u;
    // 0x11c464: 0x8c4400d0  lw          $a0, 0xD0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE80u, 0x11C460u, 0x11C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C468u;
label_11c468:
    // 0x11c468: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x11c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c46c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11c46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c474: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x11c474u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x11c478: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x11c478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x11c47c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x11c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c484: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11c488: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11C488u;
    {
        const bool branch_taken_0x11c488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C488u;
        // 0x11c48c: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c488) {
            ctx->pc = 0x11C508u;
            goto label_11c508;
        }
    }
    ctx->pc = 0x11C490u;
    // 0x11c490: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c494: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x11c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11c498: 0x3446b000  ori         $a2, $v0, 0xB000
    ctx->pc = 0x11c498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_11c49c:
    // 0x11c49c: 0x2a0103ff  slti        $at, $s0, 0x3FF
    ctx->pc = 0x11c49cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1023) ? 1 : 0);
    // 0x11c4a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C4A0u;
    {
        const bool branch_taken_0x11c4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4A0u;
        // 0x11c4a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a0) {
            ctx->pc = 0x11C4B0u;
            goto label_11c4b0;
        }
    }
    ctx->pc = 0x11C4A8u;
    // 0x11c4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C4A8u;
    {
        const bool branch_taken_0x11c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c4a8) {
            ctx->pc = 0x11C4B4u;
            goto label_11c4b4;
        }
    }
    ctx->pc = 0x11C4B0u;
label_11c4b0:
    // 0x11c4b0: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_11c4b4:
    // 0x11c4b4: 0x0  nop
    ctx->pc = 0x11c4b4u;
    // NOP
    // 0x11c4b8: 0x4113c  dsll32      $v0, $a0, 4
    ctx->pc = 0x11c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x11c4bc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x11c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x11c4c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c4c4: 0xac22b010  sw          $v0, -0x4FF0($at)
    ctx->pc = 0x11c4c4u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 2));
    // 0x11c4c8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x11c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x11c4cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c4d0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11c4d4: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x11c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2));
    // 0x11c4d8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x11c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_11c4dc:
    // 0x11c4dc: 0x0  nop
    ctx->pc = 0x11c4dcu;
    // NOP
    // 0x11c4e0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c4e4: 0x8c22b000  lw          $v0, -0x5000($at)
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x11c4e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x11c4ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11c4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11c4f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C4F0u;
    {
        const bool branch_taken_0x11c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c4f0) {
            ctx->pc = 0x11C4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c4dc;
        }
    }
    ctx->pc = 0x11C4F8u;
    // 0x11c4f8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x11c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x11c4fc: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x11c500: 0x1600ffe6  bnez        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11C500u;
    {
        const bool branch_taken_0x11c500 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C500u;
        // 0x11c504: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c500) {
            ctx->pc = 0x11C49Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c49c;
        }
    }
    ctx->pc = 0x11C508u;
label_11c508:
    // 0x11c508: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c50c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C50Cu;
    SET_GPR_U32(ctx, 31, 0x11C514u);
    ctx->pc = 0x11C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C50Cu;
    // 0x11c510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C50Cu, 0x11C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C514u;
label_11c514:
    // 0x11c514: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x11c514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x11c518: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c51c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x11c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x11c520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c528: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C528u;
    SET_GPR_U32(ctx, 31, 0x11C530u);
    ctx->pc = 0x11C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C528u;
    // 0x11c52c: 0xac222000  sw          $v0, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C528u, 0x11C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C530u;
label_11c530:
    // 0x11c530: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11C530u;
    SET_GPR_U32(ctx, 31, 0x11C538u);
    ctx->pc = 0x11C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C530u;
    // 0x11c534: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11C530u, 0x11C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C538u;
label_11c538:
    // 0x11c538: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x11c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x11c53c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11c544: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x11c544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
    // 0x11c548: 0xaf838038  sw          $v1, -0x7FC8($gp)
    ctx->pc = 0x11c548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934584), GPR_U32(ctx, 3));
label_11c54c:
    // 0x11c54c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11c550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11c554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c558: 0x3e00008  jr          $ra
    ctx->pc = 0x11C558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C558u;
        // 0x11c55c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C560u;
}
