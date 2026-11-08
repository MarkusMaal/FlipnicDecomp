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

// Function: entry_002006f8
// Address: 0x2006f8 - 0x200724
void entry_002006f8_0x2006f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002006f8_0x2006f8");
#endif

    ctx->pc = 0x2006f8u;

    // 0x2006f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2006fc: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x200700: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x200704: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x200704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x200708: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x200708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x20070c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20070cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x200710: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x200710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200714: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x200714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x200718: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20071c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20071Cu;
    {
        const bool branch_taken_0x20071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20071Cu;
        // 0x200720: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20071c) {
            ctx->pc = 0x20079Cu;
            return;
        }
    }
    ctx->pc = 0x200724u;
}
