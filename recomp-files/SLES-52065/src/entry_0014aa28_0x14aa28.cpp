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

// Function: entry_0014aa28
// Address: 0x14aa28 - 0x14aa9c
void entry_0014aa28_0x14aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa28_0x14aa28");
#endif

    switch (ctx->pc) {
        case 0x14aa74u: goto label_14aa74;
        default: break;
    }

    ctx->pc = 0x14aa28u;

    // 0x14aa28: 0x27b1070c  addiu       $s1, $sp, 0x70C
    ctx->pc = 0x14aa28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1804));
    // 0x14aa2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14aa30: 0x8fa206ec  lw          $v0, 0x6EC($sp)
    ctx->pc = 0x14aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1772)));
    // 0x14aa34: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14AA34u;
    {
        const bool branch_taken_0x14aa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14aa34) {
            ctx->pc = 0x14A9BCu;
            return;
        }
    }
    ctx->pc = 0x14AA3Cu;
    // 0x14aa3c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x14aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14aa40: 0x27a50760  addiu       $a1, $sp, 0x760
    ctx->pc = 0x14aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
    // 0x14aa44: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x14aa44u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14aa48: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x14aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14aa4c: 0x27a60740  addiu       $a2, $sp, 0x740
    ctx->pc = 0x14aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
    // 0x14aa50: 0x27a40720  addiu       $a0, $sp, 0x720
    ctx->pc = 0x14aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
    // 0x14aa54: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14aa54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14aa58: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x14aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x14aa5c: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x14aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x14aa60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14aa60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14aa64: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14aa64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14aa68: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14aa6c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14AA6Cu;
    SET_GPR_U32(ctx, 31, 0x14AA74u);
    ctx->pc = 0x14AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA6Cu;
    // 0x14aa70: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14AA6Cu, 0x14AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA74u;
label_14aa74:
    // 0x14aa74: 0x27b2076c  addiu       $s2, $sp, 0x76C
    ctx->pc = 0x14aa74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1900));
    // 0x14aa78: 0x27b10770  addiu       $s1, $sp, 0x770
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
    // 0x14aa7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14aa80: 0x27b60774  addiu       $s6, $sp, 0x774
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1908));
    // 0x14aa84: 0xafa3072c  sw          $v1, 0x72C($sp)
    ctx->pc = 0x14aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1836), GPR_U32(ctx, 3));
    // 0x14aa88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14aa8c: 0xafa30730  sw          $v1, 0x730($sp)
    ctx->pc = 0x14aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1840), GPR_U32(ctx, 3));
    // 0x14aa90: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14aa94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14AA94u;
    {
        const bool branch_taken_0x14aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA94u;
        // 0x14aa98: 0xafa30734  sw          $v1, 0x734($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa94) {
            ctx->pc = 0x14AB10u;
            return;
        }
    }
    ctx->pc = 0x14AA9Cu;
}
