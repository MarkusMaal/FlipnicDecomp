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

// Function: FUN_00120180
// Address: 0x120180 - 0x120514
void FUN_00120180_0x120180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120180_0x120180");
#endif

    switch (ctx->pc) {
        case 0x12033cu: goto label_12033c;
        case 0x120384u: goto label_120384;
        default: break;
    }

    ctx->pc = 0x120180u;

    // 0x120180: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x120180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x120184: 0x24c9003f  addiu       $t1, $a2, 0x3F
    ctx->pc = 0x120184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x120188: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x120188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12018c: 0x94982  srl         $t1, $t1, 6
    ctx->pc = 0x12018cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
    // 0x120190: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x120190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x120194: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x120194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120198: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x120198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12019c: 0x312a003f  andi        $t2, $t1, 0x3F
    ctx->pc = 0x12019cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x1201a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1201a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1201a4: 0x310b003f  andi        $t3, $t0, 0x3F
    ctx->pc = 0x1201a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x1201a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1201a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1201ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1201acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1201b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1201b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1201b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1201b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1201b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1201bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1201bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1201c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1201c4: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x1201c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1201c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1201c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1201cc: 0xa0830013  sb          $v1, 0x13($a0)
    ctx->pc = 0x1201ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1201d0: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x1201d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1201d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1201d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1201d8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1201d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1201dc: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x1201dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1201e0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1201e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1201e4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1201e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1201e8: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x1201e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x1201ec: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x1201ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x1201f0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1201f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1201f4: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1201f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1201f8: 0x908c0033  lbu         $t4, 0x33($a0)
    ctx->pc = 0x1201f8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x1201fc: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1201fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x120200: 0x1834824  and         $t1, $t4, $v1
    ctx->pc = 0x120200u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x120204: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x120204u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x120208: 0xa0890033  sb          $t1, 0x33($a0)
    ctx->pc = 0x120208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 9));
    // 0x12020c: 0x90890036  lbu         $t1, 0x36($a0)
    ctx->pc = 0x12020cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x120210: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x120210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x120214: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x120214u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x120218: 0xa0890036  sb          $t1, 0x36($a0)
    ctx->pc = 0x120218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 9));
    // 0x12021c: 0x90890037  lbu         $t1, 0x37($a0)
    ctx->pc = 0x12021cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x120220: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x120220u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x120224: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x120224u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x120228: 0x15050015  bne         $t0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x120228u;
    {
        const bool branch_taken_0x120228 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x12022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120228u;
        // 0x12022c: 0xa0890037  sb          $t1, 0x37($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120228) {
            ctx->pc = 0x120280u;
            goto label_120280;
        }
    }
    ctx->pc = 0x120230u;
    // 0x120230: 0x2cc10041  sltiu       $at, $a2, 0x41
    ctx->pc = 0x120230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x120234: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x120234u;
    {
        const bool branch_taken_0x120234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x120234) {
            ctx->pc = 0x120250u;
            goto label_120250;
        }
    }
    ctx->pc = 0x12023Cu;
    // 0x12023c: 0x92850036  lbu         $a1, 0x36($s4)
    ctx->pc = 0x12023cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x120240: 0x64040004  daddiu      $a0, $zero, 0x4
    ctx->pc = 0x120240u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x120244: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x120244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x120248: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12024c: 0xa2830036  sb          $v1, 0x36($s4)
    ctx->pc = 0x12024cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 54), (uint8_t)GPR_U32(ctx, 3));
label_120250:
    // 0x120250: 0x92850036  lbu         $a1, 0x36($s4)
    ctx->pc = 0x120250u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x120254: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x120254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x120258: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x120258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x12025c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x12025Cu;
    {
        const bool branch_taken_0x12025c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12025c) {
            ctx->pc = 0x1202D4u;
            goto label_1202d4;
        }
    }
    ctx->pc = 0x120264u;
    // 0x120264: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x120264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x120268: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x120268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x12026c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x12026cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x120270: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x120270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x120274: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120278: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x120278u;
    {
        const bool branch_taken_0x120278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120278u;
        // 0x12027c: 0xa2830036  sb          $v1, 0x36($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120278) {
            ctx->pc = 0x1202D4u;
            goto label_1202d4;
        }
    }
    ctx->pc = 0x120280u;
label_120280:
    // 0x120280: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x120280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x120284: 0x15040013  bne         $t0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x120284u;
    {
        const bool branch_taken_0x120284 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x120288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120284u;
        // 0x120288: 0x2cc10041  sltiu       $at, $a2, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120284) {
            ctx->pc = 0x1202D4u;
            goto label_1202d4;
        }
    }
    ctx->pc = 0x12028Cu;
    // 0x12028c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12028Cu;
    {
        const bool branch_taken_0x12028c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12028c) {
            ctx->pc = 0x1202A8u;
            goto label_1202a8;
        }
    }
    ctx->pc = 0x120294u;
    // 0x120294: 0x92850036  lbu         $a1, 0x36($s4)
    ctx->pc = 0x120294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x120298: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x120298u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x12029c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x12029cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1202a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1202a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1202a4: 0xa2830036  sb          $v1, 0x36($s4)
    ctx->pc = 0x1202a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 54), (uint8_t)GPR_U32(ctx, 3));
label_1202a8:
    // 0x1202a8: 0x92850036  lbu         $a1, 0x36($s4)
    ctx->pc = 0x1202a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x1202ac: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x1202acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1202b0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1202b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1202b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1202B4u;
    {
        const bool branch_taken_0x1202b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1202b4) {
            ctx->pc = 0x1202D4u;
            goto label_1202d4;
        }
    }
    ctx->pc = 0x1202BCu;
    // 0x1202bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1202bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1202c0: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1202c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1202c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1202c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1202c8: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x1202c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1202cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1202ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1202d0: 0xa2830036  sb          $v1, 0x36($s4)
    ctx->pc = 0x1202d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 54), (uint8_t)GPR_U32(ctx, 3));
label_1202d4:
    // 0x1202d4: 0x96830054  lhu         $v1, 0x54($s4)
    ctx->pc = 0x1202d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1202d8: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x1202d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1202dc: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x1202dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x1202e0: 0x30c40fff  andi        $a0, $a2, 0xFFF
    ctx->pc = 0x1202e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x1202e4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1202e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1202e8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1202e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1202ec: 0xa6830054  sh          $v1, 0x54($s4)
    ctx->pc = 0x1202ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x1202f0: 0x96830050  lhu         $v1, 0x50($s4)
    ctx->pc = 0x1202f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1202f4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1202f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1202f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1202f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1202fc: 0xa6830050  sh          $v1, 0x50($s4)
    ctx->pc = 0x1202fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x120300: 0x8e910084  lw          $s1, 0x84($s4)
    ctx->pc = 0x120300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x120304: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
    ctx->pc = 0x120304u;
    {
        const bool branch_taken_0x120304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120304) {
            ctx->pc = 0x1204E4u;
            goto label_1204e4;
        }
    }
    ctx->pc = 0x12030Cu;
    // 0x12030c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x12030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x120310: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x120314: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x120318: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x120318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12031c: 0x28482  srl         $s0, $v0, 18
    ctx->pc = 0x12031cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
    // 0x120320: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x120320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x120324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x120324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x120328: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x120328u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12032c: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x12032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x120330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120334: 0xc040128  jal         func_1004A0
    ctx->pc = 0x120334u;
    SET_GPR_U32(ctx, 31, 0x12033Cu);
    ctx->pc = 0x120338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120334u;
    // 0x120338: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x120334u, 0x12033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12033Cu;
label_12033c:
    // 0x12033c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x12033cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x120340: 0x10082b  sltu        $at, $zero, $s0
    ctx->pc = 0x120340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x120344: 0x8e980080  lw          $t8, 0x80($s4)
    ctx->pc = 0x120344u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x120348: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x120348u;
    {
        const bool branch_taken_0x120348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120348u;
        // 0x12034c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120348) {
            ctx->pc = 0x1204B8u;
            goto label_1204b8;
        }
    }
    ctx->pc = 0x120350u;
    // 0x120350: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x120350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120354: 0x11b102  srl         $s6, $s1, 4
    ctx->pc = 0x120354u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x120358: 0x3c1e5000  lui         $fp, 0x5000
    ctx->pc = 0x120358u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)20480 << 16));
    // 0x12035c: 0x3c0e0021  lui         $t6, 0x21
    ctx->pc = 0x12035cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)33 << 16));
    // 0x120360: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x120360u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120364: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x120364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x120368: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x120368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x12036c: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x12036cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x120370: 0x37cb0001  ori         $t3, $fp, 0x1
    ctx->pc = 0x120370u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x120374: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x120374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120378: 0x3c081100  lui         $t0, 0x1100
    ctx->pc = 0x120378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4352 << 16));
    // 0x12037c: 0x25ce0b20  addiu       $t6, $t6, 0xB20
    ctx->pc = 0x12037cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2848));
    // 0x120380: 0x37ca4000  ori         $t2, $fp, 0x4000
    ctx->pc = 0x120380u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16384);
label_120384:
    // 0x120384: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x120384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x120388: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x120388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x12038c: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x12038cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x120390: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x120390u;
    {
        const bool branch_taken_0x120390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x120394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120390u;
        // 0x120394: 0x3151821  addu        $v1, $t8, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120390) {
            ctx->pc = 0x120400u;
            goto label_120400;
        }
    }
    ctx->pc = 0x120398u;
    // 0x120398: 0x26d6c000  addiu       $s6, $s6, -0x4000
    ctx->pc = 0x120398u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950912));
    // 0x12039c: 0xa06f0003  sb          $t7, 0x3($v1)
    ctx->pc = 0x12039cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x1203a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1203a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1203a4: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x1203a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x1203a8: 0xa46d0000  sh          $t5, 0x0($v1)
    ctx->pc = 0x1203a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1203ac: 0xac6c0008  sw          $t4, 0x8($v1)
    ctx->pc = 0x1203acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 12));
    // 0x1203b0: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x1203b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x1203b4: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x1203b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x1203b8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1203b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1203bc: 0xa06f0013  sb          $t7, 0x13($v1)
    ctx->pc = 0x1203bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 15));
    // 0x1203c0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1203c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1203c4: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x1203c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1203c8: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x1203c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x1203cc: 0x3c04fffc  lui         $a0, 0xFFFC
    ctx->pc = 0x1203ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65532 << 16));
    // 0x1203d0: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1203d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1203d4: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x1203d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1203d8: 0xa4640010  sh          $a0, 0x10($v1)
    ctx->pc = 0x1203d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x1203dc: 0xac6c0018  sw          $t4, 0x18($v1)
    ctx->pc = 0x1203dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 12));
    // 0x1203e0: 0xac6a001c  sw          $t2, 0x1C($v1)
    ctx->pc = 0x1203e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 10));
    // 0x1203e4: 0xa0690023  sb          $t1, 0x23($v1)
    ctx->pc = 0x1203e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 35), (uint8_t)GPR_U32(ctx, 9));
    // 0x1203e8: 0xa0600022  sb          $zero, 0x22($v1)
    ctx->pc = 0x1203e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x1203ec: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1203ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1203f0: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x1203f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1203f4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1203f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1203f8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1203F8u;
    {
        const bool branch_taken_0x1203f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1203FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203F8u;
        // 0x1203fc: 0xac68002c  sw          $t0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203f8) {
            ctx->pc = 0x1204A4u;
            goto label_1204a4;
        }
    }
    ctx->pc = 0x120400u;
label_120400:
    // 0x120400: 0x96870070  lhu         $a3, 0x70($s4)
    ctx->pc = 0x120400u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x120404: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x120404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x120408: 0x32c67fff  andi        $a2, $s6, 0x7FFF
    ctx->pc = 0x120408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32767);
    // 0x12040c: 0x315b821  addu        $s7, $t8, $s5
    ctx->pc = 0x12040cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x120410: 0x2de2025  or          $a0, $s6, $fp
    ctx->pc = 0x120410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 30));
    // 0x120414: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x120414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x120418: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x120418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x12041c: 0xa6830070  sh          $v1, 0x70($s4)
    ctx->pc = 0x12041cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x120420: 0x92860077  lbu         $a2, 0x77($s4)
    ctx->pc = 0x120420u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 119)));
    // 0x120424: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x120424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x120428: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x120428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12042c: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x12042cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x120430: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x120430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x120434: 0xa2830077  sb          $v1, 0x77($s4)
    ctx->pc = 0x120434u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x120438: 0x92860071  lbu         $a2, 0x71($s4)
    ctx->pc = 0x120438u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 113)));
    // 0x12043c: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x12043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x120440: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x120440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x120444: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x120444u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x120448: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x120448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12044c: 0xa2830071  sb          $v1, 0x71($s4)
    ctx->pc = 0x12044cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x120450: 0xa2ef0003  sb          $t7, 0x3($s7)
    ctx->pc = 0x120450u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x120454: 0xa2e00002  sb          $zero, 0x2($s7)
    ctx->pc = 0x120454u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x120458: 0xaee50004  sw          $a1, 0x4($s7)
    ctx->pc = 0x120458u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 5));
    // 0x12045c: 0xa6ed0000  sh          $t5, 0x0($s7)
    ctx->pc = 0x12045cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x120460: 0xaeec0008  sw          $t4, 0x8($s7)
    ctx->pc = 0x120460u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 12));
    // 0x120464: 0xaeeb000c  sw          $t3, 0xC($s7)
    ctx->pc = 0x120464u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 11));
    // 0x120468: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x120468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x12046c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x12046cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x120470: 0xa2ef0013  sb          $t7, 0x13($s7)
    ctx->pc = 0x120470u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 19), (uint8_t)GPR_U32(ctx, 15));
    // 0x120474: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x120474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x120478: 0xa2e00012  sb          $zero, 0x12($s7)
    ctx->pc = 0x120478u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x12047c: 0xaee30014  sw          $v1, 0x14($s7)
    ctx->pc = 0x12047cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 3));
    // 0x120480: 0xa6f60010  sh          $s6, 0x10($s7)
    ctx->pc = 0x120480u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 16), (uint16_t)GPR_U32(ctx, 22));
    // 0x120484: 0xaeec0018  sw          $t4, 0x18($s7)
    ctx->pc = 0x120484u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 12));
    // 0x120488: 0xaee4001c  sw          $a0, 0x1C($s7)
    ctx->pc = 0x120488u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 4));
    // 0x12048c: 0xa2e90023  sb          $t1, 0x23($s7)
    ctx->pc = 0x12048cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 35), (uint8_t)GPR_U32(ctx, 9));
    // 0x120490: 0xa2e00022  sb          $zero, 0x22($s7)
    ctx->pc = 0x120490u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x120494: 0xaee00024  sw          $zero, 0x24($s7)
    ctx->pc = 0x120494u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 36), GPR_U32(ctx, 0));
    // 0x120498: 0xa6e00020  sh          $zero, 0x20($s7)
    ctx->pc = 0x120498u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x12049c: 0xaee00028  sw          $zero, 0x28($s7)
    ctx->pc = 0x12049cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 0));
    // 0x1204a0: 0xaee8002c  sw          $t0, 0x2C($s7)
    ctx->pc = 0x1204a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 8));
label_1204a4:
    // 0x1204a4: 0x0  nop
    ctx->pc = 0x1204a4u;
    // NOP
    // 0x1204a8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1204a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1204ac: 0x330182b  sltu        $v1, $t9, $s0
    ctx->pc = 0x1204acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1204b0: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1204B0u;
    {
        const bool branch_taken_0x1204b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1204B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204B0u;
        // 0x1204b4: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204b0) {
            ctx->pc = 0x120384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120384;
        }
    }
    ctx->pc = 0x1204B8u;
label_1204b8:
    // 0x1204b8: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x1204b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1204bc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1204bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1204c0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1204c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1204c4: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x1204c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x1204c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1204c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1204cc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1204ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1204d0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1204d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1204d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1204d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1204d8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1204d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1204dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1204dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1204e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1204e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1204e4:
    // 0x1204e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1204e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1204e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1204e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1204ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1204ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1204f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1204f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1204f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1204f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1204f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1204f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1204fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1204fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x120500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12050c: 0x3e00008  jr          $ra
    ctx->pc = 0x12050Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12050Cu;
        // 0x120510: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12050Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120514u;
}
