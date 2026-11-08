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

// Function: entry_001dfee0
// Address: 0x1dfee0 - 0x1dff44
void entry_001dfee0_0x1dfee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfee0_0x1dfee0");
#endif

    switch (ctx->pc) {
        case 0x1dfef4u: goto label_1dfef4;
        case 0x1dff2cu: goto label_1dff2c;
        default: break;
    }

    ctx->pc = 0x1dfee0u;

label_1dfee0:
    // 0x1dfee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfee4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfee8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1dfee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1dfeec: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1DFEECu;
    SET_GPR_U32(ctx, 31, 0x1DFEF4u);
    ctx->pc = 0x1DFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEECu;
    // 0x1dfef0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1DFEECu, 0x1DFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEF4u;
label_1dfef4:
    // 0x1dfef4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dfef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1dfef8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DFEF8u;
    {
        const bool branch_taken_0x1dfef8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1DFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEF8u;
        // 0x1dfefc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfef8) {
            ctx->pc = 0x1DFEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfee0;
        }
    }
    ctx->pc = 0x1DFF00u;
    // 0x1dff00: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dff00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dff04: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1dff04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1dff08: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dff0c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1dff0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1dff10: 0x24a5fbd0  addiu       $a1, $a1, -0x430
    ctx->pc = 0x1dff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966224));
    // 0x1dff14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dff18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff1c: 0xace2a304  sw          $v0, -0x5CFC($a3)
    ctx->pc = 0x1dff1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x38A304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A304u, _value); } while (0);
    // 0x1dff20: 0xac60b320  sw          $zero, -0x4CE0($v1)
    ctx->pc = 0x1dff20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38B320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B320u, _value); } while (0);
    // 0x1dff24: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1DFF24u;
    SET_GPR_U32(ctx, 31, 0x1DFF2Cu);
    ctx->pc = 0x1DFF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF24u;
    // 0x1dff28: 0xacc0a308  sw          $zero, -0x5CF8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943496), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1DFF24u, 0x1DFF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF2Cu;
label_1dff2c:
    // 0x1dff2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dff2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dff30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dff34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dff38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dff38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF3Cu;
        // 0x1dff40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFF44u;
}
