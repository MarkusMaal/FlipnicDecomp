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

// Function: FUN_00209c58
// Address: 0x209c58 - 0x209cf0
void FUN_00209c58_0x209c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209c58_0x209c58");
#endif

    switch (ctx->pc) {
        case 0x209c70u: goto label_209c70;
        case 0x209cd8u: goto label_209cd8;
        default: break;
    }

    ctx->pc = 0x209c58u;

    // 0x209c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209c5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x209c60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c68: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x209C68u;
    SET_GPR_U32(ctx, 31, 0x209C70u);
    ctx->pc = 0x209C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C68u;
    // 0x209c6c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x209C68u, 0x209C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C70u;
label_209c70:
    // 0x209c70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x209c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c74: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x209c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x209c78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x209c7c: 0x3442f520  ori         $v0, $v0, 0xF520
    ctx->pc = 0x209c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
    // 0x209c80: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x209c84: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x209c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x209c88: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x209C88u;
    {
        const bool branch_taken_0x209c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C88u;
        // 0x209c8c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c88) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209C90u;
    // 0x209c90: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x209c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x209c94: 0x3442f590  ori         $v0, $v0, 0xF590
    ctx->pc = 0x209c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
    // 0x209c98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x209c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x209c9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_209ca0:
    // 0x209ca0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x209ca4: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x209ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x209ca8: 0x3484feff  ori         $a0, $a0, 0xFEFF
    ctx->pc = 0x209ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65279);
    // 0x209cac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x209cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209cb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x209cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x209cb4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x209cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209cb8: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x209cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x209cbc: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x209cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x209cc0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x209cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x209cc4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x209cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x209cc8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x209CC8u;
    {
        const bool branch_taken_0x209cc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CC8u;
        // 0x209ccc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cc8) {
            ctx->pc = 0x209CDCu;
            goto label_209cdc;
        }
    }
    ctx->pc = 0x209CD0u;
    // 0x209cd0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x209CD0u;
    SET_GPR_U32(ctx, 31, 0x209CD8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x209CD0u, 0x209CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CD8u;
label_209cd8:
    // 0x209cd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209cdc:
    // 0x209cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209ce0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x209CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE8u;
        // 0x209cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209CF0u;
}
