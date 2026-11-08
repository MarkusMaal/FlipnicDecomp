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

// Function: entry_00180ec0
// Address: 0x180ec0 - 0x181250
void entry_00180ec0_0x180ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180ec0_0x180ec0");
#endif

    switch (ctx->pc) {
        case 0x181248u: goto label_181248;
        default: break;
    }

    ctx->pc = 0x180ec0u;

    // 0x180ec0: 0x83828688  lb          $v0, -0x7978($gp)
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x180ec4: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x180EC4u;
    {
        const bool branch_taken_0x180ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EC4u;
        // 0x180ec8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ec4) {
            ctx->pc = 0x181250u;
            return;
        }
    }
    ctx->pc = 0x180ECCu;
    // 0x180ecc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x180eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x180ed0: 0xac2089c0  sw          $zero, -0x7640($at)
    ctx->pc = 0x180ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937024), GPR_U32(ctx, 0));
    // 0x180ed4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x180ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x180ed8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180edc: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x180edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x180ee0: 0xac2089c4  sw          $zero, -0x763C($at)
    ctx->pc = 0x180ee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3689C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3689C4u, _value); } while (0);
    // 0x180ee4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x180ee8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180eec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x180eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x180ef0: 0xfc2089a8  sd          $zero, -0x7658($at)
    ctx->pc = 0x180ef0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3689A8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3689A8u, _value); } while (0);
    // 0x180ef4: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x180ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x180ef8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180efc: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x180efcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x180f00: 0xfc228960  sd          $v0, -0x76A0($at)
    ctx->pc = 0x180f00u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936928), GPR_U64(ctx, 2));
    // 0x180f04: 0x240bffcf  addiu       $t3, $zero, -0x31
    ctx->pc = 0x180f04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x180f08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180f10: 0xfc238968  sd          $v1, -0x7698($at)
    ctx->pc = 0x180f10u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368968u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368968u, _value); } while (0);
    // 0x180f14: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x180f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x180f18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f1c: 0x640c0010  daddiu      $t4, $zero, 0x10
    ctx->pc = 0x180f1cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x180f20: 0xfc2289b8  sd          $v0, -0x7648($at)
    ctx->pc = 0x180f20u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937016), GPR_U64(ctx, 2));
    // 0x180f24: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x180f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x180f28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f2c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x180f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x180f30: 0x90298980  lbu         $t1, -0x7680($at)
    ctx->pc = 0x180f30u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x368980u));
    // 0x180f34: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x180f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180f38: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x180f3c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x180f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x180f40: 0x240efff9  addiu       $t6, $zero, -0x7
    ctx->pc = 0x180f40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x180f44: 0x640a0002  daddiu      $t2, $zero, 0x2
    ctx->pc = 0x180f44u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x180f48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f4c: 0x1324824  and         $t1, $t1, $s2
    ctx->pc = 0x180f4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 18));
    // 0x180f50: 0x90278981  lbu         $a3, -0x767F($at)
    ctx->pc = 0x180f50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936961)));
    // 0x180f54: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x180f54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x180f58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f5c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x180f5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x180f60: 0x902f8982  lbu         $t7, -0x767E($at)
    ctx->pc = 0x180f60u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936962)));
    // 0x180f64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f68: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x180f68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
    // 0x180f6c: 0x902d89a0  lbu         $t5, -0x7660($at)
    ctx->pc = 0x180f6cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936992)));
    // 0x180f70: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x180f70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x180f74: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x180f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x180f78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f7c: 0x1a84024  and         $t0, $t5, $t0
    ctx->pc = 0x180f7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 8));
    // 0x180f80: 0xa0298980  sb          $t1, -0x7680($at)
    ctx->pc = 0x180f80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936960), (uint8_t)GPR_U32(ctx, 9));
    // 0x180f84: 0xec4825  or          $t1, $a3, $t4
    ctx->pc = 0x180f84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x180f88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f8c: 0x90278980  lbu         $a3, -0x7680($at)
    ctx->pc = 0x180f8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x368980u));
    // 0x180f90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180f94: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x180f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x180f98: 0xa0298981  sb          $t1, -0x767F($at)
    ctx->pc = 0x180f98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936961), (uint8_t)GPR_U32(ctx, 9));
    // 0x180f9c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x180f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x180fa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180fa4: 0x449c0  sll         $t1, $a0, 7
    ctx->pc = 0x180fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x180fa8: 0x90328981  lbu         $s2, -0x767F($at)
    ctx->pc = 0x180fa8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936961)));
    // 0x180fac: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x180facu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x180fb0: 0x64090040  daddiu      $t1, $zero, 0x40
    ctx->pc = 0x180fb0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x180fb4: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x180fb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180fbc: 0xa02f8982  sb          $t7, -0x767E($at)
    ctx->pc = 0x180fbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x368982u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368982u, _value); } while (0);
    // 0x180fc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180fc4: 0x902d8982  lbu         $t5, -0x767E($at)
    ctx->pc = 0x180fc4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x368982u));
    // 0x180fc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180fcc: 0xa02889a0  sb          $t0, -0x7660($at)
    ctx->pc = 0x180fccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3689A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689A0u, _value); } while (0);
    // 0x180fd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180fd4: 0x902689a0  lbu         $a2, -0x7660($at)
    ctx->pc = 0x180fd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3689A0u));
    // 0x180fd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180fdc: 0xa0258980  sb          $a1, -0x7680($at)
    ctx->pc = 0x180fdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368980u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368980u, _value); } while (0);
    // 0x180fe0: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x180fe4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180fe8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x180fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x180fec: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x180fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x180ff0: 0xa0238981  sb          $v1, -0x767F($at)
    ctx->pc = 0x180ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936961), (uint8_t)GPR_U32(ctx, 3));
    // 0x180ff4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x180ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x180ff8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180ffc: 0x1ae1824  and         $v1, $t5, $t6
    ctx->pc = 0x180ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x181000: 0x902889a1  lbu         $t0, -0x765F($at)
    ctx->pc = 0x181000u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936993)));
    // 0x181004: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x181004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x181008: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x181008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x18100c: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x181010: 0x47080  sll         $t6, $a0, 2
    ctx->pc = 0x181010u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x181014: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x181018: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x181018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18101c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181020: 0xa0238982  sb          $v1, -0x767E($at)
    ctx->pc = 0x181020u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368982u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368982u, _value); } while (0);
    // 0x181024: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181028: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x181028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x18102c: 0xa02289a0  sb          $v0, -0x7660($at)
    ctx->pc = 0x18102cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3689A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689A0u, _value); } while (0);
    // 0x181030: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181034: 0x1051024  and         $v0, $t0, $a1
    ctx->pc = 0x181034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x181038: 0x903289a0  lbu         $s2, -0x7660($at)
    ctx->pc = 0x181038u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936992)));
    // 0x18103c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x181040: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x181040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x181044: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x181044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x181048: 0x64080006  daddiu      $t0, $zero, 0x6
    ctx->pc = 0x181048u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x18104c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18104cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181050: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x181050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x181054: 0xa02289a1  sb          $v0, -0x765F($at)
    ctx->pc = 0x181054u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936993), (uint8_t)GPR_U32(ctx, 2));
    // 0x181058: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x18105c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18105cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181060: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181064: 0x902f89a1  lbu         $t7, -0x765F($at)
    ctx->pc = 0x181064u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x3689A1u));
    // 0x181068: 0xc303c  dsll32      $a2, $t4, 0
    ctx->pc = 0x181068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 0));
    // 0x18106c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18106cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181070: 0x1e52824  and         $a1, $t7, $a1
    ctx->pc = 0x181070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
    // 0x181074: 0xa02289b0  sb          $v0, -0x7650($at)
    ctx->pc = 0x181074u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937008), (uint8_t)GPR_U32(ctx, 2));
    // 0x181078: 0xae2825  or          $a1, $a1, $t6
    ctx->pc = 0x181078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
    // 0x18107c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18107cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181080: 0xa02289b1  sb          $v0, -0x764F($at)
    ctx->pc = 0x181080u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3689B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689B1u, _value); } while (0);
    // 0x181084: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181088: 0xa02389a0  sb          $v1, -0x7660($at)
    ctx->pc = 0x181088u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3689A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689A0u, _value); } while (0);
    // 0x18108c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18108cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181090: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x181090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x181094: 0xa02289b2  sb          $v0, -0x764E($at)
    ctx->pc = 0x181094u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3689B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689B2u, _value); } while (0);
    // 0x181098: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18109c: 0xa02289b3  sb          $v0, -0x764D($at)
    ctx->pc = 0x18109cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3689B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689B3u, _value); } while (0);
    // 0x1810a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810a4: 0xa0228994  sb          $v0, -0x766C($at)
    ctx->pc = 0x1810a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368994u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368994u, _value); } while (0);
    // 0x1810a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1810acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1810b0: 0xa02589a1  sb          $a1, -0x765F($at)
    ctx->pc = 0x1810b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3689A1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689A1u, _value); } while (0);
    // 0x1810b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810b8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1810b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1810bc: 0xac2d89b4  sw          $t5, -0x764C($at)
    ctx->pc = 0x1810bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937012), GPR_U32(ctx, 13));
    // 0x1810c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1810c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1810c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1810c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1810cc: 0xa42389d0  sh          $v1, -0x7630($at)
    ctx->pc = 0x1810ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937040), (uint16_t)GPR_U32(ctx, 3));
    // 0x1810d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810d4: 0xa42389d2  sh          $v1, -0x762E($at)
    ctx->pc = 0x1810d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3689D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3689D2u, _value); } while (0);
    // 0x1810d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810dc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1810dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1810e0: 0xac2d89e0  sw          $t5, -0x7620($at)
    ctx->pc = 0x1810e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x3689E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3689E0u, _value); } while (0);
    // 0x1810e4: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1810e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1810e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810ec: 0xac2d89e4  sw          $t5, -0x761C($at)
    ctx->pc = 0x1810ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x3689E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3689E4u, _value); } while (0);
    // 0x1810f0: 0x70432b89  pcpyld      $a1, $v0, $v1
    ctx->pc = 0x1810f0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1810f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1810f8: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x1810f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1810fc: 0x902e89a0  lbu         $t6, -0x7660($at)
    ctx->pc = 0x1810fcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x3689A0u));
    // 0x181100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181104: 0x300d0003  andi        $t5, $zero, 0x3
    ctx->pc = 0x181104u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x181108: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18110c: 0x1c42024  and         $a0, $t6, $a0
    ctx->pc = 0x18110cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
    // 0x181110: 0xdc2f89d0  ld          $t7, -0x7630($at)
    ctx->pc = 0x181110u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 1), 4294937040)));
    // 0x181114: 0x8c6025  or          $t4, $a0, $t4
    ctx->pc = 0x181114u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x181118: 0xd7100  sll         $t6, $t5, 4
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x18111c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181120: 0x1e52024  and         $a0, $t7, $a1
    ctx->pc = 0x181120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
    // 0x181124: 0xa42389f0  sh          $v1, -0x7610($at)
    ctx->pc = 0x181124u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937072), (uint16_t)GPR_U32(ctx, 3));
    // 0x181128: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x181128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x18112c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181130: 0x240ffff3  addiu       $t7, $zero, -0xD
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x181134: 0xa42389f2  sh          $v1, -0x760E($at)
    ctx->pc = 0x181134u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3689F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3689F2u, _value); } while (0);
    // 0x181138: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18113c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x181140: 0xfc2289c8  sd          $v0, -0x7638($at)
    ctx->pc = 0x181140u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3689C8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3689C8u, _value); } while (0);
    // 0x181144: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181148: 0xfc2289e8  sd          $v0, -0x7618($at)
    ctx->pc = 0x181148u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3689E8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3689E8u, _value); } while (0);
    // 0x18114c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181150: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x181154: 0xa02c89a0  sb          $t4, -0x7660($at)
    ctx->pc = 0x181154u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936992), (uint8_t)GPR_U32(ctx, 12));
    // 0x181158: 0x240dff3f  addiu       $t5, $zero, -0xC1
    ctx->pc = 0x181158u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x18115c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181160: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x181160u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x181164: 0xfc2489d0  sd          $a0, -0x7630($at)
    ctx->pc = 0x181164u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3689D0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3689D0u, _value); } while (0);
    // 0x181168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18116c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x18116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x181170: 0x903389a0  lbu         $s3, -0x7660($at)
    ctx->pc = 0x181170u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x3689A0u));
    // 0x181174: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181178: 0x2673824  and         $a3, $s3, $a3
    ctx->pc = 0x181178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
    // 0x18117c: 0xdc3289f0  ld          $s2, -0x7610($at)
    ctx->pc = 0x18117cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 1), 4294937072)));
    // 0x181180: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x181180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x181184: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181188: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x181188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x18118c: 0xfc248978  sd          $a0, -0x7688($at)
    ctx->pc = 0x18118cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936952), GPR_U64(ctx, 4));
    // 0x181190: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x181190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x181194: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x181198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18119c: 0xfc248988  sd          $a0, -0x7678($at)
    ctx->pc = 0x18119cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368988u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368988u, _value); } while (0);
    // 0x1811a0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1811a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1811a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1811a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1811ac: 0xfc2489d8  sd          $a0, -0x7628($at)
    ctx->pc = 0x1811acu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3689D8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3689D8u, _value); } while (0);
    // 0x1811b0: 0x24c68950  addiu       $a2, $a2, -0x76B0
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936912));
    // 0x1811b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1811b8: 0xfc2489f8  sd          $a0, -0x7608($at)
    ctx->pc = 0x1811b8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3689F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3689F8u, _value); } while (0);
    // 0x1811bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1811c0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1811c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1811c4: 0xfc2c8998  sd          $t4, -0x7668($at)
    ctx->pc = 0x1811c4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 12)); ps2TraceGuestWrite(rdram, 0x368998u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368998u, _value); } while (0);
    // 0x1811c8: 0x24848960  addiu       $a0, $a0, -0x76A0
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936928));
    // 0x1811cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1811d0: 0xa02789a0  sb          $a3, -0x7660($at)
    ctx->pc = 0x1811d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3689A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3689A0u, _value); } while (0);
    // 0x1811d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1811d8: 0xfc2589f0  sd          $a1, -0x7610($at)
    ctx->pc = 0x1811d8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3689F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3689F0u, _value); } while (0);
    // 0x1811dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1811e0: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1811e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1811e4: 0x90278990  lbu         $a3, -0x7670($at)
    ctx->pc = 0x1811e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x368990u));
    // 0x1811e8: 0x24a513b0  addiu       $a1, $a1, 0x13B0
    ctx->pc = 0x1811e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5040));
    // 0x1811ec: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1811ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1811f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1811f4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1811f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1811f8: 0xa0238990  sb          $v1, -0x7670($at)
    ctx->pc = 0x1811f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368990u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368990u, _value); } while (0);
    // 0x1811fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181200: 0x90238990  lbu         $v1, -0x7670($at)
    ctx->pc = 0x181200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x368990u));
    // 0x181204: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x181204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x181208: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18120c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x181210: 0xa0228990  sb          $v0, -0x7670($at)
    ctx->pc = 0x181210u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368990u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368990u, _value); } while (0);
    // 0x181214: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181218: 0x90228990  lbu         $v0, -0x7670($at)
    ctx->pc = 0x181218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368990u));
    // 0x18121c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x18121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x181220: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181224: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x181224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x181228: 0xa0228990  sb          $v0, -0x7670($at)
    ctx->pc = 0x181228u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368990u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368990u, _value); } while (0);
    // 0x18122c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181230: 0x90228990  lbu         $v0, -0x7670($at)
    ctx->pc = 0x181230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368990u));
    // 0x181234: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x181234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x181238: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18123c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x18123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x181240: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x181240u;
    SET_GPR_U32(ctx, 31, 0x181248u);
    ctx->pc = 0x181244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181240u;
    // 0x181244: 0xa0228990  sb          $v0, -0x7670($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936976), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x181240u, 0x181248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181248u;
label_181248:
    // 0x181248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18124c: 0xa3828688  sb          $v0, -0x7978($gp)
    ctx->pc = 0x18124cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936200), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x181250u;
}
