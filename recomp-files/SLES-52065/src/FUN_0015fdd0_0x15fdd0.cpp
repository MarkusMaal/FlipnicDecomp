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

// Function: FUN_0015fdd0
// Address: 0x15fdd0 - 0x15fe28
void FUN_0015fdd0_0x15fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fdd0_0x15fdd0");
#endif

    switch (ctx->pc) {
        case 0x15fde0u: goto label_15fde0;
        default: break;
    }

    ctx->pc = 0x15fdd0u;

    // 0x15fdd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15fdd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15fdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdd8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x15fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15fddc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fde0:
    // 0x15fde0: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15fde4: 0x85030228  lh          $v1, 0x228($t0)
    ctx->pc = 0x15fde4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x15fde8: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FDE8u;
    {
        const bool branch_taken_0x15fde8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x15fde8) {
            ctx->pc = 0x15FE0Cu;
            goto label_15fe0c;
        }
    }
    ctx->pc = 0x15FDF0u;
    // 0x15fdf0: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FDF0u;
    {
        const bool branch_taken_0x15fdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15fdf0) {
            ctx->pc = 0x15FE0Cu;
            goto label_15fe0c;
        }
    }
    ctx->pc = 0x15FDF8u;
    // 0x15fdf8: 0x91030234  lbu         $v1, 0x234($t0)
    ctx->pc = 0x15fdf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 564)));
    // 0x15fdfc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FDFCu;
    {
        const bool branch_taken_0x15fdfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fdfc) {
            ctx->pc = 0x15FE0Cu;
            goto label_15fe0c;
        }
    }
    ctx->pc = 0x15FE04u;
    // 0x15fe04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE04u;
    {
        const bool branch_taken_0x15fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe04) {
            ctx->pc = 0x15FE20u;
            goto label_15fe20;
        }
    }
    ctx->pc = 0x15FE0Cu;
label_15fe0c:
    // 0x15fe0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15fe10: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x15fe10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15fe14: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x15FE14u;
    {
        const bool branch_taken_0x15fe14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE14u;
        // 0x15fe18: 0x24e703d0  addiu       $a3, $a3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe14) {
            ctx->pc = 0x15FDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fde0;
        }
    }
    ctx->pc = 0x15FE1Cu;
    // 0x15fe1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fe20:
    // 0x15fe20: 0x3e00008  jr          $ra
    ctx->pc = 0x15FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FE28u;
}
