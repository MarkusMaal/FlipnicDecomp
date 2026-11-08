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

// Function: FUN_002076a8
// Address: 0x2076a8 - 0x207be8
void FUN_002076a8_0x2076a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002076a8_0x2076a8");
#endif

    ctx->pc = 0x2076a8u;

    // 0x2076a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2076a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2076ac: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x2076acu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2076b0: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x2076b0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2076b4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x2076b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2076b8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2076b8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2076bc: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x2076bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2076c0: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2076c0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2076c4: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2076C4u;
    {
        const bool branch_taken_0x2076c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076C4u;
        // 0x2076c8: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076c4) {
            ctx->pc = 0x207994u;
            goto label_207994;
        }
    }
    ctx->pc = 0x2076CCu;
    // 0x2076cc: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x2076ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2076d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2076D0u;
    {
        const bool branch_taken_0x2076d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076D0u;
        // 0x2076d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076d0) {
            ctx->pc = 0x207760u;
            goto label_207760;
        }
    }
    ctx->pc = 0x2076D8u;
    // 0x2076d8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2076d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2076dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2076DCu;
    {
        const bool branch_taken_0x2076dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076DCu;
        // 0x2076e0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076dc) {
            ctx->pc = 0x2076F8u;
            goto label_2076f8;
        }
    }
    ctx->pc = 0x2076E4u;
    // 0x2076e4: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2076e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2076e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2076ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2076ECu;
    {
        const bool branch_taken_0x2076ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076ECu;
        // 0x2076f0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076ec) {
            ctx->pc = 0x207710u;
            goto label_207710;
        }
    }
    ctx->pc = 0x2076F4u;
    // 0x2076f4: 0x0  nop
    ctx->pc = 0x2076f4u;
    // NOP
label_2076f8:
    // 0x2076f8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2076f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2076fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2076fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207700: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x207700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x207704: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x207704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207708: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x207708u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x20770c: 0x0  nop
    ctx->pc = 0x20770cu;
    // NOP
label_207710:
    // 0x207710: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x207710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x207714: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x207714u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x207718: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x20771c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207720: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207724: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x207724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207728: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20772c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x20772cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x207730: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x207730u;
    {
        const bool branch_taken_0x207730 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x207734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207730u;
        // 0x207734: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207730) {
            ctx->pc = 0x20774Cu;
            goto label_20774c;
        }
    }
    ctx->pc = 0x207738u;
    // 0x207738: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x207738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x20773c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x207740: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x207744: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x207744u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207748: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_20774c:
    // 0x20774c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x207750: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x207750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x207754: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x207754u;
    {
        const bool branch_taken_0x207754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207754u;
        // 0x207758: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207754) {
            ctx->pc = 0x2078D8u;
            goto label_2078d8;
        }
    }
    ctx->pc = 0x20775Cu;
    // 0x20775c: 0x0  nop
    ctx->pc = 0x20775cu;
    // NOP
label_207760:
    // 0x207760: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207760u;
    {
        const bool branch_taken_0x207760 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x207764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207760u;
        // 0x207764: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207760) {
            ctx->pc = 0x207788u;
            goto label_207788;
        }
    }
    ctx->pc = 0x207768u;
    // 0x207768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20776c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20776Cu;
    {
        const bool branch_taken_0x20776c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x20776c) {
            ctx->pc = 0x207770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20776Cu;
            // 0x207770: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207774u;
            goto label_207774;
        }
    }
    ctx->pc = 0x207774u;
label_207774:
    // 0x207774: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x207774u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x207778: 0x1012  mflo        $v0
    ctx->pc = 0x207778u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20777c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20777cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207780: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x207780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x207784: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x207784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_207788:
    // 0x207788: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207788u;
    {
        const bool branch_taken_0x207788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207788u;
        // 0x20778c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207788) {
            ctx->pc = 0x2077A0u;
            goto label_2077a0;
        }
    }
    ctx->pc = 0x207790u;
    // 0x207790: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x207790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x207794: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x207794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x207798: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x207798u;
    {
        const bool branch_taken_0x207798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207798u;
        // 0x20779c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207798) {
            ctx->pc = 0x2077B8u;
            goto label_2077b8;
        }
    }
    ctx->pc = 0x2077A0u;
label_2077a0:
    // 0x2077a0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2077a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2077a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2077a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2077a8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2077ac: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2077acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2077b0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2077b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2077b4: 0x0  nop
    ctx->pc = 0x2077b4u;
    // NOP
label_2077b8:
    // 0x2077b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2077b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2077bc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2077c0: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x2077c4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2077c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2077cc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2077ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2077d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2077d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2077d4: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x2077d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2077d8: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2077D8u;
    {
        const bool branch_taken_0x2077d8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077D8u;
        // 0x2077dc: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077d8) {
            ctx->pc = 0x2077F0u;
            goto label_2077f0;
        }
    }
    ctx->pc = 0x2077E0u;
    // 0x2077e0: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x2077e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2077e4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2077e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2077e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2077E8u;
    {
        const bool branch_taken_0x2077e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077E8u;
        // 0x2077ec: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077e8) {
            ctx->pc = 0x2078CCu;
            goto label_2078cc;
        }
    }
    ctx->pc = 0x2077F0u;
label_2077f0:
    // 0x2077f0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2077f4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x2077f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x2077f8: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x2077f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2077fc: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2077fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207800: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x207800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x207804: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x207804u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x207808: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x207808u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x20780c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x20780cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x207810: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x207810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x207814: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207818: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x20781c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20781Cu;
    {
        const bool branch_taken_0x20781c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20781c) {
            ctx->pc = 0x207820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20781Cu;
            // 0x207820: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207824u;
            goto label_207824;
        }
    }
    ctx->pc = 0x207824u;
label_207824:
    // 0x207824: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x207824u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207828: 0x1012  mflo        $v0
    ctx->pc = 0x207828u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20782c: 0x1810  mfhi        $v1
    ctx->pc = 0x20782cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207830: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207834: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207838: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207838u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20783c: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x20783cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207840: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207844: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207848: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x207848u;
    {
        const bool branch_taken_0x207848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207848) {
            ctx->pc = 0x20784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207848u;
            // 0x20784c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207874u;
            goto label_207874;
        }
    }
    ctx->pc = 0x207850u;
    // 0x207850: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x207850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207854: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207858: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x207858u;
    {
        const bool branch_taken_0x207858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207858) {
            ctx->pc = 0x20785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207858u;
            // 0x20785c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207874u;
            goto label_207874;
        }
    }
    ctx->pc = 0x207860u;
    // 0x207860: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207864: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x207864u;
    {
        const bool branch_taken_0x207864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207864) {
            ctx->pc = 0x207868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207864u;
            // 0x207868: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207870u;
            goto label_207870;
        }
    }
    ctx->pc = 0x20786Cu;
    // 0x20786c: 0x0  nop
    ctx->pc = 0x20786cu;
    // NOP
label_207870:
    // 0x207870: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x207870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_207874:
    // 0x207874: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x207874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x207878: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x207878u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x20787c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20787Cu;
    {
        const bool branch_taken_0x20787c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20787c) {
            ctx->pc = 0x207880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20787Cu;
            // 0x207880: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207884u;
            goto label_207884;
        }
    }
    ctx->pc = 0x207884u;
label_207884:
    // 0x207884: 0x1012  mflo        $v0
    ctx->pc = 0x207884u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207888: 0x1810  mfhi        $v1
    ctx->pc = 0x207888u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20788c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20788cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207890: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207894: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207898: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x207898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x20789c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20789cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2078a0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2078a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2078a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2078A4u;
    {
        const bool branch_taken_0x2078a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078a4) {
            ctx->pc = 0x2078A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078A4u;
            // 0x2078a8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078CCu;
            goto label_2078cc;
        }
    }
    ctx->pc = 0x2078ACu;
    // 0x2078ac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2078b0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2078b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2078b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2078B4u;
    {
        const bool branch_taken_0x2078b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2078B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078B4u;
        // 0x2078b8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078b4) {
            ctx->pc = 0x2078CCu;
            goto label_2078cc;
        }
    }
    ctx->pc = 0x2078BCu;
    // 0x2078bc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2078bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2078c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2078C0u;
    {
        const bool branch_taken_0x2078c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2078c0) {
            ctx->pc = 0x2078C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078C0u;
            // 0x2078c4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078C8u;
            goto label_2078c8;
        }
    }
    ctx->pc = 0x2078C8u;
label_2078c8:
    // 0x2078c8: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x2078c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2078cc:
    // 0x2078cc: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x2078ccu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2078d0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2078d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078d4: 0x0  nop
    ctx->pc = 0x2078d4u;
    // NOP
label_2078d8:
    // 0x2078d8: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2078d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2078dc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2078DCu;
    {
        const bool branch_taken_0x2078dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078dc) {
            ctx->pc = 0x2078E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078DCu;
            // 0x2078e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078E4u;
            goto label_2078e4;
        }
    }
    ctx->pc = 0x2078E4u;
label_2078e4:
    // 0x2078e4: 0x1012  mflo        $v0
    ctx->pc = 0x2078e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2078e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2078e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2078ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2078ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2078f0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2078f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2078f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2078f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2078f8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x2078f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2078fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2078fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207900: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207904: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207904) {
            ctx->pc = 0x207908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207904u;
            // 0x207908: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20792Cu;
            goto label_20792c;
        }
    }
    ctx->pc = 0x20790Cu;
    // 0x20790c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207910: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207914: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207914u;
    {
        const bool branch_taken_0x207914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207914) {
            ctx->pc = 0x207918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207914u;
            // 0x207918: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20792Cu;
            goto label_20792c;
        }
    }
    ctx->pc = 0x20791Cu;
    // 0x20791c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20791cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207920: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207920u;
    {
        const bool branch_taken_0x207920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207920) {
            ctx->pc = 0x207924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207920u;
            // 0x207924: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207928u;
            goto label_207928;
        }
    }
    ctx->pc = 0x207928u;
label_207928:
    // 0x207928: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x207928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20792c:
    // 0x20792c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x20792cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x207930: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x207930u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207934: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207934u;
    {
        const bool branch_taken_0x207934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207934) {
            ctx->pc = 0x207938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207934u;
            // 0x207938: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20793Cu;
            goto label_20793c;
        }
    }
    ctx->pc = 0x20793Cu;
label_20793c:
    // 0x20793c: 0x1012  mflo        $v0
    ctx->pc = 0x20793cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207940: 0x1810  mfhi        $v1
    ctx->pc = 0x207940u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207944: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207948: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x20794c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20794cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207950: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x207950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207954: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207958: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20795c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20795Cu;
    {
        const bool branch_taken_0x20795c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20795c) {
            ctx->pc = 0x20797Cu;
            goto label_20797c;
        }
    }
    ctx->pc = 0x207964u;
    // 0x207964: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x207964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207968: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20796c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20796Cu;
    {
        const bool branch_taken_0x20796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20796Cu;
        // 0x207970: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20796c) {
            ctx->pc = 0x20797Cu;
            goto label_20797c;
        }
    }
    ctx->pc = 0x207974u;
    // 0x207974: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207974u;
    {
        const bool branch_taken_0x207974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207974) {
            ctx->pc = 0x207978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207974u;
            // 0x207978: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20797Cu;
            goto label_20797c;
        }
    }
    ctx->pc = 0x20797Cu;
label_20797c:
    // 0x20797c: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x20797Cu;
    {
        const bool branch_taken_0x20797c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x207980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20797Cu;
        // 0x207980: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20797c) {
            ctx->pc = 0x207BDCu;
            goto label_207bdc;
        }
    }
    ctx->pc = 0x207984u;
    // 0x207984: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x207984u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x207988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20798c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x20798Cu;
    {
        const bool branch_taken_0x20798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20798Cu;
        // 0x207990: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20798c) {
            ctx->pc = 0x207BD8u;
            goto label_207bd8;
        }
    }
    ctx->pc = 0x207994u;
label_207994:
    // 0x207994: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x207994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207998: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207998u;
    {
        const bool branch_taken_0x207998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207998u;
        // 0x20799c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207998) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x2079A0u;
    // 0x2079a0: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x2079a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2079a4: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x2079a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2079a8: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x2079a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x2079ac: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2079ACu;
    {
        const bool branch_taken_0x2079ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079ACu;
        // 0x2079b0: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079ac) {
            ctx->pc = 0x207BDCu;
            goto label_207bdc;
        }
    }
    ctx->pc = 0x2079B4u;
label_2079b4:
    // 0x2079b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2079b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2079b8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2079b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2079bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2079BCu;
    {
        const bool branch_taken_0x2079bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079BCu;
        // 0x2079c0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079bc) {
            ctx->pc = 0x2079D8u;
            goto label_2079d8;
        }
    }
    ctx->pc = 0x2079C4u;
    // 0x2079c4: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2079c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2079c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2079c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2079cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2079CCu;
    {
        const bool branch_taken_0x2079cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079CCu;
        // 0x2079d0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079cc) {
            ctx->pc = 0x2079F0u;
            goto label_2079f0;
        }
    }
    ctx->pc = 0x2079D4u;
    // 0x2079d4: 0x0  nop
    ctx->pc = 0x2079d4u;
    // NOP
label_2079d8:
    // 0x2079d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2079d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2079dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2079dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2079e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2079e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2079e4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2079e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2079e8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2079e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2079ec: 0x0  nop
    ctx->pc = 0x2079ecu;
    // NOP
label_2079f0:
    // 0x2079f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2079f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2079f4: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2079f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2079f8: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x2079fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2079fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207a00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207a04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x207a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207a08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207a0c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x207a0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x207a10: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x207A10u;
    {
        const bool branch_taken_0x207a10 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A10u;
        // 0x207a14: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a10) {
            ctx->pc = 0x207A58u;
            goto label_207a58;
        }
    }
    ctx->pc = 0x207A18u;
    // 0x207a18: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x207a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x207a1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207A1Cu;
    {
        const bool branch_taken_0x207a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A1Cu;
        // 0x207a20: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a1c) {
            ctx->pc = 0x207A30u;
            goto label_207a30;
        }
    }
    ctx->pc = 0x207A24u;
    // 0x207a24: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x207a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207a28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207A28u;
    {
        const bool branch_taken_0x207a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207a28) {
            ctx->pc = 0x207A40u;
            goto label_207a40;
        }
    }
    ctx->pc = 0x207A30u;
label_207a30:
    // 0x207a30: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x207a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x207a34: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x207a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x207a38: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207a3c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x207a3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207a40:
    // 0x207a40: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x207A40u;
    {
        const bool branch_taken_0x207a40 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A40u;
        // 0x207a44: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a40) {
            ctx->pc = 0x207BDCu;
            goto label_207bdc;
        }
    }
    ctx->pc = 0x207A48u;
    // 0x207a48: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x207a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x207a4c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x207a4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x207a50: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x207A50u;
    {
        const bool branch_taken_0x207a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A50u;
        // 0x207a54: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a50) {
            ctx->pc = 0x207BD8u;
            goto label_207bd8;
        }
    }
    ctx->pc = 0x207A58u;
label_207a58:
    // 0x207a58: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x207a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x207a5c: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x207a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x207a60: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x207a60u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x207a64: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x207a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x207a68: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x207a6c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x207a6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207a70: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x207a70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x207a74: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x207a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x207a78: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x207a7c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x207a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x207a80: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x207a80u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x207a84: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x207a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x207a88: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x207a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x207a8c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207A8Cu;
    {
        const bool branch_taken_0x207a8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x207a8c) {
            ctx->pc = 0x207A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207A8Cu;
            // 0x207a90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207A94u;
            goto label_207a94;
        }
    }
    ctx->pc = 0x207A94u;
label_207a94:
    // 0x207a94: 0x1012  mflo        $v0
    ctx->pc = 0x207a94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207a98: 0x1810  mfhi        $v1
    ctx->pc = 0x207a98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207a9c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x207a9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207aa0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207aa4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207aa8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207aa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207aac: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x207aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x207ab0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207ab4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207ab8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x207AB8u;
    {
        const bool branch_taken_0x207ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ab8) {
            ctx->pc = 0x207ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AB8u;
            // 0x207abc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207AECu;
            goto label_207aec;
        }
    }
    ctx->pc = 0x207AC0u;
    // 0x207ac0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207ac4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207ac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207AC8u;
    {
        const bool branch_taken_0x207ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AC8u;
        // 0x207acc: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ac8) {
            ctx->pc = 0x207AE8u;
            goto label_207ae8;
        }
    }
    ctx->pc = 0x207AD0u;
    // 0x207ad0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207ad4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207AD4u;
    {
        const bool branch_taken_0x207ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ad4) {
            ctx->pc = 0x207AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AD4u;
            // 0x207ad8: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207AECu;
            goto label_207aec;
        }
    }
    ctx->pc = 0x207ADCu;
    // 0x207adc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x207adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x207ae0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207ae4: 0x0  nop
    ctx->pc = 0x207ae4u;
    // NOP
label_207ae8:
    // 0x207ae8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_207aec:
    // 0x207aec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207AECu;
    {
        const bool branch_taken_0x207aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x207aec) {
            ctx->pc = 0x207AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AECu;
            // 0x207af0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207AF4u;
            goto label_207af4;
        }
    }
    ctx->pc = 0x207AF4u;
label_207af4:
    // 0x207af4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x207af4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207af8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x207af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x207afc: 0x1012  mflo        $v0
    ctx->pc = 0x207afcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207b00: 0x1810  mfhi        $v1
    ctx->pc = 0x207b00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207b04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207b0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207b10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207b10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207b14: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x207b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x207b18: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x207b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207b1c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x207b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207b20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207B20u;
    {
        const bool branch_taken_0x207b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B20u;
        // 0x207b24: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b20) {
            ctx->pc = 0x207B50u;
            goto label_207b50;
        }
    }
    ctx->pc = 0x207B28u;
    // 0x207b28: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x207b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x207b2c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x207b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207b30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207B30u;
    {
        const bool branch_taken_0x207b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B30u;
        // 0x207b34: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b30) {
            ctx->pc = 0x207B4Cu;
            goto label_207b4c;
        }
    }
    ctx->pc = 0x207B38u;
    // 0x207b38: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x207b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207B3Cu;
    {
        const bool branch_taken_0x207b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B3Cu;
        // 0x207b40: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b3c) {
            ctx->pc = 0x207B50u;
            goto label_207b50;
        }
    }
    ctx->pc = 0x207B44u;
    // 0x207b44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x207b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x207b48: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x207b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_207b4c:
    // 0x207b4c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x207b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_207b50:
    // 0x207b50: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x207b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x207b54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x207b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207b58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x207b5c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x207b5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x207b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x207b64: 0x480019  multu       $v0, $t0
    ctx->pc = 0x207b64u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x207b68: 0x3810  mfhi        $a3
    ctx->pc = 0x207b68u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x207b6c: 0x3012  mflo        $a2
    ctx->pc = 0x207b6cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x207b70: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207b74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207B74u;
    {
        const bool branch_taken_0x207b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B74u;
        // 0x207b78: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b74) {
            ctx->pc = 0x207B90u;
            goto label_207b90;
        }
    }
    ctx->pc = 0x207B7Cu;
    // 0x207b7c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x207B7Cu;
    {
        const bool branch_taken_0x207b7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x207B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B7Cu;
        // 0x207b80: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b7c) {
            ctx->pc = 0x207BA0u;
            goto label_207ba0;
        }
    }
    ctx->pc = 0x207B84u;
    // 0x207b84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207B84u;
    {
        const bool branch_taken_0x207b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b84) {
            ctx->pc = 0x207BA0u;
            goto label_207ba0;
        }
    }
    ctx->pc = 0x207B8Cu;
    // 0x207b8c: 0x0  nop
    ctx->pc = 0x207b8cu;
    // NOP
label_207b90:
    // 0x207b90: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x207b94: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x207b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x207b98: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x207b98u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207b9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x207b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207ba0:
    // 0x207ba0: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x207BA0u;
    {
        const bool branch_taken_0x207ba0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba0) {
            ctx->pc = 0x207BDCu;
            goto label_207bdc;
        }
    }
    ctx->pc = 0x207BA8u;
    // 0x207ba8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x207ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x207bac: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x207bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x207bb0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x207bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207bb4: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x207bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x207bb8: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x207bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x207bbc: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x207bc0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x207bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x207bc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x207bc8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x207bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x207bcc: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x207bccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x207bd0: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x207bd4: 0x0  nop
    ctx->pc = 0x207bd4u;
    // NOP
label_207bd8:
    // 0x207bd8: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x207bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_207bdc:
    // 0x207bdc: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x207bdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207be0: 0x3e00008  jr          $ra
    ctx->pc = 0x207BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BE0u;
        // 0x207be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207BE8u;
}
