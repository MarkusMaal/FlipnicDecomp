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

// Function: FUN_001844b0
// Address: 0x1844b0 - 0x1848b0
void FUN_001844b0_0x1844b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001844b0_0x1844b0");
#endif

    switch (ctx->pc) {
        case 0x184858u: goto label_184858;
        case 0x184874u: goto label_184874;
        default: break;
    }

    ctx->pc = 0x1844b0u;

    // 0x1844b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1844b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1844b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1844b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1844b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1844b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1844bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1844bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1844c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1844c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1844c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1844c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1844c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1844c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1844cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1844ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1844d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1844d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1844d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1844d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1844d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1844d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1844dc: 0x838286bc  lb          $v0, -0x7944($gp)
    ctx->pc = 0x1844dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936252)));
    // 0x1844e0: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x1844E0u;
    {
        const bool branch_taken_0x1844e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1844E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844E0u;
        // 0x1844e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844e0) {
            ctx->pc = 0x184860u;
            goto label_184860;
        }
    }
    ctx->pc = 0x1844E8u;
    // 0x1844e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1844e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1844ec: 0x30160001  andi        $s6, $zero, 0x1
    ctx->pc = 0x1844ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1844f0: 0xfc209058  sd          $zero, -0x6FA8($at)
    ctx->pc = 0x1844f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369058u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369058u, _value); } while (0);
    // 0x1844f4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1844f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1844f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1844f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1844fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1844fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x184500: 0xfc229048  sd          $v0, -0x6FB8($at)
    ctx->pc = 0x184500u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369048u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369048u, _value); } while (0);
    // 0x184504: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x184504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x184508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18450c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18450cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184510: 0xfc229068  sd          $v0, -0x6F98($at)
    ctx->pc = 0x184510u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369068u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369068u, _value); } while (0);
    // 0x184514: 0x2415fffe  addiu       $s5, $zero, -0x2
    ctx->pc = 0x184514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x184518: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x184518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18451c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18451cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184520: 0xfc229078  sd          $v0, -0x6F88($at)
    ctx->pc = 0x184520u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369078u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369078u, _value); } while (0);
    // 0x184524: 0x2412fff1  addiu       $s2, $zero, -0xF
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x184528: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18452c: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x18452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x184530: 0xfc229088  sd          $v0, -0x6F78($at)
    ctx->pc = 0x184530u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369088u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369088u, _value); } while (0);
    // 0x184534: 0x64060006  daddiu      $a2, $zero, 0x6
    ctx->pc = 0x184534u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x184538: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18453c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x184540: 0xa0239023  sb          $v1, -0x6FDD($at)
    ctx->pc = 0x184540u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369023u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369023u, _value); } while (0);
    // 0x184544: 0x2408fff9  addiu       $t0, $zero, -0x7
    ctx->pc = 0x184544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x184548: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18454c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x18454cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x184550: 0xa4229020  sh          $v0, -0x6FE0($at)
    ctx->pc = 0x184550u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938656), (uint16_t)GPR_U32(ctx, 2));
    // 0x184554: 0x64090002  daddiu      $t1, $zero, 0x2
    ctx->pc = 0x184554u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x184558: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18455c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x184560: 0xa0209022  sb          $zero, -0x6FDE($at)
    ctx->pc = 0x184560u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369022u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369022u, _value); } while (0);
    // 0x184564: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x184564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x184568: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18456c: 0x2419f00f  addiu       $t9, $zero, -0xFF1
    ctx->pc = 0x18456cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x184570: 0xac22902c  sw          $v0, -0x6FD4($at)
    ctx->pc = 0x184570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36902Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36902Cu, _value); } while (0);
    // 0x184574: 0x2417fff7  addiu       $s7, $zero, -0x9
    ctx->pc = 0x184574u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x184578: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18457c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x18457cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x184580: 0xac249028  sw          $a0, -0x6FD8($at)
    ctx->pc = 0x184580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369028u, _value); } while (0);
    // 0x184584: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184588: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18458c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x18458cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x184590: 0xac209024  sw          $zero, -0x6FDC($at)
    ctx->pc = 0x184590u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938660), GPR_U32(ctx, 0));
    // 0x184594: 0x167180  sll         $t6, $s6, 6
    ctx->pc = 0x184594u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x184598: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18459c: 0x1661c0  sll         $t4, $s6, 7
    ctx->pc = 0x18459cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x1845a0: 0xfc229030  sd          $v0, -0x6FD0($at)
    ctx->pc = 0x1845a0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U64(ctx, 2));
    // 0x1845a4: 0x240fffcf  addiu       $t7, $zero, -0x31
    ctx->pc = 0x1845a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1845a8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1845a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1845ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1845acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1845b0: 0xfc229038  sd          $v0, -0x6FC8($at)
    ctx->pc = 0x1845b0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369038u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369038u, _value); } while (0);
    // 0x1845b4: 0x241effef  addiu       $fp, $zero, -0x11
    ctx->pc = 0x1845b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1845b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1845b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1845bc: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1845bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x1845c0: 0xa0209060  sb          $zero, -0x6FA0($at)
    ctx->pc = 0x1845c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369060u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369060u, _value); } while (0);
    // 0x1845c4: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x1845c4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1845c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1845c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1845cc: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x1845ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1845d0: 0xa0209061  sb          $zero, -0x6F9F($at)
    ctx->pc = 0x1845d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369061u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369061u, _value); } while (0);
    // 0x1845d4: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x1845d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1845d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1845d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1845dc: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1845dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1845e0: 0xa0209062  sb          $zero, -0x6F9E($at)
    ctx->pc = 0x1845e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369062u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369062u, _value); } while (0);
    // 0x1845e4: 0x2c100  sll         $t8, $v0, 4
    ctx->pc = 0x1845e4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1845e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1845e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1845ec: 0x240dffbf  addiu       $t5, $zero, -0x41
    ctx->pc = 0x1845ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1845f0: 0xa0209063  sb          $zero, -0x6F9D($at)
    ctx->pc = 0x1845f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369063u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369063u, _value); } while (0);
    // 0x1845f4: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x1845f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1845f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1845f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1845fc: 0xac209064  sw          $zero, -0x6F9C($at)
    ctx->pc = 0x1845fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369064u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369064u, _value); } while (0);
    // 0x184600: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184604: 0x90249040  lbu         $a0, -0x6FC0($at)
    ctx->pc = 0x184604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x369040u));
    // 0x184608: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18460c: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x18460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x184610: 0x90229042  lbu         $v0, -0x6FBE($at)
    ctx->pc = 0x184610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938690)));
    // 0x184614: 0x962025  or          $a0, $a0, $s6
    ctx->pc = 0x184614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x184618: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18461c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x18461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x184620: 0xa0249040  sb          $a0, -0x6FC0($at)
    ctx->pc = 0x184620u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938688), (uint8_t)GPR_U32(ctx, 4));
    // 0x184624: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184628: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18462c: 0x1620c0  sll         $a0, $s6, 3
    ctx->pc = 0x18462cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x184630: 0x90349040  lbu         $s4, -0x6FC0($at)
    ctx->pc = 0x184630u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938688)));
    // 0x184634: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x184634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x184638: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18463c: 0x2929024  and         $s2, $s4, $s2
    ctx->pc = 0x18463cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 18));
    // 0x184640: 0x90279050  lbu         $a3, -0x6FB0($at)
    ctx->pc = 0x184640u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938704)));
    // 0x184644: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x184644u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
    // 0x184648: 0x24136bf0  addiu       $s3, $zero, 0x6BF0
    ctx->pc = 0x184648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 27632));
    // 0x18464c: 0x2414ffdf  addiu       $s4, $zero, -0x21
    ctx->pc = 0x18464cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x184650: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184654: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x184654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x184658: 0xa0229042  sb          $v0, -0x6FBE($at)
    ctx->pc = 0x184658u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938690), (uint8_t)GPR_U32(ctx, 2));
    // 0x18465c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x18465cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x184660: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184664: 0x161140  sll         $v0, $s6, 5
    ctx->pc = 0x184664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x184668: 0x902a9042  lbu         $t2, -0x6FBE($at)
    ctx->pc = 0x184668u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938690)));
    // 0x18466c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184670: 0x1483824  and         $a3, $t2, $t0
    ctx->pc = 0x184670u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x184674: 0xa0329040  sb          $s2, -0x6FC0($at)
    ctx->pc = 0x184674u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938688), (uint8_t)GPR_U32(ctx, 18));
    // 0x184678: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x184678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x18467c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184680: 0x2412fffd  addiu       $s2, $zero, -0x3
    ctx->pc = 0x184680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x184684: 0xa0259050  sb          $a1, -0x6FB0($at)
    ctx->pc = 0x184684u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x369050u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369050u, _value); } while (0);
    // 0x184688: 0x240afffb  addiu       $t2, $zero, -0x5
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x18468c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18468cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184690: 0x162840  sll         $a1, $s6, 1
    ctx->pc = 0x184690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x184694: 0x94269040  lhu         $a2, -0x6FC0($at)
    ctx->pc = 0x184694u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938688)));
    // 0x184698: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18469c: 0xd93024  and         $a2, $a2, $t9
    ctx->pc = 0x18469cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
    // 0x1846a0: 0x90289050  lbu         $t0, -0x6FB0($at)
    ctx->pc = 0x1846a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938704)));
    // 0x1846a4: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x1846a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x1846a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1846a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1846ac: 0x1174024  and         $t0, $t0, $s7
    ctx->pc = 0x1846acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 23));
    // 0x1846b0: 0x90299051  lbu         $t1, -0x6FAF($at)
    ctx->pc = 0x1846b0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938705)));
    // 0x1846b4: 0x1048825  or          $s1, $t0, $a0
    ctx->pc = 0x1846b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x1846b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1846b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1846bc: 0x1352024  and         $a0, $t1, $s5
    ctx->pc = 0x1846bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 21));
    // 0x1846c0: 0xa0279042  sb          $a3, -0x6FBE($at)
    ctx->pc = 0x1846c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938690), (uint8_t)GPR_U32(ctx, 7));
    // 0x1846c4: 0x964025  or          $t0, $a0, $s6
    ctx->pc = 0x1846c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x1846c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1846c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1846cc: 0x163880  sll         $a3, $s6, 2
    ctx->pc = 0x1846ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1846d0: 0xa4339070  sh          $s3, -0x6F90($at)
    ctx->pc = 0x1846d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938736), (uint16_t)GPR_U32(ctx, 19));
    // 0x1846d4: 0x341693f0  ori         $s6, $zero, 0x93F0
    ctx->pc = 0x1846d4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37872);
    // 0x1846d8: 0x241377fc  addiu       $s3, $zero, 0x77FC
    ctx->pc = 0x1846d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30716));
    // 0x1846dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1846dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1846e0: 0xa4339072  sh          $s3, -0x6F8E($at)
    ctx->pc = 0x1846e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x369072u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369072u, _value); } while (0);
    // 0x1846e4: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x1846e4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1846e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1846e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1846ec: 0xa4269040  sh          $a2, -0x6FC0($at)
    ctx->pc = 0x1846ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x369040u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369040u, _value); } while (0);
    // 0x1846f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1846f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1846f4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1846f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1846f8: 0xa0319050  sb          $s1, -0x6FB0($at)
    ctx->pc = 0x1846f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x369050u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369050u, _value); } while (0);
    // 0x1846fc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1846fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x184700: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184704: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x184704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x184708: 0xa0289051  sb          $t0, -0x6FAF($at)
    ctx->pc = 0x184708u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x369051u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369051u, _value); } while (0);
    // 0x18470c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18470cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184710: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x184710u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x184714: 0x90359041  lbu         $s5, -0x6FBF($at)
    ctx->pc = 0x184714u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938689)));
    // 0x184718: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x184718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18471c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18471cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x184720: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x184720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x184724: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184728: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x184728u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x18472c: 0x90339050  lbu         $s3, -0x6FB0($at)
    ctx->pc = 0x18472cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938704)));
    // 0x184730: 0x1f87825  or          $t7, $t7, $t8
    ctx->pc = 0x184730u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 24));
    // 0x184734: 0x341587fc  ori         $s5, $zero, 0x87FC
    ctx->pc = 0x184734u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34812);
    // 0x184738: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18473c: 0x27e9824  and         $s3, $s3, $fp
    ctx->pc = 0x18473cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 30));
    // 0x184740: 0x90319051  lbu         $s1, -0x6FAF($at)
    ctx->pc = 0x184740u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938705)));
    // 0x184744: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x184744u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x184748: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18474c: 0x2321824  and         $v1, $s1, $s2
    ctx->pc = 0x18474cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
    // 0x184750: 0xdc299070  ld          $t1, -0x6F90($at)
    ctx->pc = 0x184750u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 1), 4294938736)));
    // 0x184754: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x184754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x184758: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x184758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18475c: 0x24a548b0  addiu       $a1, $a1, 0x48B0
    ctx->pc = 0x18475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18608));
    // 0x184760: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184764: 0xa4369080  sh          $s6, -0x6F80($at)
    ctx->pc = 0x184764u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x369080u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369080u, _value); } while (0);
    // 0x184768: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18476c: 0xa02f9041  sb          $t7, -0x6FBF($at)
    ctx->pc = 0x18476cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x369041u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369041u, _value); } while (0);
    // 0x184770: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184774: 0xa0339050  sb          $s3, -0x6FB0($at)
    ctx->pc = 0x184774u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x369050u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369050u, _value); } while (0);
    // 0x184778: 0x70867b89  pcpyld      $t7, $a0, $a2
    ctx->pc = 0x184778u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x18477c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18477cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184780: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x184780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x184784: 0xa0239051  sb          $v1, -0x6FAF($at)
    ctx->pc = 0x184784u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369051u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369051u, _value); } while (0);
    // 0x184788: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x184788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x18478c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18478cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184790: 0x12f1824  and         $v1, $t1, $t7
    ctx->pc = 0x184790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 15));
    // 0x184794: 0xa4359082  sh          $s5, -0x6F7E($at)
    ctx->pc = 0x184794u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938754), (uint16_t)GPR_U32(ctx, 21));
    // 0x184798: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x184798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x18479c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18479cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1847a0: 0x24849020  addiu       $a0, $a0, -0x6FE0
    ctx->pc = 0x1847a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938656));
    // 0x1847a4: 0xfc239070  sd          $v1, -0x6F90($at)
    ctx->pc = 0x1847a4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369070u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369070u, _value); } while (0);
    // 0x1847a8: 0x24c69010  addiu       $a2, $a2, -0x6FF0
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938640));
    // 0x1847ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1847acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1847b0: 0x90329041  lbu         $s2, -0x6FBF($at)
    ctx->pc = 0x1847b0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)FAST_READ8(0x369041u));
    // 0x1847b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1847b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1847b8: 0x24d9024  and         $s2, $s2, $t5
    ctx->pc = 0x1847b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 13));
    // 0x1847bc: 0x90319050  lbu         $s1, -0x6FB0($at)
    ctx->pc = 0x1847bcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938704)));
    // 0x1847c0: 0x24e9025  or          $s2, $s2, $t6
    ctx->pc = 0x1847c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 14));
    // 0x1847c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1847c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1847c8: 0x2348824  and         $s1, $s1, $s4
    ctx->pc = 0x1847c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x1847cc: 0x90299051  lbu         $t1, -0x6FAF($at)
    ctx->pc = 0x1847ccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938705)));
    // 0x1847d0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1847d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1847d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1847d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1847d8: 0x12a1024  and         $v0, $t1, $t2
    ctx->pc = 0x1847d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x1847dc: 0xdc239080  ld          $v1, -0x6F80($at)
    ctx->pc = 0x1847dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294938752)));
    // 0x1847e0: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x1847e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1847e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1847e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1847e8: 0x6f1024  and         $v0, $v1, $t7
    ctx->pc = 0x1847e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x1847ec: 0xa0329041  sb          $s2, -0x6FBF($at)
    ctx->pc = 0x1847ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938689), (uint8_t)GPR_U32(ctx, 18));
    // 0x1847f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1847f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1847f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1847f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1847f8: 0xa0319050  sb          $s1, -0x6FB0($at)
    ctx->pc = 0x1847f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x369050u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369050u, _value); } while (0);
    // 0x1847fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1847fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184800: 0xa0279051  sb          $a3, -0x6FAF($at)
    ctx->pc = 0x184800u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x369051u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369051u, _value); } while (0);
    // 0x184804: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184808: 0xfc229080  sd          $v0, -0x6F80($at)
    ctx->pc = 0x184808u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369080u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369080u, _value); } while (0);
    // 0x18480c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184810: 0x90239041  lbu         $v1, -0x6FBF($at)
    ctx->pc = 0x184810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x369041u));
    // 0x184814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184818: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x184818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x18481c: 0x90229050  lbu         $v0, -0x6FB0($at)
    ctx->pc = 0x18481cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938704)));
    // 0x184820: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x184820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x184824: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184828: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x184828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x18482c: 0xa0239041  sb          $v1, -0x6FBF($at)
    ctx->pc = 0x18482cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938689), (uint8_t)GPR_U32(ctx, 3));
    // 0x184830: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x184830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x184834: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184838: 0xa0229050  sb          $v0, -0x6FB0($at)
    ctx->pc = 0x184838u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369050u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369050u, _value); } while (0);
    // 0x18483c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18483cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184840: 0x90229050  lbu         $v0, -0x6FB0($at)
    ctx->pc = 0x184840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x369050u));
    // 0x184844: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x184844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x184848: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18484c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x18484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x184850: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x184850u;
    SET_GPR_U32(ctx, 31, 0x184858u);
    ctx->pc = 0x184854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184850u;
    // 0x184854: 0xa0229050  sb          $v0, -0x6FB0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938704), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x184850u, 0x184858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184858u;
label_184858:
    // 0x184858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18485c: 0xa38286bc  sb          $v0, -0x7944($gp)
    ctx->pc = 0x18485cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936252), (uint8_t)GPR_U32(ctx, 2));
label_184860:
    // 0x184860: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x184860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184864: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x184864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x184868: 0x24a59020  addiu       $a1, $a1, -0x6FE0
    ctx->pc = 0x184868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938656));
    // 0x18486c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x18486Cu;
    SET_GPR_U32(ctx, 31, 0x184874u);
    ctx->pc = 0x184870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18486Cu;
    // 0x184870: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x18486Cu, 0x184874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184874u;
label_184874:
    // 0x184874: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184878: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x184878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x18487c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18487cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x184880: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x184880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184884: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x184884u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184888: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x184888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18488c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18488cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184890: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x184890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x184894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18489c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18489cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1848a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1848a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1848a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1848a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1848a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1848A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848A8u;
        // 0x1848ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1848B0u;
}
