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

// Function: FUN_00184900
// Address: 0x184900 - 0x18508c
void FUN_00184900_0x184900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00184900_0x184900");
#endif

    switch (ctx->pc) {
        case 0x184ea4u: goto label_184ea4;
        case 0x18504cu: goto label_18504c;
        default: break;
    }

    ctx->pc = 0x184900u;

    // 0x184900: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x184900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x184904: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x184904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x184908: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x184908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x18490c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x18490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x184910: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x184910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x184914: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x184914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x184918: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x184918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18491c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x184920: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x184920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184924: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x184924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x184928: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x184928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18492c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x184930: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x184930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184938: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x184938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18493c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18493cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x184940: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x184940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184944: 0x838286c0  lb          $v0, -0x7940($gp)
    ctx->pc = 0x184944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x184948: 0x14400158  bnez        $v0, . + 4 + (0x158 << 2)
    ctx->pc = 0x184948u;
    {
        const bool branch_taken_0x184948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184948u;
        // 0x18494c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184948) {
            ctx->pc = 0x184EACu;
            goto label_184eac;
        }
    }
    ctx->pc = 0x184950u;
    // 0x184950: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184954: 0x30080001  andi        $t0, $zero, 0x1
    ctx->pc = 0x184954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x184958: 0xfc2090e8  sd          $zero, -0x6F18($at)
    ctx->pc = 0x184958u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3690E8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3690E8u, _value); } while (0);
    // 0x18495c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x18495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x184960: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184964: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x184964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x184968: 0xfc2290c8  sd          $v0, -0x6F38($at)
    ctx->pc = 0x184968u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3690C8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3690C8u, _value); } while (0);
    // 0x18496c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x18496cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x184970: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x184970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x184974: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184978: 0xfc2290d8  sd          $v0, -0x6F28($at)
    ctx->pc = 0x184978u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3690D8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3690D8u, _value); } while (0);
    // 0x18497c: 0x240bfffe  addiu       $t3, $zero, -0x2
    ctx->pc = 0x18497cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x184980: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x184980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x184984: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184988: 0xfc2290f8  sd          $v0, -0x6F08($at)
    ctx->pc = 0x184988u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3690F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3690F8u, _value); } while (0);
    // 0x18498c: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x18498cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x184990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184994: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184998: 0xfc229108  sd          $v0, -0x6EF8($at)
    ctx->pc = 0x184998u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369108u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369108u, _value); } while (0);
    // 0x18499c: 0x2415ffe7  addiu       $s5, $zero, -0x19
    ctx->pc = 0x18499cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1849a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1849a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1849a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1849a8: 0xfc229118  sd          $v0, -0x6EE8($at)
    ctx->pc = 0x1849a8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369118u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369118u, _value); } while (0);
    // 0x1849ac: 0x241ef000  addiu       $fp, $zero, -0x1000
    ctx->pc = 0x1849acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1849b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1849b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1849b4: 0x30190fff  andi        $t9, $zero, 0xFFF
    ctx->pc = 0x1849b4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)4095);
    // 0x1849b8: 0xfc229138  sd          $v0, -0x6EC8($at)
    ctx->pc = 0x1849b8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369138u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369138u, _value); } while (0);
    // 0x1849bc: 0x240affdf  addiu       $t2, $zero, -0x21
    ctx->pc = 0x1849bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1849c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1849c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1849c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1849c8: 0xa02290a3  sb          $v0, -0x6F5D($at)
    ctx->pc = 0x1849c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3690A3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690A3u, _value); } while (0);
    // 0x1849cc: 0x640e0020  daddiu      $t6, $zero, 0x20
    ctx->pc = 0x1849ccu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1849d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1849d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1849d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1849d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1849d8: 0xa42290a0  sh          $v0, -0x6F60($at)
    ctx->pc = 0x1849d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3690A0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3690A0u, _value); } while (0);
    // 0x1849dc: 0x64090040  daddiu      $t1, $zero, 0x40
    ctx->pc = 0x1849dcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1849e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1849e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1849e4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1849e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1849e8: 0xfc239128  sd          $v1, -0x6ED8($at)
    ctx->pc = 0x1849e8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369128u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369128u, _value); } while (0);
    // 0x1849ec: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1849ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x1849f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1849f4: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1849f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1849f8: 0xfc239148  sd          $v1, -0x6EB8($at)
    ctx->pc = 0x1849f8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369148u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369148u, _value); } while (0);
    // 0x1849fc: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x1849fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x184a00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a04: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x184a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x184a08: 0xac2290ac  sw          $v0, -0x6F54($at)
    ctx->pc = 0x184a08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938796), GPR_U32(ctx, 2));
    // 0x184a0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a10: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x184a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x184a14: 0xac2490a8  sw          $a0, -0x6F58($at)
    ctx->pc = 0x184a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3690A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3690A8u, _value); } while (0);
    // 0x184a18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184a1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a20: 0xa02090a2  sb          $zero, -0x6F5E($at)
    ctx->pc = 0x184a20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3690A2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690A2u, _value); } while (0);
    // 0x184a24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a28: 0xfc2290b0  sd          $v0, -0x6F50($at)
    ctx->pc = 0x184a28u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3690B0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3690B0u, _value); } while (0);
    // 0x184a2c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x184a30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a34: 0xfc2290b8  sd          $v0, -0x6F48($at)
    ctx->pc = 0x184a34u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3690B8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3690B8u, _value); } while (0);
    // 0x184a38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a3c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x184a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x184a40: 0xac2090a4  sw          $zero, -0x6F5C($at)
    ctx->pc = 0x184a40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3690A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3690A4u, _value); } while (0);
    // 0x184a44: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x184a48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a4c: 0x2b040  sll         $s6, $v0, 1
    ctx->pc = 0x184a4cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x184a50: 0x902490c0  lbu         $a0, -0x6F40($at)
    ctx->pc = 0x184a50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938816)));
    // 0x184a54: 0x2402ffe3  addiu       $v0, $zero, -0x1D
    ctx->pc = 0x184a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x184a58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a5c: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x184a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x184a60: 0x903890c2  lbu         $t8, -0x6F3E($at)
    ctx->pc = 0x184a60u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938818)));
    // 0x184a64: 0x8c3825  or          $a3, $a0, $t4
    ctx->pc = 0x184a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x184a68: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x184a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x184a6c: 0x4b8c0  sll         $s7, $a0, 3
    ctx->pc = 0x184a6cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x184a70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a74: 0x315a824  and         $s5, $t8, $s5
    ctx->pc = 0x184a74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 24) & GPR_U64(ctx, 21));
    // 0x184a78: 0xa02790c0  sb          $a3, -0x6F40($at)
    ctx->pc = 0x184a78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938816), (uint8_t)GPR_U32(ctx, 7));
    // 0x184a7c: 0x2b7a825  or          $s5, $s5, $s7
    ctx->pc = 0x184a7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 23));
    // 0x184a80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a84: 0x301700ff  andi        $s7, $zero, 0xFF
    ctx->pc = 0x184a84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x184a88: 0x902790c0  lbu         $a3, -0x6F40($at)
    ctx->pc = 0x184a88u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x3690C0u));
    // 0x184a8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184a90: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x184a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x184a94: 0x942f90c4  lhu         $t7, -0x6F3C($at)
    ctx->pc = 0x184a94u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938820)));
    // 0x184a98: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x184a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184a9c: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x184a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x184aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184aa4: 0x1fe1024  and         $v0, $t7, $fp
    ctx->pc = 0x184aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 30));
    // 0x184aa8: 0x902d90d0  lbu         $t5, -0x6F30($at)
    ctx->pc = 0x184aa8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938832)));
    // 0x184aac: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x184aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x184ab0: 0x241effcf  addiu       $fp, $zero, -0x31
    ctx->pc = 0x184ab0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x184ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184ab8: 0xa03590c2  sb          $s5, -0x6F3E($at)
    ctx->pc = 0x184ab8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x3690C2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690C2u, _value); } while (0);
    // 0x184abc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184ac0: 0x17a900  sll         $s5, $s7, 4
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x184ac4: 0xa02390c0  sb          $v1, -0x6F40($at)
    ctx->pc = 0x184ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938816), (uint8_t)GPR_U32(ctx, 3));
    // 0x184ac8: 0x2417ffbf  addiu       $s7, $zero, -0x41
    ctx->pc = 0x184ac8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x184acc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184ad0: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x184ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x184ad4: 0xa42290c4  sh          $v0, -0x6F3C($at)
    ctx->pc = 0x184ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938820), (uint16_t)GPR_U32(ctx, 2));
    // 0x184ad8: 0x1ab1024  and         $v0, $t5, $t3
    ctx->pc = 0x184ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x184adc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184ae0: 0x902d90c0  lbu         $t5, -0x6F40($at)
    ctx->pc = 0x184ae0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x3690C0u));
    // 0x184ae4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x184ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x184ae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184aec: 0x1aa6824  and         $t5, $t5, $t2
    ctx->pc = 0x184aecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x184af0: 0xa02290d0  sb          $v0, -0x6F30($at)
    ctx->pc = 0x184af0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938832), (uint8_t)GPR_U32(ctx, 2));
    // 0x184af4: 0x1aec825  or          $t9, $t5, $t6
    ctx->pc = 0x184af4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x184af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184afc: 0x240dfff1  addiu       $t5, $zero, -0xF
    ctx->pc = 0x184afcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x184b00: 0x903890d0  lbu         $t8, -0x6F30($at)
    ctx->pc = 0x184b00u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)FAST_READ8(0x3690D0u));
    // 0x184b04: 0x811c0  sll         $v0, $t0, 7
    ctx->pc = 0x184b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x184b08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b0c: 0x30d6824  and         $t5, $t8, $t5
    ctx->pc = 0x184b0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 13));
    // 0x184b10: 0x902f90d2  lbu         $t7, -0x6F2E($at)
    ctx->pc = 0x184b10u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938834)));
    // 0x184b14: 0x1b6b025  or          $s6, $t5, $s6
    ctx->pc = 0x184b14u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 13) | GPR_U64(ctx, 22));
    // 0x184b18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b1c: 0x902e90e0  lbu         $t6, -0x6F20($at)
    ctx->pc = 0x184b1cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x3690E0u));
    // 0x184b20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b24: 0xa03990c0  sb          $t9, -0x6F40($at)
    ctx->pc = 0x184b24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x3690C0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690C0u, _value); } while (0);
    // 0x184b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b2c: 0x64190006  daddiu      $t9, $zero, 0x6
    ctx->pc = 0x184b2cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x184b30: 0x942d90c0  lhu         $t5, -0x6F40($at)
    ctx->pc = 0x184b30u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938816)));
    // 0x184b34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b38: 0xa03690d0  sb          $s6, -0x6F30($at)
    ctx->pc = 0x184b38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x3690D0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690D0u, _value); } while (0);
    // 0x184b3c: 0x1ebb024  and         $s6, $t7, $t3
    ctx->pc = 0x184b3cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x184b40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b44: 0x942f90d0  lhu         $t7, -0x6F30($at)
    ctx->pc = 0x184b44u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)FAST_READ16(0x3690D0u));
    // 0x184b48: 0x2ccc025  or          $t8, $s6, $t4
    ctx->pc = 0x184b48u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 22) | GPR_U64(ctx, 12));
    // 0x184b4c: 0x2416fff8  addiu       $s6, $zero, -0x8
    ctx->pc = 0x184b4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x184b50: 0x1d67024  and         $t6, $t6, $s6
    ctx->pc = 0x184b50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 22));
    // 0x184b54: 0x2416fe3f  addiu       $s6, $zero, -0x1C1
    ctx->pc = 0x184b54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x184b58: 0x1b66824  and         $t5, $t5, $s6
    ctx->pc = 0x184b58u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 22));
    // 0x184b5c: 0x2416f00f  addiu       $s6, $zero, -0xFF1
    ctx->pc = 0x184b5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x184b60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b64: 0x1f67824  and         $t7, $t7, $s6
    ctx->pc = 0x184b64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 22));
    // 0x184b68: 0xa03890d2  sb          $t8, -0x6F2E($at)
    ctx->pc = 0x184b68u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938834), (uint8_t)GPR_U32(ctx, 24));
    // 0x184b6c: 0x1f5a825  or          $s5, $t7, $s5
    ctx->pc = 0x184b6cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
    // 0x184b70: 0x1d9c025  or          $t8, $t6, $t9
    ctx->pc = 0x184b70u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 14) | GPR_U64(ctx, 25));
    // 0x184b74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b78: 0x902e90d2  lbu         $t6, -0x6F2E($at)
    ctx->pc = 0x184b78u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x3690D2u));
    // 0x184b7c: 0x8b0c0  sll         $s6, $t0, 3
    ctx->pc = 0x184b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x184b80: 0x2419ffef  addiu       $t9, $zero, -0x11
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x184b84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b88: 0xa03890e0  sb          $t8, -0x6F20($at)
    ctx->pc = 0x184b88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x3690E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690E0u, _value); } while (0);
    // 0x184b8c: 0x1a9c025  or          $t8, $t5, $t1
    ctx->pc = 0x184b8cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
    // 0x184b90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b94: 0x902d90e0  lbu         $t5, -0x6F20($at)
    ctx->pc = 0x184b94u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x3690E0u));
    // 0x184b98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184b9c: 0xa43890c0  sh          $t8, -0x6F40($at)
    ctx->pc = 0x184b9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x3690C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3690C0u, _value); } while (0);
    // 0x184ba0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184ba4: 0x902f90c1  lbu         $t7, -0x6F3F($at)
    ctx->pc = 0x184ba4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x3690C1u));
    // 0x184ba8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184bac: 0xa43590d0  sh          $s5, -0x6F30($at)
    ctx->pc = 0x184bacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x3690D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3690D0u, _value); } while (0);
    // 0x184bb0: 0x2415fff9  addiu       $s5, $zero, -0x7
    ctx->pc = 0x184bb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x184bb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184bb8: 0x1d5c024  and         $t8, $t6, $s5
    ctx->pc = 0x184bb8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 14) & GPR_U64(ctx, 21));
    // 0x184bbc: 0x902e90d1  lbu         $t6, -0x6F2F($at)
    ctx->pc = 0x184bbcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938833)));
    // 0x184bc0: 0x64150002  daddiu      $s5, $zero, 0x2
    ctx->pc = 0x184bc0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x184bc4: 0x315a825  or          $s5, $t8, $s5
    ctx->pc = 0x184bc4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 24) | GPR_U64(ctx, 21));
    // 0x184bc8: 0x2418fff7  addiu       $t8, $zero, -0x9
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x184bcc: 0x1b86824  and         $t5, $t5, $t8
    ctx->pc = 0x184bccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 24));
    // 0x184bd0: 0x1b66825  or          $t5, $t5, $s6
    ctx->pc = 0x184bd0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 22));
    // 0x184bd4: 0x8c140  sll         $t8, $t0, 5
    ctx->pc = 0x184bd4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x184bd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184bdc: 0x1de7024  and         $t6, $t6, $fp
    ctx->pc = 0x184bdcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 30));
    // 0x184be0: 0xa03590d2  sb          $s5, -0x6F2E($at)
    ctx->pc = 0x184be0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938834), (uint8_t)GPR_U32(ctx, 21));
    // 0x184be4: 0x1c77025  or          $t6, $t6, $a3
    ctx->pc = 0x184be4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x184be8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184bec: 0x64150010  daddiu      $s5, $zero, 0x10
    ctx->pc = 0x184becu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x184bf0: 0xa02d90e0  sb          $t5, -0x6F20($at)
    ctx->pc = 0x184bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938848), (uint8_t)GPR_U32(ctx, 13));
    // 0x184bf4: 0x1e56824  and         $t5, $t7, $a1
    ctx->pc = 0x184bf4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
    // 0x184bf8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184bfc: 0x1a67825  or          $t7, $t5, $a2
    ctx->pc = 0x184bfcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
    // 0x184c00: 0x902d90e0  lbu         $t5, -0x6F20($at)
    ctx->pc = 0x184c00u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x3690E0u));
    // 0x184c04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c08: 0xa02f90c1  sb          $t7, -0x6F3F($at)
    ctx->pc = 0x184c08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x3690C1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690C1u, _value); } while (0);
    // 0x184c0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c10: 0xa02e90d1  sb          $t6, -0x6F2F($at)
    ctx->pc = 0x184c10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x3690D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690D1u, _value); } while (0);
    // 0x184c14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c18: 0x87080  sll         $t6, $t0, 2
    ctx->pc = 0x184c18u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x184c1c: 0x903690d1  lbu         $s6, -0x6F2F($at)
    ctx->pc = 0x184c1cu;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938833)));
    // 0x184c20: 0x1b94024  and         $t0, $t5, $t9
    ctx->pc = 0x184c20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 25));
    // 0x184c24: 0x115c825  or          $t9, $t0, $s5
    ctx->pc = 0x184c24u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 8) | GPR_U64(ctx, 21));
    // 0x184c28: 0x15403c  dsll32      $t0, $s5, 0
    ctx->pc = 0x184c28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 0));
    // 0x184c2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c30: 0x2d7b024  and         $s6, $s6, $s7
    ctx->pc = 0x184c30u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 23));
    // 0x184c34: 0x902f90e1  lbu         $t7, -0x6F1F($at)
    ctx->pc = 0x184c34u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938849)));
    // 0x184c38: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x184c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x184c3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c40: 0x1eb5824  and         $t3, $t7, $t3
    ctx->pc = 0x184c40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x184c44: 0x902d90f0  lbu         $t5, -0x6F10($at)
    ctx->pc = 0x184c44u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938864)));
    // 0x184c48: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x184c48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x184c4c: 0x240cfffc  addiu       $t4, $zero, -0x4
    ctx->pc = 0x184c4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x184c50: 0x300f3fff  andi        $t7, $zero, 0x3FFF
    ctx->pc = 0x184c50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x184c54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c58: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x184c58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x184c5c: 0xa03990e0  sb          $t9, -0x6F20($at)
    ctx->pc = 0x184c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938848), (uint8_t)GPR_U32(ctx, 25));
    // 0x184c60: 0x1842025  or          $a0, $t4, $a0
    ctx->pc = 0x184c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
    // 0x184c64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c68: 0x240dc000  addiu       $t5, $zero, -0x4000
    ctx->pc = 0x184c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x184c6c: 0x903590e0  lbu         $s5, -0x6F20($at)
    ctx->pc = 0x184c6cu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)FAST_READ8(0x3690E0u));
    // 0x184c70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c74: 0xa02390d1  sb          $v1, -0x6F2F($at)
    ctx->pc = 0x184c74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3690D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690D1u, _value); } while (0);
    // 0x184c78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c7c: 0x2aa1824  and         $v1, $s5, $t2
    ctx->pc = 0x184c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 10));
    // 0x184c80: 0xa02b90e1  sb          $t3, -0x6F1F($at)
    ctx->pc = 0x184c80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938849), (uint8_t)GPR_U32(ctx, 11));
    // 0x184c84: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x184c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x184c88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c8c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x184c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x184c90: 0xa02490f0  sb          $a0, -0x6F10($at)
    ctx->pc = 0x184c90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3690F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690F0u, _value); } while (0);
    // 0x184c94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184c98: 0x902490d1  lbu         $a0, -0x6F2F($at)
    ctx->pc = 0x184c98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3690D1u));
    // 0x184c9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184ca0: 0xa02390e0  sb          $v1, -0x6F20($at)
    ctx->pc = 0x184ca0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3690E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690E0u, _value); } while (0);
    // 0x184ca4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184ca8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x184ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x184cac: 0xa02a90f4  sb          $t2, -0x6F0C($at)
    ctx->pc = 0x184cacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3690F4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690F4u, _value); } while (0);
    // 0x184cb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184cb4: 0xac239104  sw          $v1, -0x6EFC($at)
    ctx->pc = 0x184cb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369104u, _value); } while (0);
    // 0x184cb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184cbc: 0x24036bf0  addiu       $v1, $zero, 0x6BF0
    ctx->pc = 0x184cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27632));
    // 0x184cc0: 0xa02a9100  sb          $t2, -0x6F00($at)
    ctx->pc = 0x184cc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x369100u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369100u, _value); } while (0);
    // 0x184cc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184cc8: 0xa02a9101  sb          $t2, -0x6EFF($at)
    ctx->pc = 0x184cc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x369101u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369101u, _value); } while (0);
    // 0x184ccc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184cd0: 0xa4239120  sh          $v1, -0x6EE0($at)
    ctx->pc = 0x184cd0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369120u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369120u, _value); } while (0);
    // 0x184cd4: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x184cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x184cd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184cdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x184cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x184ce0: 0xa02a9102  sb          $t2, -0x6EFE($at)
    ctx->pc = 0x184ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938882), (uint8_t)GPR_U32(ctx, 10));
    // 0x184ce4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x184ce8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184cec: 0xa02390d1  sb          $v1, -0x6F2F($at)
    ctx->pc = 0x184cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3690D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690D1u, _value); } while (0);
    // 0x184cf0: 0x240477fc  addiu       $a0, $zero, 0x77FC
    ctx->pc = 0x184cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30716));
    // 0x184cf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184cf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x184cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184cfc: 0xa02a9103  sb          $t2, -0x6EFD($at)
    ctx->pc = 0x184cfcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x369103u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369103u, _value); } while (0);
    // 0x184d00: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x184d00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x184d04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d08: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x184d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184d0c: 0xa4249122  sh          $a0, -0x6EDE($at)
    ctx->pc = 0x184d0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369122u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369122u, _value); } while (0);
    // 0x184d10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x184d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x184d14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d18: 0x346affff  ori         $t2, $v1, 0xFFFF
    ctx->pc = 0x184d18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x184d1c: 0x902490e0  lbu         $a0, -0x6F20($at)
    ctx->pc = 0x184d1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3690E0u));
    // 0x184d20: 0x14b1825  or          $v1, $t2, $t3
    ctx->pc = 0x184d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x184d24: 0x706a5389  pcpyld      $t2, $v1, $t2
    ctx->pc = 0x184d24u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x184d28: 0x64032000  daddiu      $v1, $zero, 0x2000
    ctx->pc = 0x184d28u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8192);
    // 0x184d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d30: 0x97b824  and         $s7, $a0, $s7
    ctx->pc = 0x184d30u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & GPR_U64(ctx, 23));
    // 0x184d34: 0x903890e1  lbu         $t8, -0x6F1F($at)
    ctx->pc = 0x184d34u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938849)));
    // 0x184d38: 0x2e9b825  or          $s7, $s7, $t1
    ctx->pc = 0x184d38u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 9));
    // 0x184d3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d40: 0x3052824  and         $a1, $t8, $a1
    ctx->pc = 0x184d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x184d44: 0x903690f0  lbu         $s6, -0x6F10($at)
    ctx->pc = 0x184d44u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938864)));
    // 0x184d48: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x184d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x184d4c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x184d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x184d50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d54: 0x2c6b024  and         $s6, $s6, $a2
    ctx->pc = 0x184d54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
    // 0x184d58: 0x94359110  lhu         $s5, -0x6EF0($at)
    ctx->pc = 0x184d58u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938896)));
    // 0x184d5c: 0x64060008  daddiu      $a2, $zero, 0x8
    ctx->pc = 0x184d5cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x184d60: 0x2c63025  or          $a2, $s6, $a2
    ctx->pc = 0x184d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | GPR_U64(ctx, 6));
    // 0x184d64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d68: 0x942c9112  lhu         $t4, -0x6EEE($at)
    ctx->pc = 0x184d68u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)FAST_READ16(0x369112u));
    // 0x184d6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d70: 0xdc2b9120  ld          $t3, -0x6EE0($at)
    ctx->pc = 0x184d70u;
    SET_GPR_U64(ctx, 11, FAST_READ64(0x369120u));
    // 0x184d74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d78: 0x94249130  lhu         $a0, -0x6ED0($at)
    ctx->pc = 0x184d78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x369130u));
    // 0x184d7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d80: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x184d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x184d84: 0xa03790e0  sb          $s7, -0x6F20($at)
    ctx->pc = 0x184d84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938848), (uint8_t)GPR_U32(ctx, 23));
    // 0x184d88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x184d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x184d8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d90: 0xa02590e1  sb          $a1, -0x6F1F($at)
    ctx->pc = 0x184d90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3690E1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690E1u, _value); } while (0);
    // 0x184d94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184d98: 0x2ad2824  and         $a1, $s5, $t5
    ctx->pc = 0x184d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 13));
    // 0x184d9c: 0xa02690f0  sb          $a2, -0x6F10($at)
    ctx->pc = 0x184d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938864), (uint8_t)GPR_U32(ctx, 6));
    // 0x184da0: 0xaf2825  or          $a1, $a1, $t7
    ctx->pc = 0x184da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 15));
    // 0x184da4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184da8: 0x2415ff7f  addiu       $s5, $zero, -0x81
    ctx->pc = 0x184da8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x184dac: 0xa4259110  sh          $a1, -0x6EF0($at)
    ctx->pc = 0x184dacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x369110u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369110u, _value); } while (0);
    // 0x184db0: 0x18d2824  and         $a1, $t4, $t5
    ctx->pc = 0x184db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
    // 0x184db4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184db8: 0xaf3025  or          $a2, $a1, $t7
    ctx->pc = 0x184db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 15));
    // 0x184dbc: 0xa4269112  sh          $a2, -0x6EEE($at)
    ctx->pc = 0x184dbcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x369112u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369112u, _value); } while (0);
    // 0x184dc0: 0x16a2824  and         $a1, $t3, $t2
    ctx->pc = 0x184dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x184dc4: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x184dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x184dc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184dcc: 0xfc259120  sd          $a1, -0x6EE0($at)
    ctx->pc = 0x184dccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x369120u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369120u, _value); } while (0);
    // 0x184dd0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x184dd4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184dd8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x184dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x184ddc: 0x902f90e0  lbu         $t7, -0x6F20($at)
    ctx->pc = 0x184ddcu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x3690E0u));
    // 0x184de0: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x184de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    // 0x184de4: 0x24c69090  addiu       $a2, $a2, -0x6F70
    ctx->pc = 0x184de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938768));
    // 0x184de8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184dec: 0x1f57824  and         $t7, $t7, $s5
    ctx->pc = 0x184decu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 21));
    // 0x184df0: 0xa4249130  sh          $a0, -0x6ED0($at)
    ctx->pc = 0x184df0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938928), (uint16_t)GPR_U32(ctx, 4));
    // 0x184df4: 0x1e21025  or          $v0, $t7, $v0
    ctx->pc = 0x184df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x184df8: 0x340493f0  ori         $a0, $zero, 0x93F0
    ctx->pc = 0x184df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37872);
    // 0x184dfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e00: 0xa4249140  sh          $a0, -0x6EC0($at)
    ctx->pc = 0x184e00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369140u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369140u, _value); } while (0);
    // 0x184e04: 0x340487fc  ori         $a0, $zero, 0x87FC
    ctx->pc = 0x184e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34812);
    // 0x184e08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e0c: 0xa4249142  sh          $a0, -0x6EBE($at)
    ctx->pc = 0x184e0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369142u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369142u, _value); } while (0);
    // 0x184e10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x184e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x184e18: 0x902c90e1  lbu         $t4, -0x6F1F($at)
    ctx->pc = 0x184e18u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x3690E1u));
    // 0x184e1c: 0x248490a0  addiu       $a0, $a0, -0x6F60
    ctx->pc = 0x184e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938784));
    // 0x184e20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e24: 0x902b90f0  lbu         $t3, -0x6F10($at)
    ctx->pc = 0x184e24u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x3690F0u));
    // 0x184e28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e2c: 0x17e5824  and         $t3, $t3, $fp
    ctx->pc = 0x184e2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 30));
    // 0x184e30: 0x94359132  lhu         $s5, -0x6ECE($at)
    ctx->pc = 0x184e30u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938930)));
    // 0x184e34: 0x1675825  or          $t3, $t3, $a3
    ctx->pc = 0x184e34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x184e38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e3c: 0x2ad3824  and         $a3, $s5, $t5
    ctx->pc = 0x184e3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & GPR_U64(ctx, 13));
    // 0x184e40: 0xdc2f9140  ld          $t7, -0x6EC0($at)
    ctx->pc = 0x184e40u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 1), 4294938944)));
    // 0x184e44: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x184e44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x184e48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e4c: 0x1ea1824  and         $v1, $t7, $t2
    ctx->pc = 0x184e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) & GPR_U64(ctx, 10));
    // 0x184e50: 0xa02290e0  sb          $v0, -0x6F20($at)
    ctx->pc = 0x184e50u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938848), (uint8_t)GPR_U32(ctx, 2));
    // 0x184e54: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x184e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x184e58: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x184e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x184e5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e60: 0x1821024  and         $v0, $t4, $v0
    ctx->pc = 0x184e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x184e64: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x184e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x184e68: 0xa02290e1  sb          $v0, -0x6F1F($at)
    ctx->pc = 0x184e68u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938849), (uint8_t)GPR_U32(ctx, 2));
    // 0x184e6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e70: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x184e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x184e74: 0xa02b90f0  sb          $t3, -0x6F10($at)
    ctx->pc = 0x184e74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x3690F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3690F0u, _value); } while (0);
    // 0x184e78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e7c: 0xa4279132  sh          $a3, -0x6ECE($at)
    ctx->pc = 0x184e7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x369132u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369132u, _value); } while (0);
    // 0x184e80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e84: 0xfc239140  sd          $v1, -0x6EC0($at)
    ctx->pc = 0x184e84u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369140u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x369140u, _value); } while (0);
    // 0x184e88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e8c: 0x902390f0  lbu         $v1, -0x6F10($at)
    ctx->pc = 0x184e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3690F0u));
    // 0x184e90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x184e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x184e94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184e98: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x184e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x184e9c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x184E9Cu;
    SET_GPR_U32(ctx, 31, 0x184EA4u);
    ctx->pc = 0x184EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E9Cu;
    // 0x184ea0: 0xa02290f0  sb          $v0, -0x6F10($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938864), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x184E9Cu, 0x184EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EA4u;
label_184ea4:
    // 0x184ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184ea8: 0xa38286c0  sb          $v0, -0x7940($gp)
    ctx->pc = 0x184ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936256), (uint8_t)GPR_U32(ctx, 2));
label_184eac:
    // 0x184eac: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184EACu;
    {
        const bool branch_taken_0x184eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x184EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EACu;
        // 0x184eb0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184eac) {
            ctx->pc = 0x184EC8u;
            goto label_184ec8;
        }
    }
    ctx->pc = 0x184EB4u;
    // 0x184eb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184eb8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x184eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x184ebc: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x184ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x184ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x184EC0u;
    {
        const bool branch_taken_0x184ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EC0u;
        // 0x184ec4: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ec0) {
            ctx->pc = 0x184ECCu;
            goto label_184ecc;
        }
    }
    ctx->pc = 0x184EC8u;
label_184ec8:
    // 0x184ec8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_184ecc:
    // 0x184ecc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x184eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x184ed0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x184ED0u;
    {
        const bool branch_taken_0x184ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184ED0u;
        // 0x184ed4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ed0) {
            ctx->pc = 0x184F60u;
            goto label_184f60;
        }
    }
    ctx->pc = 0x184ED8u;
    // 0x184ed8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184edc: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x184edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x184ee0: 0x94289110  lhu         $t0, -0x6EF0($at)
    ctx->pc = 0x184ee0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x369110u));
    // 0x184ee4: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x184ee4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184ee8: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x184ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x184eec: 0x24822000  addiu       $v0, $a0, 0x2000
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x184ef0: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x184ef4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x184ef8: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x184ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x184efc: 0x64052000  daddiu      $a1, $zero, 0x2000
    ctx->pc = 0x184efcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8192);
    // 0x184f00: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x184f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184f04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f08: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x184f08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x184f0c: 0x94269112  lhu         $a2, -0x6EEE($at)
    ctx->pc = 0x184f0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938898)));
    // 0x184f10: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x184f10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x184f14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f18: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x184f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x184f1c: 0x94249130  lhu         $a0, -0x6ED0($at)
    ctx->pc = 0x184f1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938928)));
    // 0x184f20: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x184f20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x184f24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f28: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x184f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x184f2c: 0x94229132  lhu         $v0, -0x6ECE($at)
    ctx->pc = 0x184f2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938930)));
    // 0x184f30: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x184f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x184f34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f38: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x184f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x184f3c: 0xa4289110  sh          $t0, -0x6EF0($at)
    ctx->pc = 0x184f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938896), (uint16_t)GPR_U32(ctx, 8));
    // 0x184f40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184f44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f48: 0xa4269112  sh          $a2, -0x6EEE($at)
    ctx->pc = 0x184f48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x369112u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369112u, _value); } while (0);
    // 0x184f4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f50: 0xa4249130  sh          $a0, -0x6ED0($at)
    ctx->pc = 0x184f50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369130u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369130u, _value); } while (0);
    // 0x184f54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f58: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x184F58u;
    {
        const bool branch_taken_0x184f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F58u;
        // 0x184f5c: 0xa4229132  sh          $v0, -0x6ECE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294938930), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f58) {
            ctx->pc = 0x184FE0u;
            goto label_184fe0;
        }
    }
    ctx->pc = 0x184F60u;
label_184f60:
    // 0x184f60: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x184f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x184f64: 0x94289110  lhu         $t0, -0x6EF0($at)
    ctx->pc = 0x184f64u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938896)));
    // 0x184f68: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x184f68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184f6c: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x184f70: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x184f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x184f74: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x184f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x184f78: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x184f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x184f7c: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x184f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x184f80: 0x64052000  daddiu      $a1, $zero, 0x2000
    ctx->pc = 0x184f80u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8192);
    // 0x184f84: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x184f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184f88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f8c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x184f8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x184f90: 0x94269112  lhu         $a2, -0x6EEE($at)
    ctx->pc = 0x184f90u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938898)));
    // 0x184f94: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x184f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x184f98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f9c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x184f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x184fa0: 0x94249130  lhu         $a0, -0x6ED0($at)
    ctx->pc = 0x184fa0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938928)));
    // 0x184fa4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x184fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x184fa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fac: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x184facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x184fb0: 0x94229132  lhu         $v0, -0x6ECE($at)
    ctx->pc = 0x184fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938930)));
    // 0x184fb4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x184fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x184fb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fbc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x184fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x184fc0: 0xa4289110  sh          $t0, -0x6EF0($at)
    ctx->pc = 0x184fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938896), (uint16_t)GPR_U32(ctx, 8));
    // 0x184fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184fc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fcc: 0xa4269112  sh          $a2, -0x6EEE($at)
    ctx->pc = 0x184fccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x369112u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369112u, _value); } while (0);
    // 0x184fd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fd4: 0xa4249130  sh          $a0, -0x6ED0($at)
    ctx->pc = 0x184fd4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369130u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369130u, _value); } while (0);
    // 0x184fd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fdc: 0xa4229132  sh          $v0, -0x6ECE($at)
    ctx->pc = 0x184fdcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369132u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369132u, _value); } while (0);
label_184fe0:
    // 0x184fe0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x184fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x184fe4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x184fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x184fe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184ff0: 0x0  nop
    ctx->pc = 0x184ff0u;
    // NOP
    // 0x184ff4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x184ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x184ff8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x184ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184ffc: 0x0  nop
    ctx->pc = 0x184ffcu;
    // NOP
    // 0x185000: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x185000u;
    {
        const bool branch_taken_0x185000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185000) {
            ctx->pc = 0x185018u;
            goto label_185018;
        }
    }
    ctx->pc = 0x185008u;
    // 0x185008: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18500c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18500cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185010: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x185010u;
    {
        const bool branch_taken_0x185010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185010) {
            ctx->pc = 0x185030u;
            goto label_185030;
        }
    }
    ctx->pc = 0x185018u;
label_185018:
    // 0x185018: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18501c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x18501cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x185020: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x185024: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x185024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185028: 0x0  nop
    ctx->pc = 0x185028u;
    // NOP
    // 0x18502c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18502cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_185030:
    // 0x185030: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185034: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x185034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x185038: 0xa0239103  sb          $v1, -0x6EFD($at)
    ctx->pc = 0x185038u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369103u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369103u, _value); } while (0);
    // 0x18503c: 0x24a590a0  addiu       $a1, $a1, -0x6F60
    ctx->pc = 0x18503cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938784));
    // 0x185040: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x185040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185044: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x185044u;
    SET_GPR_U32(ctx, 31, 0x18504Cu);
    ctx->pc = 0x185048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185044u;
    // 0x185048: 0x240600b0  addiu       $a2, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x185044u, 0x18504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18504Cu;
label_18504c:
    // 0x18504c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x18504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185050: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x185050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x185054: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x185054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x185058: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x185058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18505c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185060: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x185060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185064: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x185064u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185068: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x185068u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18506c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18506cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185070: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185074: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185078: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x185078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18507c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18507cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185080: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185084: 0x3e00008  jr          $ra
    ctx->pc = 0x185084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185084u;
        // 0x185088: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18508Cu;
}
