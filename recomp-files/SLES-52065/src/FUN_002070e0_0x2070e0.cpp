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

// Function: FUN_002070e0
// Address: 0x2070e0 - 0x2076a4
void FUN_002070e0_0x2070e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002070e0_0x2070e0");
#endif

    ctx->pc = 0x2070e0u;

    // 0x2070e0: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x2070e0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2070e4: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x2070e4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2070e8: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x2070e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2070ec: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2070ecu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2070f0: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x2070f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2070f4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2070f4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2070f8: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2070F8u;
    {
        const bool branch_taken_0x2070f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F8u;
        // 0x2070fc: 0x168102b  sltu        $v0, $t3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070f8) {
            ctx->pc = 0x2074C4u;
            goto label_2074c4;
        }
    }
    ctx->pc = 0x207100u;
    // 0x207100: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x207100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207104: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x207104u;
    {
        const bool branch_taken_0x207104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207104u;
        // 0x207108: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207104) {
            ctx->pc = 0x207254u;
            goto label_207254;
        }
    }
    ctx->pc = 0x20710Cu;
    // 0x20710c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x20710cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207110: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207110u;
    {
        const bool branch_taken_0x207110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207110u;
        // 0x207114: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207110) {
            ctx->pc = 0x207128u;
            goto label_207128;
        }
    }
    ctx->pc = 0x207118u;
    // 0x207118: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x207118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20711c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x207120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x207120u;
    {
        const bool branch_taken_0x207120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207120u;
        // 0x207124: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207120) {
            ctx->pc = 0x207140u;
            goto label_207140;
        }
    }
    ctx->pc = 0x207128u;
label_207128:
    // 0x207128: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20712c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207130: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x207130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x207134: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x207134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207138: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x207138u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x20713c: 0x0  nop
    ctx->pc = 0x20713cu;
    // NOP
label_207140:
    // 0x207140: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x207144: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x207144u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x207148: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x207148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x20714c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207150: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207154: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x207154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207158: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20715c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x20715cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x207160: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x207160u;
    {
        const bool branch_taken_0x207160 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x207164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207160u;
        // 0x207164: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207160) {
            ctx->pc = 0x20717Cu;
            goto label_20717c;
        }
    }
    ctx->pc = 0x207168u;
    // 0x207168: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x207168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x20716c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x20716cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x207170: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x207170u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x207174: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x207174u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207178: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x207178u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_20717c:
    // 0x20717c: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x20717cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x207180: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x207180u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x207184: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x207184u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x207188: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x20718c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20718Cu;
    {
        const bool branch_taken_0x20718c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20718c) {
            ctx->pc = 0x207190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20718Cu;
            // 0x207190: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207194u;
            goto label_207194;
        }
    }
    ctx->pc = 0x207194u;
label_207194:
    // 0x207194: 0x1012  mflo        $v0
    ctx->pc = 0x207194u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207198: 0x1810  mfhi        $v1
    ctx->pc = 0x207198u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20719c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20719cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2071a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2071a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2071a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2071a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2071a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2071ac: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x2071acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2071b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2071b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2071b4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2071b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2071b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2071B8u;
    {
        const bool branch_taken_0x2071b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071b8) {
            ctx->pc = 0x2071BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071B8u;
            // 0x2071bc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071ECu;
            goto label_2071ec;
        }
    }
    ctx->pc = 0x2071C0u;
    // 0x2071c0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2071c4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2071c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2071c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2071C8u;
    {
        const bool branch_taken_0x2071c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C8u;
        // 0x2071cc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071c8) {
            ctx->pc = 0x2071E8u;
            goto label_2071e8;
        }
    }
    ctx->pc = 0x2071D0u;
    // 0x2071d0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2071d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2071d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2071D4u;
    {
        const bool branch_taken_0x2071d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071d4) {
            ctx->pc = 0x2071D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071D4u;
            // 0x2071d8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071ECu;
            goto label_2071ec;
        }
    }
    ctx->pc = 0x2071DCu;
    // 0x2071dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2071dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2071e0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2071e4: 0x0  nop
    ctx->pc = 0x2071e4u;
    // NOP
label_2071e8:
    // 0x2071e8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2071e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2071ec:
    // 0x2071ec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2071ECu;
    {
        const bool branch_taken_0x2071ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071ec) {
            ctx->pc = 0x2071F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071ECu;
            // 0x2071f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071F4u;
            goto label_2071f4;
        }
    }
    ctx->pc = 0x2071F4u;
label_2071f4:
    // 0x2071f4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2071f4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2071f8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2071f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2071fc: 0x1012  mflo        $v0
    ctx->pc = 0x2071fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207200: 0x1810  mfhi        $v1
    ctx->pc = 0x207200u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207208: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20720c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20720cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207210: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207210u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207214: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x207214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207218: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20721c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20721cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207220: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207220u;
    {
        const bool branch_taken_0x207220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207220u;
        // 0x207224: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207220) {
            ctx->pc = 0x207240u;
            goto label_207240;
        }
    }
    ctx->pc = 0x207228u;
    // 0x207228: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20722c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20722Cu;
    {
        const bool branch_taken_0x20722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20722Cu;
        // 0x207230: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20722c) {
            ctx->pc = 0x207240u;
            goto label_207240;
        }
    }
    ctx->pc = 0x207234u;
    // 0x207234: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207238: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207238u;
    {
        const bool branch_taken_0x207238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207238) {
            ctx->pc = 0x20723Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207238u;
            // 0x20723c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207240u;
            goto label_207240;
        }
    }
    ctx->pc = 0x207240u;
label_207240:
    // 0x207240: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x207240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x207244: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x207244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207248: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20724c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x20724Cu;
    {
        const bool branch_taken_0x20724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20724Cu;
        // 0x207250: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20724c) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x207254u;
label_207254:
    // 0x207254: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x207254u;
    {
        const bool branch_taken_0x207254 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x207258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207254u;
        // 0x207258: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207254) {
            ctx->pc = 0x207280u;
            goto label_207280;
        }
    }
    ctx->pc = 0x20725Cu;
    // 0x20725c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207260: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207260u;
    {
        const bool branch_taken_0x207260 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x207260) {
            ctx->pc = 0x207264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207260u;
            // 0x207264: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207268u;
            goto label_207268;
        }
    }
    ctx->pc = 0x207268u;
label_207268:
    // 0x207268: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x207268u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20726c: 0x1012  mflo        $v0
    ctx->pc = 0x20726cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207270: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x207270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207274: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x207274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x207278: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x207278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20727c: 0x0  nop
    ctx->pc = 0x20727cu;
    // NOP
label_207280:
    // 0x207280: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207280u;
    {
        const bool branch_taken_0x207280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207280u;
        // 0x207284: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207280) {
            ctx->pc = 0x207298u;
            goto label_207298;
        }
    }
    ctx->pc = 0x207288u;
    // 0x207288: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x207288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20728c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x207290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x207290u;
    {
        const bool branch_taken_0x207290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207290u;
        // 0x207294: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207290) {
            ctx->pc = 0x2072B0u;
            goto label_2072b0;
        }
    }
    ctx->pc = 0x207298u;
label_207298:
    // 0x207298: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20729c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2072a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2072a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2072a4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2072a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2072a8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2072a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2072ac: 0x0  nop
    ctx->pc = 0x2072acu;
    // NOP
label_2072b0:
    // 0x2072b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2072b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2072b4: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2072b8: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x2072bc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2072bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2072c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2072c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2072c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2072c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2072cc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2072d0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2072D0u;
    {
        const bool branch_taken_0x2072d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2072D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072D0u;
        // 0x2072d4: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072d0) {
            ctx->pc = 0x2072ECu;
            goto label_2072ec;
        }
    }
    ctx->pc = 0x2072D8u;
    // 0x2072d8: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2072dc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2072dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2072e0: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2072e4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2072E4u;
    {
        const bool branch_taken_0x2072e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072E4u;
        // 0x2072e8: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072e4) {
            ctx->pc = 0x2073F0u;
            goto label_2073f0;
        }
    }
    ctx->pc = 0x2072ECu;
label_2072ec:
    // 0x2072ec: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x2072ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2072f0: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x2072f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x2072f4: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2072f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2072f8: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2072fc: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x207300: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x207300u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207304: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x207308: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x207308u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x20730c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x20730cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x207310: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x207310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207314: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x207314u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x207318: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207318u;
    {
        const bool branch_taken_0x207318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207318) {
            ctx->pc = 0x20731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207318u;
            // 0x20731c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207320u;
            goto label_207320;
        }
    }
    ctx->pc = 0x207320u;
label_207320:
    // 0x207320: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x207320u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207324: 0x1012  mflo        $v0
    ctx->pc = 0x207324u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207328: 0x1810  mfhi        $v1
    ctx->pc = 0x207328u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20732c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20732cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207330: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207334: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207338: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20733c: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x20733cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207340: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207344: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207348: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x207348u;
    {
        const bool branch_taken_0x207348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207348) {
            ctx->pc = 0x20734Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207348u;
            // 0x20734c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20737Cu;
            goto label_20737c;
        }
    }
    ctx->pc = 0x207350u;
    // 0x207350: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207354: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207358: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207358u;
    {
        const bool branch_taken_0x207358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207358u;
        // 0x20735c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207358) {
            ctx->pc = 0x207378u;
            goto label_207378;
        }
    }
    ctx->pc = 0x207360u;
    // 0x207360: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207364: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207364u;
    {
        const bool branch_taken_0x207364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207364) {
            ctx->pc = 0x207368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207364u;
            // 0x207368: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20737Cu;
            goto label_20737c;
        }
    }
    ctx->pc = 0x20736Cu;
    // 0x20736c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20736cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x207370: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207374: 0x0  nop
    ctx->pc = 0x207374u;
    // NOP
label_207378:
    // 0x207378: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x207378u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20737c:
    // 0x20737c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20737Cu;
    {
        const bool branch_taken_0x20737c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20737c) {
            ctx->pc = 0x207380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20737Cu;
            // 0x207380: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207384u;
            goto label_207384;
        }
    }
    ctx->pc = 0x207384u;
label_207384:
    // 0x207384: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x207384u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207388: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x207388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x20738c: 0x1012  mflo        $v0
    ctx->pc = 0x20738cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207390: 0x1810  mfhi        $v1
    ctx->pc = 0x207390u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207398: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20739c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2073a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2073a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2073a4: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2073a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2073a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2073a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2073ac: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2073acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2073b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2073B0u;
    {
        const bool branch_taken_0x2073b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073B0u;
        // 0x2073b4: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073b0) {
            ctx->pc = 0x2073E0u;
            goto label_2073e0;
        }
    }
    ctx->pc = 0x2073B8u;
    // 0x2073b8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2073b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2073bc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2073bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2073c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2073C0u;
    {
        const bool branch_taken_0x2073c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2073C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073C0u;
        // 0x2073c4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073c0) {
            ctx->pc = 0x2073DCu;
            goto label_2073dc;
        }
    }
    ctx->pc = 0x2073C8u;
    // 0x2073c8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2073c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2073cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2073CCu;
    {
        const bool branch_taken_0x2073cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073CCu;
        // 0x2073d0: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073cc) {
            ctx->pc = 0x2073E0u;
            goto label_2073e0;
        }
    }
    ctx->pc = 0x2073D4u;
    // 0x2073d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2073d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2073d8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2073d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2073dc:
    // 0x2073dc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2073dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_2073e0:
    // 0x2073e0: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x2073e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2073e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2073e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2073e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2073e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2073ec: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x2073ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2073f0:
    // 0x2073f0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2073f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073f4: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2073f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2073f8: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x2073f8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x2073fc: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2073fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207400: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207400u;
    {
        const bool branch_taken_0x207400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207400) {
            ctx->pc = 0x207404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207400u;
            // 0x207404: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207408u;
            goto label_207408;
        }
    }
    ctx->pc = 0x207408u;
label_207408:
    // 0x207408: 0x1012  mflo        $v0
    ctx->pc = 0x207408u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20740c: 0x1810  mfhi        $v1
    ctx->pc = 0x20740cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207410: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x207410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207414: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207418: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x20741c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20741cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207420: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x207420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207424: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207428: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20742c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20742Cu;
    {
        const bool branch_taken_0x20742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20742c) {
            ctx->pc = 0x207430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20742Cu;
            // 0x207430: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20745Cu;
            goto label_20745c;
        }
    }
    ctx->pc = 0x207434u;
    // 0x207434: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207438: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20743c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20743Cu;
    {
        const bool branch_taken_0x20743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20743Cu;
        // 0x207440: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20743c) {
            ctx->pc = 0x207458u;
            goto label_207458;
        }
    }
    ctx->pc = 0x207444u;
    // 0x207444: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x207448u;
    {
        const bool branch_taken_0x207448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207448) {
            ctx->pc = 0x20744Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207448u;
            // 0x20744c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20745Cu;
            goto label_20745c;
        }
    }
    ctx->pc = 0x207450u;
    // 0x207450: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x207454: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_207458:
    // 0x207458: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x207458u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20745c:
    // 0x20745c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20745Cu;
    {
        const bool branch_taken_0x20745c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20745c) {
            ctx->pc = 0x207460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20745Cu;
            // 0x207460: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207464u;
            goto label_207464;
        }
    }
    ctx->pc = 0x207464u;
label_207464:
    // 0x207464: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x207464u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207468: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x207468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x20746c: 0x1012  mflo        $v0
    ctx->pc = 0x20746cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207470: 0x1810  mfhi        $v1
    ctx->pc = 0x207470u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207478: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20747c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20747cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207480: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207484: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x207484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207488: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20748c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20748cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207490u;
    {
        const bool branch_taken_0x207490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207490u;
        // 0x207494: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207490) {
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x207498u;
    // 0x207498: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20749c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20749Cu;
    {
        const bool branch_taken_0x20749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20749Cu;
        // 0x2074a0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20749c) {
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x2074A4u;
    // 0x2074a4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2074a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2074a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2074A8u;
    {
        const bool branch_taken_0x2074a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2074a8) {
            ctx->pc = 0x2074ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074A8u;
            // 0x2074ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x2074B0u;
label_2074b0:
    // 0x2074b0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2074b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2074b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2074b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2074b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2074b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2074bc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2074BCu;
    {
        const bool branch_taken_0x2074bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074BCu;
        // 0x2074c0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074bc) {
            ctx->pc = 0x207690u;
            goto label_207690;
        }
    }
    ctx->pc = 0x2074C4u;
label_2074c4:
    // 0x2074c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2074C4u;
    {
        const bool branch_taken_0x2074c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074c4) {
            ctx->pc = 0x2074C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074C4u;
            // 0x2074c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2074D4u;
            goto label_2074d4;
        }
    }
    ctx->pc = 0x2074CCu;
    // 0x2074cc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2074CCu;
    {
        const bool branch_taken_0x2074cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074CCu;
        // 0x2074d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074cc) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x2074D4u;
label_2074d4:
    // 0x2074d4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2074d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2074d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2074D8u;
    {
        const bool branch_taken_0x2074d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074D8u;
        // 0x2074dc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074d8) {
            ctx->pc = 0x2074F0u;
            goto label_2074f0;
        }
    }
    ctx->pc = 0x2074E0u;
    // 0x2074e0: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2074e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2074e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2074e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2074e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2074E8u;
    {
        const bool branch_taken_0x2074e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074E8u;
        // 0x2074ec: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074e8) {
            ctx->pc = 0x207508u;
            goto label_207508;
        }
    }
    ctx->pc = 0x2074F0u;
label_2074f0:
    // 0x2074f0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2074f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2074f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2074f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2074f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2074fc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2074fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207500: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x207500u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x207504: 0x0  nop
    ctx->pc = 0x207504u;
    // NOP
label_207508:
    // 0x207508: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x207508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20750c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x20750cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x207510: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x207510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x207514: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x207514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207518: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20751c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20751cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207520: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207524: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x207524u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x207528: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x207528u;
    {
        const bool branch_taken_0x207528 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x207528) {
            ctx->pc = 0x20752Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207528u;
            // 0x20752c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207550u;
            goto label_207550;
        }
    }
    ctx->pc = 0x207530u;
    // 0x207530: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x207530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x207534: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x207534u;
    {
        const bool branch_taken_0x207534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207534u;
        // 0x207538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207534) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x20753Cu;
    // 0x20753c: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x20753cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207540: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x207540u;
    {
        const bool branch_taken_0x207540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207540u;
        // 0x207544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207540) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x207548u;
    // 0x207548: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x207548u;
    {
        const bool branch_taken_0x207548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207548u;
        // 0x20754c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207548) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x207550u;
label_207550:
    // 0x207550: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x207550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x207554: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x207554u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x207558: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x207558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x20755c: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x20755cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x207560: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x207564: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x207564u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x207568: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x207568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x20756c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x207570: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x207570u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x207574: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x207578: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x207578u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x20757c: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x20757cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x207580: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x207580u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x207584: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207584u;
    {
        const bool branch_taken_0x207584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x207584) {
            ctx->pc = 0x207588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207584u;
            // 0x207588: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20758Cu;
            goto label_20758c;
        }
    }
    ctx->pc = 0x20758Cu;
label_20758c:
    // 0x20758c: 0x1012  mflo        $v0
    ctx->pc = 0x20758cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207590: 0x1810  mfhi        $v1
    ctx->pc = 0x207590u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207594: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x207594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207598: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20759c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2075a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2075a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2075a4: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x2075a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2075a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2075a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2075ac: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2075b0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2075B0u;
    {
        const bool branch_taken_0x2075b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075b0) {
            ctx->pc = 0x2075B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2075B0u;
            // 0x2075b4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2075E4u;
            goto label_2075e4;
        }
    }
    ctx->pc = 0x2075B8u;
    // 0x2075b8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2075bc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2075bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2075c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2075C0u;
    {
        const bool branch_taken_0x2075c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2075C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075C0u;
        // 0x2075c4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075c0) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x2075C8u;
    // 0x2075c8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2075c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2075cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2075CCu;
    {
        const bool branch_taken_0x2075cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075cc) {
            ctx->pc = 0x2075D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2075CCu;
            // 0x2075d0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2075E4u;
            goto label_2075e4;
        }
    }
    ctx->pc = 0x2075D4u;
    // 0x2075d4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2075d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2075d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2075dc: 0x0  nop
    ctx->pc = 0x2075dcu;
    // NOP
label_2075e0:
    // 0x2075e0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2075e4:
    // 0x2075e4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2075E4u;
    {
        const bool branch_taken_0x2075e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075e4) {
            ctx->pc = 0x2075E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2075E4u;
            // 0x2075e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2075ECu;
            goto label_2075ec;
        }
    }
    ctx->pc = 0x2075ECu;
label_2075ec:
    // 0x2075ec: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2075ecu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2075f0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2075f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2075f4: 0x1012  mflo        $v0
    ctx->pc = 0x2075f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2075f8: 0x1810  mfhi        $v1
    ctx->pc = 0x2075f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2075fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2075fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207600: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207604: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207608: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20760c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x20760cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x207610: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207614: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207618: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207618u;
    {
        const bool branch_taken_0x207618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207618u;
        // 0x20761c: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207618) {
            ctx->pc = 0x207648u;
            goto label_207648;
        }
    }
    ctx->pc = 0x207620u;
    // 0x207620: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207624: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207628: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207628u;
    {
        const bool branch_taken_0x207628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207628u;
        // 0x20762c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207628) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x207630u;
    // 0x207630: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207634u;
    {
        const bool branch_taken_0x207634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207634u;
        // 0x207638: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207634) {
            ctx->pc = 0x207648u;
            goto label_207648;
        }
    }
    ctx->pc = 0x20763Cu;
    // 0x20763c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207640: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x207640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_207644:
    // 0x207644: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x207644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_207648:
    // 0x207648: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20764c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207650: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207650u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x207654: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x207654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x207658: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x207658u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20765c: 0x3010  mfhi        $a2
    ctx->pc = 0x20765cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x207660: 0x2012  mflo        $a0
    ctx->pc = 0x207660u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x207664: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207668: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x207668u;
    {
        const bool branch_taken_0x207668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207668) {
            ctx->pc = 0x20766Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207668u;
            // 0x20766c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x207670u;
    // 0x207670: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x207670u;
    {
        const bool branch_taken_0x207670 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x207674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207670u;
        // 0x207674: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207670) {
            ctx->pc = 0x207690u;
            goto label_207690;
        }
    }
    ctx->pc = 0x207678u;
    // 0x207678: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x207678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20767c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20767Cu;
    {
        const bool branch_taken_0x20767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20767c) {
            ctx->pc = 0x207680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20767Cu;
            // 0x207680: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207694u;
            goto label_207694;
        }
    }
    ctx->pc = 0x207684u;
    // 0x207684: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_207688:
    // 0x207688: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x207688u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20768c: 0x0  nop
    ctx->pc = 0x20768cu;
    // NOP
label_207690:
    // 0x207690: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x207690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
label_207694:
    // 0x207694: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x207694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x207698: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x207698u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x20769c: 0x3e00008  jr          $ra
    ctx->pc = 0x20769Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2076A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20769Cu;
        // 0x2076a0: 0x1c21025  or          $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20769Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2076A4u;
}
