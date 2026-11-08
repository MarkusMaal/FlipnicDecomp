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

// Function: entry_001334ec
// Address: 0x1334ec - 0x133558
void entry_001334ec_0x1334ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001334ec_0x1334ec");
#endif

    ctx->pc = 0x1334ecu;

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
            return;
        }
    }
    ctx->pc = 0x133558u;
}
