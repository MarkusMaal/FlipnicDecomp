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

// Function: entry_00110ebc
// Address: 0x110ebc - 0x110f04
void entry_00110ebc_0x110ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ebc_0x110ebc");
#endif

    switch (ctx->pc) {
        case 0x110ec4u: goto label_110ec4;
        case 0x110efcu: goto label_110efc;
        default: break;
    }

    ctx->pc = 0x110ebcu;

    // 0x110ebc: 0xc044254  jal         func_110950
    ctx->pc = 0x110EBCu;
    SET_GPR_U32(ctx, 31, 0x110EC4u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x110EBCu, 0x110EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EC4u;
label_110ec4:
    // 0x110ec4: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x110ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x110ec8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x110ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110ecc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x110eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x110ed0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x110ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110edc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x110edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110ee0: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110ee4: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110ee8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110eec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EECu;
    {
        const bool branch_taken_0x110eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EECu;
        // 0x110ef0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eec) {
            ctx->pc = 0x110F04u;
            return;
        }
    }
    ctx->pc = 0x110EF4u;
    // 0x110ef4: 0xc042118  jal         func_108460
    ctx->pc = 0x110EF4u;
    SET_GPR_U32(ctx, 31, 0x110EFCu);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x110EF4u, 0x110EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EFCu;
label_110efc:
    // 0x110efc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x110EFCu;
    {
        const bool branch_taken_0x110efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110efc) {
            ctx->pc = 0x110F20u;
            return;
        }
    }
    ctx->pc = 0x110F04u;
}
