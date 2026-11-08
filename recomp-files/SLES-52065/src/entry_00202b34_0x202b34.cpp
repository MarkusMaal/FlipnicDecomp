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

// Function: entry_00202b34
// Address: 0x202b34 - 0x202b74
void entry_00202b34_0x202b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202b34_0x202b34");
#endif

    ctx->pc = 0x202b34u;

    // 0x202b34: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x202b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202b38: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x202b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x202b3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202b40: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x202b44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x202b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202b48: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x202b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x202b4c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x202b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x202b50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202b54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202b58: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x202b5c: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x202b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x202b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x202b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x202b64: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x202b64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x202b68: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x202b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x202b6c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x202B6Cu;
    {
        const bool branch_taken_0x202b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B6Cu;
        // 0x202b70: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b6c) {
            ctx->pc = 0x2030B0u;
            return;
        }
    }
    ctx->pc = 0x202B74u;
}
