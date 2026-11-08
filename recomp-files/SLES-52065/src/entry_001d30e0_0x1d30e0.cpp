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

// Function: entry_001d30e0
// Address: 0x1d30e0 - 0x1d3114
void entry_001d30e0_0x1d30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d30e0_0x1d30e0");
#endif

    switch (ctx->pc) {
        case 0x1d30ecu: goto label_1d30ec;
        default: break;
    }

    ctx->pc = 0x1d30e0u;

label_1d30e0:
    // 0x1d30e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d30e4:
    // 0x1d30e4: 0x60f809  jalr        $v1
label_1d30e8:
    if (ctx->pc == 0x1D30E8u) {
        ctx->pc = 0x1D30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30E4u;
        // 0x1d30e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D30ECu;
        goto label_1d30ec;
    }
    ctx->pc = 0x1D30E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D30ECu);
        ctx->pc = 0x1D30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30E4u;
        // 0x1d30e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D30E4u, 0x1D30ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D30ECu;
label_1d30ec:
    // 0x1d30ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d30f0:
    // 0x1d30f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d30f4:
    // 0x1d30f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d30f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1d30f8:
    // 0x1d30f8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_1d30fc:
    if (ctx->pc == 0x1D30FCu) {
        ctx->pc = 0x1D30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30F8u;
        // 0x1d30fc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3100u;
        goto label_1d3100;
    }
    ctx->pc = 0x1D30F8u;
    {
        const bool branch_taken_0x1d30f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30F8u;
        // 0x1d30fc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30f8) {
            ctx->pc = 0x1D30E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d30e0;
        }
    }
    ctx->pc = 0x1D3100u;
label_1d3100:
    // 0x1d3100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3104:
    // 0x1d3104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d3108:
    // 0x1d3108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d310c:
    // 0x1d310c: 0x3e00008  jr          $ra
label_1d3110:
    if (ctx->pc == 0x1D3110u) {
        ctx->pc = 0x1D3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D310Cu;
        // 0x1d3110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3114u;
        goto label_fallthrough_0x1d310c;
    }
    ctx->pc = 0x1D310Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D310Cu;
        // 0x1d3110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D310Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d310c:
    ctx->pc = 0x1D3114u;
}
