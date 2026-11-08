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

// Function: entry_00125090
// Address: 0x125090 - 0x12517c
void entry_00125090_0x125090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125090_0x125090");
#endif

    ctx->pc = 0x125090u;

    // 0x125090: 0x8f828428  lw          $v0, -0x7BD8($gp)
    ctx->pc = 0x125090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x125094: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x125094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
    // 0x125098: 0x8382842c  lb          $v0, -0x7BD4($gp)
    ctx->pc = 0x125098u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935596)));
    // 0x12509c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x12509Cu;
    {
        const bool branch_taken_0x12509c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12509Cu;
        // 0x1250a0: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12509c) {
            ctx->pc = 0x12517Cu;
            return;
        }
    }
    ctx->pc = 0x1250A4u;
    // 0x1250a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1250a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1250a8: 0x90252d31  lbu         $a1, 0x2D31($at)
    ctx->pc = 0x1250a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11569)));
    // 0x1250ac: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x1250acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1250b0: 0xa382842c  sb          $v0, -0x7BD4($gp)
    ctx->pc = 0x1250b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935596), (uint8_t)GPR_U32(ctx, 2));
    // 0x1250b4: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x1250b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1250b8: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x1250b8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1250bc: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x1250bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1250c0: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x1250c0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1250c4: 0x240a8000  addiu       $t2, $zero, -0x8000
    ctx->pc = 0x1250c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1250c8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1250c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1250cc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1250d0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1250d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1250d4: 0x90282d37  lbu         $t0, 0x2D37($at)
    ctx->pc = 0x1250d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11575)));
    // 0x1250d8: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x1250d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1250dc: 0x8b1825  or          $v1, $a0, $t3
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x1250e0: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1250e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1250e4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1250e8: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1250e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1250ec: 0x90262d35  lbu         $a2, 0x2D35($at)
    ctx->pc = 0x1250ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11573)));
    // 0x1250f0: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1250f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1250f4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1250f8: 0xa0232d31  sb          $v1, 0x2D31($at)
    ctx->pc = 0x1250f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2D31u, _value); } while (0);
    // 0x1250fc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125100: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125104: 0x942b2d30  lhu         $t3, 0x2D30($at)
    ctx->pc = 0x125104u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x2B2D30u));
    // 0x125108: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12510c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x12510cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x125110: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x125110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x125114: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x125114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x125118: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x125118u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x12511c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125120: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x125120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x125124: 0xa0272d37  sb          $a3, 0x2D37($at)
    ctx->pc = 0x125124u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11575), (uint8_t)GPR_U32(ctx, 7));
    // 0x125128: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12512c: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x125130: 0x90292d37  lbu         $t1, 0x2D37($at)
    ctx->pc = 0x125130u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x2B2D37u));
    // 0x125134: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125138: 0xa0232d35  sb          $v1, 0x2D35($at)
    ctx->pc = 0x125138u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D35u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2D35u, _value); } while (0);
    // 0x12513c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125140: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x125140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x125144: 0x90262d38  lbu         $a2, 0x2D38($at)
    ctx->pc = 0x125144u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x2B2D38u));
    // 0x125148: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12514c: 0xfc232d48  sd          $v1, 0x2D48($at)
    ctx->pc = 0x12514cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B2D48u, _value); } while (0);
    // 0x125150: 0x1421825  or          $v1, $t2, $v0
    ctx->pc = 0x125150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x125154: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125158: 0xa4232d30  sh          $v1, 0x2D30($at)
    ctx->pc = 0x125158u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2B2D30u, _value); } while (0);
    // 0x12515c: 0x1271024  and         $v0, $t1, $a3
    ctx->pc = 0x12515cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x125160: 0x481825  or          $v1, $v0, $t0
    ctx->pc = 0x125160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x125164: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125168: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x125168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x12516c: 0xa0232d37  sb          $v1, 0x2D37($at)
    ctx->pc = 0x12516cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11575), (uint8_t)GPR_U32(ctx, 3));
    // 0x125170: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x125170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x125174: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125178: 0xa0222d38  sb          $v0, 0x2D38($at)
    ctx->pc = 0x125178u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B2D38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2D38u, _value); } while (0);
    ctx->pc = 0x12517cu;
}
