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

// Function: entry_00207cb8
// Address: 0x207cb8 - 0x207d14
void entry_00207cb8_0x207cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207cb8_0x207cb8");
#endif

    ctx->pc = 0x207cb8u;

    // 0x207cb8: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x207cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x207cbc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x207cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x207cc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207cc4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x207cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x207cc8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x207cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x207ccc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x207cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x207cd0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x207cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x207cd4: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x207cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x207cd8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x207cdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207ce0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x207ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207ce4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207ce8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x207ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207cec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207cf0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x207cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x207cf4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x207cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207cf8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x207cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207cfc: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x207cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x207d00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x207d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x207d04: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x207d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x207d08: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x207d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x207d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x207D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D0Cu;
        // 0x207d10: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D14u;
}
