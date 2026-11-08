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

// Function: entry_001335bc
// Address: 0x1335bc - 0x133624
void entry_001335bc_0x1335bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001335bc_0x1335bc");
#endif

    ctx->pc = 0x1335bcu;

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
            return;
        }
    }
    ctx->pc = 0x133624u;
}
