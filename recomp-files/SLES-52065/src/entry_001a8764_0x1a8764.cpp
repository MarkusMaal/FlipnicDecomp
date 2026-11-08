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

// Function: entry_001a8764
// Address: 0x1a8764 - 0x1a87c8
void entry_001a8764_0x1a8764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8764_0x1a8764");
#endif

    switch (ctx->pc) {
        case 0x1a8780u: goto label_1a8780;
        default: break;
    }

    ctx->pc = 0x1a8764u;

label_1a8764:
    // 0x1a8764: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1a8764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8768: 0x1040fffe  beqz        $v0, . + 4 + (-0x2 << 2)
    ctx->pc = 0x1A8768u;
    {
        const bool branch_taken_0x1a8768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8768) {
            ctx->pc = 0x1A8764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8764;
        }
    }
    ctx->pc = 0x1A8770u;
    // 0x1a8770: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a8770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a8774: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a8774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a8778: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A8778u;
    SET_GPR_U32(ctx, 31, 0x1A8780u);
    ctx->pc = 0x1A877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8778u;
    // 0x1a877c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A8778u, 0x1A8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8780u;
label_1a8780:
    // 0x1a8780: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1a8780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8784: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1a8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1a8788: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1A8788u;
    {
        const bool branch_taken_0x1a8788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8788u;
        // 0x1a878c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8788) {
            ctx->pc = 0x1A892Cu;
            return;
        }
    }
    ctx->pc = 0x1A8790u;
    // 0x1a8790: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a8794: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1A8794u;
    {
        const bool branch_taken_0x1a8794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8794) {
            ctx->pc = 0x1A8924u;
            return;
        }
    }
    ctx->pc = 0x1A879Cu;
    // 0x1a879c: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1a87a0: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1A87A0u;
    {
        const bool branch_taken_0x1a87a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a87a0) {
            ctx->pc = 0x1A891Cu;
            return;
        }
    }
    ctx->pc = 0x1A87A8u;
    // 0x1a87a8: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1a87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1a87ac: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1A87ACu;
    {
        const bool branch_taken_0x1a87ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a87ac) {
            ctx->pc = 0x1A8914u;
            return;
        }
    }
    ctx->pc = 0x1A87B4u;
    // 0x1a87b4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a87b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A87B8u;
    {
        const bool branch_taken_0x1a87b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a87b8) {
            ctx->pc = 0x1A87C8u;
            return;
        }
    }
    ctx->pc = 0x1A87C0u;
    // 0x1a87c0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1A87C0u;
    {
        const bool branch_taken_0x1a87c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87c0) {
            ctx->pc = 0x1A8AACu;
            return;
        }
    }
    ctx->pc = 0x1A87C8u;
}
