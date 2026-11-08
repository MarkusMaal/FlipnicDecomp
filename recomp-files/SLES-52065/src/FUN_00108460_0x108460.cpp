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

// Function: FUN_00108460
// Address: 0x108460 - 0x1086dc
void FUN_00108460_0x108460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108460_0x108460");
#endif

    switch (ctx->pc) {
        case 0x1084b8u: goto label_1084b8;
        case 0x1084ccu: goto label_1084cc;
        case 0x108524u: goto label_108524;
        case 0x108534u: goto label_108534;
        case 0x108550u: goto label_108550;
        case 0x1085a0u: goto label_1085a0;
        case 0x1085d0u: goto label_1085d0;
        case 0x10866cu: goto label_10866c;
        case 0x1086bcu: goto label_1086bc;
        default: break;
    }

    ctx->pc = 0x108460u;

    // 0x108460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x108464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x108464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x108468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10846c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x108470: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x108470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108478: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108478u;
    {
        const bool branch_taken_0x108478 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x10847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108478u;
        // 0x10847c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108478) {
            ctx->pc = 0x108488u;
            goto label_108488;
        }
    }
    ctx->pc = 0x108480u;
    // 0x108480: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x108480u;
    {
        const bool branch_taken_0x108480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108480u;
        // 0x108484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108480) {
            ctx->pc = 0x1086C0u;
            goto label_1086c0;
        }
    }
    ctx->pc = 0x108488u;
label_108488:
    // 0x108488: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x108488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x10848c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10848Cu;
    {
        const bool branch_taken_0x10848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10848Cu;
        // 0x108490: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10848c) {
            ctx->pc = 0x10849Cu;
            goto label_10849c;
        }
    }
    ctx->pc = 0x108494u;
    // 0x108494: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x108494u;
    {
        const bool branch_taken_0x108494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108494u;
        // 0x108498: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108494) {
            ctx->pc = 0x1086C0u;
            goto label_1086c0;
        }
    }
    ctx->pc = 0x10849Cu;
label_10849c:
    // 0x10849c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1084a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1084a4: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1084a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1084a8: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1084A8u;
    {
        const bool branch_taken_0x1084a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1084ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084A8u;
        // 0x1084ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084a8) {
            ctx->pc = 0x1084CCu;
            goto label_1084cc;
        }
    }
    ctx->pc = 0x1084B0u;
    // 0x1084b0: 0xc0618e4  jal         func_186390
    ctx->pc = 0x1084B0u;
    SET_GPR_U32(ctx, 31, 0x1084B8u);
    ctx->pc = 0x1084B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084B0u;
    // 0x1084b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186390u, 0x1084B0u, 0x1084B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084B8u;
label_1084b8:
    // 0x1084b8: 0x93828398  lbu         $v0, -0x7C68($gp)
    ctx->pc = 0x1084b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935448)));
    // 0x1084bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1084BCu;
    {
        const bool branch_taken_0x1084bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084BCu;
        // 0x1084c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084bc) {
            ctx->pc = 0x1084CCu;
            goto label_1084cc;
        }
    }
    ctx->pc = 0x1084C4u;
    // 0x1084c4: 0xc0618e4  jal         func_186390
    ctx->pc = 0x1084C4u;
    SET_GPR_U32(ctx, 31, 0x1084CCu);
    ctx->pc = 0x1084C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084C4u;
    // 0x1084c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186390u, 0x1084C4u, 0x1084CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084CCu;
label_1084cc:
    // 0x1084cc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1084ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1084d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1084d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1084d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1084d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1084D8u;
    {
        const bool branch_taken_0x1084d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1084DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084D8u;
        // 0x1084dc: 0x27b10058  addiu       $s1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084d8) {
            ctx->pc = 0x1084E8u;
            goto label_1084e8;
        }
    }
    ctx->pc = 0x1084E0u;
    // 0x1084e0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1084E0u;
    {
        const bool branch_taken_0x1084e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084E0u;
        // 0x1084e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084e0) {
            ctx->pc = 0x1086C0u;
            goto label_1086c0;
        }
    }
    ctx->pc = 0x1084E8u;
label_1084e8:
    // 0x1084e8: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1084ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1084ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1084f0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1084f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1084f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1084f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1084f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1084f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1084fc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1084fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x108500: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x108504: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x108504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x108508: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108508u;
    {
        const bool branch_taken_0x108508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x108508) {
            ctx->pc = 0x10853Cu;
            goto label_10853c;
        }
    }
    ctx->pc = 0x108510u;
    // 0x108510: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x108510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x108514: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108514u;
    {
        const bool branch_taken_0x108514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108514u;
        // 0x108518: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108514) {
            ctx->pc = 0x10852Cu;
            goto label_10852c;
        }
    }
    ctx->pc = 0x10851Cu;
    // 0x10851c: 0xc04208c  jal         func_108230
    ctx->pc = 0x10851Cu;
    SET_GPR_U32(ctx, 31, 0x108524u);
    ctx->pc = 0x108520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10851Cu;
    // 0x108520: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108230u, 0x10851Cu, 0x108524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108524u;
label_108524:
    // 0x108524: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x108524u;
    {
        const bool branch_taken_0x108524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108524u;
        // 0x108528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108524) {
            ctx->pc = 0x1086C0u;
            goto label_1086c0;
        }
    }
    ctx->pc = 0x10852Cu;
label_10852c:
    // 0x10852c: 0xc042038  jal         func_1080E0
    ctx->pc = 0x10852Cu;
    SET_GPR_U32(ctx, 31, 0x108534u);
    ctx->pc = 0x1080E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1080E0u, 0x10852Cu, 0x108534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108534u;
label_108534:
    // 0x108534: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x108534u;
    {
        const bool branch_taken_0x108534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108534) {
            ctx->pc = 0x1086BCu;
            goto label_1086bc;
        }
    }
    ctx->pc = 0x10853Cu;
label_10853c:
    // 0x10853c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x108540: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108540u;
    {
        const bool branch_taken_0x108540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108540) {
            ctx->pc = 0x1085A8u;
            goto label_1085a8;
        }
    }
    ctx->pc = 0x108548u;
    // 0x108548: 0xc062d50  jal         func_18B540
    ctx->pc = 0x108548u;
    SET_GPR_U32(ctx, 31, 0x108550u);
    ctx->pc = 0x10854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108548u;
    // 0x10854c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x108548u, 0x108550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108550u;
label_108550:
    // 0x108550: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x108550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x108554: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x108558: 0x2043824  and         $a3, $s0, $a0
    ctx->pc = 0x108558u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x10855c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x10855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x108560: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x108560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108564: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x108564u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x108568: 0x0  nop
    ctx->pc = 0x108568u;
    // NOP
    // 0x10856c: 0x2010  mfhi        $a0
    ctx->pc = 0x10856cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x108570: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x108570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x108574: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x108574u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x108578: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x108578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10857c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x10857cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x108580: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108580u;
    {
        const bool branch_taken_0x108580 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108580u;
        // 0x108584: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108580) {
            ctx->pc = 0x108590u;
            goto label_108590;
        }
    }
    ctx->pc = 0x108588u;
    // 0x108588: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x10858c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x10858cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_108590:
    // 0x108590: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x108590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x108594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108598: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x108598u;
    SET_GPR_U32(ctx, 31, 0x1085A0u);
    ctx->pc = 0x10859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108598u;
    // 0x10859c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x108598u, 0x1085A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085A0u;
label_1085a0:
    // 0x1085a0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1085A0u;
    {
        const bool branch_taken_0x1085a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1085a0) {
            ctx->pc = 0x1086BCu;
            goto label_1086bc;
        }
    }
    ctx->pc = 0x1085A8u;
label_1085a8:
    // 0x1085a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1085a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1085ac: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1085ACu;
    {
        const bool branch_taken_0x1085ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0x3c02433e  lui         $v0, 0x433E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085ac) {
            ctx->pc = 0x108664u;
            goto label_108664;
        }
    }
    ctx->pc = 0x1085B4u;
    // 0x1085b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1085b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1085b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1085b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1085bc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1085bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1085c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1085c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1085c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1085c8: 0xc041ddc  jal         func_107770
    ctx->pc = 0x1085C8u;
    SET_GPR_U32(ctx, 31, 0x1085D0u);
    ctx->pc = 0x1085CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085C8u;
    // 0x1085cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x1085C8u, 0x1085D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085D0u;
label_1085d0:
    // 0x1085d0: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x1085d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1085d4: 0x19000039  blez        $t0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1085D4u;
    {
        const bool branch_taken_0x1085d4 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1085d4) {
            ctx->pc = 0x1086BCu;
            goto label_1086bc;
        }
    }
    ctx->pc = 0x1085DCu;
    // 0x1085dc: 0x8f83821c  lw          $v1, -0x7DE4($gp)
    ctx->pc = 0x1085dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
    // 0x1085e0: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x1085e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1085e4: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1085E4u;
    {
        const bool branch_taken_0x1085e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E4u;
        // 0x1085e8: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e4) {
            ctx->pc = 0x1086BCu;
            goto label_1086bc;
        }
    }
    ctx->pc = 0x1085ECu;
    // 0x1085ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1085ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1085f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1085f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1085f4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1085f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1085f8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1085f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1085fc: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1085fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x108600: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108604: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x108604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x108608: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x108608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x10860c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10860cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x108610: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x108614: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x108614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x108618: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x108618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x10861c: 0x2442ffdc  addiu       $v0, $v0, -0x24
    ctx->pc = 0x10861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x108620: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x108620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x108624: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x108624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x108628: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x108628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x10862c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108630: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x108630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x108634: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x108638: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x108638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10863c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x10863cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x108640: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x108640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x108644: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x108644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108648: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x108648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10864c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x108654: 0x8f82821c  lw          $v0, -0x7DE4($gp)
    ctx->pc = 0x108654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
    // 0x108658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x108658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10865c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10865Cu;
    {
        const bool branch_taken_0x10865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10865Cu;
        // 0x108660: 0xaf82821c  sw          $v0, -0x7DE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10865c) {
            ctx->pc = 0x1086BCu;
            goto label_1086bc;
        }
    }
    ctx->pc = 0x108664u;
label_108664:
    // 0x108664: 0xc062d50  jal         func_18B540
    ctx->pc = 0x108664u;
    SET_GPR_U32(ctx, 31, 0x10866Cu);
    ctx->pc = 0x108668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108664u;
    // 0x108668: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x108664u, 0x10866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10866Cu;
label_10866c:
    // 0x10866c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x10866cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x108670: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x108670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x108674: 0x2043824  and         $a3, $s0, $a0
    ctx->pc = 0x108674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x108678: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x108678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x10867c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x10867cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108680: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x108680u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x108684: 0x0  nop
    ctx->pc = 0x108684u;
    // NOP
    // 0x108688: 0x2010  mfhi        $a0
    ctx->pc = 0x108688u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x10868c: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x10868cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x108690: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x108690u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x108694: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x108694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x108698: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x10869c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10869Cu;
    {
        const bool branch_taken_0x10869c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10869Cu;
        // 0x1086a0: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10869c) {
            ctx->pc = 0x1086ACu;
            goto label_1086ac;
        }
    }
    ctx->pc = 0x1086A4u;
    // 0x1086a4: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x1086a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x1086a8: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_1086ac:
    // 0x1086ac: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1086acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1086b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1086b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086b4: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x1086B4u;
    SET_GPR_U32(ctx, 31, 0x1086BCu);
    ctx->pc = 0x1086B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086B4u;
    // 0x1086b8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x1086B4u, 0x1086BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086BCu;
label_1086bc:
    // 0x1086bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1086bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1086c0:
    // 0x1086c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1086c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1086c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1086c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1086c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1086c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1086cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1086ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1086d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1086d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1086D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1086D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086D4u;
        // 0x1086d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1086DCu;
}
