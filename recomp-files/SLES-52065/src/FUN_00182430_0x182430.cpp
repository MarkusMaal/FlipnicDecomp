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

// Function: FUN_00182430
// Address: 0x182430 - 0x1828e0
void FUN_00182430_0x182430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182430_0x182430");
#endif

    switch (ctx->pc) {
        case 0x182874u: goto label_182874;
        default: break;
    }

    ctx->pc = 0x182430u;

    // 0x182430: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x182430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x182434: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x182434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x182438: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x182438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18243c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x182440: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x182440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x182444: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18244c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18245c: 0x83838698  lb          $v1, -0x7968($gp)
    ctx->pc = 0x18245cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936216)));
    // 0x182460: 0x14600106  bnez        $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x182460u;
    {
        const bool branch_taken_0x182460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182460u;
        // 0x182464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182460) {
            ctx->pc = 0x18287Cu;
            goto label_18287c;
        }
    }
    ctx->pc = 0x182468u;
    // 0x182468: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18246c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x182470: 0xa0208c72  sb          $zero, -0x738E($at)
    ctx->pc = 0x182470u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368C72u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C72u, _value); } while (0);
    // 0x182474: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x182474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x182478: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18247c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x18247cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x182480: 0xfc228c98  sd          $v0, -0x7368($at)
    ctx->pc = 0x182480u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937752), GPR_U64(ctx, 2));
    // 0x182484: 0x640b0050  daddiu      $t3, $zero, 0x50
    ctx->pc = 0x182484u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)80);
    // 0x182488: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x182488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18248c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18248cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182490: 0xfc228ca8  sd          $v0, -0x7358($at)
    ctx->pc = 0x182490u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CA8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368CA8u, _value); } while (0);
    // 0x182494: 0x2408ffc0  addiu       $t0, $zero, -0x40
    ctx->pc = 0x182494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x182498: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x182498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18249c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18249cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1824a0: 0xfc228cb8  sd          $v0, -0x7348($at)
    ctx->pc = 0x1824a0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CB8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368CB8u, _value); } while (0);
    // 0x1824a4: 0x64090008  daddiu      $t1, $zero, 0x8
    ctx->pc = 0x1824a4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x1824a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1824a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1824ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1824b0: 0xfc228cc8  sd          $v0, -0x7338($at)
    ctx->pc = 0x1824b0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CC8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368CC8u, _value); } while (0);
    // 0x1824b4: 0x3006003f  andi        $a2, $zero, 0x3F
    ctx->pc = 0x1824b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x1824b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1824b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1824bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1824bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1824c0: 0xfc228cd8  sd          $v0, -0x7328($at)
    ctx->pc = 0x1824c0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CD8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368CD8u, _value); } while (0);
    // 0x1824c4: 0x2416fffe  addiu       $s6, $zero, -0x2
    ctx->pc = 0x1824c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1824c8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1824c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1824cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1824ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1824d0: 0xfc228ce8  sd          $v0, -0x7318($at)
    ctx->pc = 0x1824d0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CE8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368CE8u, _value); } while (0);
    // 0x1824d4: 0x240ff800  addiu       $t7, $zero, -0x800
    ctx->pc = 0x1824d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x1824d8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1824d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1824dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1824dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1824e0: 0xa0228c73  sb          $v0, -0x738D($at)
    ctx->pc = 0x1824e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368C73u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C73u, _value); } while (0);
    // 0x1824e4: 0x301107ff  andi        $s1, $zero, 0x7FF
    ctx->pc = 0x1824e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x1824e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1824e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1824ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1824ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1824f0: 0xa4228c70  sh          $v0, -0x7390($at)
    ctx->pc = 0x1824f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368C70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368C70u, _value); } while (0);
    // 0x1824f4: 0x2413fff1  addiu       $s3, $zero, -0xF
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1824f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1824f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1824fc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1824fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x182500: 0xac208c74  sw          $zero, -0x738C($at)
    ctx->pc = 0x182500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368C74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368C74u, _value); } while (0);
    // 0x182504: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x182504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x182508: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18250c: 0x241efff9  addiu       $fp, $zero, -0x7
    ctx->pc = 0x18250cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x182510: 0xac238c78  sw          $v1, -0x7388($at)
    ctx->pc = 0x182510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368C78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368C78u, _value); } while (0);
    // 0x182514: 0x64170002  daddiu      $s7, $zero, 0x2
    ctx->pc = 0x182514u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x182518: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18251c: 0x34038006  ori         $v1, $zero, 0x8006
    ctx->pc = 0x18251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x182520: 0xac228c7c  sw          $v0, -0x7384($at)
    ctx->pc = 0x182520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368C7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368C7Cu, _value); } while (0);
    // 0x182524: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x182524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x182528: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x182528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18252c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182530: 0xfc228c88  sd          $v0, -0x7378($at)
    ctx->pc = 0x182530u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368C88u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C88u, _value); } while (0);
    // 0x182534: 0x2418ffcf  addiu       $t8, $zero, -0x31
    ctx->pc = 0x182534u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x182538: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18253c: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x18253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x182540: 0xfc238c80  sd          $v1, -0x7380($at)
    ctx->pc = 0x182540u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368C80u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C80u, _value); } while (0);
    // 0x182544: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182548: 0x183c  dsll32      $v1, $zero, 0
    ctx->pc = 0x182548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 0));
    // 0x18254c: 0x942a8c90  lhu         $t2, -0x7370($at)
    ctx->pc = 0x18254cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937744)));
    // 0x182550: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x182550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x182554: 0x3683c  dsll32      $t5, $v1, 0
    ctx->pc = 0x182554u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (32 + 0));
    // 0x182558: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x182558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18255c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x18255cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x182560: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x182560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x182564: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x182564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x182568: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18256c: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x18256cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x182570: 0x90278c92  lbu         $a3, -0x736E($at)
    ctx->pc = 0x182570u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937746)));
    // 0x182574: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x182574u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x182578: 0x300b0001  andi        $t3, $zero, 0x1
    ctx->pc = 0x182578u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18257c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182580: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x182580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x182584: 0x90248c93  lbu         $a0, -0x736D($at)
    ctx->pc = 0x182584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937747)));
    // 0x182588: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x182588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x18258c: 0x640900d0  daddiu      $t1, $zero, 0xD0
    ctx->pc = 0x18258cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)208);
    // 0x182590: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182594: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x182594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x182598: 0xa42a8c90  sh          $t2, -0x7370($at)
    ctx->pc = 0x182598u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937744), (uint16_t)GPR_U32(ctx, 10));
    // 0x18259c: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x18259cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1825a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1825a4: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1825a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1825a8: 0xa0278c92  sb          $a3, -0x736E($at)
    ctx->pc = 0x1825a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368C92u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368C92u, _value); } while (0);
    // 0x1825ac: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x1825acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1825b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1825b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1825b4: 0x6407000a  daddiu      $a3, $zero, 0xA
    ctx->pc = 0x1825b4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
    // 0x1825b8: 0xa0268c93  sb          $a2, -0x736D($at)
    ctx->pc = 0x1825b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937747), (uint8_t)GPR_U32(ctx, 6));
    // 0x1825bc: 0x70646389  pcpyld      $t4, $v1, $a0
    ctx->pc = 0x1825bcu;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1825c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1825c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1825c4: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x1825c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1825c8: 0xdc2e8c90  ld          $t6, -0x7370($at)
    ctx->pc = 0x1825c8u;
    SET_GPR_U64(ctx, 14, FAST_READ64(0x368C90u));
    // 0x1825cc: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x1825ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1825d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1825d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1825d4: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x1825d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x1825d8: 0x942a8ca0  lhu         $t2, -0x7360($at)
    ctx->pc = 0x1825d8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937760)));
    // 0x1825dc: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x1825dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x1825e0: 0x640d01ff  daddiu      $t5, $zero, 0x1FF
    ctx->pc = 0x1825e0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)511);
    // 0x1825e4: 0x240efff3  addiu       $t6, $zero, -0xD
    ctx->pc = 0x1825e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1825e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1825e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1825ec: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1825ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1825f0: 0x90288ca3  lbu         $t0, -0x735D($at)
    ctx->pc = 0x1825f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937763)));
    // 0x1825f4: 0x494825  or          $t1, $v0, $t1
    ctx->pc = 0x1825f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1825f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1825fc: 0x1061024  and         $v0, $t0, $a2
    ctx->pc = 0x1825fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x182600: 0x90258ca4  lbu         $a1, -0x735C($at)
    ctx->pc = 0x182600u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937764)));
    // 0x182604: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x182604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x182608: 0x30070003  andi        $a3, $zero, 0x3
    ctx->pc = 0x182608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18260c: 0x7c900  sll         $t9, $a3, 4
    ctx->pc = 0x18260cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x182610: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182614: 0xb61024  and         $v0, $a1, $s6
    ctx->pc = 0x182614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 22));
    // 0x182618: 0x94238cc0  lhu         $v1, -0x7340($at)
    ctx->pc = 0x182618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937792)));
    // 0x18261c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x18261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x182620: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x182620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x182624: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182628: 0xa4248cb0  sh          $a0, -0x7350($at)
    ctx->pc = 0x182628u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368CB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368CB0u, _value); } while (0);
    // 0x18262c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18262cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182630: 0xfc2c8c90  sd          $t4, -0x7370($at)
    ctx->pc = 0x182630u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368C90u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368C90u, _value); } while (0);
    // 0x182634: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182638: 0xa4298ca0  sh          $t1, -0x7360($at)
    ctx->pc = 0x182638u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368CA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368CA0u, _value); } while (0);
    // 0x18263c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182640: 0xa0268ca3  sb          $a2, -0x735D($at)
    ctx->pc = 0x182640u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368CA3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368CA3u, _value); } while (0);
    // 0x182644: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182648: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x182648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x18264c: 0xa0228ca4  sb          $v0, -0x735C($at)
    ctx->pc = 0x18264cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CA4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368CA4u, _value); } while (0);
    // 0x182650: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182654: 0x6f1024  and         $v0, $v1, $t7
    ctx->pc = 0x182654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x182658: 0xa4248cb4  sh          $a0, -0x734C($at)
    ctx->pc = 0x182658u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937780), (uint16_t)GPR_U32(ctx, 4));
    // 0x18265c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x18265cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x182660: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182664: 0x94238cc2  lhu         $v1, -0x733E($at)
    ctx->pc = 0x182664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x368CC2u));
    // 0x182668: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18266c: 0x6f2024  and         $a0, $v1, $t7
    ctx->pc = 0x18266cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x182670: 0xa4228cc0  sh          $v0, -0x7340($at)
    ctx->pc = 0x182670u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937792), (uint16_t)GPR_U32(ctx, 2));
    // 0x182674: 0x300303ff  andi        $v1, $zero, 0x3FF
    ctx->pc = 0x182674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1023);
    // 0x182678: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18267c: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x18267cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
    // 0x182680: 0x94298cc4  lhu         $t1, -0x733C($at)
    ctx->pc = 0x182680u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x368CC4u));
    // 0x182684: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x182684u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182688: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18268c: 0x12f6024  and         $t4, $t1, $t7
    ctx->pc = 0x18268cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & GPR_U64(ctx, 15));
    // 0x182690: 0x94288cc6  lhu         $t0, -0x733A($at)
    ctx->pc = 0x182690u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937798)));
    // 0x182694: 0x1916025  or          $t4, $t4, $s1
    ctx->pc = 0x182694u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 17));
    // 0x182698: 0x34bb8  dsll        $t1, $v1, 14
    ctx->pc = 0x182698u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 14);
    // 0x18269c: 0x2411f00f  addiu       $s1, $zero, -0xFF1
    ctx->pc = 0x18269cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x1826a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1826a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1826a4: 0x10f4024  and         $t0, $t0, $t7
    ctx->pc = 0x1826a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 15));
    // 0x1826a8: 0x90228cd0  lbu         $v0, -0x7330($at)
    ctx->pc = 0x1826a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937808)));
    // 0x1826ac: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x1826acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x1826b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1826b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1826b4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1826b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1826b8: 0xa4248cc2  sh          $a0, -0x733E($at)
    ctx->pc = 0x1826b8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937794), (uint16_t)GPR_U32(ctx, 4));
    // 0x1826bc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1826bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1826c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1826c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1826c4: 0x2404c00f  addiu       $a0, $zero, -0x3FF1
    ctx->pc = 0x1826c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950927));
    // 0x1826c8: 0xa42c8cc4  sh          $t4, -0x733C($at)
    ctx->pc = 0x1826c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368CC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368CC4u, _value); } while (0);
    // 0x1826cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1826ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1826d0: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x1826d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1826d4: 0xa4288cc6  sh          $t0, -0x733A($at)
    ctx->pc = 0x1826d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937798), (uint16_t)GPR_U32(ctx, 8));
    // 0x1826d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1826d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1826dc: 0x34638  dsll        $t0, $v1, 24
    ctx->pc = 0x1826dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 24);
    // 0x1826e0: 0xa0228cd0  sb          $v0, -0x7330($at)
    ctx->pc = 0x1826e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937808), (uint8_t)GPR_U32(ctx, 2));
    // 0x1826e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1826e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1826e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1826e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1826ec: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1826f0: 0x902f8cd0  lbu         $t7, -0x7330($at)
    ctx->pc = 0x1826f0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368CD0u));
    // 0x1826f4: 0x34463fff  ori         $a2, $v0, 0x3FFF
    ctx->pc = 0x1826f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1826f8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1826f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1826fc: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x1826fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x182700: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x182700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x182704: 0x2402f003  addiu       $v0, $zero, -0xFFD
    ctx->pc = 0x182704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963203));
    // 0x182708: 0x300c0007  andi        $t4, $zero, 0x7
    ctx->pc = 0x182708u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x18270c: 0xca040  sll         $s4, $t4, 1
    ctx->pc = 0x18270cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x182710: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182714: 0x1ee7024  and         $t6, $t7, $t6
    ctx->pc = 0x182714u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x182718: 0x902d8ce0  lbu         $t5, -0x7320($at)
    ctx->pc = 0x182718u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937824)));
    // 0x18271c: 0x1c56025  or          $t4, $t6, $a1
    ctx->pc = 0x18271cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 5));
    // 0x182720: 0x300500ff  andi        $a1, $zero, 0xFF
    ctx->pc = 0x182720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x182724: 0xb7980  sll         $t7, $t3, 6
    ctx->pc = 0x182724u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x182728: 0x59100  sll         $s2, $a1, 4
    ctx->pc = 0x182728u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18272c: 0x240effbf  addiu       $t6, $zero, -0x41
    ctx->pc = 0x18272cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x182730: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182734: 0xa02c8cd0  sb          $t4, -0x7330($at)
    ctx->pc = 0x182734u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368CD0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368CD0u, _value); } while (0);
    // 0x182738: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18273c: 0x1b66024  and         $t4, $t5, $s6
    ctx->pc = 0x18273cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 22));
    // 0x182740: 0x94258cd0  lhu         $a1, -0x7330($at)
    ctx->pc = 0x182740u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937808)));
    // 0x182744: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x182744u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x182748: 0xb69c0  sll         $t5, $t3, 7
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 7));
    // 0x18274c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18274cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182750: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x182750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x182754: 0xa02c8ce0  sb          $t4, -0x7320($at)
    ctx->pc = 0x182754u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937824), (uint8_t)GPR_U32(ctx, 12));
    // 0x182758: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x182758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x18275c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18275cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182760: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x182760u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x182764: 0x90358ce0  lbu         $s5, -0x7320($at)
    ctx->pc = 0x182764u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937824)));
    // 0x182768: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x182768u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18276c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182770: 0x2b39824  and         $s3, $s5, $s3
    ctx->pc = 0x182770u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & GPR_U64(ctx, 19));
    // 0x182774: 0x902b8ce2  lbu         $t3, -0x731E($at)
    ctx->pc = 0x182774u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937826)));
    // 0x182778: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18277c: 0x1765824  and         $t3, $t3, $s6
    ctx->pc = 0x18277cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 22));
    // 0x182780: 0xa4248cd0  sh          $a0, -0x7330($at)
    ctx->pc = 0x182780u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937808), (uint16_t)GPR_U32(ctx, 4));
    // 0x182784: 0x1652825  or          $a1, $t3, $a1
    ctx->pc = 0x182784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x182788: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18278c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18278cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x182790: 0xdc2a8cd0  ld          $t2, -0x7330($at)
    ctx->pc = 0x182790u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x368CD0u));
    // 0x182794: 0x24848cb0  addiu       $a0, $a0, -0x7350
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937776));
    // 0x182798: 0xaf848694  sw          $a0, -0x796C($gp)
    ctx->pc = 0x182798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 4));
    // 0x18279c: 0x2742025  or          $a0, $s3, $s4
    ctx->pc = 0x18279cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 20));
    // 0x1827a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1827a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1827a4: 0x1463024  and         $a2, $t2, $a2
    ctx->pc = 0x1827a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x1827a8: 0xa0248ce0  sb          $a0, -0x7320($at)
    ctx->pc = 0x1827a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937824), (uint8_t)GPR_U32(ctx, 4));
    // 0x1827ac: 0xc94825  or          $t1, $a2, $t1
    ctx->pc = 0x1827acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1827b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1827b4: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1827b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1827b8: 0xa0258ce2  sb          $a1, -0x731E($at)
    ctx->pc = 0x1827b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937826), (uint8_t)GPR_U32(ctx, 5));
    // 0x1827bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1827bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1827c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1827c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1827c4: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1827c8: 0x942b8ce0  lhu         $t3, -0x7320($at)
    ctx->pc = 0x1827c8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x368CE0u));
    // 0x1827cc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1827ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1827d0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1827d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1827d4: 0x24848c70  addiu       $a0, $a0, -0x7390
    ctx->pc = 0x1827d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937712));
    // 0x1827d8: 0x24a528e0  addiu       $a1, $a1, 0x28E0
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10464));
    // 0x1827dc: 0x24c68c60  addiu       $a2, $a2, -0x73A0
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937696));
    // 0x1827e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1827e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1827e4: 0x902a8ce2  lbu         $t2, -0x731E($at)
    ctx->pc = 0x1827e4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x368CE2u));
    // 0x1827e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1827ec: 0xfc278cd0  sd          $a3, -0x7330($at)
    ctx->pc = 0x1827ecu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368CD0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368CD0u, _value); } while (0);
    // 0x1827f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1827f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1827f4: 0x1713824  and         $a3, $t3, $s1
    ctx->pc = 0x1827f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 17));
    // 0x1827f8: 0x94298cd4  lhu         $t1, -0x732C($at)
    ctx->pc = 0x1827f8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937812)));
    // 0x1827fc: 0xf24025  or          $t0, $a3, $s2
    ctx->pc = 0x1827fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x182800: 0x15e3824  and         $a3, $t2, $fp
    ctx->pc = 0x182800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 30));
    // 0x182804: 0xf73825  or          $a3, $a3, $s7
    ctx->pc = 0x182804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 23));
    // 0x182808: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18280c: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x18280cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x182810: 0xa4288ce0  sh          $t0, -0x7320($at)
    ctx->pc = 0x182810u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937824), (uint16_t)GPR_U32(ctx, 8));
    // 0x182814: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x182814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x182818: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18281c: 0xa0278ce2  sb          $a3, -0x731E($at)
    ctx->pc = 0x18281cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368CE2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368CE2u, _value); } while (0);
    // 0x182820: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182824: 0x90278ce1  lbu         $a3, -0x731F($at)
    ctx->pc = 0x182824u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x368CE1u));
    // 0x182828: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18282c: 0xa4228cd4  sh          $v0, -0x732C($at)
    ctx->pc = 0x18282cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CD4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368CD4u, _value); } while (0);
    // 0x182830: 0xf81024  and         $v0, $a3, $t8
    ctx->pc = 0x182830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 24));
    // 0x182834: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182838: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x182838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x18283c: 0xa0228ce1  sb          $v0, -0x731F($at)
    ctx->pc = 0x18283cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CE1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368CE1u, _value); } while (0);
    // 0x182840: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182844: 0x90228ce1  lbu         $v0, -0x731F($at)
    ctx->pc = 0x182844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368CE1u));
    // 0x182848: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x182848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x18284c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182850: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x182850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x182854: 0xa0228ce1  sb          $v0, -0x731F($at)
    ctx->pc = 0x182854u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368CE1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368CE1u, _value); } while (0);
    // 0x182858: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18285c: 0x90228ce1  lbu         $v0, -0x731F($at)
    ctx->pc = 0x18285cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368CE1u));
    // 0x182860: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x182860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x182864: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182868: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x182868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x18286c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x18286Cu;
    SET_GPR_U32(ctx, 31, 0x182874u);
    ctx->pc = 0x182870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18286Cu;
    // 0x182870: 0xa0228ce1  sb          $v0, -0x731F($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937825), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x18286Cu, 0x182874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182874u;
label_182874:
    // 0x182874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182878: 0xa3838698  sb          $v1, -0x7968($gp)
    ctx->pc = 0x182878u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936216), (uint8_t)GPR_U32(ctx, 3));
label_18287c:
    // 0x18287c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182880: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x182884: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x182884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x182888: 0x24638c70  addiu       $v1, $v1, -0x7390
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937712));
    // 0x18288c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x18288cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x182890: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x182890u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x182894: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x182894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x182898: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x182898u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18289c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x18289cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1828a0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1828a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1828a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1828a8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1828ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1828acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1828b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1828b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1828b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1828b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1828b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1828b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1828bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1828bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1828c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1828c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1828c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1828c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1828c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1828c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1828cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1828ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1828d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1828d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1828d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1828d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1828d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1828D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828D8u;
        // 0x1828dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1828E0u;
}
