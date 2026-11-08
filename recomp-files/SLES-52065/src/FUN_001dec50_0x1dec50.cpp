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

// Function: FUN_001dec50
// Address: 0x1dec50 - 0x1dee00
void FUN_001dec50_0x1dec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dec50_0x1dec50");
#endif

    switch (ctx->pc) {
        case 0x1ded28u: goto label_1ded28;
        case 0x1dede8u: goto label_1dede8;
        default: break;
    }

    ctx->pc = 0x1dec50u;

    // 0x1dec50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dec54: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1dec54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1dec58: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x1dec58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x1dec5c: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1dec5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1dec60: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x1dec60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
    // 0x1dec64: 0x3c0e0038  lui         $t6, 0x38
    ctx->pc = 0x1dec64u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)56 << 16));
    // 0x1dec68: 0x3c0f0038  lui         $t7, 0x38
    ctx->pc = 0x1dec68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)56 << 16));
    // 0x1dec6c: 0x3c0a00ff  lui         $t2, 0xFF
    ctx->pc = 0x1dec6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)255 << 16));
    // 0x1dec70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dec74: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1dec74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1dec78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dec7c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1dec7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1dec80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1dec80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dec84: 0x25297310  addiu       $t1, $t1, 0x7310
    ctx->pc = 0x1dec84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29456));
    // 0x1dec88: 0x256b7300  addiu       $t3, $t3, 0x7300
    ctx->pc = 0x1dec88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29440));
    // 0x1dec8c: 0x258c7318  addiu       $t4, $t4, 0x7318
    ctx->pc = 0x1dec8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 29464));
    // 0x1dec90: 0x25ad7308  addiu       $t5, $t5, 0x7308
    ctx->pc = 0x1dec90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 29448));
    // 0x1dec94: 0x25ce72f0  addiu       $t6, $t6, 0x72F0
    ctx->pc = 0x1dec94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 29424));
    // 0x1dec98: 0x25ef72f8  addiu       $t7, $t7, 0x72F8
    ctx->pc = 0x1dec98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 29432));
    // 0x1dec9c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1dec9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1deca0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1deca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1deca4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1deca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1deca8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1deca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1decac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1decacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1decb0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1decb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1decb4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1decb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1decb8: 0xace47328  sw          $a0, 0x7328($a3)
    ctx->pc = 0x1decb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387328u, _value); } while (0);
    // 0x1decbc: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1decbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1decc0: 0xaca3732c  sw          $v1, 0x732C($a1)
    ctx->pc = 0x1decc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38732Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38732Cu, _value); } while (0);
    // 0x1decc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1decc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1decc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1decc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1deccc: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x1decccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1decd0: 0xada80000  sw          $t0, 0x0($t5)
    ctx->pc = 0x1decd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x387308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387308u, _value); } while (0);
    // 0x1decd4: 0x24c6a000  addiu       $a2, $a2, -0x6000
    ctx->pc = 0x1decd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942720));
    // 0x1decd8: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x1decd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3872F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3872F8u, _value); } while (0);
    // 0x1decdc: 0x2442009c  addiu       $v0, $v0, 0x9C
    ctx->pc = 0x1decdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x1dece0: 0xae007320  sw          $zero, 0x7320($s0)
    ctx->pc = 0x1dece0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x387320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387320u, _value); } while (0);
    // 0x1dece4: 0x24d0003c  addiu       $s0, $a2, 0x3C
    ctx->pc = 0x1dece4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
    // 0x1dece8: 0xae207324  sw          $zero, 0x7324($s1)
    ctx->pc = 0x1dece8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x387324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387324u, _value); } while (0);
    // 0x1decec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1dececu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1decf0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1decf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x387310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387310u, _value); } while (0);
    // 0x1decf4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1decf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1decf8: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1decf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x387300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387300u, _value); } while (0);
    // 0x1decfc: 0x24181000  addiu       $t8, $zero, 0x1000
    ctx->pc = 0x1decfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1ded00: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x1ded00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x387318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387318u, _value); } while (0);
    // 0x1ded04: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x1ded04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1ded08: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x1ded08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3872F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3872F0u, _value); } while (0);
    // 0x1ded0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ded0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ded10: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1ded10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x387314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387314u, _value); } while (0);
    // 0x1ded14: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x1ded14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x387304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387304u, _value); } while (0);
    // 0x1ded18: 0xad880004  sw          $t0, 0x4($t4)
    ctx->pc = 0x1ded18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x38731Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38731Cu, _value); } while (0);
    // 0x1ded1c: 0xada80004  sw          $t0, 0x4($t5)
    ctx->pc = 0x1ded1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x38730Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38730Cu, _value); } while (0);
    // 0x1ded20: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x1ded20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3872F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3872F4u, _value); } while (0);
    // 0x1ded24: 0xadea0004  sw          $t2, 0x4($t7)
    ctx->pc = 0x1ded24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3872FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3872FCu, _value); } while (0);
label_1ded28:
    // 0x1ded28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ded28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ded2c: 0xac40ff64  sw          $zero, -0x9C($v0)
    ctx->pc = 0x1ded2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967140), GPR_U32(ctx, 0));
    // 0x1ded30: 0xac40ff6c  sw          $zero, -0x94($v0)
    ctx->pc = 0x1ded30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967148), GPR_U32(ctx, 0));
    // 0x1ded34: 0xac40ff68  sw          $zero, -0x98($v0)
    ctx->pc = 0x1ded34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967144), GPR_U32(ctx, 0));
    // 0x1ded38: 0xac40ff84  sw          $zero, -0x7C($v0)
    ctx->pc = 0x1ded38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967172), GPR_U32(ctx, 0));
    // 0x1ded3c: 0xac43ff80  sw          $v1, -0x80($v0)
    ctx->pc = 0x1ded3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967168), GPR_U32(ctx, 3));
    // 0x1ded40: 0xac43ff7c  sw          $v1, -0x84($v0)
    ctx->pc = 0x1ded40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967164), GPR_U32(ctx, 3));
    // 0x1ded44: 0xac44ffa4  sw          $a0, -0x5C($v0)
    ctx->pc = 0x1ded44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967204), GPR_U32(ctx, 4));
    // 0x1ded48: 0xac44ffa0  sw          $a0, -0x60($v0)
    ctx->pc = 0x1ded48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967200), GPR_U32(ctx, 4));
    // 0x1ded4c: 0xac44ff9c  sw          $a0, -0x64($v0)
    ctx->pc = 0x1ded4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 4));
    // 0x1ded50: 0xac44ffac  sw          $a0, -0x54($v0)
    ctx->pc = 0x1ded50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967212), GPR_U32(ctx, 4));
    // 0x1ded54: 0xac44ffa8  sw          $a0, -0x58($v0)
    ctx->pc = 0x1ded54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967208), GPR_U32(ctx, 4));
    // 0x1ded58: 0xac47ffb8  sw          $a3, -0x48($v0)
    ctx->pc = 0x1ded58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967224), GPR_U32(ctx, 7));
    // 0x1ded5c: 0xac47ffb4  sw          $a3, -0x4C($v0)
    ctx->pc = 0x1ded5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967220), GPR_U32(ctx, 7));
    // 0x1ded60: 0xac43ffbc  sw          $v1, -0x44($v0)
    ctx->pc = 0x1ded60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967228), GPR_U32(ctx, 3));
    // 0x1ded64: 0xac43ffb0  sw          $v1, -0x50($v0)
    ctx->pc = 0x1ded64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967216), GPR_U32(ctx, 3));
    // 0x1ded68: 0xac58ffd8  sw          $t8, -0x28($v0)
    ctx->pc = 0x1ded68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), GPR_U32(ctx, 24));
    // 0x1ded6c: 0xac58ff98  sw          $t8, -0x68($v0)
    ctx->pc = 0x1ded6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967192), GPR_U32(ctx, 24));
    // 0x1ded70: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x1ded70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
    // 0x1ded74: 0xac40ffc0  sw          $zero, -0x40($v0)
    ctx->pc = 0x1ded74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967232), GPR_U32(ctx, 0));
    // 0x1ded78: 0xac47ffc4  sw          $a3, -0x3C($v0)
    ctx->pc = 0x1ded78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967236), GPR_U32(ctx, 7));
    // 0x1ded7c: 0xac51ffe0  sw          $s1, -0x20($v0)
    ctx->pc = 0x1ded7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 17));
    // 0x1ded80: 0xac51ffdc  sw          $s1, -0x24($v0)
    ctx->pc = 0x1ded80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 17));
    // 0x1ded84: 0xac46fff4  sw          $a2, -0xC($v0)
    ctx->pc = 0x1ded84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
    // 0x1ded88: 0xac46fff0  sw          $a2, -0x10($v0)
    ctx->pc = 0x1ded88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 6));
    // 0x1ded8c: 0xac50fff8  sw          $s0, -0x8($v0)
    ctx->pc = 0x1ded8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 16));
    // 0x1ded90: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x1ded90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
    // 0x1ded94: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1ded94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1ded98: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1ded98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1ded9c: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x1ded9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x1deda0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1deda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1deda4: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x1deda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x1deda8: 0xac43ffd4  sw          $v1, -0x2C($v0)
    ctx->pc = 0x1deda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967252), GPR_U32(ctx, 3));
    // 0x1dedac: 0xac43ffd0  sw          $v1, -0x30($v0)
    ctx->pc = 0x1dedacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), GPR_U32(ctx, 3));
    // 0x1dedb0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1dedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1dedb4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1dedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1dedb8: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1dedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1dedbc: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x1dedbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1dedc0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1dedc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1dedc4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1dedc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1dedc8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1dedc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1dedcc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1dedccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1dedd0: 0x4a1ffd5  bgez        $a1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1DEDD0u;
    {
        const bool branch_taken_0x1dedd0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1DEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDD0u;
        // 0x1dedd4: 0x244200e8  addiu       $v0, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedd0) {
            ctx->pc = 0x1DED28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ded28;
        }
    }
    ctx->pc = 0x1DEDD8u;
    // 0x1dedd8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1deddc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1deddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dede0: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1DEDE0u;
    SET_GPR_U32(ctx, 31, 0x1DEDE8u);
    ctx->pc = 0x1DEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDE0u;
    // 0x1dede4: 0x24a5e2b8  addiu       $a1, $a1, -0x1D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1DEDE0u, 0x1DEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDE8u;
label_1dede8:
    // 0x1dede8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dede8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dedec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dedecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dedf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dedf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dedf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dedf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dedf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDF8u;
        // 0x1dedfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEE00u;
}
