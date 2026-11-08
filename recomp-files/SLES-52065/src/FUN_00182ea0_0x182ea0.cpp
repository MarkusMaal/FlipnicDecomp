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

// Function: FUN_00182ea0
// Address: 0x182ea0 - 0x183294
void FUN_00182ea0_0x182ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182ea0_0x182ea0");
#endif

    switch (ctx->pc) {
        case 0x18323cu: goto label_18323c;
        case 0x183258u: goto label_183258;
        default: break;
    }

    ctx->pc = 0x182ea0u;

    // 0x182ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x182ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x182ea4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x182ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x182ea8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x182ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x182eac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x182eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x182eb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x182eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x182eb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182eb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182ec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182ec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182ecc: 0x838286a0  lb          $v0, -0x7960($gp)
    ctx->pc = 0x182eccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936224)));
    // 0x182ed0: 0x144000dc  bnez        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x182ED0u;
    {
        const bool branch_taken_0x182ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182ED0u;
        // 0x182ed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ed0) {
            ctx->pc = 0x183244u;
            goto label_183244;
        }
    }
    ctx->pc = 0x182ED8u;
    // 0x182ed8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182edc: 0x30190001  andi        $t9, $zero, 0x1
    ctx->pc = 0x182edcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x182ee0: 0xfc208dc8  sd          $zero, -0x7238($at)
    ctx->pc = 0x182ee0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368DC8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368DC8u, _value); } while (0);
    // 0x182ee4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x182ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x182ee8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182eec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x182eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x182ef0: 0xfc228db8  sd          $v0, -0x7248($at)
    ctx->pc = 0x182ef0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DB8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368DB8u, _value); } while (0);
    // 0x182ef4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x182ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x182ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182efc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f00: 0xfc228dd8  sd          $v0, -0x7228($at)
    ctx->pc = 0x182f00u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DD8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368DD8u, _value); } while (0);
    // 0x182f04: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x182f04u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x182f08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x182f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x182f0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f10: 0xfc228de8  sd          $v0, -0x7218($at)
    ctx->pc = 0x182f10u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DE8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368DE8u, _value); } while (0);
    // 0x182f14: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x182f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x182f18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f1c: 0x640b0006  daddiu      $t3, $zero, 0x6
    ctx->pc = 0x182f1cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x182f20: 0xfc228df8  sd          $v0, -0x7208($at)
    ctx->pc = 0x182f20u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938104), GPR_U64(ctx, 2));
    // 0x182f24: 0x64160002  daddiu      $s6, $zero, 0x2
    ctx->pc = 0x182f24u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x182f28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f2c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x182f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x182f30: 0xa0238d93  sb          $v1, -0x726D($at)
    ctx->pc = 0x182f30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368D93u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D93u, _value); } while (0);
    // 0x182f34: 0x2409fff7  addiu       $t1, $zero, -0x9
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x182f38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f3c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x182f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x182f40: 0xa4228d90  sh          $v0, -0x7270($at)
    ctx->pc = 0x182f40u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938000), (uint16_t)GPR_U32(ctx, 2));
    // 0x182f44: 0x1950c0  sll         $t2, $t9, 3
    ctx->pc = 0x182f44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x182f48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f4c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x182f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x182f50: 0xa0208d92  sb          $zero, -0x726E($at)
    ctx->pc = 0x182f50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368D92u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368D92u, _value); } while (0);
    // 0x182f54: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x182f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x182f58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f5c: 0x2413f00f  addiu       $s3, $zero, -0xFF1
    ctx->pc = 0x182f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x182f60: 0xac228d9c  sw          $v0, -0x7264($at)
    ctx->pc = 0x182f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368D9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368D9Cu, _value); } while (0);
    // 0x182f64: 0x2411ffcf  addiu       $s1, $zero, -0x31
    ctx->pc = 0x182f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x182f68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f6c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x182f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x182f70: 0xac248d98  sw          $a0, -0x7268($at)
    ctx->pc = 0x182f70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368D98u, _value); } while (0);
    // 0x182f74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x182f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x182f78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f7c: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x182f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x182f80: 0xac208d94  sw          $zero, -0x726C($at)
    ctx->pc = 0x182f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368D94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368D94u, _value); } while (0);
    // 0x182f84: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x182f84u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182f88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182f8c: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x182f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x182f90: 0xfc228da0  sd          $v0, -0x7260($at)
    ctx->pc = 0x182f90u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DA0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368DA0u, _value); } while (0);
    // 0x182f94: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x182f94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182f98: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x182f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x182f9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182fa0: 0xfc228da8  sd          $v0, -0x7258($at)
    ctx->pc = 0x182fa0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DA8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368DA8u, _value); } while (0);
    // 0x182fa4: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x182fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x182fa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182fac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x182facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x182fb0: 0xa0208dd0  sb          $zero, -0x7230($at)
    ctx->pc = 0x182fb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368DD0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DD0u, _value); } while (0);
    // 0x182fb4: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x182fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x182fb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182fbc: 0x241efffd  addiu       $fp, $zero, -0x3
    ctx->pc = 0x182fbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x182fc0: 0xa0208dd1  sb          $zero, -0x722F($at)
    ctx->pc = 0x182fc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368DD1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DD1u, _value); } while (0);
    // 0x182fc4: 0x240fffbf  addiu       $t7, $zero, -0x41
    ctx->pc = 0x182fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x182fc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182fcc: 0x19c180  sll         $t8, $t9, 6
    ctx->pc = 0x182fccu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 6));
    // 0x182fd0: 0xa0208dd2  sb          $zero, -0x722E($at)
    ctx->pc = 0x182fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938066), (uint8_t)GPR_U32(ctx, 0));
    // 0x182fd4: 0x2417ffdf  addiu       $s7, $zero, -0x21
    ctx->pc = 0x182fd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x182fd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182fdc: 0x240dff7f  addiu       $t5, $zero, -0x81
    ctx->pc = 0x182fdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x182fe0: 0xa0208dd3  sb          $zero, -0x722D($at)
    ctx->pc = 0x182fe0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368DD3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DD3u, _value); } while (0);
    // 0x182fe4: 0x1971c0  sll         $t6, $t9, 7
    ctx->pc = 0x182fe4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 7));
    // 0x182fe8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182fec: 0x90258db0  lbu         $a1, -0x7250($at)
    ctx->pc = 0x182fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368DB0u));
    // 0x182ff0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182ff4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x182ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x182ff8: 0x90288db2  lbu         $t0, -0x724E($at)
    ctx->pc = 0x182ff8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938034)));
    // 0x182ffc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x182ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x183000: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183004: 0x102a824  and         $s5, $t0, $v0
    ctx->pc = 0x183004u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x183008: 0x902c8dc0  lbu         $t4, -0x7240($at)
    ctx->pc = 0x183008u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938048)));
    // 0x18300c: 0x2a6a825  or          $s5, $s5, $a2
    ctx->pc = 0x18300cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 6));
    // 0x183010: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x183010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x183014: 0x194100  sll         $t0, $t9, 4
    ctx->pc = 0x183014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x183018: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18301c: 0x1873824  and         $a3, $t4, $a3
    ctx->pc = 0x18301cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x183020: 0xa0258db0  sb          $a1, -0x7250($at)
    ctx->pc = 0x183020u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938032), (uint8_t)GPR_U32(ctx, 5));
    // 0x183024: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x183024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x183028: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18302c: 0x90258db0  lbu         $a1, -0x7250($at)
    ctx->pc = 0x18302cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368DB0u));
    // 0x183030: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183034: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x183034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x183038: 0xa0358db2  sb          $s5, -0x724E($at)
    ctx->pc = 0x183038u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938034), (uint8_t)GPR_U32(ctx, 21));
    // 0x18303c: 0x962025  or          $a0, $a0, $s6
    ctx->pc = 0x18303cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x183040: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183044: 0x902c8db2  lbu         $t4, -0x724E($at)
    ctx->pc = 0x183044u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368DB2u));
    // 0x183048: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18304c: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x18304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x183050: 0xa0278dc0  sb          $a3, -0x7240($at)
    ctx->pc = 0x183050u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938048), (uint8_t)GPR_U32(ctx, 7));
    // 0x183054: 0x766025  or          $t4, $v1, $s6
    ctx->pc = 0x183054u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x183058: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18305c: 0x193940  sll         $a3, $t9, 5
    ctx->pc = 0x18305cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 5));
    // 0x183060: 0x902b8dc0  lbu         $t3, -0x7240($at)
    ctx->pc = 0x183060u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938048)));
    // 0x183064: 0x191880  sll         $v1, $t9, 2
    ctx->pc = 0x183064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x183068: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18306c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x18306cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x183070: 0xa0248db0  sb          $a0, -0x7250($at)
    ctx->pc = 0x183070u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938032), (uint8_t)GPR_U32(ctx, 4));
    // 0x183074: 0x12a5025  or          $t2, $t1, $t2
    ctx->pc = 0x183074u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x183078: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18307c: 0x192040  sll         $a0, $t9, 1
    ctx->pc = 0x18307cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x183080: 0x94358db0  lhu         $s5, -0x7250($at)
    ctx->pc = 0x183080u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938032)));
    // 0x183084: 0x2409fffb  addiu       $t1, $zero, -0x5
    ctx->pc = 0x183084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x183088: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18308c: 0x2b35824  and         $t3, $s5, $s3
    ctx->pc = 0x18308cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 21) & GPR_U64(ctx, 19));
    // 0x183090: 0x90258dc1  lbu         $a1, -0x723F($at)
    ctx->pc = 0x183090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938049)));
    // 0x183094: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183098: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x183098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x18309c: 0xa02c8db2  sb          $t4, -0x724E($at)
    ctx->pc = 0x18309cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938034), (uint8_t)GPR_U32(ctx, 12));
    // 0x1830a0: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x1830a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x1830a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1830a8: 0x24057000  addiu       $a1, $zero, 0x7000
    ctx->pc = 0x1830a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1830ac: 0xa02a8dc0  sb          $t2, -0x7240($at)
    ctx->pc = 0x1830acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368DC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DC0u, _value); } while (0);
    // 0x1830b0: 0x1745025  or          $t2, $t3, $s4
    ctx->pc = 0x1830b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 20));
    // 0x1830b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1830b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1830b8: 0xa42a8db0  sh          $t2, -0x7250($at)
    ctx->pc = 0x1830b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368DB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368DB0u, _value); } while (0);
    // 0x1830bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1830bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1830c0: 0xa0228dc1  sb          $v0, -0x723F($at)
    ctx->pc = 0x1830c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DC1u, _value); } while (0);
    // 0x1830c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1830c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1830c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1830c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1830cc: 0xac228dd4  sw          $v0, -0x722C($at)
    ctx->pc = 0x1830ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368DD4u, _value); } while (0);
    // 0x1830d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1830d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1830d4: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x1830d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1830d8: 0xa4258de0  sh          $a1, -0x7220($at)
    ctx->pc = 0x1830d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938080), (uint16_t)GPR_U32(ctx, 5));
    // 0x1830dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1830dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1830e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1830e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1830e4: 0xa4258de2  sh          $a1, -0x721E($at)
    ctx->pc = 0x1830e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368DE2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368DE2u, _value); } while (0);
    // 0x1830e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1830e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1830ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1830f0: 0x902c8db1  lbu         $t4, -0x724F($at)
    ctx->pc = 0x1830f0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368DB1u));
    // 0x1830f4: 0x5a03c  dsll32      $s4, $a1, 0
    ctx->pc = 0x1830f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1830f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1830f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1830fc: 0x59c38  dsll        $s3, $a1, 16
    ctx->pc = 0x1830fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << 16);
    // 0x183100: 0x3675ffff  ori         $s5, $s3, 0xFFFF
    ctx->pc = 0x183100u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x183104: 0x34139000  ori         $s3, $zero, 0x9000
    ctx->pc = 0x183104u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x183108: 0x2b4a025  or          $s4, $s5, $s4
    ctx->pc = 0x183108u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 20));
    // 0x18310c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183110: 0x1916024  and         $t4, $t4, $s1
    ctx->pc = 0x183110u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 17));
    // 0x183114: 0x902b8dc0  lbu         $t3, -0x7240($at)
    ctx->pc = 0x183114u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938048)));
    // 0x183118: 0x1926025  or          $t4, $t4, $s2
    ctx->pc = 0x183118u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 18));
    // 0x18311c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18311cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183120: 0x1663024  and         $a2, $t3, $a2
    ctx->pc = 0x183120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x183124: 0x902a8dc1  lbu         $t2, -0x723F($at)
    ctx->pc = 0x183124u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938049)));
    // 0x183128: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x183128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x18312c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183130: 0x15e3024  and         $a2, $t2, $fp
    ctx->pc = 0x183130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 30));
    // 0x183134: 0xdc258de0  ld          $a1, -0x7220($at)
    ctx->pc = 0x183134u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938080)));
    // 0x183138: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x183138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x18313c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18313cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x183140: 0x72955389  pcpyld      $t2, $s4, $s5
    ctx->pc = 0x183140u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 20), GPR_VEC(ctx, 21)));
    // 0x183144: 0x24c68d80  addiu       $a2, $a2, -0x7280
    ctx->pc = 0x183144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937984));
    // 0x183148: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18314c: 0xa4338df0  sh          $s3, -0x7210($at)
    ctx->pc = 0x18314cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x368DF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368DF0u, _value); } while (0);
    // 0x183150: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183154: 0xa4338df2  sh          $s3, -0x720E($at)
    ctx->pc = 0x183154u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x368DF2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368DF2u, _value); } while (0);
    // 0x183158: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18315c: 0xa02c8db1  sb          $t4, -0x724F($at)
    ctx->pc = 0x18315cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368DB1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DB1u, _value); } while (0);
    // 0x183160: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183164: 0xa0288dc0  sb          $t0, -0x7240($at)
    ctx->pc = 0x183164u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368DC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DC0u, _value); } while (0);
    // 0x183168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18316c: 0xa0248dc1  sb          $a0, -0x723F($at)
    ctx->pc = 0x18316cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368DC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DC1u, _value); } while (0);
    // 0x183170: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183174: 0xaa2024  and         $a0, $a1, $t2
    ctx->pc = 0x183174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x183178: 0x90318db1  lbu         $s1, -0x724F($at)
    ctx->pc = 0x183178u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938033)));
    // 0x18317c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18317cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183180: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x183180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x183184: 0x24a532a0  addiu       $a1, $a1, 0x32A0
    ctx->pc = 0x183184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12960));
    // 0x183188: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18318c: 0x22f8824  and         $s1, $s1, $t7
    ctx->pc = 0x18318cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x183190: 0xfc248de0  sd          $a0, -0x7220($at)
    ctx->pc = 0x183190u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294938080), GPR_U64(ctx, 4));
    // 0x183194: 0x2388825  or          $s1, $s1, $t8
    ctx->pc = 0x183194u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 24));
    // 0x183198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18319c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18319cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1831a0: 0x902c8dc0  lbu         $t4, -0x7240($at)
    ctx->pc = 0x1831a0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368DC0u));
    // 0x1831a4: 0x24848d90  addiu       $a0, $a0, -0x7270
    ctx->pc = 0x1831a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938000));
    // 0x1831a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831ac: 0x1976024  and         $t4, $t4, $s7
    ctx->pc = 0x1831acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 23));
    // 0x1831b0: 0x902b8dc1  lbu         $t3, -0x723F($at)
    ctx->pc = 0x1831b0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938049)));
    // 0x1831b4: 0x1876025  or          $t4, $t4, $a3
    ctx->pc = 0x1831b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 7));
    // 0x1831b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831bc: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x1831bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1831c0: 0xdc288df0  ld          $t0, -0x7210($at)
    ctx->pc = 0x1831c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 1), 4294938096)));
    // 0x1831c4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1831c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1831c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831cc: 0x10a1824  and         $v1, $t0, $t2
    ctx->pc = 0x1831ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x1831d0: 0xa0318db1  sb          $s1, -0x724F($at)
    ctx->pc = 0x1831d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938033), (uint8_t)GPR_U32(ctx, 17));
    // 0x1831d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1831d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1831d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831dc: 0xa02c8dc0  sb          $t4, -0x7240($at)
    ctx->pc = 0x1831dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368DC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DC0u, _value); } while (0);
    // 0x1831e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831e4: 0xa0278dc1  sb          $a3, -0x723F($at)
    ctx->pc = 0x1831e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368DC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DC1u, _value); } while (0);
    // 0x1831e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831ec: 0xfc228df0  sd          $v0, -0x7210($at)
    ctx->pc = 0x1831ecu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DF0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368DF0u, _value); } while (0);
    // 0x1831f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831f4: 0x90238db1  lbu         $v1, -0x724F($at)
    ctx->pc = 0x1831f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x368DB1u));
    // 0x1831f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1831f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1831fc: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x1831fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x183200: 0x90228dc0  lbu         $v0, -0x7240($at)
    ctx->pc = 0x183200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938048)));
    // 0x183204: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x183204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x183208: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18320c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x18320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x183210: 0xa0238db1  sb          $v1, -0x724F($at)
    ctx->pc = 0x183210u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938033), (uint8_t)GPR_U32(ctx, 3));
    // 0x183214: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x183214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x183218: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18321c: 0xa0228dc0  sb          $v0, -0x7240($at)
    ctx->pc = 0x18321cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368DC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368DC0u, _value); } while (0);
    // 0x183220: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x183220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183224: 0x90228dc0  lbu         $v0, -0x7240($at)
    ctx->pc = 0x183224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368DC0u));
    // 0x183228: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x183228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x18322c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x183230: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x183230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x183234: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x183234u;
    SET_GPR_U32(ctx, 31, 0x18323Cu);
    ctx->pc = 0x183238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183234u;
    // 0x183238: 0xa0228dc0  sb          $v0, -0x7240($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938048), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x183234u, 0x18323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18323Cu;
label_18323c:
    // 0x18323c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183240: 0xa38286a0  sb          $v0, -0x7960($gp)
    ctx->pc = 0x183240u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936224), (uint8_t)GPR_U32(ctx, 2));
label_183244:
    // 0x183244: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183248: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x18324c: 0x24a58d90  addiu       $a1, $a1, -0x7270
    ctx->pc = 0x18324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938000));
    // 0x183250: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x183250u;
    SET_GPR_U32(ctx, 31, 0x183258u);
    ctx->pc = 0x183254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183250u;
    // 0x183254: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x183250u, 0x183258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183258u;
label_183258:
    // 0x183258: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18325c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x18325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x183260: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x183260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183264: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183268: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183268u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18326c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18326cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183270: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183270u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183274: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183278: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18327c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18327cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18328c: 0x3e00008  jr          $ra
    ctx->pc = 0x18328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18328Cu;
        // 0x183290: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18328Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183294u;
}
