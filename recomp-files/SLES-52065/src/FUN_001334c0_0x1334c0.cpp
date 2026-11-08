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

// Function: FUN_001334c0
// Address: 0x1334c0 - 0x133690
void FUN_001334c0_0x1334c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001334c0_0x1334c0");
#endif

    ctx->pc = 0x1334c0u;

    // 0x1334c0: 0x10a00058  beqz        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1334C0u;
    {
        const bool branch_taken_0x1334c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C0u;
        // 0x1334c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334c0) {
            ctx->pc = 0x133624u;
            goto label_133624;
        }
    }
    ctx->pc = 0x1334C8u;
    // 0x1334c8: 0x10a6003c  beq         $a1, $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x1334C8u;
    {
        const bool branch_taken_0x1334c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1334CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C8u;
        // 0x1334cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334c8) {
            ctx->pc = 0x1335BCu;
            goto label_1335bc;
        }
    }
    ctx->pc = 0x1334D0u;
    // 0x1334d0: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1334D0u;
    {
        const bool branch_taken_0x1334d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1334d0) {
            ctx->pc = 0x133558u;
            goto label_133558;
        }
    }
    ctx->pc = 0x1334D8u;
    // 0x1334d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1334d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1334dc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1334DCu;
    {
        const bool branch_taken_0x1334dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1334dc) {
            ctx->pc = 0x1334ECu;
            goto label_1334ec;
        }
    }
    ctx->pc = 0x1334E4u;
    // 0x1334e4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1334E4u;
    {
        const bool branch_taken_0x1334e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1334e4) {
            ctx->pc = 0x133688u;
            goto label_133688;
        }
    }
    ctx->pc = 0x1334ECu;
label_1334ec:
    // 0x1334ec: 0x908c0040  lbu         $t4, 0x40($a0)
    ctx->pc = 0x1334ecu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1334f0: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x1334f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1334f4: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1334f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1334f8: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x1334f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1334fc: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x1334fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x133500: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x133500u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x133504: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x133504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x133508: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x133508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x13350c: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x13350cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x133510: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x133510u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x133514: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x133514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x133518: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x133518u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x13351c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x13351cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x133520: 0xa08a0040  sb          $t2, 0x40($a0)
    ctx->pc = 0x133520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 10));
    // 0x133524: 0x908a0040  lbu         $t2, 0x40($a0)
    ctx->pc = 0x133524u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x133528: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x133528u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x13352c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x13352cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x133530: 0xa0880040  sb          $t0, 0x40($a0)
    ctx->pc = 0x133530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x133534: 0x90880040  lbu         $t0, 0x40($a0)
    ctx->pc = 0x133534u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x133538: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x133538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x13353c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x13353cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x133540: 0xa0860040  sb          $a2, 0x40($a0)
    ctx->pc = 0x133540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x133544: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x133544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x133548: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x133548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13354c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13354cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x133550: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x133550u;
    {
        const bool branch_taken_0x133550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133550u;
        // 0x133554: 0xa0830040  sb          $v1, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133550) {
            ctx->pc = 0x133688u;
            goto label_133688;
        }
    }
    ctx->pc = 0x133558u;
label_133558:
    // 0x133558: 0x908c0040  lbu         $t4, 0x40($a0)
    ctx->pc = 0x133558u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13355c: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x13355cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x133560: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x133560u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x133564: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x133564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x133568: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x133568u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x13356c: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x13356cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x133570: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x133570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x133574: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x133574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x133578: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x133578u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x13357c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x13357cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x133580: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x133580u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x133584: 0xa08a0040  sb          $t2, 0x40($a0)
    ctx->pc = 0x133584u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 10));
    // 0x133588: 0x908a0040  lbu         $t2, 0x40($a0)
    ctx->pc = 0x133588u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13358c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x13358cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x133590: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x133590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x133594: 0xa0880040  sb          $t0, 0x40($a0)
    ctx->pc = 0x133594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x133598: 0x90880040  lbu         $t0, 0x40($a0)
    ctx->pc = 0x133598u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13359c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x13359cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1335a0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1335a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1335a4: 0xa0860040  sb          $a2, 0x40($a0)
    ctx->pc = 0x1335a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x1335a8: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x1335a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1335ac: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1335acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1335b0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1335b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1335b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1335B4u;
    {
        const bool branch_taken_0x1335b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1335B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335B4u;
        // 0x1335b8: 0xa0830040  sb          $v1, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335b4) {
            ctx->pc = 0x133688u;
            goto label_133688;
        }
    }
    ctx->pc = 0x1335BCu;
label_1335bc:
    // 0x1335bc: 0x908c0040  lbu         $t4, 0x40($a0)
    ctx->pc = 0x1335bcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1335c0: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1335c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1335c4: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1335c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1335c8: 0x30cb0003  andi        $t3, $a2, 0x3
    ctx->pc = 0x1335c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1335cc: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x1335ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1335d0: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x1335d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1335d4: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1335d8: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x1335d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1335dc: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1335e0: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x1335e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1335e4: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x1335e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x1335e8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1335e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1335ec: 0xa08a0040  sb          $t2, 0x40($a0)
    ctx->pc = 0x1335ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 10));
    // 0x1335f0: 0x908a0040  lbu         $t2, 0x40($a0)
    ctx->pc = 0x1335f0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1335f4: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1335f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1335f8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1335f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1335fc: 0xa0880040  sb          $t0, 0x40($a0)
    ctx->pc = 0x1335fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x133600: 0x90880040  lbu         $t0, 0x40($a0)
    ctx->pc = 0x133600u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x133604: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x133604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x133608: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x133608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13360c: 0xa0860040  sb          $a2, 0x40($a0)
    ctx->pc = 0x13360cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x133610: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x133610u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x133614: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x133614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x133618: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x133618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13361c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13361Cu;
    {
        const bool branch_taken_0x13361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13361Cu;
        // 0x133620: 0xa0830040  sb          $v1, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13361c) {
            ctx->pc = 0x133688u;
            goto label_133688;
        }
    }
    ctx->pc = 0x133624u;
label_133624:
    // 0x133624: 0x908c0040  lbu         $t4, 0x40($a0)
    ctx->pc = 0x133624u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x133628: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x133628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x13362c: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x13362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x133630: 0x640b0002  daddiu      $t3, $zero, 0x2
    ctx->pc = 0x133630u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x133634: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x133634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x133638: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x133638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13363c: 0x64090008  daddiu      $t1, $zero, 0x8
    ctx->pc = 0x13363cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x133640: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x133640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x133644: 0x64070020  daddiu      $a3, $zero, 0x20
    ctx->pc = 0x133644u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x133648: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x133648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x13364c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x13364cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x133650: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x133650u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x133654: 0xa08a0040  sb          $t2, 0x40($a0)
    ctx->pc = 0x133654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 10));
    // 0x133658: 0x908a0040  lbu         $t2, 0x40($a0)
    ctx->pc = 0x133658u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13365c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x13365cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x133660: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x133660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x133664: 0xa0880040  sb          $t0, 0x40($a0)
    ctx->pc = 0x133664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x133668: 0x90880040  lbu         $t0, 0x40($a0)
    ctx->pc = 0x133668u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13366c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x13366cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x133670: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x133670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x133674: 0xa0860040  sb          $a2, 0x40($a0)
    ctx->pc = 0x133674u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x133678: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x133678u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13367c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x13367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x133680: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x133680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x133684: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x133684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
label_133688:
    // 0x133688: 0x3e00008  jr          $ra
    ctx->pc = 0x133688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133690u;
}
