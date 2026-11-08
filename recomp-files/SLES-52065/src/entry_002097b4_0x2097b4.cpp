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

// Function: entry_002097b4
// Address: 0x2097b4 - 0x209850
void entry_002097b4_0x2097b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002097b4_0x2097b4");
#endif

    ctx->pc = 0x2097b4u;

    // 0x2097b4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2097b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2097b8: 0x24425c40  addiu       $v0, $v0, 0x5C40
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23616));
    // 0x2097bc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x2097c0: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x2097c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x2097c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2097c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2097c8: 0x24845c50  addiu       $a0, $a0, 0x5C50
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23632));
    // 0x2097cc: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x2097ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2097d0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2097d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2097d8: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x2097d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
    // 0x2097dc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x2097dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x2097e0: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x2097e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2097e4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x2097e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x2097e8: 0x24845c60  addiu       $a0, $a0, 0x5C60
    ctx->pc = 0x2097e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23648));
    // 0x2097ec: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2097ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2097f0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x2097f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2097f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2097f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2097f8: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x2097f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2097fc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x209800: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x209800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
    // 0x209804: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x209804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x209808: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x209808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x20980c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x20980cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x209810: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209814: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x209814u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x209818: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x209818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
    // 0x20981c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20981cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x209820: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x209820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x209824: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x209824u;
    {
        const bool branch_taken_0x209824 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x209828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209824u;
        // 0x209828: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209824) {
            ctx->pc = 0x209850u;
            return;
        }
    }
    ctx->pc = 0x20982Cu;
    // 0x20982c: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x20982cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x209830: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209834: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x209834u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
    // 0x209838: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x209838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x20983c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x209840: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x209840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x209844: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x209844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x209848: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x209848u;
    {
        const bool branch_taken_0x209848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209848u;
        // 0x20984c: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209848) {
            ctx->pc = 0x20985Cu;
            return;
        }
    }
    ctx->pc = 0x209850u;
}
