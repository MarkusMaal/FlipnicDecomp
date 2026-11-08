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

// Function: FUN_00138500
// Address: 0x138500 - 0x138690
void FUN_00138500_0x138500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138500_0x138500");
#endif

    switch (ctx->pc) {
        case 0x1385f8u: goto label_1385f8;
        case 0x138620u: goto label_138620;
        default: break;
    }

    ctx->pc = 0x138500u;

    // 0x138500: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x138500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x138504: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x138504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138508: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x138508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13850c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x138510: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x138510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x138514: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x138514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x138518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x138518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13851c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13852c: 0x8cc70088  lw          $a3, 0x88($a2)
    ctx->pc = 0x13852cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x138530: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x138534: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x138534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x138538: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x138538u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13853c: 0xa1060003  sb          $a2, 0x3($t0)
    ctx->pc = 0x13853cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x138540: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x138540u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x138544: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x138544u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x138548: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x138548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x13854c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x13854cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x138550: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x138550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x138554: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x138554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x138558: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x138558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x13855c: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x13855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x138560: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x138560u;
    {
        const bool branch_taken_0x138560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x138564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138560u;
        // 0x138564: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138560) {
            ctx->pc = 0x1385DCu;
            goto label_1385dc;
        }
    }
    ctx->pc = 0x138568u;
    // 0x138568: 0x8e270068  lw          $a3, 0x68($s1)
    ctx->pc = 0x138568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x13856c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x138570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138574: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13857c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13857cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x138580: 0x34640404  ori         $a0, $v1, 0x404
    ctx->pc = 0x138580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x138584: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x138584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x138588: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x138588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13858c: 0x3463801e  ori         $v1, $v1, 0x801E
    ctx->pc = 0x13858cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32798);
    // 0x138590: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138594: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x138594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x138598: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x138598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x13859c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13859cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1385a0: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1385a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1385a4: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1385a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1385a8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1385a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1385ac: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x1385acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1385b0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1385b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1385b4: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1385b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1385b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1385b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1385bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1385c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1385c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1385c4: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x1385c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1385c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1385c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1385cc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1385ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1385d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1385d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1385d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1385d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1385d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1385d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1385dc:
    // 0x1385dc: 0x8e360058  lw          $s6, 0x58($s1)
    ctx->pc = 0x1385dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1385e0: 0x8e32005c  lw          $s2, 0x5C($s1)
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1385e4: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x1385e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1385e8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1385E8u;
    {
        const bool branch_taken_0x1385e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385E8u;
        // 0x1385ec: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385e8) {
            ctx->pc = 0x138668u;
            goto label_138668;
        }
    }
    ctx->pc = 0x1385F0u;
    // 0x1385f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1385f4: 0x3a940  sll         $s5, $v1, 5
    ctx->pc = 0x1385f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1385f8:
    // 0x1385f8: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x1385f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1385fc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x1385fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x138600: 0x8f948594  lw          $s4, -0x7A6C($gp)
    ctx->pc = 0x138600u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x138604: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x138604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138608: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138608u;
    {
        const bool branch_taken_0x138608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138608u;
        // 0x13860c: 0x959821  addu        $s3, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138608) {
            ctx->pc = 0x138620u;
            goto label_138620;
        }
    }
    ctx->pc = 0x138610u;
    // 0x138610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x138610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138614: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x138614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138618: 0xc04e948  jal         func_13A520
    ctx->pc = 0x138618u;
    SET_GPR_U32(ctx, 31, 0x138620u);
    ctx->pc = 0x13861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138618u;
    // 0x13861c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A520u, 0x138618u, 0x138620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138620u;
label_138620:
    // 0x138620: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x138624: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x138628: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x138628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13862c: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x13862cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x138630: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x138630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x138634: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x138638: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x13863c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x13863cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138640: 0x256182b  sltu        $v1, $s2, $s6
    ctx->pc = 0x138640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x138644: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x138644u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x138648: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x138648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x13864c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x13864cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x138650: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x138650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x138654: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x138654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x138658: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x138658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13865c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x138660: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x138660u;
    {
        const bool branch_taken_0x138660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138660u;
        // 0x138664: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138660) {
            ctx->pc = 0x1385F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1385f8;
        }
    }
    ctx->pc = 0x138668u;
label_138668:
    // 0x138668: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x138668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13866c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13866cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138670: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138674: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x138674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x138678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13867c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13867cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138688: 0x3e00008  jr          $ra
    ctx->pc = 0x138688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138688u;
        // 0x13868c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138690u;
}
