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

// Function: FUN_00206140
// Address: 0x206140 - 0x20682c
void FUN_00206140_0x206140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206140_0x206140");
#endif

    ctx->pc = 0x206140u;

    // 0x206140: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x206140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206144: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x206144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206148: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x206148u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x20614c: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x20614cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206150: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x206150u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x206154: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x206154u;
    {
        const bool branch_taken_0x206154 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x206158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206154u;
        // 0x206158: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206154) {
            ctx->pc = 0x2061B0u;
            goto label_2061b0;
        }
    }
    ctx->pc = 0x20615Cu;
    // 0x20615c: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x20615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x206160: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x206164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206168: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20616c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x20616cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x206170: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x206170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x206174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206178: 0x41823  negu        $v1, $a0
    ctx->pc = 0x206178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x20617c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206180: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x206180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x206184: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x206184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x206188: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x206188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x20618c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x20618cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206190: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x206190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x206194: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206198: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x206198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20619c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x20619cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2061a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2061a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2061a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2061a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2061a8: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x2061a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2061ac: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2061acu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_2061b0:
    // 0x2061b0: 0x9203f  dsra32      $a0, $t1, 0
    ctx->pc = 0x2061b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2061b4: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2061B4u;
    {
        const bool branch_taken_0x2061b4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2061b4) {
            ctx->pc = 0x20620Cu;
            goto label_20620c;
        }
    }
    ctx->pc = 0x2061BCu;
    // 0x2061bc: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2061bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2061c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2061c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2061c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2061c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2061c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2061c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2061cc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2061ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2061d0: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2061d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2061d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2061d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2061d8: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2061d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2061dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2061dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2061e0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2061e4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2061e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2061e8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2061e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2061ec: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x2061ecu;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x2061f0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2061f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2061f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2061f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2061f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2061f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2061fc: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x2061fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x206200: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x206200u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206204: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206208: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x206208u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_20620c:
    // 0x20620c: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x20620cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x206210: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x206210u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x206214: 0x9283f  dsra32      $a1, $t1, 0
    ctx->pc = 0x206214u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x206218: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x206218u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x20621c: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x20621cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x206220: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x206220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x206224: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x206224u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x206228: 0x14a000f2  bnez        $a1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x206228u;
    {
        const bool branch_taken_0x206228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206228u;
        // 0x20622c: 0x145102b  sltu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206228) {
            ctx->pc = 0x2065F4u;
            goto label_2065f4;
        }
    }
    ctx->pc = 0x206230u;
    // 0x206230: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x206230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206234: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x206234u;
    {
        const bool branch_taken_0x206234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206234u;
        // 0x206238: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206234) {
            ctx->pc = 0x206384u;
            goto label_206384;
        }
    }
    ctx->pc = 0x20623Cu;
    // 0x20623c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x20623cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206240: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206240u;
    {
        const bool branch_taken_0x206240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206240u;
        // 0x206244: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206240) {
            ctx->pc = 0x206258u;
            goto label_206258;
        }
    }
    ctx->pc = 0x206248u;
    // 0x206248: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x206248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20624c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206250u;
    {
        const bool branch_taken_0x206250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206250u;
        // 0x206254: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206250) {
            ctx->pc = 0x206270u;
            goto label_206270;
        }
    }
    ctx->pc = 0x206258u;
label_206258:
    // 0x206258: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x206258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20625c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x206260: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x206260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x206264: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x206264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206268: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x206268u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x20626c: 0x0  nop
    ctx->pc = 0x20626cu;
    // NOP
label_206270:
    // 0x206270: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206274: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x206274u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x206278: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x206278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x20627c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x20627cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206280: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206284: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206288: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20628c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x20628cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206290: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x206290u;
    {
        const bool branch_taken_0x206290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x206294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206290u;
        // 0x206294: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206290) {
            ctx->pc = 0x2062ACu;
            goto label_2062ac;
        }
    }
    ctx->pc = 0x206298u;
    // 0x206298: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x206298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x20629c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x20629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2062a0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2062a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2062a4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2062a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2062a8: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2062a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_2062ac:
    // 0x2062ac: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2062acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2062b0: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x2062b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2062b4: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x2062b4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2062b8: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2062b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2062bc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2062BCu;
    {
        const bool branch_taken_0x2062bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062bc) {
            ctx->pc = 0x2062C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2062BCu;
            // 0x2062c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2062C4u;
            goto label_2062c4;
        }
    }
    ctx->pc = 0x2062C4u;
label_2062c4:
    // 0x2062c4: 0x1012  mflo        $v0
    ctx->pc = 0x2062c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2062c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2062c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2062cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2062ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2062d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2062d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2062d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2062d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2062d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2062dc: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x2062dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2062e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2062e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2062e4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2062e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2062e8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2062E8u;
    {
        const bool branch_taken_0x2062e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062e8) {
            ctx->pc = 0x2062ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2062E8u;
            // 0x2062ec: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20631Cu;
            goto label_20631c;
        }
    }
    ctx->pc = 0x2062F0u;
    // 0x2062f0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2062f4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2062f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2062f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2062F8u;
    {
        const bool branch_taken_0x2062f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2062FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062F8u;
        // 0x2062fc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062f8) {
            ctx->pc = 0x206318u;
            goto label_206318;
        }
    }
    ctx->pc = 0x206300u;
    // 0x206300: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206304: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206304u;
    {
        const bool branch_taken_0x206304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206304) {
            ctx->pc = 0x206308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206304u;
            // 0x206308: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20631Cu;
            goto label_20631c;
        }
    }
    ctx->pc = 0x20630Cu;
    // 0x20630c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20630cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x206310: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206314: 0x0  nop
    ctx->pc = 0x206314u;
    // NOP
label_206318:
    // 0x206318: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20631c:
    // 0x20631c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20631Cu;
    {
        const bool branch_taken_0x20631c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20631c) {
            ctx->pc = 0x206320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20631Cu;
            // 0x206320: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206324u;
            goto label_206324;
        }
    }
    ctx->pc = 0x206324u;
label_206324:
    // 0x206324: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x206324u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206328: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x206328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x20632c: 0x1012  mflo        $v0
    ctx->pc = 0x20632cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206330: 0x1810  mfhi        $v1
    ctx->pc = 0x206330u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206338: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20633c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20633cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206340: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206344: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x206344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206348: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20634c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20634cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206350u;
    {
        const bool branch_taken_0x206350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206350u;
        // 0x206354: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206350) {
            ctx->pc = 0x206370u;
            goto label_206370;
        }
    }
    ctx->pc = 0x206358u;
    // 0x206358: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20635c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20635Cu;
    {
        const bool branch_taken_0x20635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20635Cu;
        // 0x206360: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20635c) {
            ctx->pc = 0x206370u;
            goto label_206370;
        }
    }
    ctx->pc = 0x206364u;
    // 0x206364: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206368: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206368u;
    {
        const bool branch_taken_0x206368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206368) {
            ctx->pc = 0x20636Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206368u;
            // 0x20636c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206370u;
            goto label_206370;
        }
    }
    ctx->pc = 0x206370u;
label_206370:
    // 0x206370: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x206370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x206374: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x206374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206378: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206378u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20637c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x20637Cu;
    {
        const bool branch_taken_0x20637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20637Cu;
        // 0x206380: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20637c) {
            ctx->pc = 0x2067B8u;
            goto label_2067b8;
        }
    }
    ctx->pc = 0x206384u;
label_206384:
    // 0x206384: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x206384u;
    {
        const bool branch_taken_0x206384 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x206388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206384u;
        // 0x206388: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206384) {
            ctx->pc = 0x2063B0u;
            goto label_2063b0;
        }
    }
    ctx->pc = 0x20638Cu;
    // 0x20638c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206390: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206390u;
    {
        const bool branch_taken_0x206390 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x206390) {
            ctx->pc = 0x206394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206390u;
            // 0x206394: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206398u;
            goto label_206398;
        }
    }
    ctx->pc = 0x206398u;
label_206398:
    // 0x206398: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x206398u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20639c: 0x1012  mflo        $v0
    ctx->pc = 0x20639cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2063a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2063a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2063a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2063a8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2063a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2063ac: 0x0  nop
    ctx->pc = 0x2063acu;
    // NOP
label_2063b0:
    // 0x2063b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2063B0u;
    {
        const bool branch_taken_0x2063b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2063B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063B0u;
        // 0x2063b4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063b0) {
            ctx->pc = 0x2063C8u;
            goto label_2063c8;
        }
    }
    ctx->pc = 0x2063B8u;
    // 0x2063b8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2063b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2063bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2063bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2063c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2063C0u;
    {
        const bool branch_taken_0x2063c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063C0u;
        // 0x2063c4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063c0) {
            ctx->pc = 0x2063E0u;
            goto label_2063e0;
        }
    }
    ctx->pc = 0x2063C8u;
label_2063c8:
    // 0x2063c8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2063cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2063ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2063d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2063d4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2063d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2063d8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2063d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2063dc: 0x0  nop
    ctx->pc = 0x2063dcu;
    // NOP
label_2063e0:
    // 0x2063e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2063e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2063e4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2063e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2063e8: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x2063e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x2063ec: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2063f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2063f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2063f4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2063f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2063f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2063fc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2063fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206400: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x206400u;
    {
        const bool branch_taken_0x206400 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x206404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206400u;
        // 0x206404: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206400) {
            ctx->pc = 0x20641Cu;
            goto label_20641c;
        }
    }
    ctx->pc = 0x206408u;
    // 0x206408: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x206408u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x20640c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x20640cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206410: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x206410u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206414: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x206414u;
    {
        const bool branch_taken_0x206414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206414u;
        // 0x206418: 0x310bffff  andi        $t3, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206414) {
            ctx->pc = 0x206520u;
            goto label_206520;
        }
    }
    ctx->pc = 0x20641Cu;
label_20641c:
    // 0x20641c: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x20641cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x206420: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x206420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x206424: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x206424u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x206428: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x206428u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x20642c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x20642cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x206430: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x206430u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x206434: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x206434u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206438: 0xe9001b  divu        $zero, $a3, $t1
    ctx->pc = 0x206438u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x20643c: 0x310bffff  andi        $t3, $t0, 0xFFFF
    ctx->pc = 0x20643cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x206440: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x206440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206444: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x206448: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206448u;
    {
        const bool branch_taken_0x206448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206448) {
            ctx->pc = 0x20644Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206448u;
            // 0x20644c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206450u;
            goto label_206450;
        }
    }
    ctx->pc = 0x206450u;
label_206450:
    // 0x206450: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x206450u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206454: 0x1012  mflo        $v0
    ctx->pc = 0x206454u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206458: 0x1810  mfhi        $v1
    ctx->pc = 0x206458u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20645c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20645cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206460: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206464: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206468: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20646c: 0xeb3018  mult        $a2, $a3, $t3
    ctx->pc = 0x20646cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206470: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206474: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206478: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x206478u;
    {
        const bool branch_taken_0x206478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206478) {
            ctx->pc = 0x20647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206478u;
            // 0x20647c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064ACu;
            goto label_2064ac;
        }
    }
    ctx->pc = 0x206480u;
    // 0x206480: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206484: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206488: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206488u;
    {
        const bool branch_taken_0x206488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206488u;
        // 0x20648c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206488) {
            ctx->pc = 0x2064A8u;
            goto label_2064a8;
        }
    }
    ctx->pc = 0x206490u;
    // 0x206490: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206494: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206494u;
    {
        const bool branch_taken_0x206494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206494) {
            ctx->pc = 0x206498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206494u;
            // 0x206498: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064ACu;
            goto label_2064ac;
        }
    }
    ctx->pc = 0x20649Cu;
    // 0x20649c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20649cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2064a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2064a4: 0x0  nop
    ctx->pc = 0x2064a4u;
    // NOP
label_2064a8:
    // 0x2064a8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2064a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2064ac:
    // 0x2064ac: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2064ACu;
    {
        const bool branch_taken_0x2064ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064ac) {
            ctx->pc = 0x2064B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064ACu;
            // 0x2064b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064B4u;
            goto label_2064b4;
        }
    }
    ctx->pc = 0x2064B4u;
label_2064b4:
    // 0x2064b4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2064b4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2064b8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2064b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2064bc: 0x1012  mflo        $v0
    ctx->pc = 0x2064bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2064c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2064c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2064c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2064c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2064c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2064cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2064ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2064d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2064d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2064d4: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2064d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2064d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2064d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2064dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2064dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2064e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2064E0u;
    {
        const bool branch_taken_0x2064e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064E0u;
        // 0x2064e4: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064e0) {
            ctx->pc = 0x206510u;
            goto label_206510;
        }
    }
    ctx->pc = 0x2064E8u;
    // 0x2064e8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2064e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2064ec: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2064ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2064f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2064F0u;
    {
        const bool branch_taken_0x2064f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2064F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064F0u;
        // 0x2064f4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064f0) {
            ctx->pc = 0x20650Cu;
            goto label_20650c;
        }
    }
    ctx->pc = 0x2064F8u;
    // 0x2064f8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2064f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2064fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2064FCu;
    {
        const bool branch_taken_0x2064fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064FCu;
        // 0x206500: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064fc) {
            ctx->pc = 0x206510u;
            goto label_206510;
        }
    }
    ctx->pc = 0x206504u;
    // 0x206504: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x206504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x206508: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_20650c:
    // 0x20650c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x20650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_206510:
    // 0x206510: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x206514: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x206514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206518: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20651c: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x20651cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_206520:
    // 0x206520: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x206520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206524: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x206524u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x206528: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x206528u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x20652c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x20652cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206530: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206530u;
    {
        const bool branch_taken_0x206530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206530) {
            ctx->pc = 0x206534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206530u;
            // 0x206534: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206538u;
            goto label_206538;
        }
    }
    ctx->pc = 0x206538u;
label_206538:
    // 0x206538: 0x1012  mflo        $v0
    ctx->pc = 0x206538u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20653c: 0x1810  mfhi        $v1
    ctx->pc = 0x20653cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206540: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x206540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206544: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206548: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x20654c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20654cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206550: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x206550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206554: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206558: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20655c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20655Cu;
    {
        const bool branch_taken_0x20655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20655c) {
            ctx->pc = 0x206560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20655Cu;
            // 0x206560: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20658Cu;
            goto label_20658c;
        }
    }
    ctx->pc = 0x206564u;
    // 0x206564: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206568: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20656c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20656Cu;
    {
        const bool branch_taken_0x20656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20656Cu;
        // 0x206570: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20656c) {
            ctx->pc = 0x206588u;
            goto label_206588;
        }
    }
    ctx->pc = 0x206574u;
    // 0x206574: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206578: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x206578u;
    {
        const bool branch_taken_0x206578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206578) {
            ctx->pc = 0x20657Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206578u;
            // 0x20657c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20658Cu;
            goto label_20658c;
        }
    }
    ctx->pc = 0x206580u;
    // 0x206580: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x206580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x206584: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_206588:
    // 0x206588: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x206588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20658c:
    // 0x20658c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20658Cu;
    {
        const bool branch_taken_0x20658c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20658c) {
            ctx->pc = 0x206590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20658Cu;
            // 0x206590: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206594u;
            goto label_206594;
        }
    }
    ctx->pc = 0x206594u;
label_206594:
    // 0x206594: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x206594u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206598: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x206598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x20659c: 0x1012  mflo        $v0
    ctx->pc = 0x20659cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2065a0: 0x1810  mfhi        $v1
    ctx->pc = 0x2065a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2065a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2065a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2065a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2065ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2065acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2065b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2065b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2065b4: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x2065b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2065b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2065b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2065bc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2065bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2065c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2065C0u;
    {
        const bool branch_taken_0x2065c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065C0u;
        // 0x2065c4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065c0) {
            ctx->pc = 0x2065E0u;
            goto label_2065e0;
        }
    }
    ctx->pc = 0x2065C8u;
    // 0x2065c8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2065c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2065cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2065CCu;
    {
        const bool branch_taken_0x2065cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2065D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065CCu;
        // 0x2065d0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065cc) {
            ctx->pc = 0x2065E0u;
            goto label_2065e0;
        }
    }
    ctx->pc = 0x2065D4u;
    // 0x2065d4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2065d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2065d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2065D8u;
    {
        const bool branch_taken_0x2065d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2065d8) {
            ctx->pc = 0x2065DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2065D8u;
            // 0x2065dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2065E0u;
            goto label_2065e0;
        }
    }
    ctx->pc = 0x2065E0u;
label_2065e0:
    // 0x2065e0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2065e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2065e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2065e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2065e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2065e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2065ec: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2065ECu;
    {
        const bool branch_taken_0x2065ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065ECu;
        // 0x2065f0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065ec) {
            ctx->pc = 0x2067C0u;
            goto label_2067c0;
        }
    }
    ctx->pc = 0x2065F4u;
label_2065f4:
    // 0x2065f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2065F4u;
    {
        const bool branch_taken_0x2065f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065F4u;
        // 0x2065f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065f4) {
            ctx->pc = 0x206604u;
            goto label_206604;
        }
    }
    ctx->pc = 0x2065FCu;
    // 0x2065fc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2065FCu;
    {
        const bool branch_taken_0x2065fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065FCu;
        // 0x206600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065fc) {
            ctx->pc = 0x2067B8u;
            goto label_2067b8;
        }
    }
    ctx->pc = 0x206604u;
label_206604:
    // 0x206604: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x206604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x206608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206608u;
    {
        const bool branch_taken_0x206608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206608u;
        // 0x20660c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206608) {
            ctx->pc = 0x206620u;
            goto label_206620;
        }
    }
    ctx->pc = 0x206610u;
    // 0x206610: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x206610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x206614: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206618: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206618u;
    {
        const bool branch_taken_0x206618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206618u;
        // 0x20661c: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206618) {
            ctx->pc = 0x206638u;
            goto label_206638;
        }
    }
    ctx->pc = 0x206620u;
label_206620:
    // 0x206620: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x206620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x206624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x206624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x206628: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20662c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20662cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x206630: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x206630u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x206634: 0x0  nop
    ctx->pc = 0x206634u;
    // NOP
label_206638:
    // 0x206638: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20663c: 0xc52006  srlv        $a0, $a1, $a2
    ctx->pc = 0x20663cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x206640: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x206640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x206644: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x206644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206648: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20664c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20664cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206650: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x206654: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206658: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206658u;
    {
        const bool branch_taken_0x206658 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x206658) {
            ctx->pc = 0x20665Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206658u;
            // 0x20665c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206680u;
            goto label_206680;
        }
    }
    ctx->pc = 0x206660u;
    // 0x206660: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x206660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x206664: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x206664u;
    {
        const bool branch_taken_0x206664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206664u;
        // 0x206668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206664) {
            ctx->pc = 0x2067B8u;
            goto label_2067b8;
        }
    }
    ctx->pc = 0x20666Cu;
    // 0x20666c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x20666cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206670: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x206670u;
    {
        const bool branch_taken_0x206670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206670u;
        // 0x206674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206670) {
            ctx->pc = 0x2067B8u;
            goto label_2067b8;
        }
    }
    ctx->pc = 0x206678u;
    // 0x206678: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x206678u;
    {
        const bool branch_taken_0x206678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206678u;
        // 0x20667c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206678) {
            ctx->pc = 0x2067B8u;
            goto label_2067b8;
        }
    }
    ctx->pc = 0x206680u;
label_206680:
    // 0x206680: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x206684: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x206684u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x206688: 0xe81806  srlv        $v1, $t0, $a3
    ctx->pc = 0x206688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x20668c: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x20668cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x206690: 0xca1004  sllv        $v0, $t2, $a2
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x206694: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x206694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x206698: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x206698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x20669c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x20669cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2066a0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2066a4: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2066a8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2066a8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2066ac: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x2066acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2066b0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2066b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2066B4u;
    {
        const bool branch_taken_0x2066b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066b4) {
            ctx->pc = 0x2066B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066B4u;
            // 0x2066b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2066BCu;
            goto label_2066bc;
        }
    }
    ctx->pc = 0x2066BCu;
label_2066bc:
    // 0x2066bc: 0x1012  mflo        $v0
    ctx->pc = 0x2066bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2066c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2066c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2066c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2066c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2066c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2066cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2066ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2066d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2066d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2066d4: 0x12b3818  mult        $a3, $t1, $t3
    ctx->pc = 0x2066d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2066d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2066d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2066dc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2066dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2066e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2066E0u;
    {
        const bool branch_taken_0x2066e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066e0) {
            ctx->pc = 0x2066E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066E0u;
            // 0x2066e4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206714u;
            goto label_206714;
        }
    }
    ctx->pc = 0x2066E8u;
    // 0x2066e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2066e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2066ec: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2066ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2066f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2066F0u;
    {
        const bool branch_taken_0x2066f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2066F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066F0u;
        // 0x2066f4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066f0) {
            ctx->pc = 0x206710u;
            goto label_206710;
        }
    }
    ctx->pc = 0x2066F8u;
    // 0x2066f8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2066f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2066fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2066FCu;
    {
        const bool branch_taken_0x2066fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066fc) {
            ctx->pc = 0x206700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066FCu;
            // 0x206700: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206714u;
            goto label_206714;
        }
    }
    ctx->pc = 0x206704u;
    // 0x206704: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x206708: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20670c: 0x0  nop
    ctx->pc = 0x20670cu;
    // NOP
label_206710:
    // 0x206710: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x206710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_206714:
    // 0x206714: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206714u;
    {
        const bool branch_taken_0x206714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x206714) {
            ctx->pc = 0x206718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206714u;
            // 0x206718: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20671Cu;
            goto label_20671c;
        }
    }
    ctx->pc = 0x20671Cu;
label_20671c:
    // 0x20671c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x20671cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206720: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x206720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x206724: 0x1012  mflo        $v0
    ctx->pc = 0x206724u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206728: 0x1810  mfhi        $v1
    ctx->pc = 0x206728u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20672c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20672cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206730: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206734: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206738: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206738u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20673c: 0xcb3818  mult        $a3, $a2, $t3
    ctx->pc = 0x20673cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x206740: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206744: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206748: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x206748u;
    {
        const bool branch_taken_0x206748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206748u;
        // 0x20674c: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206748) {
            ctx->pc = 0x206778u;
            goto label_206778;
        }
    }
    ctx->pc = 0x206750u;
    // 0x206750: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206754: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x206754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x206758: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206758u;
    {
        const bool branch_taken_0x206758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206758u;
        // 0x20675c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206758) {
            ctx->pc = 0x206774u;
            goto label_206774;
        }
    }
    ctx->pc = 0x206760u;
    // 0x206760: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206764u;
    {
        const bool branch_taken_0x206764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206764u;
        // 0x206768: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206764) {
            ctx->pc = 0x206778u;
            goto label_206778;
        }
    }
    ctx->pc = 0x20676Cu;
    // 0x20676c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20676cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206770: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x206770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_206774:
    // 0x206774: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x206774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_206778:
    // 0x206778: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x206778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20677c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206780: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206784: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x206784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x206788: 0xa80019  multu       $a1, $t0
    ctx->pc = 0x206788u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20678c: 0x3010  mfhi        $a2
    ctx->pc = 0x20678cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x206790: 0x2012  mflo        $a0
    ctx->pc = 0x206790u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x206794: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206798: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x206798u;
    {
        const bool branch_taken_0x206798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206798) {
            ctx->pc = 0x20679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206798u;
            // 0x20679c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2067B8u;
            goto label_2067b8;
        }
    }
    ctx->pc = 0x2067A0u;
    // 0x2067a0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2067A0u;
    {
        const bool branch_taken_0x2067a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2067A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067A0u;
        // 0x2067a4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067a0) {
            ctx->pc = 0x2067C0u;
            goto label_2067c0;
        }
    }
    ctx->pc = 0x2067A8u;
    // 0x2067a8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2067a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2067ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2067ACu;
    {
        const bool branch_taken_0x2067ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067ACu;
        // 0x2067b0: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067ac) {
            ctx->pc = 0x2067C4u;
            goto label_2067c4;
        }
    }
    ctx->pc = 0x2067B4u;
    // 0x2067b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2067b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2067b8:
    // 0x2067b8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2067b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067bc: 0x0  nop
    ctx->pc = 0x2067bcu;
    // NOP
label_2067c0:
    // 0x2067c0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2067c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_2067c4:
    // 0x2067c4: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x2067c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2067c8: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x2067c8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2067cc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2067ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2067d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2067d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2067d4: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x2067D4u;
    {
        const bool branch_taken_0x2067d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067D4u;
        // 0x2067d8: 0x3032025  or          $a0, $t8, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067d4) {
            ctx->pc = 0x206824u;
            goto label_206824;
        }
    }
    ctx->pc = 0x2067DCu;
    // 0x2067dc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2067dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2067e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2067e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2067e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2067e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2067e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2067e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2067ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2067ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2067f0: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x2067f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x2067f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2067f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2067f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2067f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2067fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2067fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206800: 0x42023  negu        $a0, $a0
    ctx->pc = 0x206800u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x206804: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x206804u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x206808: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x206808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x20680c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20680cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206810: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x206810u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x206814: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x206814u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x206818: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20681c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20681cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x206820: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x206820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_206824:
    // 0x206824: 0x3e00008  jr          $ra
    ctx->pc = 0x206824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206824u;
        // 0x206828: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20682Cu;
}
