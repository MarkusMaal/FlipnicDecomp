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

// Function: entry_0019054c
// Address: 0x19054c - 0x1905a0
void entry_0019054c_0x19054c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019054c_0x19054c");
#endif

    switch (ctx->pc) {
        case 0x190590u: goto label_190590;
        default: break;
    }

    ctx->pc = 0x19054cu;

label_19054c:
    // 0x19054c: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x19054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x190550: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x190554: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x190554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x190558: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x190558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19055c: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x19055cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x190560: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x190564: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x190564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x190568: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x190568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x19056c: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x19056cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x190570: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x190570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x190574: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x190574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x190578: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x190578u;
    {
        const bool branch_taken_0x190578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190578u;
        // 0x19057c: 0xaca00060  sw          $zero, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190578) {
            ctx->pc = 0x19054Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19054c;
        }
    }
    ctx->pc = 0x190580u;
    // 0x190580: 0x8f848380  lw          $a0, -0x7C80($gp)
    ctx->pc = 0x190580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x190584: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x190588: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x190588u;
    SET_GPR_U32(ctx, 31, 0x190590u);
    ctx->pc = 0x19058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190588u;
    // 0x19058c: 0x24a5fdf0  addiu       $a1, $a1, -0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x190588u, 0x190590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190590u;
label_190590:
    // 0x190590: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190590u;
    {
        const bool branch_taken_0x190590 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x190594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190590u;
        // 0x190594: 0x8f858380  lw          $a1, -0x7C80($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190590) {
            ctx->pc = 0x1905A0u;
            return;
        }
    }
    ctx->pc = 0x190598u;
    // 0x190598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190598u;
    {
        const bool branch_taken_0x190598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190598u;
        // 0x19059c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190598) {
            ctx->pc = 0x1905B8u;
            return;
        }
    }
    ctx->pc = 0x1905A0u;
}
