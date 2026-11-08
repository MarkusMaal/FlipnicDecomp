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

// Function: entry_001f3ca0
// Address: 0x1f3ca0 - 0x1f3cec
void entry_001f3ca0_0x1f3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3ca0_0x1f3ca0");
#endif

    switch (ctx->pc) {
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cccu: goto label_1f3ccc;
        default: break;
    }

    ctx->pc = 0x1f3ca0u;

label_1f3ca0:
    // 0x1f3ca0: 0xc07cf02  jal         func_1F3C08
    ctx->pc = 0x1F3CA0u;
    SET_GPR_U32(ctx, 31, 0x1F3CA8u);
    ctx->pc = 0x1F3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CA0u;
    // 0x1f3ca4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C08u, 0x1F3CA0u, 0x1F3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CA8u;
label_1f3ca8:
    // 0x1f3ca8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3cb0: 0xc07cf06  jal         func_1F3C18
    ctx->pc = 0x1F3CB0u;
    SET_GPR_U32(ctx, 31, 0x1F3CB8u);
    ctx->pc = 0x1F3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CB0u;
    // 0x1f3cb4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C18u, 0x1F3CB0u, 0x1F3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CB8u;
label_1f3cb8:
    // 0x1f3cb8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1f3cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f3cbc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F3CBCu;
    {
        const bool branch_taken_0x1f3cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3cbc) {
            ctx->pc = 0x1F3CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3CBCu;
            // 0x1f3cc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3ca0;
        }
    }
    ctx->pc = 0x1F3CC4u;
    // 0x1f3cc4: 0xc07cf02  jal         func_1F3C08
    ctx->pc = 0x1F3CC4u;
    SET_GPR_U32(ctx, 31, 0x1F3CCCu);
    ctx->pc = 0x1F3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CC4u;
    // 0x1f3cc8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C08u, 0x1F3CC4u, 0x1F3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CCCu;
label_1f3ccc:
    // 0x1f3ccc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f3cd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3cd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f3cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3cd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f3cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3ce0: 0xac62a800  sw          $v0, -0x5800($v1)
    ctx->pc = 0x1f3ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21A800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A800u, _value); } while (0);
    // 0x1f3ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CE4u;
        // 0x1f3ce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3CECu;
}
