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

// Function: FUN_001396f0
// Address: 0x1396f0 - 0x139750
void FUN_001396f0_0x1396f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001396f0_0x1396f0");
#endif

    ctx->pc = 0x1396f0u;

    // 0x1396f0: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1396f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1396f4: 0x3163ffff  andi        $v1, $t3, 0xFFFF
    ctx->pc = 0x1396f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1396f8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1396f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1396fc: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x1396fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x139700: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x139700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x139704: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x139704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x139708: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x139708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x13970c: 0x1452825  or          $a1, $t2, $a1
    ctx->pc = 0x13970cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x139710: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x139710u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x139714: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x139714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x139718: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x139718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x13971c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139720: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x139720u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139724: 0x93a60008  lbu         $a2, 0x8($sp)
    ctx->pc = 0x139724u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139728: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x139728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13972c: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x13972cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x139730: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x139730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x139734: 0x1252825  or          $a1, $t1, $a1
    ctx->pc = 0x139734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x139738: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x139738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x13973c: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x13973cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x139740: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x139740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x139744: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x139744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x139748: 0x3e00008  jr          $ra
    ctx->pc = 0x139748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139748u;
        // 0x13974c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139750u;
}
